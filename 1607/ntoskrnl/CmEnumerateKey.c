/*
 * XREFs of CmEnumerateKey @ 0x140437F90
 * Callers:
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043622C (CmpDelayDerefKeyControlBlock.c)
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpUnlockTwoKcbs @ 0x140437EA0 (CmpUnlockTwoKcbs.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1406012EC (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 *v8; // rdi
  int v9; // r15d
  char *v13; // r12
  __int64 v14; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // rbx
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  int SubKeyByNumber; // edi
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rbp
  __int64 v28; // rdx
  int v30; // ebp
  bool v31; // zf
  unsigned int v32; // ebx
  int SubKeyByNumberFromMergedView; // ebx
  __int64 *v34; // rax
  int v35; // ecx
  __int64 v36; // [rsp+38h] [rbp-70h]
  _BYTE v37[8]; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v38[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v39; // [rsp+50h] [rbp-58h] BYREF
  __int64 v40; // [rsp+58h] [rbp-50h] BYREF
  ULONG_PTR v41[9]; // [rsp+60h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp+8h] BYREF
  int v43; // [rsp+C8h] [rbp+20h]

  v43 = a4;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0LL;
  v38[0] = -1;
  v9 = a4;
  v38[1] = 0;
  v40 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v39 = 0LL;
  if ( *(_WORD *)(v7 + 58) )
    return CmpEnumerateLayeredKey(a1, a3, a4, a5, a6, a7);
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockRegistryExclusive();
    v16 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v31 = (*(_BYTE *)(a1 + 48) & 1) == 0;
      v32 = -1073741444;
      if ( !v31 )
        v32 = -1073740763;
      CmpUnlockRegistry();
      return v32;
    }
    v30 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v40);
    if ( v30 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v30;
    }
    v14 = v40;
  }
  else
  {
    if ( !CmpPuntBoot )
    {
      PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
      v14 = v40;
    }
    v16 = *(_QWORD *)(a1 + 8);
  }
  if ( a2 )
    v13 = *(char **)(a2 + 8);
  CmpLockTwoKcbsShared((__int64)v13, v16);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v14) )
  {
    v31 = (*(_BYTE *)(a1 + 48) & 1) == 0;
    SubKeyByNumberFromMergedView = -1073741444;
    if ( !v31 )
      SubKeyByNumberFromMergedView = -1073740763;
    goto LABEL_43;
  }
  if ( a2 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v14) )
    {
      CmpUnlockTwoKcbs(v13, v16);
      CmpUnlockRegistry();
      return 3221225852LL;
    }
  }
  else if ( !CmpVEEnabled || (*(_WORD *)(v16 + 178) & 0x100) == 0 )
  {
    v17 = *(_QWORD *)(v16 + 24);
    v18 = *(_DWORD *)(v16 + 32);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v17 + 2848), 1u);
    v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v17 + 8))(v17, v18, v38);
    v20 = v19;
    if ( !v19 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
      CmpUnlockTwoKcbs(v13, v16);
      CmpUnlockRegistry();
      return 3221225626LL;
    }
    if ( (*(_DWORD *)(v17 + 144) & 0x8001) == 0
      && (*(_BYTE *)(v19 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
      && (unsigned __int8)HvpMarkCellDirty(v17, v18) )
    {
      *(_BYTE *)(v20 + 12) |= CmpAccessBitForPhase;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v17 + 16))(v17, v38);
    ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
    if ( v14 )
    {
      v8 = &v39;
      v21 = (__int64)v13;
      v22 = v16;
    }
    else
    {
      v21 = 0LL;
      v22 = 0LL;
    }
    SubKeyByNumber = CmpFindSubKeyByNumberEx(v17, v18, a3, &BugCheckParameter3, v22, v21, v14, v8);
    if ( SubKeyByNumber < 0 )
    {
      CmpUnlockTwoKcbs(v13, v16);
      CmpUnlockRegistry();
      return (unsigned int)SubKeyByNumber;
    }
    v9 = v43;
    goto LABEL_20;
  }
  v34 = &v39;
  if ( !v14 )
    v34 = 0LL;
  if ( a2 )
  {
    LODWORD(v8) = v16;
    v35 = (int)v13;
  }
  else
  {
    v35 = v16;
  }
  SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberFromMergedView(
                                   v35,
                                   (_DWORD)v8,
                                   a3,
                                   v14,
                                   (__int64)v41,
                                   (__int64)&BugCheckParameter3,
                                   (__int64)v34,
                                   (__int64)v37);
  if ( SubKeyByNumberFromMergedView < 0 )
  {
LABEL_43:
    CmpUnlockTwoKcbs(v13, v16);
    CmpUnlockRegistry();
    return (unsigned int)SubKeyByNumberFromMergedView;
  }
  v17 = v41[0];
LABEL_20:
  v24 = BugCheckParameter3;
  if ( (_DWORD)BugCheckParameter3 == -1 )
  {
    CmpUnlockTwoKcbs(v13, v16);
    CmpUnlockRegistry();
    return 2147483674LL;
  }
  else
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v17 + 2848), 1u);
    v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v17 + 8))(v17, v24, v38);
    v26 = v25;
    if ( v25 )
    {
      if ( (*(_DWORD *)(v17 + 144) & 0x8001) == 0
        && (*(_BYTE *)(v25 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
        && (unsigned __int8)HvpMarkCellDirty(v17, v24) )
      {
        *(_BYTE *)(v26 + 12) |= CmpAccessBitForPhase;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
      v36 = v14;
      v27 = v39;
      SubKeyByNumber = CmpQueryKeyDataFromNode(v17, v26, v9, a5, a6, a7, v39, v36);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v17 + 16))(v17, v38);
      CmpUnlockTwoKcbs(v13, v16);
      if ( v27 )
        CmpDelayDerefKeyControlBlock(v27);
      if ( !CmpPuntBoot )
      {
        ExReleaseResourceLite(&CmpRegistryLock);
        KeLeaveCriticalRegion();
        LOBYTE(v28) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v28);
      }
      return (unsigned int)SubKeyByNumber;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
    CmpUnlockTwoKcbs(v13, v16);
    if ( v39 )
      CmpDelayDerefKeyControlBlock(v39);
    CmpUnlockRegistry();
    return 3221225626LL;
  }
}
