/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x1405185D4
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmpHashCompressedComponent @ 0x14010BF1C (CmpHashCompressedComponent.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpUnlockHashEntry @ 0x140436D90 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140437EA0 (CmpUnlockTwoKcbs.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     CmpLockHashEntryShared @ 0x14051888C (CmpLockHashEntryShared.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 *     CmpIsKcbLockAllowed @ 0x140518998 (CmpIsKcbLockAllowed.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char **a5)
{
  __int64 v5; // r13
  int v7; // edi
  char **v8; // r12
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 i; // rdi
  char *v16; // rdi
  __int64 v17; // rdx
  char *v18; // rcx
  __int64 v19; // rcx
  char *v21; // rcx
  __m128i v22; // [rsp+20h] [rbp-38h] BYREF
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+64h] [rbp+Ch]

  v5 = *(_QWORD *)(a3 + 2800);
  v7 = *(_DWORD *)(a1 + 8);
  v8 = a5;
  v23 = -1;
  v24 = 0;
  *a5 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v23);
  if ( !v12 )
    return 3221225626LL;
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    v13 = CmpHashCompressedComponent((_BYTE *)(v12 + 76), *(unsigned __int16 *)(v12 + 72));
  }
  else
  {
    v22.m128i_i64[1] = v12 + 76;
    v22.m128i_i16[0] = *(_WORD *)(v12 + 72);
    v22.m128i_i16[1] = v22.m128i_i16[0];
    v13 = CmpHashUnicodeComponent(&v22);
  }
  v14 = 37 * v7 + v13;
  (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v23);
  CmpUnlockTwoKcbs((char *)a1, a2);
  CmpLockHashEntryShared(*(_QWORD *)(a1 + 24));
  CmpLockTwoKcbsShared(a1, a2);
  for ( i = *(_QWORD *)(v5
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a3 + 2808) - 1) & ((101027 * (v14 ^ (v14 >> 9))) ^ ((unsigned __int64)(101027 * (v14 ^ (v14 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v14 == *(_DWORD *)i && a4 == *(_DWORD *)(i + 24) && a3 == *(_QWORD *)(i + 16) )
    {
      v16 = (char *)(i - 8);
      if ( (unsigned __int8)CmpIsKcbLockAllowed(a1, v16, &a5) )
      {
        if ( !a2 || (unsigned __int8)CmpIsKcbLockAllowed(a2, v17, &a5) )
        {
          v19 = (__int64)v16;
        }
        else
        {
          CmpUnlockKcb(v21);
          CmpLockKcbShared((__int64)v16);
          v19 = a2;
        }
      }
      else
      {
        CmpUnlockKcb(v18);
        CmpLockKcbShared((__int64)v16);
        v19 = a1;
      }
      CmpLockKcbShared(v19);
      if ( (unsigned __int8)CmpReferenceKeyControlBlock(v16) )
        *v8 = v16;
      CmpUnlockKcb(v16);
      break;
    }
  }
  CmpUnlockHashEntry(*(_QWORD *)(a1 + 24), v14);
  return 0LL;
}
