/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x140518418
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockHashEntryByKcb @ 0x1403FB840 (CmpUnlockHashEntryByKcb.c)
 *     CmpGetComponentNameAtIndex @ 0x1404036B0 (CmpGetComponentNameAtIndex.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1404E9B30 (CmpLockHashEntrySharedByKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x140518740 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpIsHiveLoadingOnOtherThread @ 0x1405192C4 (CmpIsHiveLoadingOnOtherThread.c)
 *     CmpWaitForHiveMount @ 0x14057581C (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        ULONG_PTR *a6,
        _BYTE *a7,
        _WORD *a8)
{
  __int64 v8; // rax
  __int16 v9; // r12
  ULONG_PTR v11; // r15
  ULONG_PTR v12; // rsi
  ULONG_PTR v13; // rdi
  int v14; // r14d
  ULONG_PTR v15; // rbx
  char v16; // r15
  char v17; // r14
  __int64 ComponentNameAtIndex; // rax
  _DWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int16 v23; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+48h] [rbp-10h] BYREF
  char v26; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+58h]
  __int64 v28; // [rsp+B8h] [rbp+60h]

  v28 = a4;
  v27 = a3;
  v8 = a4;
  BugCheckParameter4[0] = 0LL;
  v9 = 0;
  v26 = 0;
  v11 = a1;
  v12 = a1;
  while ( 1 )
  {
    v13 = 0LL;
    v14 = CmpPerformSingleKcbCacheLookup(v12, *(_QWORD *)(v12 + 24), a2, a3, v8, BugCheckParameter4, &v26, &v23);
    if ( v14 < 0 )
      break;
    if ( v12 != v11 )
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v12);
    v12 = 0LL;
    v15 = BugCheckParameter4[0];
    a2 += v23;
    v9 += v23;
    CmpLockKcbShared(BugCheckParameter4[0]);
    v16 = 1;
    v17 = v26;
    if ( (*(_BYTE *)(v15 + 178) & 2) == 0 )
      goto LABEL_14;
    v13 = *(_QWORD *)(v15 + 96);
    if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v13) )
    {
      v14 = -1073741670;
      goto LABEL_32;
    }
    if ( (unsigned __int8)CmpIsHiveLoadingOnOtherThread(*(_QWORD *)(v13 + 24)) )
    {
      v14 = -1073741772;
      if ( CmpLoadingSystemHivesActive )
      {
        if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
        {
          ComponentNameAtIndex = CmpGetComponentNameAtIndex(v28, a2 - 1);
          v20 = a5;
          if ( (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v21, v22, a5 + 36) )
          {
            *v20 |= 0x100u;
            v14 = 259;
          }
        }
        v15 = BugCheckParameter4[0];
      }
      goto LABEL_15;
    }
    if ( (*(_DWORD *)(v13 + 4) & 0x40000) != 0 )
    {
      v14 = -1073740763;
      goto LABEL_15;
    }
    CmpUnlockKcb((char *)v15);
    if ( v17 )
      CmpUnlockHashEntryByKcb(v15);
    CmpDereferenceKeyControlBlock(v15);
    BugCheckParameter4[0] = 0LL;
    if ( v17 )
    {
      v15 = v13;
      v13 = 0LL;
      CmpLockHashEntrySharedByKcb(v15);
      CmpLockKcbShared(v15);
LABEL_14:
      CmpUnlockKcb((char *)v15);
      v16 = 0;
      *a6 = v15;
      v15 = 0LL;
      v26 = 0;
      *a7 = v17;
      v14 = 0;
      *a8 = v9;
LABEL_15:
      if ( v13 )
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v13);
      if ( v16 )
LABEL_32:
        CmpUnlockKcb((char *)v15);
      v11 = a1;
      goto LABEL_19;
    }
    v11 = a1;
    v12 = v13;
    v8 = v28;
    a3 = v27;
  }
  v15 = BugCheckParameter4[0];
LABEL_19:
  if ( v26 )
    CmpUnlockHashEntryByKcb(v15);
  if ( v15 )
    CmpDereferenceKeyControlBlock(v15);
  if ( v12 && v12 != v11 )
    CmpDereferenceKeyControlBlock(v12);
  return (unsigned int)v14;
}
