/*
 * XREFs of MmCreateProcessAddressSpace @ 0x14050921C
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     MiDereferencePartition @ 0x140001E80 (MiDereferencePartition.c)
 *     MiMarkPageActive @ 0x140021054 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     PsReturnProcessQuota @ 0x140075124 (PsReturnProcessQuota.c)
 *     MiCheckWsLimits @ 0x1400ABD78 (MiCheckWsLimits.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiSyncSystemPdes @ 0x1400FF3CC (MiSyncSystemPdes.c)
 *     MiCopyTopLevelMappings @ 0x1400FF414 (MiCopyTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x1400FF514 (MiInsertNewProcess.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     PsChargeProcessQuota @ 0x140101338 (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x14010135C (PsGetDefaultWsMaximum.c)
 *     MiJoinPartition @ 0x140101364 (MiJoinPartition.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiReturnPartitionResidentAvailable @ 0x140171DE4 (MiReturnPartitionResidentAvailable.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401DB9B4 (KeMakeKernelDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x1401EF010 (MiDeleteProcessShadow.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 *     RtlRandomEx @ 0x1404CB2E8 (RtlRandomEx.c)
 *     MiJoinSession @ 0x1405097A8 (MiJoinSession.c)
 *     MiAllocateTopLevelPage @ 0x140656E44 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x14065B9B4 (MiAllocateProcessShadow.c)
 */

