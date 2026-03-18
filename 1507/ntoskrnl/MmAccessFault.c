/*
 * XREFs of MmAccessFault @ 0x1400BF8A0
 * Callers:
 *     MiMakeSystemAddressValidSystemWs @ 0x1400052D8 (MiMakeSystemAddressValidSystemWs.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiSectionCreated @ 0x14002E3D0 (MiSectionCreated.c)
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiCheckProtoPtePageState @ 0x140081F50 (MiCheckProtoPtePageState.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiInPageSingleKernelStack @ 0x1400DE01C (MiInPageSingleKernelStack.c)
 *     MiReleaseOutSwapReservations @ 0x1400DEA4C (MiReleaseOutSwapReservations.c)
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 *     MiMakeProtoAddressValid @ 0x1400E08B8 (MiMakeProtoAddressValid.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiMakeImageReadOnly @ 0x14011B188 (MiMakeImageReadOnly.c)
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     ExpSvmServicePageFault @ 0x140265694 (ExpSvmServicePageFault.c)
 *     MmVirtualAccessFault @ 0x1406A5A9C (MmVirtualAccessFault.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140082458 (FsRtlIsTotalDeviceFailure.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MiCheckVirtualAddress @ 0x1400896DC (MiCheckVirtualAddress.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiProcessWsInSwapFault @ 0x1400DDE3C (MiProcessWsInSwapFault.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MiProtoFault @ 0x1400FE484 (MiProtoFault.c)
 *     MiAllowGuardFault @ 0x1401114C4 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x140111530 (KeInvalidAccessAllowed.c)
 *     MiDeprioritizeVad @ 0x14012697C (MiDeprioritizeVad.c)
 *     MiReduceWs @ 0x14012F17C (MiReduceWs.c)
 *     MiWaitForRotateToComplete @ 0x140139DBC (MiWaitForRotateToComplete.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14020F22C (MiIsVadEligibleForCommitRelease.c)
 *     MiLargePageFault @ 0x140223C5C (MiLargePageFault.c)
 *     MiRaisedIrqlFault @ 0x140223EF8 (MiRaisedIrqlFault.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     EtwTracePageFault @ 0x14025D2EC (EtwTracePageFault.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x140530548 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MmAccessFault(ULONG_PTR BugCheckParameter2, signed __int64 a2, unsigned __int8 a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // r14
  unsigned __int8 v5; // r12
  unsigned __int64 v6; // r15
  ULONG_PTR v7; // r13
  ULONG_PTR *p_BugCheckParameter2a; // rcx
  ULONG_PTR v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ebx
  unsigned __int64 v15; // r9
  _KPROCESS *Process; // rsi
  char v17; // r12
  signed __int32 *v18; // rdi
  int v19; // r13d
  bool v20; // cc
  unsigned __int16 v21; // ax
  __int16 *v22; // r8
  unsigned __int64 v23; // r9
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rdx
  LARGE_INTEGER *v26; // r8
  __int64 CurrentIrql; // rsi
  signed __int32 j; // edx
  char v29; // al
  _QWORD *Address; // rax
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned int valid; // eax
  char v34; // al
  __int16 *VmPartition; // rax
  char v36; // al
  __int64 v37; // r8
  unsigned __int64 *v38; // rsi
  __int64 v39; // rdx
  unsigned __int64 v40; // r12
  __int64 DemandZeroPte; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // r15
  char v44; // r11
  ULONG_PTR v45; // r10
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int16 v49; // dx
  __int64 v50; // rdx
  _BYTE *v51; // rax
  unsigned __int64 v52; // r9
  char v53; // bl
  __int64 v54; // r9
  __int64 v55; // r15
  __int64 v56; // rax
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rbx
  __int64 v59; // r9
  volatile __int64 *v60; // r10
  __int64 PteShadow; // rax
  int v62; // r8d
  ULONG_PTR PrototypePteDirect; // rax
  __int64 v64; // r9
  __int64 v65; // rax
  unsigned int v66; // eax
  struct _KTHREAD *v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // r15
  __int64 v70; // r12
  unsigned __int8 v71; // r13
  unsigned int v72; // edi
  signed __int32 k; // edx
  int v74; // eax
  __int16 *v75; // rax
  unsigned __int64 v76; // r8
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v78; // [rsp+28h] [rbp-D8h]
  int v79; // [rsp+28h] [rbp-D8h]
  char v81[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v82; // [rsp+54h] [rbp-ACh]
  __int64 v83; // [rsp+58h] [rbp-A8h]
  char v84; // [rsp+60h] [rbp-A0h] BYREF
  int v85; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR v86; // [rsp+68h] [rbp-98h]
  ULONG_PTR v87; // [rsp+70h] [rbp-90h] BYREF
  _KPROCESS *v88; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v90; // [rsp+88h] [rbp-78h]
  __int64 *v91; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v92; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *i; // [rsp+A0h] [rbp-60h]
  __int64 v94; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v96; // [rsp+B8h] [rbp-48h]
  signed __int32 *v97; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR v98; // [rsp+C8h] [rbp-38h]
  __int16 v99; // [rsp+D0h] [rbp-30h]
  int v100; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v101[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v102; // [rsp+F0h] [rbp-10h]
  ULONG_PTR BugCheckParameter2a; // [rsp+F8h] [rbp-8h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v86 = a2;
  v92 = BugCheckParameter2;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, a2, BugCheckParameter2, a4);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    if ( a3 == 1 || (a4 & 1) != 0 && *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      return 3221225477LL;
    if ( (a4 & 1) == 0 )
      goto LABEL_9;
    if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      return 3221225477LL;
    if ( (a4 & 1) == 0 )
    {
LABEL_9:
      if ( (unsigned __int8)KeInvalidAccessAllowed(a4) == 1 )
        return 3221225477LL;
    }
    KeBugCheckEx(0x50u, v6, v7, a4, 4uLL);
  }
  p_BugCheckParameter2a = &BugCheckParameter2a;
  v10 = (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = 3;
  BugCheckParameter2a = v10;
  do
  {
    v12 = *p_BugCheckParameter2a--;
    *p_BugCheckParameter2a = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v11;
  }
  while ( v11 );
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v7, v6, a4, v101);
  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  LOBYTE(v82) = 0;
  v15 = v6;
  v91 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v88 = Process;
  v87 = 0LL;
  v96 = 0LL;
  v90 = 4096;
  for ( i = CurrentThread; v15 >= 0xFFFFF68000000000uLL; v15 = (__int64)(v15 << 25) >> 16 )
  {
    if ( v15 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( v6 >= 0xFFFF800000000000uLL )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    if ( v6 + 0x98000000000LL <= 0x7FFFFFFFFFLL && v15 + 0xA8000000000LL <= 0xFFFFFFFFFFLL )
    {
      v7 |= 2uLL;
      v92 = v7;
    }
    v97 = 0LL;
    v99 = 17;
    v98 = 0LL;
    v14 = MiSystemFault(v7, v6, v4, v15, (__int64)v101, (__int64)&v97);
    v17 = HIBYTE(v99);
    v18 = v97;
    v83 = (unsigned __int8)v99;
    v81[0] = v99;
    v87 = v98;
    v82 = HIBYTE(v99);
    if ( v14 != 192 )
    {
      if ( v14 != -1073741802 )
        goto LABEL_209;
      v19 = 0;
      P = 0LL;
LABEL_115:
      LODWORD(CurrentIrql) = v92;
      v14 = MiDispatchFault(v92, v6, v87, v19, (__int64)v18, v83, v4, (__int64)P, (__int64)&v95);
      if ( v14 != -1073741802 )
      {
LABEL_169:
        v64 = v95;
        if ( v95 )
        {
          v65 = *(_QWORD *)(v95 + 248);
          v90 = *(_DWORD *)(v95 + 296);
          if ( v65 )
            v90 = *(_DWORD *)(v65 + 40);
          if ( a3 == 1 )
            *(_BYTE *)(v95 + 191) |= 2u;
          v66 = (unsigned __int8)CurrentIrql;
          LOBYTE(CurrentIrql) = v83;
          v14 = MiIssueHardFault((__int64)v18, v83, v6, v64, v4, (v66 >> 1) & 1);
          goto LABEL_75;
        }
        goto LABEL_90;
      }
      if ( (v4 & 1) == 0 || (v51 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL), *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
      {
        if ( (v4 & 1) == 0 )
        {
LABEL_156:
          if ( v18 == dword_14034FE40 )
          {
            v59 = v83;
          }
          else
          {
            LOBYTE(v79) = v17;
            v14 = MiProtoFault(v18, v81, v6, v87, P, v79, &v91);
            if ( v14 != -1073741802 )
              goto LABEL_177;
            v59 = (unsigned __int8)v81[0];
            v18 = dword_14034FE40;
            v83 = (unsigned __int8)v81[0];
          }
          v6 = v87;
          v86 = v87;
          v60 = (volatile __int64 *)(((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          PteShadow = *v60;
          if ( (unsigned __int64)(v60 + 0x12090482600LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v60);
          v94 = PteShadow;
          if ( (PteShadow & 1) != 0 )
          {
            LOBYTE(CurrentIrql) = v83;
            if ( (PteShadow & 0x200) != 0 )
              MiCopyOnWriteEx(v87, v60, -1LL, v83, 0);
            v14 = 0;
            goto LABEL_75;
          }
          v87 = 0LL;
          v62 = 0;
          if ( (PteShadow & 0x400) != 0 )
          {
            PrototypePteDirect = MiGetPrototypePteDirect(PteShadow, v50, 0LL, v59);
            v62 = PrototypePteDirect;
            v87 = PrototypePteDirect;
          }
          v14 = MiDispatchFault(CurrentIrql, v6, v62, 0, (__int64)v18, v59, v4, 0LL, (__int64)&v95);
          LOBYTE(CurrentIrql) = CurrentIrql | 2;
          goto LABEL_169;
        }
        v51 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
        {
          if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
            v4 = 0LL;
          goto LABEL_156;
        }
      }
      v51[1] = 1;
      if ( *v51 == 1 )
        v17 = 1;
      v4 = 0LL;
      goto LABEL_156;
    }
    v5 = a3;
    v14 = 0;
  }
  v20 = LODWORD(Process[2].Affinity.Bitmap[1]) <= 0x10;
  v18 = (signed __int32 *)&Process[1].IdealNode[8];
  P = 0LL;
  if ( v20 )
    goto LABEL_42;
  v21 = WORD2(Process[1].SecurePid);
  if ( v21 == 1023 )
    v22 = MiSystemPartition;
  else
    v22 = *(__int16 **)(qword_14034F0E8 + 8LL * v21);
  v23 = *((_QWORD *)v22 + 704);
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_35;
  v24 = (_QWORD *)(*((_QWORD *)v22 + 5) + 1336LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]);
  v25 = v24[146] + v24[147] + ((*v24 + v24[1]) << 9);
  if ( v25 >= 0x100 )
    goto LABEL_42;
  if ( v23 >= v25 >> 4 )
LABEL_35:
    v25 = *((_QWORD *)v22 + 688);
  if ( v25 < 0x100 && (v23 >= 0x4000 || v23 >= v25 >> 4) )
  {
    LODWORD(Process[2].Affinity.Bitmap[1]) = 0;
    if ( Process->BasePriority >= 9 )
      v26 = (LARGE_INTEGER *)&Mi30Milliseconds;
    else
      v26 = (LARGE_INTEGER *)&MiHalfSecond;
    goto LABEL_44;
  }
LABEL_42:
  if ( !dword_14034F6D8 )
    goto LABEL_45;
  v26 = (LARGE_INTEGER *)&Mi10Milliseconds;
LABEL_44:
  KeDelayExecutionThread(0, 0, v26);
LABEL_45:
  CurrentIrql = KeGetCurrentIrql();
  v83 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v18);
  }
  else
  {
    if ( _interlockedbittestandset(v18, 0x1Fu) )
      v14 = ExpWaitForSpinLockExclusiveAndAcquire(v18);
    for ( j = *v18; (*v18 & 0xBFFFFFFF) != 0x80000000; j = *v18 )
    {
      if ( (j & 0x40000000) == 0 )
        _InterlockedCompareExchange(v18, j | 0x40000000, j);
      if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v14);
    }
    v14 = 0;
  }
  v29 = *((_BYTE *)v18 + 219) & 0xC0;
  v81[0] = CurrentIrql;
  if ( v29 == -64 && *((_QWORD *)v18 + 30) && v6 < 0xFFFF800000000000uLL )
  {
    Address = MiLocateAddress(v6);
    P = Address;
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
LABEL_68:
      v14 = -1073741819;
      goto LABEL_75;
    }
    P = 0LL;
  }
  if ( v88[1].Affinity.Bitmap[9] && (unsigned int)MiWaitForRotateToComplete(v6, (unsigned __int8)CurrentIrql) == 1 )
    goto LABEL_75;
  if ( v6 > (unsigned __int64)MmHighestUserAddress && v6 < 0xFFFF800000000000uLL )
    goto LABEL_68;
  LOBYTE(v78) = v5;
  LOBYTE(BugCheckParameter4) = CurrentIrql;
  v14 = MiResolvePageTablePage(v7, v6, v101, v4, BugCheckParameter4, v78);
  if ( v14 != -1073741802 )
    goto LABEL_75;
  v31 = 0x90482413000LL;
  v32 = *v102;
  if ( (unsigned __int64)(v102 + 0x12090482600LL) <= 0x7F8 )
    v32 = MiReadPteShadow(v102, *v102);
  v94 = v32;
  if ( (v32 & 0x80u) != 0LL )
  {
    valid = MiLargePageFault(v7, v6, v4, v5, (__int64)v18);
LABEL_74:
    v14 = valid;
    goto LABEL_75;
  }
  v38 = (unsigned __int64 *)BugCheckParameter2a;
  v39 = *(_QWORD *)BugCheckParameter2a;
  v40 = BugCheckParameter2a + v31;
  if ( BugCheckParameter2a + v31 <= 0x7F8 )
    v39 = MiReadPteShadow(BugCheckParameter2a, v39);
  v94 = v39;
  if ( (v39 & 1) != 0 )
  {
    LOBYTE(CurrentIrql) = v83;
    valid = MiValidFault(v7, v6, &v94, v4, v83, a3);
    goto LABEL_74;
  }
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  if ( v42 == DemandZeroPte )
  {
    v14 = MiResolveDemandZeroFault(v7 & 2, v6, v4, v38, (__int64)v18, v83, 0);
LABEL_90:
    LOBYTE(CurrentIrql) = v83;
    goto LABEL_75;
  }
  v19 = 0;
  if ( v42 )
  {
    v43 = (v42 >> 5) & 0x1F;
    v85 = (v42 >> 5) & 0x1F;
    if ( (v42 & 0x400) != 0 )
    {
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v42) )
      {
        v87 = MiGetPrototypePteDirect(v46, v46, v47, v48);
        if ( (v49 & 8) == 0 )
        {
          v85 = 256;
          if ( (v49 & 0x800) != 0 || v88[1].Affinity.Bitmap[12] )
            v19 = 1;
          goto LABEL_114;
        }
        v44 = 1;
        LODWORD(v43) = 1;
        v85 = 1;
        goto LABEL_100;
      }
      v87 = MiCheckVirtualAddress(v86, &v100, (__int64 *)&P);
      if ( !v87 )
      {
        LOBYTE(CurrentIrql) = v83;
        v14 = -1073741819;
LABEL_75:
        if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          MiProcessWsInSwapFault(v101);
        v34 = *((_BYTE *)v18 + 219);
        if ( (v34 & 0x10) != 0 )
        {
          *((_BYTE *)v18 + 219) = v34 & 0xEF;
          VmPartition = MiGetVmPartition((__int64)v18);
          MiAgeWorkingSet((__int64)v18, CurrentIrql, 1, *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
        }
        v36 = *((_BYTE *)v18 + 219);
        if ( (v36 & 0x20) != 0 )
        {
          v37 = *((_QWORD *)v18 + 17);
          *((_BYTE *)v18 + 219) = v36 & 0xDF;
          MiReduceWs(v18, (unsigned __int8)CurrentIrql, v37);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v18, retaddr);
        else
          *v18 = 0;
        __writecr8((unsigned __int8)CurrentIrql);
        goto LABEL_177;
      }
      P = 0LL;
    }
  }
  else
  {
    v14 = MiZeroFault(v92, (__int64)&v84, (__int64)&v85, (__int64)&v87, (__int64)&P);
    if ( v84 )
    {
      if ( v84 != 1 )
        return v14;
      LOBYTE(CurrentIrql) = v83;
      goto LABEL_75;
    }
    if ( v14 == -1073741280 )
      v96 = v6;
    LODWORD(v43) = v85;
  }
  if ( (_DWORD)v43 == 256 )
    goto LABEL_114;
  v44 = 1;
LABEL_100:
  v45 = v92 & 2;
  if ( a3 == 1
    && ((unsigned __int64)v38 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
     || (unsigned __int64)v38 < 0xFFFFF68000000000uLL) )
  {
    v14 = -1073741819;
    goto LABEL_151;
  }
  v52 = *v38;
  if ( v40 <= 0x7F8 )
    LOWORD(v52) = MiReadPteShadow(v38, *v38);
  if ( (v52 & 1) != 0 )
  {
    if ( v45 && (v52 & 0xA00) == 0 )
    {
      v14 = -1073741819;
      goto LABEL_151;
    }
LABEL_114:
    v6 = v86;
    v17 = v82;
    goto LABEL_115;
  }
  v53 = v43;
  if ( v45 )
    LOBYTE(v45) = v44;
  if ( MiReadWrite[v43 & 7] - (char)v45 >= 10 )
  {
    if ( (v43 & 0xFFFFFFF8) == 0x10 && ((v4 & 1) == 0 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    {
      if ( (unsigned int)MiAllowGuardFault(v4) )
      {
        if ( (v54 & 0x800) == 0 || (v54 & 0x400) != 0 )
        {
          v58 = v54 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v43 & 0xF));
          *v38 = v58;
          if ( v40 <= 0x7F8 )
            MiWritePteShadow(v38, v58);
        }
        else
        {
          v55 = MiLockTransitionLeafPage((_KPROCESS *)v38, 0LL);
          v56 = *v38;
          if ( v40 <= 0x7F8 )
            v56 = MiReadPteShadow(v38, *v38);
          if ( v55 )
            *(_QWORD *)(v55 + 16) = *(_QWORD *)(v55 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v53 & 0xF));
          v57 = v56 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v53 & 0xF));
          *v38 = v57;
          if ( v40 <= 0x7F8 )
            MiWritePteShadow(v38, v57);
          if ( v55 )
            _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v14 = -2147483647;
      }
      else
      {
        v14 = -1073741819;
      }
      goto LABEL_151;
    }
    goto LABEL_114;
  }
  v14 = -1073741819;
LABEL_151:
  MiUnlockWorkingSetExclusive((__int64)v18, v83);
  if ( v14 == -2147483647 )
    v14 = MiCheckForUserStackOverflow(v86);
LABEL_177:
  v67 = i;
  if ( v96 )
    MiDeprioritizeVad(P);
  if ( (v18[54] & 7) != 0 )
  {
    if ( (v18[49] & 0xFFF) == 0 && (unsigned __int64)qword_140355280 < 0x400 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  else if ( v67->Priority >= 16 )
  {
    Process = v88;
    if ( (__int64)(*((_QWORD *)v18 + 13) - *((_QWORD *)v18 + 12)) > 100
      && *((_QWORD *)MiPartitionIdToPointer(WORD2(v88[1].SecurePid)) + 688) < 0x400uLL )
    {
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    goto LABEL_184;
  }
  Process = v88;
LABEL_184:
  v68 = (__int64)v91;
  if ( v91 )
  {
    v69 = *v91;
    v70 = 0LL;
    v71 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v69 + 72);
    }
    else
    {
      v72 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v69 + 72), 0x1Fu) )
        v72 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v69 + 72));
      for ( k = *(_DWORD *)(v69 + 72); (k & 0xBFFFFFFF) != 0x80000000; k = *(_DWORD *)(v69 + 72) )
      {
        if ( (k & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v69 + 72), k | 0x40000000, k);
        if ( (++v72 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v72);
      }
      v68 = (__int64)v91;
    }
    v74 = *(_DWORD *)(v69 + 56);
    if ( (v74 & 0x20) == 0 && *(_QWORD *)(v69 + 64) && (v74 & 0x400) == 0 )
      v70 = MiDecrementSubsections(v68, v68, 1u);
    --*(_QWORD *)(v69 + 40);
    MiCheckControlArea(v69, v71);
    if ( v70 )
      MiReturnSubsectionCharges(v70);
    Process = v88;
  }
LABEL_209:
  if ( v14 )
  {
    if ( v14 != -1073740748 )
    {
      if ( (v14 & 0x80000000) == 0
        || v14 != -1073741670
        && v14 != -1073741663
        && v14 != -1073741801
        && (v90 <= 0x1000 || FsRtlIsTotalDeviceFailure(v14)) )
      {
        if ( (PerfGlobalGroupMask & 0x1000) != 0 )
        {
          if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1
            || (v4 & 1) != 0
            && (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 2
             || (v4 & 1) != 0
             && (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 4
              || (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 3)) )
          {
            v4 = 0LL;
          }
          EtwTracePageFault(v14, v86, a3, v4);
        }
        return v14;
      }
      if ( (BYTE4(i[1].Queue) & 4) != 0 )
        return 3221225495LL;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v75 = MiPartitionIdToPointer(WORD2(Process[1].SecurePid));
      v76 = *((_QWORD *)v75 + 688);
      if ( v76 < 0x80
        && (((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 || v76 < 2)
        && (v75 == MiSystemPartition || v76 < 2) )
      {
        MiWaitForFreePage(v75);
      }
    }
    return 0;
  }
  return v14;
}
