/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1404A2834
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiMarkPageActive @ 0x14006A8A0 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x14006A908 (MiInitializePfnForOtherProcess.c)
 *     MiSyncSystemPdes @ 0x14006AE38 (MiSyncSystemPdes.c)
 *     MiCopyTopLevelMappings @ 0x14006AE80 (MiCopyTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x14006AFE0 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x14006B070 (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x14006B094 (PsGetDefaultWsMaximum.c)
 *     MiJoinPartition @ 0x14006B09C (MiJoinPartition.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     PsReturnProcessQuota @ 0x1400EE610 (PsReturnProcessQuota.c)
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 *     MiCheckWsLimits @ 0x14012B430 (MiCheckWsLimits.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiReturnPartitionResidentAvailable @ 0x140195D78 (MiReturnPartitionResidentAvailable.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14020ACBC (KeMakeKernelDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x1402252C0 (MiDeleteProcessShadow.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     MiJoinSession @ 0x1404A2FB4 (MiJoinSession.c)
 *     RtlRandomEx @ 0x1404A2FFC (RtlRandomEx.c)
 *     MiAllocateTopLevelPage @ 0x1406A13F8 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406A7DDC (MiAllocateProcessShadow.c)
 */

char __fastcall MmCreateProcessAddressSpace(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, ULONG_PTR a5)
{
  __int16 *v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // r13
  __int16 v16; // bx
  __int64 v17; // r12
  int v18; // edi
  _WORD *v19; // r15
  unsigned int v20; // r14d
  __int64 Page; // rax
  _QWORD *v22; // r14
  __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned int i; // edx
  __int64 v26; // rax
  __int64 *v27; // r13
  LIST_ENTRY *p_WaitListHead; // r9
  __int64 v29; // r15
  _QWORD *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r10
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // r12
  __int64 v36; // rdi
  unsigned __int64 v37; // r14
  unsigned __int64 *v38; // rdi
  __int64 v39; // r13
  __int64 v40; // rdx
  __int64 PteShadow; // rbx
  _QWORD *v42; // r14
  __int64 v43; // rdi
  __int64 *v44; // rsi
  __int64 KernelDirectoryTableBase; // rax
  __int64 TopLevelPage; // [rsp+38h] [rbp-71h]
  unsigned int j; // [rsp+38h] [rbp-71h]
  __int64 v49; // [rsp+40h] [rbp-69h] BYREF
  _KPROCESS *Process; // [rsp+48h] [rbp-61h]
  unsigned __int64 v51; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v52; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-49h]
  __int64 v54; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR v55; // [rsp+70h] [rbp-39h]
  __int64 *v56; // [rsp+78h] [rbp-31h]
  struct _LIST_ENTRY *Flink; // [rsp+80h] [rbp-29h]
  _QWORD *v58; // [rsp+88h] [rbp-21h]
  _WORD *v59; // [rsp+90h] [rbp-19h] BYREF
  __int16 v60; // [rsp+98h] [rbp-11h]
  unsigned __int16 v61; // [rsp+9Ah] [rbp-Fh]
  __int64 v62; // [rsp+A0h] [rbp-9h]
  _QWORD v63[5]; // [rsp+A8h] [rbp-1h] BYREF

  v51 = a3;
  v55 = a5;
  v49 = PspMinimumWorkingSet;
  v6 = MiJoinPartition(a1, a5);
  if ( !(unsigned int)MiChargeCommit((__int64)v6, 5uLL, 0) )
    return 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_WORD *)(a5 + 1464) = RtlRandomEx(&Seed);
  *(_QWORD *)(a5 + 1928) = a5 + 1920;
  *(_QWORD *)(a5 + 1920) = a5 + 1920;
  *(_QWORD *)(a5 + 1912) = 0LL;
  v7 = v51;
  if ( v51 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(a5 + 1272, (unsigned __int64 *)&v49, &v51, a4, 1);
    v7 = v51;
  }
  v8 = v49;
  if ( !(unsigned int)MiChargeWsles(a5 + 1272, v49, 1) )
  {
LABEL_67:
    MiReturnCommit((__int64)v6, 5LL);
    if ( v6 != MiSystemPartition )
      MiDereferencePartition(v6);
    return 0;
  }
  *(_QWORD *)(a5 + 1408) = v7;
  *(_QWORD *)(a5 + 1368) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(a5 + 1488) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)a5, v9, v8) < 0 )
  {
LABEL_66:
    MiChargeWsles(a5 + 1272, -(__int64)v8, 1);
    goto LABEL_67;
  }
  if ( !(unsigned int)MiChargeResident(v6, v8, 0LL, v10) )
  {
LABEL_65:
    PsReturnProcessQuota(a5, v11, v8);
    goto LABEL_66;
  }
  v56 = MiReservePtes((__int64)&qword_14034FC70, 4u, v12);
  v13 = v56;
  if ( !v56 )
  {
LABEL_16:
    if ( v6 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v8);
      _InterlockedExchangeAdd64(&qword_14034F7F0, v8);
      v8 = v49;
    }
    else
    {
      MiReturnPartitionResidentAvailable((__int64)v6, v8);
    }
    goto LABEL_65;
  }
  if ( v6 == MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_14034F7E8, v8);
    v8 = v49;
  }
  if ( (int)MiAllocateProcessShadow(a5) < 0 )
  {
LABEL_15:
    MiReleasePtes((__int64)&qword_14034FC70, v13, 4u);
    goto LABEL_16;
  }
  if ( !(unsigned int)MiJoinSession(&v54) )
  {
    MiDeleteProcessShadow(a5);
    goto LABEL_15;
  }
  _InterlockedExchangeAdd64(&qword_14034FD08, 5uLL);
  TopLevelPage = MiAllocateTopLevelPage(a5, v13);
  v14 = qword_1403D0240 ^ (qword_1403D0240 ^ (TopLevelPage << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v14 |= 0x100uLL;
  v15 = 0LL;
  v53 = ~qword_1403D0220 & (v14 & 0xFFFFFFFFFFFFFE3DuLL | 0x42);
  v52 = v53;
  MI_INITIALIZE_COLOR_BASE((__int64)&Process[1].IdealNode[8], 0, (__int64)&v59);
  v16 = v60;
  v17 = 4LL;
  v18 = v61;
  v19 = v59;
  do
  {
    v20 = v18 | (unsigned __int16)(v16 & ++*v19);
    while ( 1 )
    {
      Page = MiGetPage((__int64)v6, v20, 0xC2u);
      if ( Page != -1 )
        break;
      MiWaitForFreePage((__int64)v6);
    }
    v22 = (_QWORD *)(48 * Page - 0x58000000000LL);
    *v22 = v15;
    v15 = v22;
    --v17;
  }
  while ( v17 );
  v23 = TopLevelPage;
  v24 = 0xFFFFF6FAC0084020uLL;
  for ( i = 0; i < 4; ++i )
  {
    v26 = 3 - i;
    v63[v26] = v24;
    v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v27 = v56;
  p_WaitListHead = (LIST_ENTRY *)v63;
  v29 = 0LL;
  Process = (_KPROCESS *)v63;
  for ( j = 0; j < 4; ++j )
  {
    v30 = (_QWORD *)*v22;
    *v22 = 0LL;
    v58 = v30;
    Flink = p_WaitListHead->Flink;
    v62 = (__int64)(v22 + 0xB000000000LL) / 48;
    v31 = qword_1403D0240 ^ (qword_1403D0240 ^ (v62 << 12)) & 0xFFFFFFFFF000LL | 0x21;
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
      v31 |= 0x100uLL;
    v34 = ~qword_1403D0220 & (v31 & 0xFFFFFFFFFFFFFE3DuLL | 0x42);
    MiInitializePfnForOtherProcess(v33, v32, v23, 0);
    MiMarkPageActive((__int64)v22);
    v35 = (unsigned __int64)v27;
    if ( j )
    {
      v35 = (unsigned __int64)&v27[j];
      v36 = qword_1403D0230 ^ (qword_1403D0230 ^ (v23 << 12)) & 0xFFFFFFFFF000LL | 0x21;
      if ( v35 + 0x904C0000000LL <= 0x3FFFFFFF )
        v36 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v35 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && v35 >= 0xFFFFF68000000000uLL
        || v35 >= 0xFFFFF6FB40000000uLL
        && v35 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || v35 >= 0xFFFFF6FB7DA00000uLL
        && v35 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || v35 >= 0xFFFFF6FB7DBED000uLL
        && v35 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v36 |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v35) )
        v36 |= 0x100uLL;
      v37 = v36 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
      *(_QWORD *)v35 = v37;
      if ( MiPteInShadowRange(v35) )
        MiWritePteShadow(v35, v37);
      if ( j == 3 )
        v34 = ~qword_1403D0220 & (v34 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)qword_1403D0220 ^ (unsigned __int16)(HIBYTE(word_14034EC18) << 8)) & 0x100;
    }
    else
    {
      v29 = v34;
    }
    v38 = (unsigned __int64 *)(((__int64)(v35 << 25) >> 16) + 8 * (((unsigned __int64)Flink >> 3) & 0x1FF));
    *v38 = v34;
    if ( MiPteInShadowRange((__int64)v38) )
      MiWritePteShadow((__int64)v38, v34);
    p_WaitListHead = &Process->Header.WaitListHead;
    v22 = v58;
    v23 = v62;
    Process = (_KPROCESS *)((char *)Process + 8);
  }
  v39 = v55;
  v40 = v54;
  PteShadow = v53;
  *(_QWORD *)(v55 + 864) = v62;
  if ( v40 )
  {
    *(_QWORD *)(v39 + 1024) = v40;
    _InterlockedOr((volatile signed __int32 *)(v39 + 772), 0x10000u);
    v40 = v54;
    PteShadow = v52;
  }
  MiInsertNewProcess((_QWORD *)v39, v40);
  v42 = v56;
  v43 = (__int64)((_QWORD)v56 << 25) >> 16;
  MiCopyTopLevelMappings(v39, v43);
  v44 = (__int64 *)(v43 + 8 * ((v63[0] >> 3) & 0x1FFLL));
  *v44 = v29;
  if ( MiPteInShadowRange((__int64)v44) )
    MiWritePteShadow((__int64)v44, v29);
  *(_QWORD *)(v43 + 3944) = PteShadow;
  if ( MiPteInShadowRange(v43 + 3944) )
    MiWritePteShadow(v43 + 3944, PteShadow);
  if ( MiPteInShadowRange((__int64)&v52) )
    PteShadow = MiReadPteShadow((__int64)&v52, PteShadow);
  KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(PteShadow & 0xFFFFFFFFF000LL);
  if ( (BYTE2(MiFlags) & 3) == 3 && (MiFlags & 0x40000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(v39 + 768), 0x400u);
  *(_QWORD *)(v39 + 40) = KernelDirectoryTableBase;
  MiSyncSystemPdes(v39);
  MiReleasePtes((__int64)&qword_14034FC70, v42, 4u);
  return 1;
}
