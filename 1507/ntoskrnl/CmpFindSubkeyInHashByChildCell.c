/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x1405414B8
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpComputeHashKeyForCompressedName @ 0x14042A7E4 (CmpComputeHashKeyForCompressedName.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpIsKcbLockAllowed @ 0x1404C61DC (CmpIsKcbLockAllowed.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404C6EF0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpComputeHashKey @ 0x140533C5C (CmpComputeHashKey.c)
 *     CmpLockHashEntryShared @ 0x140541620 (CmpLockHashEntryShared.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char **a5)
{
  __int64 v5; // r13
  unsigned int v7; // ebx
  char **v8; // r12
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 i; // rbx
  char *v18; // rbx
  unsigned __int64 v19; // rdx
  char *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int16 v32; // [rsp+20h] [rbp-38h] BYREF
  __int64 v33; // [rsp+28h] [rbp-30h]
  int v34; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a3 + 2800);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = a5;
  v34 = -1;
  *a5 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v34);
  if ( !v12 )
    return 3221225626LL;
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    v13 = CmpComputeHashKeyForCompressedName(v7, (_BYTE *)(v12 + 76), *(unsigned __int16 *)(v12 + 72));
  }
  else
  {
    v33 = v12 + 76;
    v32 = *(_WORD *)(v12 + 72);
    v13 = CmpComputeHashKey(v7, &v32);
  }
  v14 = v13;
  (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v34);
  CmpUnlockTwoKcbs(a1, a2);
  CmpLockHashEntryShared(*(_QWORD *)(a1 + 32), v14);
  CmpLockTwoKcbsShared(a1, a2, v15, v16);
  for ( i = *(_QWORD *)(v5
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a3 + 2808) - 1) & ((101027 * (v14 ^ (v14 >> 9))) ^ ((unsigned __int64)(101027 * (v14 ^ (v14 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v14 == *(_DWORD *)i && a4 == *(_DWORD *)(i + 24) && a3 == *(_QWORD *)(i + 16) )
    {
      v18 = (char *)(i - 16);
      if ( CmpIsKcbLockAllowed(a1, (unsigned __int64)v18, &a5) )
      {
        if ( !a2 || CmpIsKcbLockAllowed(a2, v19, &a5) )
        {
          v23 = (__int64)v18;
        }
        else
        {
          CmpUnlockKcb(v28);
          CmpLockKcbShared((__int64)v18, v29, v30, v31);
          v23 = a2;
        }
      }
      else
      {
        CmpUnlockKcb(v20);
        CmpLockKcbShared((__int64)v18, v25, v26, v27);
        v23 = a1;
      }
      CmpLockKcbShared(v23, v19, v21, v22);
      if ( CmpReferenceKeyControlBlock((ULONG_PTR)v18) )
        *v8 = v18;
      CmpUnlockKcb(v18);
      break;
    }
  }
  CmpUnlockHashEntry(*(_QWORD *)(a1 + 32), v14);
  return 0LL;
}
