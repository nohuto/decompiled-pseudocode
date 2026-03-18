/*
 * XREFs of CmEnumerateKey @ 0x1403FDED0
 * Callers:
 *     NtEnumerateKey @ 0x1403FD480 (NtEnumerateKey.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpQueryKeyDataFromNode @ 0x1403FCE20 (CmpQueryKeyDataFromNode.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1405E2410 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int *a7)
{
  signed __int32 **p_BugCheckParameter4; // rbx
  int v8; // r15d
  unsigned __int64 v12; // r13
  char *v13; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v15; // rsi
  ULONG_PTR v16; // rdi
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // r14
  void *v20; // rax
  __int64 v21; // rcx
  int SubKeyByNumber; // ebx
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // r14
  ULONG_PTR v26; // rbp
  __int64 v27; // rdx
  int v29; // ebp
  ULONG_PTR *v30; // rax
  int v31; // ecx
  __int64 v32; // [rsp+38h] [rbp-60h]
  unsigned int BugCheckParameter3; // [rsp+40h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3_4; // [rsp+44h] [rbp-54h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-50h] BYREF
  char *v36; // [rsp+50h] [rbp-48h] BYREF
  ULONG_PTR v37[8]; // [rsp+58h] [rbp-40h] BYREF
  int v38; // [rsp+A0h] [rbp+8h] BYREF
  int v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  p_BugCheckParameter4 = 0LL;
  v38 = -1;
  v8 = a4;
  v12 = 0LL;
  v13 = 0LL;
  v36 = 0LL;
  BugCheckParameter4 = 0LL;
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockRegistryExclusive();
    v15 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int8)CmRmIsKCBDeleted(v15, 0LL) == 1 )
    {
      SubKeyByNumber = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        SubKeyByNumber = -1073740763;
      CmpUnlockRegistry();
      return (unsigned int)SubKeyByNumber;
    }
    v29 = CmpSearchAddTrans(a1, 0LL, 0LL, *(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), 0, &v36);
    if ( v29 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v29;
    }
    v13 = v36;
  }
  else
  {
    if ( !CmpPuntBoot )
    {
      PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
      v13 = v36;
    }
    v15 = *(_QWORD *)(a1 + 8);
  }
  if ( a2 )
    v12 = *(_QWORD *)(a2 + 8);
  CmpLockTwoKcbsShared(v12, v15);
  if ( (unsigned __int8)CmRmIsKCBDeleted(v15, v13) == 1 )
  {
    SubKeyByNumber = -1073741444;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      SubKeyByNumber = -1073740763;
    goto LABEL_41;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(v12 + 4) & 0x20000) != 0 )
    {
      CmpUnlockTwoKcbs((char *)v12, (char *)v15);
      CmpUnlockRegistry();
      return 3221225852LL;
    }
  }
  else if ( !CmpVEEnabled || (*(_WORD *)(v15 + 186) & 0x100) == 0 )
  {
    v16 = *(_QWORD *)(v15 + 32);
    v17 = *(_DWORD *)(v15 + 40);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v16 + 2848), 1u);
    v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v16 + 8))(v16, v17, &v38);
    v19 = v18;
    if ( !v18 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 2848));
      CmpUnlockTwoKcbs((char *)v12, (char *)v15);
      CmpUnlockRegistry();
      return 3221225626LL;
    }
    if ( (*(_DWORD *)(v16 + 144) & 0x8001) == 0
      && (*(_DWORD *)(v18 + 12) & CmpAccessBitForPhase) == 0
      && HvpMarkCellDirty(v16, v17, 0) )
    {
      *(_DWORD *)(v19 + 12) |= CmpAccessBitForPhase;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(v16 + 16))(v16, &v38);
    ExReleaseResourceLite(*(PERESOURCE *)(v16 + 2848));
    if ( v13 )
    {
      p_BugCheckParameter4 = (signed __int32 **)&BugCheckParameter4;
      v20 = (void *)v12;
      v21 = v15;
    }
    else
    {
      v20 = 0LL;
      v21 = 0LL;
    }
    SubKeyByNumber = CmpFindSubKeyByNumberEx(
                       v16,
                       v17,
                       a3,
                       &BugCheckParameter3,
                       v21,
                       v20,
                       (__int64)v13,
                       p_BugCheckParameter4);
    if ( SubKeyByNumber >= 0 )
    {
      v8 = v39;
      goto LABEL_19;
    }
LABEL_41:
    CmpUnlockTwoKcbs((char *)v12, (char *)v15);
    CmpUnlockRegistry();
    return (unsigned int)SubKeyByNumber;
  }
  v30 = &BugCheckParameter4;
  if ( !v13 )
    v30 = 0LL;
  if ( a2 )
  {
    LODWORD(p_BugCheckParameter4) = v15;
    v31 = v12;
  }
  else
  {
    v31 = v15;
  }
  SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                     v31,
                     (_DWORD)p_BugCheckParameter4,
                     a3,
                     (_DWORD)v13,
                     (__int64)v37,
                     (__int64)&BugCheckParameter3,
                     (__int64)v30,
                     (__int64)&BugCheckParameter3_4);
  if ( SubKeyByNumber < 0 )
    goto LABEL_41;
  v16 = v37[0];
LABEL_19:
  v23 = BugCheckParameter3;
  if ( BugCheckParameter3 == -1 )
  {
    CmpUnlockTwoKcbs((char *)v12, (char *)v15);
    CmpUnlockRegistry();
    return 2147483674LL;
  }
  else
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v16 + 2848), 1u);
    v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v16 + 8))(v16, v23, &v38);
    v25 = v24;
    if ( v24 )
    {
      if ( (*(_DWORD *)(v16 + 144) & 0x8001) == 0
        && (*(_DWORD *)(v24 + 12) & CmpAccessBitForPhase) == 0
        && HvpMarkCellDirty(v16, v23, 0) )
      {
        *(_DWORD *)(v25 + 12) |= CmpAccessBitForPhase;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 2848));
      v32 = (__int64)v13;
      v26 = BugCheckParameter4;
      SubKeyByNumber = CmpQueryKeyDataFromNode(v16, v25, v8, a5, a6, a7, BugCheckParameter4, v32);
      (*(void (__fastcall **)(ULONG_PTR, int *))(v16 + 16))(v16, &v38);
      CmpUnlockTwoKcbs((char *)v12, (char *)v15);
      if ( v26 )
        CmpDelayDerefKeyControlBlock(v26);
      if ( !CmpPuntBoot )
      {
        ExReleaseResourceLite(&CmpRegistryLock);
        KeLeaveCriticalRegion();
        LOBYTE(v27) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v27);
      }
      return (unsigned int)SubKeyByNumber;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v16 + 2848));
    CmpUnlockTwoKcbs((char *)v12, (char *)v15);
    if ( BugCheckParameter4 )
      CmpDelayDerefKeyControlBlock(BugCheckParameter4);
    CmpUnlockRegistry();
    return 3221225626LL;
  }
}
