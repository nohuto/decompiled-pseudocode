/*
 * XREFs of CmEnumerateKey @ 0x1404C66B0
 * Callers:
 *     NtEnumerateKey @ 0x1404C6220 (NtEnumerateKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpLockTwoKcbsShared @ 0x1404C6EF0 (CmpLockTwoKcbsShared.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpQueryKeyDataFromNode @ 0x1404C7460 (CmpQueryKeyDataFromNode.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140658850 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  ULONG_PTR *p_BugCheckParameter4; // rbx
  int v8; // r15d
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rsi
  ULONG_PTR v15; // rdi
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  int SubKeyByNumber; // ebx
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rbp
  ULONG_PTR v25; // r14
  int v27; // r14d
  ULONG_PTR *v28; // rax
  int v29; // ecx
  __int64 v30; // [rsp+38h] [rbp-60h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+50h] [rbp-48h] BYREF
  ULONG_PTR v34[8]; // [rsp+58h] [rbp-40h] BYREF
  int v35; // [rsp+A0h] [rbp+8h] BYREF
  int v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  p_BugCheckParameter4 = 0LL;
  v35 = -1;
  v8 = a4;
  v12 = 0LL;
  v13 = 0LL;
  v32 = 0LL;
  BugCheckParameter4 = 0LL;
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockRegistryExclusive();
    v14 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int8)CmRmIsKCBDeleted(v14, 0LL) == 1 )
    {
      SubKeyByNumber = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        SubKeyByNumber = -1073740763;
      goto LABEL_23;
    }
    v27 = CmpSearchAddTrans(a1, 0, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), 0, (__int64)&v32);
    if ( v27 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v27;
    }
    v13 = v32;
  }
  else
  {
    CmpLockRegistry();
    v14 = *(_QWORD *)(a1 + 8);
  }
  if ( a2 )
    v12 = *(_QWORD *)(a2 + 8);
  CmpLockTwoKcbsShared(v12, v14);
  if ( (unsigned __int8)CmRmIsKCBDeleted(v14, v13) == 1 )
  {
    SubKeyByNumber = -1073741444;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      SubKeyByNumber = -1073740763;
    goto LABEL_37;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(v12 + 4) & 0x20000) != 0 )
    {
      CmpUnlockTwoKcbs(v12, v14);
      CmpUnlockRegistry();
      return 3221225852LL;
    }
  }
  else if ( !CmpVEEnabled || (*(_WORD *)(v14 + 186) & 0x100) == 0 )
  {
    v15 = *(_QWORD *)(v14 + 32);
    v16 = *(_DWORD *)(v14 + 40);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v15 + 2848), 1u);
    v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v15 + 8))(v15, v16, &v35);
    v18 = v17;
    if ( !v17 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v15 + 2848));
      CmpUnlockTwoKcbs(v12, v14);
      CmpUnlockRegistry();
      return 3221225626LL;
    }
    if ( (*(_DWORD *)(v15 + 144) & 0x8001) == 0
      && (*(_DWORD *)(v17 + 12) & CmpAccessBitForPhase) == 0
      && HvpMarkCellDirty(v15, v16, 0, 1LL) )
    {
      *(_DWORD *)(v18 + 12) |= CmpAccessBitForPhase;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(v15 + 16))(v15, &v35);
    ExReleaseResourceLite(*(PERESOURCE *)(v15 + 2848));
    if ( v13 )
    {
      p_BugCheckParameter4 = &BugCheckParameter4;
      v19 = v12;
      v20 = v14;
    }
    else
    {
      v19 = 0LL;
      v20 = 0LL;
    }
    SubKeyByNumber = CmpFindSubKeyByNumberEx(
                       v15,
                       v16,
                       a3,
                       (unsigned int)&BugCheckParameter3,
                       v20,
                       v19,
                       v13,
                       (__int64)p_BugCheckParameter4);
    if ( SubKeyByNumber >= 0 )
    {
      v8 = v36;
      goto LABEL_17;
    }
LABEL_37:
    CmpUnlockTwoKcbs(v12, v14);
LABEL_23:
    CmpUnlockRegistry();
    return (unsigned int)SubKeyByNumber;
  }
  v28 = &BugCheckParameter4;
  if ( !v13 )
    v28 = 0LL;
  if ( a2 )
  {
    LODWORD(p_BugCheckParameter4) = v14;
    v29 = v12;
  }
  else
  {
    v29 = v14;
  }
  SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                     v29,
                     (_DWORD)p_BugCheckParameter4,
                     a3,
                     v13,
                     (__int64)v34,
                     (__int64)&BugCheckParameter3,
                     (__int64)v28,
                     (__int64)&v32);
  if ( SubKeyByNumber < 0 )
    goto LABEL_37;
  v15 = v34[0];
LABEL_17:
  v22 = BugCheckParameter3;
  if ( (_DWORD)BugCheckParameter3 == -1 )
  {
    CmpUnlockTwoKcbs(v12, v14);
    CmpUnlockRegistry();
    return 2147483674LL;
  }
  else
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v15 + 2848), 1u);
    v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v15 + 8))(v15, v22, &v35);
    v24 = v23;
    if ( v23 )
    {
      if ( (*(_DWORD *)(v15 + 144) & 0x8001) == 0
        && (*(_DWORD *)(v23 + 12) & CmpAccessBitForPhase) == 0
        && HvpMarkCellDirty(v15, v22, 0, 1LL) )
      {
        *(_DWORD *)(v24 + 12) |= CmpAccessBitForPhase;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v15 + 2848));
      v30 = v13;
      v25 = BugCheckParameter4;
      SubKeyByNumber = CmpQueryKeyDataFromNode(v15, v24, v8, a5, a6, a7, BugCheckParameter4, v30);
      (*(void (__fastcall **)(ULONG_PTR, int *))(v15 + 16))(v15, &v35);
      CmpUnlockTwoKcbs(v12, v14);
      if ( v25 )
        CmpDelayDerefKeyControlBlock(v25);
      goto LABEL_23;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v15 + 2848));
    CmpUnlockTwoKcbs(v12, v14);
    if ( BugCheckParameter4 )
      CmpDelayDerefKeyControlBlock(BugCheckParameter4);
    CmpUnlockRegistry();
    return 3221225626LL;
  }
}
