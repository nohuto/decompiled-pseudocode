/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1403CB7AC
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     MiMarkPageActive @ 0x140018440 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     MiSyncSystemPdes @ 0x1400187F4 (MiSyncSystemPdes.c)
 *     MiCopyTopLevelMappings @ 0x14001883C (MiCopyTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x14001899C (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x140018A2C (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x140018A50 (PsGetDefaultWsMaximum.c)
 *     MiJoinPartition @ 0x140018A58 (MiJoinPartition.c)
 *     PsReturnProcessQuota @ 0x14001C2A4 (PsReturnProcessQuota.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiCheckWsLimits @ 0x140096D9C (MiCheckWsLimits.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiReturnPartitionResidentAvailable @ 0x140166F8C (MiReturnPartitionResidentAvailable.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401CBC1C (KeMakeKernelDirectoryTableBase.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiDeleteProcessShadow @ 0x1401DE720 (MiDeleteProcessShadow.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 *     MiJoinSession @ 0x1403CBD64 (MiJoinSession.c)
 *     RtlRandomEx @ 0x1403CBDAC (RtlRandomEx.c)
 *     MiAllocateTopLevelPage @ 0x140621CD4 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x140626044 (MiAllocateProcessShadow.c)
 */

char __fastcall MmCreateProcessAddressSpace(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, __int64 a5)
{
  int *v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  _QWORD *v12; // rdi
  __int64 v13; // r9
  _QWORD *v14; // r15
  int v15; // eax
  __int64 v16; // r13
  _WORD *v17; // r14
  __int16 v18; // di
  unsigned int v19; // ebx
  __int64 Page; // rax
  _QWORD *v21; // r12
  unsigned __int64 PteAddress; // rax
  unsigned int i; // ebx
  __int64 v24; // r9
  __int64 v25; // r14
  unsigned __int64 *v26; // rdi
  __int64 v27; // r13
  ULONG_PTR v28; // r15
  _QWORD *v29; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  __int64 v32; // r9
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rsi
  unsigned __int64 *v35; // rsi
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rdi
  _QWORD *v39; // rsi
  __int64 v40; // rbx
  __int64 *v41; // r12
  __int64 *v42; // rbx
  unsigned __int64 v43; // rax
  _KPROCESS *Process; // [rsp+38h] [rbp-71h]
  __int64 v46; // [rsp+38h] [rbp-71h]
  __int64 v47; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-61h] BYREF
  __int64 TopLevelPage; // [rsp+50h] [rbp-59h]
  unsigned __int64 v50; // [rsp+58h] [rbp-51h]
  ULONG_PTR v51; // [rsp+60h] [rbp-49h]
  unsigned __int64 v52; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v53; // [rsp+70h] [rbp-39h]
  __int64 v54; // [rsp+78h] [rbp-31h] BYREF
  __int64 v55; // [rsp+80h] [rbp-29h]
  _WORD *v56; // [rsp+88h] [rbp-21h] BYREF
  __int16 v57; // [rsp+90h] [rbp-19h]
  unsigned __int16 v58; // [rsp+92h] [rbp-17h]
  _QWORD *v59; // [rsp+98h] [rbp-11h]
  _QWORD v60[5]; // [rsp+A0h] [rbp-9h] BYREF

  v48 = a3;
  v55 = a5;
  v47 = PspMinimumWorkingSet;
  v6 = MiJoinPartition(a1, a5);
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)v6, 5uLL, 0LL) )
  {
LABEL_46:
    if ( v6 != MiSystemPartition )
      MiDereferencePartition(v6);
    return 0;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_WORD *)(a5 + 1472) = RtlRandomEx(&Seed);
  *(_QWORD *)(a5 + 1912) = a5 + 1904;
  *(_QWORD *)(a5 + 1904) = a5 + 1904;
  *(_QWORD *)(a5 + 1896) = 0LL;
  v7 = v48;
  if ( v48 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(a5 + 1280, (unsigned __int64 *)&v47, &v48, a4, 1);
    v7 = v48;
  }
  v8 = v47;
  if ( !(unsigned int)MiChargeWsles(a5 + 1280, v47, 1LL) )
  {
LABEL_45:
    MiReturnCommit((__int64)v6, 5uLL);
    goto LABEL_46;
  }
  *(_QWORD *)(a5 + 1416) = v7;
  *(_QWORD *)(a5 + 1376) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(a5 + 1496) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)a5, v9, v8) < 0 )
  {
LABEL_44:
    MiChargeWsles(a5 + 1280, -(__int64)v8, 1LL);
    goto LABEL_45;
  }
  if ( !(unsigned int)MiChargeResident(v6, v8, 0LL) )
  {
LABEL_43:
    PsReturnProcessQuota((struct _KPROCESS *)a5, v10, v8);
    goto LABEL_44;
  }
  v51 = MiReservePtes((__int64)&qword_1402FF7B0, 4u, v11);
  v12 = (_QWORD *)v51;
  if ( !v51 )
  {
LABEL_16:
    if ( v6 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v8);
      _InterlockedExchangeAdd64(&qword_1402FF370, v8);
      v8 = v47;
    }
    else
    {
      MiReturnPartitionResidentAvailable((__int64)v6, v8);
    }
    goto LABEL_43;
  }
  if ( v6 == MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_1402FF368, v8);
    v8 = v47;
  }
  if ( (int)MiAllocateProcessShadow(a5) < 0 )
  {
LABEL_15:
    MiReleasePtes((__int64)&qword_1402FF7B0, v12, 4u);
    goto LABEL_16;
  }
  if ( !(unsigned int)MiJoinSession(&v54) )
  {
    MiDeleteProcessShadow(a5);
    goto LABEL_15;
  }
  _InterlockedExchangeAdd64(&qword_1402FF848, 5uLL);
  TopLevelPage = MiAllocateTopLevelPage(a5, v12);
  v14 = 0LL;
  v50 = ~qword_140381310 & (MiMakeValidKernelPte(TopLevelPage, 6, 0LL, v13) & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
  v52 = v50;
  MI_INITIALIZE_COLOR_BASE((__int64)&Process[1].IdealNode[12], 0, (__int64)&v56);
  v15 = v58;
  v16 = 4LL;
  v17 = v56;
  v18 = v57;
  do
  {
    v19 = v15 | (unsigned __int16)(v18 & ++*v17);
    while ( 1 )
    {
      Page = MiGetPage((__int64)v6, v19, 0xC2u);
      if ( Page != -1 )
        break;
      MiWaitForFreePage((__int64)v6);
    }
    v21 = (_QWORD *)(48 * Page - 0x58000000000LL);
    v15 = v58;
    *v21 = v14;
    v14 = v21;
    --v16;
  }
  while ( v16 );
  PteAddress = MiGetPteAddress(0xFFFFF58010804000uLL);
  for ( i = 0; i < 4; ++i )
  {
    v60[3 - i] = PteAddress;
    PteAddress = MiGetPteAddress(PteAddress);
  }
  v25 = 0LL;
  v26 = v60;
  v27 = 0LL;
  v28 = v51;
  do
  {
    v29 = (_QWORD *)*v21;
    v30 = *v26;
    *v21 = 0LL;
    v59 = v29;
    v53 = v30;
    v46 = (__int64)(v21 + 0xB000000000LL) / 48;
    v31 = ~qword_140381310 & (MiMakeValidKernelPte(v46, 6, 0LL, v24) & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
    MiInitializePfnForOtherProcess(v46, v30, TopLevelPage, 0);
    MiMarkPageActive((__int64)v21);
    v33 = v28;
    if ( (_DWORD)v27 )
    {
      v33 = v28 + 8 * v27;
      v34 = MiMakeValidKernelPte(TopLevelPage, 4, v33, v32) | 0x42;
      *(_QWORD *)v33 = v34;
      if ( MiPteInShadowRange(v33) )
        MiWritePteShadow(v28 + 8 * v27, v34);
      v30 = v53;
      if ( (_DWORD)v27 == 3 )
        v31 = ~qword_140381310 & (v31 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)qword_140381310 ^ (unsigned __int16)(HIBYTE(word_1402FE760) << 8)) & 0x100;
    }
    else
    {
      v25 = v31;
    }
    v35 = (unsigned __int64 *)(((__int64)(v33 << 25) >> 16) + 8 * ((v30 >> 3) & 0x1FF));
    *v35 = v31;
    if ( MiPteInShadowRange((__int64)v35) )
      MiWritePteShadow((__int64)v35, v31);
    v27 = (unsigned int)(v27 + 1);
    v21 = v59;
    ++v26;
    TopLevelPage = v46;
  }
  while ( (unsigned int)v27 < 4 );
  v36 = v55;
  v37 = v54;
  v38 = v50;
  *(_QWORD *)(v55 + 864) = v46;
  if ( v37 )
  {
    *(_QWORD *)(v36 + 1024) = v37;
    _InterlockedOr((volatile signed __int32 *)(v36 + 772), 0x10000u);
    v37 = v54;
    v38 = v52;
  }
  MiInsertNewProcess((_QWORD *)v36, v37);
  v39 = (_QWORD *)v51;
  v40 = (__int64)(v51 << 25) >> 16;
  MiCopyTopLevelMappings(v36, v40);
  v41 = (__int64 *)(v40 + 8 * ((v60[0] >> 3) & 0x1FFLL));
  *v41 = v25;
  if ( MiPteInShadowRange((__int64)v41) )
    MiWritePteShadow((__int64)v41, v25);
  v42 = (__int64 *)(v40 + 8 * (((unsigned __int64)MiGetPteAddress(0xFFFFF6FB7DBED000uLL) >> 3) & 0x1FF));
  *v42 = v38;
  if ( MiPteInShadowRange((__int64)v42) )
    MiWritePteShadow((__int64)v42, v38);
  v43 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v52);
  *(_QWORD *)(v36 + 40) = KeMakeKernelDirectoryTableBase(v43 << 12);
  MiSyncSystemPdes(v36);
  MiReleasePtes((__int64)&qword_1402FF7B0, v39, 4u);
  return 1;
}
