/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x14046C248
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     MiAllowWorkingSetExpansion @ 0x14007BEDC (MiAllowWorkingSetExpansion.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiMapProcessExecutable @ 0x14046BCB8 (MiMapProcessExecutable.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x14046C0A4 (MiInitializeProcessBottomUpEntropy.c)
 *     MiInitializeProcessTopDownEntropy @ 0x14046C68C (MiInitializeProcessTopDownEntropy.c)
 *     MiInsertProcessVads @ 0x14046C754 (MiInsertProcessVads.c)
 *     MiInitializeVadBitMap @ 0x14046C79C (MiInitializeVadBitMap.c)
 *     MiComputeProcessUserVa @ 0x14046CB1C (MiComputeProcessUserVa.c)
 *     MiInitializeWorkingSetList @ 0x14046CCB8 (MiInitializeWorkingSetList.c)
 *     MiReferenceCfgVad @ 0x1404C1728 (MiReferenceCfgVad.c)
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiInitializeLockedPagesTracking @ 0x140656FAC (MiInitializeLockedPagesTracking.c)
 *     MiReturnProcessVads @ 0x140657004 (MiReturnProcessVads.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        __int64 a3,
        _BYTE *a4,
        char a5)
{
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rax
  int v15; // edi
  int v16; // eax
  __int64 v17; // r8
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  _QWORD *v29; // rax
  __int64 v30; // rcx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  _QWORD v35[8]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD Src[20]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[48]; // [rsp+E0h] [rbp-20h] BYREF

  Src[0] = 0;
  memset(&Src[2], 0, 0x48uLL);
  v9 = qword_140327FD0;
  v10 = 2LL;
  if ( a2 )
  {
    KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v37);
    v33 = *(_QWORD *)(v9 + 276840456);
    memmove(Src, (const void *)(v9 + 276840464), 0x50uLL);
    v26 = *(_OWORD *)(v9 + 276840664);
    v27 = *(_OWORD *)(v9 + 276840680);
    v34 = *(_QWORD *)(v9 + 276840632);
    *(_OWORD *)&v35[1] = v26;
    v28 = *(_OWORD *)(v9 + 276840696);
    *(_OWORD *)&v35[3] = v27;
    *(_OWORD *)&v35[5] = v28;
    KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
    v29 = &v35[3];
    v30 = 2LL;
    do
    {
      *v29 = 0LL;
      v29 += 3;
      --v30;
    }
    while ( v30 );
  }
  else
  {
    v33 = 0LL;
    v34 = 0LL;
    memset(&v35[1], 0, 0x30uLL);
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v37);
  *(_QWORD *)(BugCheckParameter1 + 872) = 0LL;
  *(_QWORD *)(BugCheckParameter1 + 880) = 0LL;
  *(_QWORD *)(BugCheckParameter1 + 1568) = 0LL;
  if ( (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  v11 = BugCheckParameter1 + 1280;
  MiInitializeWorkingSetList(BugCheckParameter1 + 1280, qword_140327FD0 + 276840816, 0, 0, 0LL);
  *(_DWORD *)(v9 + 276840552) = 1;
  *(_QWORD *)(v9 + 276840752) = v9 + 276840712;
  v12 = v9 + 276840760;
  v13 = 256;
  *(_DWORD *)(v9 + 276840744) = 256;
  v14 = qword_140327FD0 + 0x10000000;
  do
  {
    *(_QWORD *)(v12 + 8) = v14;
    v13 <<= 9;
    *(_DWORD *)v12 = v13;
    v12 += 16LL;
    v14 = qword_140327FD0 + 268451840;
    --v10;
  }
  while ( v10 );
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x400u);
  P = 0LL;
  v32 = 0LL;
  v15 = MiComputeProcessUserVa(BugCheckParameter1, a2, a3, (unsigned int)&P, (__int64)&v32);
  if ( v15 < 0 )
    goto LABEL_40;
  if ( !a2 )
  {
    MiInitializeProcessBottomUpEntropy(BugCheckParameter1);
    MiInitializeProcessTopDownEntropy(BugCheckParameter1, a3, 0LL);
    if ( !(unsigned int)MiInitializeVadBitMap(0LL) )
      goto LABEL_39;
  }
  MiInsertProcessVads(BugCheckParameter1, P);
  if ( a3 )
  {
    v16 = MiMapProcessExecutable((_KPROCESS *)BugCheckParameter1, a3, a4, v32);
    LOBYTE(v17) = 1;
    v15 = v16;
    MiInitializeProcessTopDownEntropy(BugCheckParameter1, a3, v17);
LABEL_12:
    MiAllowWorkingSetExpansion(BugCheckParameter1 + 1280);
    KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
    return (unsigned int)v15;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) != 0 && !a2 )
    goto LABEL_12;
  *(_DWORD *)a4 &= ~0x10u;
  if ( !a2 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
    return 0;
  }
  if ( *(_QWORD *)(a2 + 720) )
  {
    v15 = -1073741595;
    goto LABEL_40;
  }
  *(_QWORD *)(BugCheckParameter1 + 1104) = *(_QWORD *)(a2 + 1104);
  *(_DWORD *)(BugCheckParameter1 + 1112) = *(_DWORD *)(a2 + 1112);
  *(_WORD *)(BugCheckParameter1 + 1116) = *(_WORD *)(a2 + 1116);
  *(_BYTE *)(BugCheckParameter1 + 1118) = *(_BYTE *)(a2 + 1118);
  *(_QWORD *)(BugCheckParameter1 + 1152) = *(_QWORD *)(a2 + 1152);
  memmove((void *)(v9 + 276840464), Src, 0x50uLL);
  v19 = *(_OWORD *)&v35[1];
  v20 = *(_OWORD *)&v35[3];
  *(_QWORD *)(v9 + 276840456) = v33;
  *(_OWORD *)(v9 + 276840664) = v19;
  v21 = *(_OWORD *)&v35[5];
  *(_OWORD *)(v9 + 276840680) = v20;
  *(_OWORD *)(v9 + 276840696) = v21;
  if ( !(unsigned int)MiInitializeVadBitMap(1LL) )
  {
LABEL_39:
    v15 = -1073741801;
LABEL_40:
    KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
    MiReturnProcessVads(P);
    return (unsigned int)v15;
  }
  v22 = *(_QWORD **)(a2 + 1064);
  if ( v22 && *v22 )
    **(_QWORD **)(BugCheckParameter1 + 1064) = *v22;
  if ( (*(_DWORD *)a4 & 0x80u) != 0 )
    v15 = MiSessionCreate(v35);
  else
    v15 = 0;
  if ( (a5 & 1) != 0 )
    *(_QWORD *)(v9 + 276840632) = v34 + 1;
  else
    *(_QWORD *)(v9 + 276840632) = 0LL;
  v23 = (_QWORD *)(v9 + 276840576);
  v24 = 3LL;
  do
  {
    v23[1] = v23;
    *v23 = v23;
    v23 += 2;
    --v24;
  }
  while ( v24 );
  KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
  if ( v15 >= 0 )
  {
    v15 = MiCloneProcessAddressSpace(a2, BugCheckParameter1);
    if ( v15 >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v37);
      CurrentThread = KeGetCurrentThread();
      if ( v35[5] )
        MiReferenceCfgVad(CurrentThread, v35[4], 1LL);
      if ( v35[2] )
        MiReferenceCfgVad(CurrentThread, v35[1], 0LL);
      KiUnstackDetachProcess((struct _KTHREAD *)v37, 0);
    }
  }
  MiAllowWorkingSetExpansion(v11);
  return (unsigned int)v15;
}
