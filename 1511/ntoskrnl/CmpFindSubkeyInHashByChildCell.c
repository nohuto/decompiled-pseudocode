/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmpComputeHashKey @ 0x1403DA088 (CmpComputeHashKey.c)
 *     CmpLockHashEntryShared @ 0x1403DEB28 (CmpLockHashEntryShared.c)
 *     CmpComputeHashKeyForCompressedName @ 0x1403E06DC (CmpComputeHashKeyForCompressedName.c)
 *     CmpIsKcbLockAllowed @ 0x1403E0758 (CmpIsKcbLockAllowed.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(__int64 a1, void *a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  __int64 v5; // r13
  unsigned int v7; // ebx
  _QWORD *v8; // r12
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r14d
  __int64 i; // rbx
  void *v16; // rbx
  __int64 v17; // rdx
  void *v18; // rcx
  void *v19; // rcx
  void *v21; // rcx
  unsigned __int16 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+28h] [rbp-30h]
  int v24; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a3 + 2800);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = a5;
  v24 = -1;
  *a5 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v24);
  if ( !v12 )
    return 3221225626LL;
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    v13 = CmpComputeHashKeyForCompressedName(v7, v12 + 76, *(unsigned __int16 *)(v12 + 72), v12);
  }
  else
  {
    v23 = v12 + 76;
    v22 = *(_WORD *)(v12 + 72);
    v13 = CmpComputeHashKey(v7, &v22);
  }
  v14 = v13;
  (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v24);
  CmpUnlockTwoKcbs((PVOID)a1, a2);
  CmpLockHashEntryShared(*(_QWORD *)(a1 + 32), v14);
  CmpLockTwoKcbsShared(a1, a2);
  for ( i = *(_QWORD *)(v5
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a3 + 2808) - 1) & ((101027 * (v14 ^ (v14 >> 9))) ^ ((unsigned __int64)(101027 * (v14 ^ (v14 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v14 == *(_DWORD *)i && a4 == *(_DWORD *)(i + 24) && a3 == *(_QWORD *)(i + 16) )
    {
      v16 = (void *)(i - 16);
      if ( (unsigned __int8)CmpIsKcbLockAllowed(a1, v16, &a5) )
      {
        if ( !a2 || (unsigned __int8)CmpIsKcbLockAllowed(a2, v17, &a5) )
        {
          v19 = v16;
        }
        else
        {
          CmpUnlockKcb(v21);
          CmpLockKcbShared(v16);
          v19 = a2;
        }
      }
      else
      {
        CmpUnlockKcb(v18);
        CmpLockKcbShared(v16);
        v19 = (void *)a1;
      }
      CmpLockKcbShared(v19);
      if ( (unsigned __int8)CmpReferenceKeyControlBlock((ULONG_PTR)v16) )
        *v8 = v16;
      CmpUnlockKcb(v16);
      break;
    }
  }
  CmpUnlockHashEntry(*(_QWORD *)(a1 + 32), v14);
  return 0LL;
}