char __fastcall MmCreateProcessAddressSpace(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, ULONG_PTR a5)
{
  int *v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  _QWORD *v12; // rdi
  int v13; // eax
  __int64 v14; // r14
  __int16 v15; // r13
  _WORD *v16; // r12
  unsigned int v17; // ebx
  __int64 Page; // rax
  _QWORD *v19; // r15
  unsigned __int64 PteAddress; // rax
  __int64 v21; // r13
  unsigned int i; // edx
  unsigned __int64 v23; // r9
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rsi
  __int64 v27; // r12
  unsigned __int64 *v28; // rdi
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 *v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  __int64 *v43; // rcx
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  ULONG_PTR v47; // [rsp+38h] [rbp-71h]
  __int64 v48; // [rsp+38h] [rbp-71h]
  _KPROCESS *Process; // [rsp+40h] [rbp-69h]
  unsigned __int64 v50; // [rsp+48h] [rbp-61h] BYREF
  __int64 TopLevelPage; // [rsp+50h] [rbp-59h]
  __int64 v52; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-49h]
  ULONG_PTR v54; // [rsp+68h] [rbp-41h]
  unsigned __int64 v55; // [rsp+70h] [rbp-39h]
  __int64 v56; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v57; // [rsp+80h] [rbp-29h] BYREF
  _WORD *v58; // [rsp+88h] [rbp-21h] BYREF
  __int16 v59; // [rsp+90h] [rbp-19h]
  unsigned __int16 v60; // [rsp+92h] [rbp-17h]
  _QWORD *v61; // [rsp+98h] [rbp-11h]
  _QWORD v62[5]; // [rsp+A0h] [rbp-9h] BYREF

  v50 = a3;
  v54 = a5;
  v52 = PspMinimumWorkingSet;
  v6 = MiJoinPartition(a1, a5);
  if ( !(unsigned int)MiChargeCommit((__int64)v6, 5uLL, 0) )
  {
LABEL_44:
    if ( v6 != MiSystemPartition )
      MiDereferencePartition(v6);
    return 0;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_WORD *)(a5 + 1280) = RtlRandomEx(&Seed);
  *(_QWORD *)(a5 + 1928) = a5 + 1920;
  *(_QWORD *)(a5 + 1920) = a5 + 1920;
  *(_QWORD *)(a5 + 1912) = 0LL;
  v7 = v50;
  if ( v50 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(a5 + 1280, (unsigned __int64 *)&v52, &v50, a4, 1);
    v7 = v50;
  }
  v8 = v52;
  if ( !(unsigned int)MiChargeWsles(a5 + 1280, v52, 1) )
  {
LABEL_43:
    MiReturnCommit((__int64)v6, 5uLL);
    goto LABEL_44;
  }
  *(_QWORD *)(a5 + 1424) = v7;
  *(_QWORD *)(a5 + 1384) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(a5 + 1464) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)a5, v9, v8) < 0 )
  {
LABEL_42:
    MiChargeWsles(a5 + 1280, -(__int64)v8, 1);
    goto LABEL_43;
  }
  if ( !(unsigned int)MiChargeResident(v6, v8, 0LL) )
  {
LABEL_41:
    PsReturnProcessQuota(a5, v10, v8);
    goto LABEL_42;
  }
  v47 = MiReservePtes((__int64)&qword_1403278B0, 4uLL, v11);
  if ( !v47 )
  {
LABEL_14:
    if ( v6 == MiSystemPartition )
      MiReturnResidentAvailable(v8);
    else
      MiReturnPartitionResidentAvailable((__int64)v6, v8);
    goto LABEL_41;
  }
  if ( (int)MiAllocateProcessShadow(a5) < 0 )
  {
LABEL_13:
    MiReleasePtes((__int64)&qword_1403278B0, v47, 4u);
    goto LABEL_14;
  }
  if ( !(unsigned int)MiJoinSession(&v56) )
  {
    MiDeleteProcessShadow(a5);
    goto LABEL_13;
  }
  _InterlockedExchangeAdd64(&qword_140327950, 5uLL);
  TopLevelPage = MiAllocateTopLevelPage(a5, v47);
  v55 = ~qword_1403A9350 & (MiMakeValidKernelPte(TopLevelPage, 6, 0LL) & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
  v57 = v55;
  v12 = 0LL;
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], 0, (__int64)&v58);
  v13 = v60;
  v14 = 4LL;
  v15 = v59;
  v16 = v58;
  do
  {
    v17 = v13 | (unsigned __int16)(v15 & ++*v16);
    while ( 1 )
    {
      Page = MiGetPage((__int64)v6, v17, 0xC2u);
      if ( Page != -1 )
        break;
      MiWaitForFreePage((__int64)v6);
    }
    v19 = (_QWORD *)(48 * Page - 0x58000000000LL);
    v13 = v60;
    *v19 = v12;
    v12 = v19;
    --v14;
  }
  while ( v14 );
  PteAddress = MiGetPteAddress(qword_140327FD0 + 276840816);
  v21 = v47;
  for ( i = 0; i < 4; i = v25 + v24 )
  {
    v62[3 - i] = PteAddress;
    PteAddress = MiGetPteAddress(PteAddress);
  }
  v26 = 0LL;
  v27 = 0LL;
  v28 = v62;
  do
  {
    v61 = (_QWORD *)*v19;
    *v19 = 0LL;
    v53 = *v28;
    v48 = (__int64)&v19[v23 / 0xFFFFFFFFFFFFFFF8uLL] / 48;
    v29 = ~qword_1403A9350 & (MiMakeValidKernelPte(v48, 6, 0LL) & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
    MiInitializePfnForOtherProcess(v48, v53, TopLevelPage, 0);
    MiMarkPageActive((__int64)v19);
    v30 = v21;
    if ( (_DWORD)v27 )
    {
      v30 = v21 + 8 * v27;
      *(_QWORD *)v30 = MiMakeValidKernelPte(TopLevelPage, 4, v30) | 0x42;
      if ( MiPteInShadowRange(v30) )
        MiWritePteShadow(v32, v31);
      if ( (_DWORD)v27 == 3 )
        v29 = ~qword_1403A9350 & (v29 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)qword_1403A9350 ^ (unsigned __int16)(HIBYTE(word_140326AE8) << 8)) & 0x100;
    }
    else
    {
      v26 = v29;
    }
    v33 = (unsigned __int64 *)(((__int64)(v30 << 25) >> 16) + 8 * ((v53 >> 3) & 0x1FF));
    *v33 = v29;
    if ( MiPteInShadowRange((unsigned __int64)v33) )
      MiWritePteShadow(v34, v29);
    v27 = (unsigned int)(v27 + 1);
    v19 = v61;
    ++v28;
    TopLevelPage = v48;
    v23 = 0xFFFFFA8000000000uLL;
  }
  while ( (unsigned int)v27 < 4 );
  v35 = v54;
  v36 = v56;
  v37 = v55;
  *(_QWORD *)(v54 + 864) = v48;
  if ( v36 )
  {
    *(_QWORD *)(v35 + 1024) = v36;
    _InterlockedOr((volatile signed __int32 *)(v35 + 772), 0x10000u);
    v36 = v56;
    v37 = v57;
  }
  MiInsertNewProcess((_QWORD *)v35, v36);
  v38 = v21 << 25 >> 16;
  MiCopyTopLevelMappings(v35, v38);
  v39 = (__int64 *)(v38 + 8 * ((v62[0] >> 3) & 0x1FFLL));
  *v39 = v26;
  if ( MiPteInShadowRange((unsigned __int64)v39) )
    MiWritePteShadow(v40, v26);
  v41 = MiGetPteAddress(0xFFFFF6FB7DBED000uLL);
  v43 = (__int64 *)(v38 + 8 * (v42 & (v41 >> 3)));
  *v43 = v37;
  if ( MiPteInShadowRange((unsigned __int64)v43) )
    MiWritePteShadow(v44, v37);
  v45 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v57);
  *(_QWORD *)(v35 + 40) = KeMakeKernelDirectoryTableBase(v45 << 12);
  MiSyncSystemPdes(v35);
  MiReleasePtes((__int64)&qword_1403278B0, v21, 4u);
  return 1;
}
