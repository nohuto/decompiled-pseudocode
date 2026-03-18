/*
 * XREFs of PsOpenProcess @ 0x140433500
 * Callers:
 *     NtOpenProcess @ 0x140434360 (NtOpenProcess.c)
 *     NtAlpcOpenSenderProcess @ 0x14053B9A8 (NtAlpcOpenSenderProcess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140014C60 (SepPrivilegeCheck.c)
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140014FB0 (ObReferenceObjectByPointerWithTag.c)
 *     SepDeleteAccessState @ 0x14004E240 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14004E2C0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessInSilo @ 0x140050120 (PsIsProcessInSilo.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400F3880 (ExSlowReplenishHandleTableEntry.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     PsLookupProcessThreadByCid @ 0x14051145C (PsLookupProcessThreadByCid.c)
 *     SepFilterPrivilegeAudits @ 0x1405416C0 (SepFilterPrivilegeAudits.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(_QWORD *a1, ACCESS_MASK a2, __int64 a3, __int64 a4, char a5, KPROCESSOR_MODE a6)
{
  bool v6; // cl
  char v7; // al
  GENERIC_MAPPING *v8; // r15
  _KPROCESS *Process; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  void *v11; // r14
  unsigned __int64 *v12; // r14
  ULONG_PTR v13; // rbx
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // r9
  _KPROCESS *v17; // r14
  struct _KTHREAD *v18; // rbx
  void *ClientToken; // rsi
  unsigned __int64 *v20; // r15
  void *v21; // rbx
  __int64 v22; // r9
  KPROCESSOR_MODE v23; // r12
  __int64 v24; // rcx
  char v25; // r14
  _QWORD **v26; // rax
  void *v27; // r15
  struct _KTHREAD *v28; // r15
  volatile signed __int64 *v29; // rax
  __int64 v30; // r9
  volatile signed __int64 *v31; // r14
  __int64 v32; // r13
  signed __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned __int128 v35; // rt0
  unsigned __int8 v36; // tt
  unsigned __int64 v37; // rax
  _BYTE *v38; // rsi
  struct _KTHREAD *v39; // r14
  _KPROCESS *v40; // r13
  __int64 v41; // rbx
  __int64 v42; // r9
  void *v43; // rbx
  __int64 v44; // r9
  __int16 v45; // ax
  __int16 v46; // ax
  POBJECT_TYPE *v47; // r14
  ACCESS_MASK v48; // eax
  int v50; // eax
  PSE_EXPORTS v51; // r13
  struct _KTHREAD *v52; // r13
  __int64 v53; // rsi
  __int64 v54; // r9
  __int16 v55; // ax
  struct _KTHREAD *v56; // r13
  __int64 v57; // rdi
  __int64 v58; // r9
  __int16 v59; // ax
  int v60; // ebx
  __int64 v61; // rsi
  signed __int64 v62; // r8
  signed __int64 v63; // rax
  signed __int64 v64; // rtt
  __int64 v65; // rcx
  volatile __int64 *v66; // rcx
  struct _KTHREAD *v67; // rsi
  unsigned __int64 *v68; // r14
  __int64 v69; // rbx
  __int64 v70; // r9
  __int16 v71; // ax
  struct _KTHREAD *v72; // r13
  unsigned __int64 *v73; // rsi
  __int64 v74; // rbx
  __int64 v75; // r9
  __int16 v76; // ax
  __int64 v77; // r13
  __int64 v78; // r9
  signed __int32 v79[8]; // [rsp+0h] [rbp-338h] BYREF
  int v80; // [rsp+30h] [rbp-308h]
  bool v81; // [rsp+50h] [rbp-2E8h]
  char v82; // [rsp+51h] [rbp-2E7h]
  bool v83; // [rsp+52h] [rbp-2E6h]
  ACCESS_MASK v84; // [rsp+54h] [rbp-2E4h]
  bool v85; // [rsp+58h] [rbp-2E0h]
  bool v86; // [rsp+59h] [rbp-2DFh]
  bool v87; // [rsp+5Ah] [rbp-2DEh]
  int v88; // [rsp+68h] [rbp-2D0h]
  ACCESS_MASK v89; // [rsp+70h] [rbp-2C8h]
  int v90; // [rsp+78h] [rbp-2C0h]
  unsigned __int128 v91; // [rsp+80h] [rbp-2B8h]
  PVOID Object; // [rsp+90h] [rbp-2A8h] BYREF
  ACCESS_MASK v93; // [rsp+98h] [rbp-2A0h] BYREF
  int v94; // [rsp+A0h] [rbp-298h] BYREF
  int v95; // [rsp+A8h] [rbp-290h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v96; // [rsp+B0h] [rbp-288h] BYREF
  __int128 v97; // [rsp+D0h] [rbp-268h] BYREF
  __int64 v98; // [rsp+E0h] [rbp-258h] BYREF
  PVOID v99; // [rsp+E8h] [rbp-250h] BYREF
  _QWORD *v100; // [rsp+F0h] [rbp-248h]
  __int128 v101; // [rsp+F8h] [rbp-240h] BYREF
  ULONG_PTR v102; // [rsp+108h] [rbp-230h]
  struct _LIST_ENTRY *Blink; // [rsp+110h] [rbp-228h]
  __int64 v104; // [rsp+118h] [rbp-220h]
  signed __int64 v105; // [rsp+120h] [rbp-218h]
  unsigned int v106; // [rsp+128h] [rbp-210h] BYREF
  int v107; // [rsp+12Ch] [rbp-20Ch]
  LUID v108; // [rsp+130h] [rbp-208h] BYREF
  int v109; // [rsp+138h] [rbp-200h]
  _QWORD v110[2]; // [rsp+140h] [rbp-1F8h] BYREF
  int v111; // [rsp+150h] [rbp-1E8h]
  int v112; // [rsp+154h] [rbp-1E4h]
  PVOID v113; // [rsp+160h] [rbp-1D8h]
  unsigned __int64 v114; // [rsp+170h] [rbp-1C8h]
  __int64 v115[28]; // [rsp+1E0h] [rbp-158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2C0h] [rbp-78h] BYREF
  ACCESS_MASK *v117; // [rsp+2D0h] [rbp-68h]
  __int64 v118; // [rsp+2D8h] [rbp-60h]
  int *v119; // [rsp+2E0h] [rbp-58h]
  __int64 v120; // [rsp+2E8h] [rbp-50h]

  v89 = a2;
  v84 = a2;
  v100 = a1;
  v97 = 0LL;
  v90 = -1;
  if ( a5 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = *a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *(_QWORD *)(a3 + 16) != 0LL;
    v81 = v6;
    v88 = *(_DWORD *)(a3 + 24) & 0xDF2;
    if ( a4 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v97 = *(_OWORD *)a4;
      v7 = 1;
      v82 = 1;
      v6 = v81;
    }
    else
    {
      v7 = 0;
      v82 = 0;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 16) != 0LL;
    v81 = v6;
    if ( a6 )
      v50 = *(_DWORD *)(a3 + 24) & 0xDF2;
    else
      v50 = *(_DWORD *)(a3 + 24) & 0x10FF2;
    v88 = v50;
    if ( a4 )
    {
      v97 = *(_OWORD *)a4;
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    v82 = v7;
  }
  if ( v6 || !v7 )
  {
    v15 = -1073741776;
    goto LABEL_117;
  }
  v8 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Blink = Process[1].Header.WaitListHead.Blink;
  if ( CurrentThread )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
    {
      v56 = KeGetCurrentThread();
      --v56->KernelApcDisable;
      v57 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (unsigned __int64 *)&CurrentThread[1].WaitBlockList,
          v57,
          (ULONG_PTR)&CurrentThread[1].WaitBlockList,
          v58);
      if ( v57 )
        *(_BYTE *)(v57 + 26) |= 1u;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
      {
        v11 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        v86 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x100) != 0;
        ObfReferenceObject(v11);
        DWORD2(v101) = CurrentThread[1].SystemCallNumber & 3;
        v87 = (CurrentThread[1].SystemCallNumber & 4) != 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      v59 = v56->KernelApcDisable + 1;
      v56->KernelApcDisable = v59;
      if ( !v59
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v56->ApcState.ApcListHead[0].Flink != &v56->152
        && !v56->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v11 = 0LL;
    }
    *(_QWORD *)&v101 = v11;
  }
  else
  {
    *(_QWORD *)&v101 = 0LL;
  }
  v12 = &Process[1].Affinity.Bitmap[5];
  v13 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v13 )
  {
    v72 = KeGetCurrentThread();
    --v72->KernelApcDisable;
    v73 = (unsigned __int64 *)&Process[1];
    v74 = KeAbPreAcquire((ULONG_PTR)v73, 0LL, 0LL, v14);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v73, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v73, v74, (ULONG_PTR)v73, v75);
    if ( v74 )
      *(_BYTE *)(v74 + 26) |= 1u;
    v13 = ObFastReferenceObjectLocked(v12);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v73, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v73);
    KeAbPostRelease((ULONG_PTR)v73);
    v76 = v72->KernelApcDisable + 1;
    v72->KernelApcDisable = v76;
    if ( !v76
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v72->ApcState.ApcListHead[0].Flink != &v72->152
      && !v72->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v102 = v13;
  v15 = SepCreateAccessStateFromSubjectContext(&v101, v110, v115, v84, v8);
  if ( v15 < 0 )
  {
LABEL_117:
    v48 = v84;
    goto LABEL_80;
  }
  v106 = 1;
  v107 = 1;
  v108 = SeDebugPrivilege;
  v109 = 0;
  v17 = KeGetCurrentThread()->ApcState.Process;
  v18 = KeGetCurrentThread();
  v96.ProcessAuditId = v17[1].Header.WaitListHead.Blink;
  if ( v18 )
  {
    if ( (*((_DWORD *)&v18[1].SwapListEntry + 3) & 8) != 0 )
    {
      v52 = KeGetCurrentThread();
      --v52->KernelApcDisable;
      v53 = KeAbPreAcquire((ULONG_PTR)&v18[1].WaitBlockList, 0LL, 0LL, v16);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v18[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (unsigned __int64 *)&v18[1].WaitBlockList,
          v53,
          (ULONG_PTR)&v18[1].WaitBlockList,
          v54);
      if ( v53 )
        *(_BYTE *)(v53 + 26) |= 1u;
      if ( (*((_DWORD *)&v18[1].SwapListEntry + 3) & 8) != 0 )
      {
        ClientToken = (void *)(*(_QWORD *)&v18[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        v85 = (*((_DWORD *)&v18[1].SwapListEntry + 3) & 0x100) != 0;
        ObfReferenceObject(ClientToken);
        v96.ImpersonationLevel = v18[1].SystemCallNumber & 3;
        v83 = (v18[1].SystemCallNumber & 4) != 0;
      }
      else
      {
        ClientToken = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v18[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&v18[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&v18[1].WaitBlockList);
      v55 = v52->KernelApcDisable + 1;
      v52->KernelApcDisable = v55;
      if ( !v55
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
        && !v52->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      ClientToken = 0LL;
    }
    v96.ClientToken = ClientToken;
  }
  else
  {
    ClientToken = 0LL;
    v96.ClientToken = 0LL;
  }
  v20 = &v17[1].Affinity.Bitmap[5];
  v21 = (void *)ObFastReferenceObject((signed __int64 *)&v17[1].Affinity.Bitmap[5]);
  if ( !v21 )
  {
    v67 = KeGetCurrentThread();
    --v67->KernelApcDisable;
    v68 = (unsigned __int64 *)&v17[1];
    v69 = KeAbPreAcquire((ULONG_PTR)v68, 0LL, 0LL, v22);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v68, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v68, v69, (ULONG_PTR)v68, v70);
    if ( v69 )
      *(_BYTE *)(v69 + 26) |= 1u;
    v21 = (void *)ObFastReferenceObjectLocked(v20);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v68, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v68);
    KeAbPostRelease((ULONG_PTR)v68);
    v71 = v67->KernelApcDisable + 1;
    v67->KernelApcDisable = v71;
    if ( !v71
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v67->ApcState.ApcListHead[0].Flink != &v67->152
      && !v67->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ClientToken = v96.ClientToken;
  }
  v96.PrimaryToken = v21;
  v23 = a6;
  if ( a6 )
  {
    if ( ClientToken )
    {
      if ( v96.ImpersonationLevel < SecurityImpersonation )
      {
        v25 = 0;
        goto LABEL_28;
      }
      v24 = (__int64)ClientToken;
    }
    else
    {
      v24 = (__int64)v21;
    }
    v25 = SepPrivilegeCheck(v24, (__int64)&v108, v106, v107, a6);
  }
  else
  {
    v25 = 1;
  }
LABEL_28:
  if ( a6 )
  {
    v26 = (_QWORD **)(ClientToken ? ClientToken : v21);
    v27 = (void *)*v26[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v27) )
    {
      if ( (v51 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v27))
        && !RtlEqualSid(v51->SeLocalServiceSid, v27)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, &v106) )
      {
        SepAdtPrivilegedServiceAuditAlarm(&v96, SeSubsystemName, 0LL, (__int64)ClientToken, (__int64)v21, &v106, v25);
      }
    }
  }
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)v96.PrimaryToken);
  v96.PrimaryToken = 0LL;
  if ( v96.ClientToken )
    ObfDereferenceObject(v96.ClientToken);
  v96.ClientToken = 0LL;
  if ( v25 )
  {
    if ( (v111 & 0x2000000) != 0 )
      v112 |= 0x1FFFFFu;
    else
      v112 |= v111;
    v111 = 0;
  }
  if ( !*((_QWORD *)&v97 + 1) )
  {
    v28 = KeGetCurrentThread();
    --v28->SpecialApcDisable;
    if ( (v97 & 0x3FC) == 0 )
      goto LABEL_134;
    v29 = (volatile signed __int64 *)ExpLookupHandleTableEntry(PspCidTable);
    v31 = v29;
    if ( !v29 )
      goto LABEL_134;
    v32 = PspCidTable;
    _m_prefetchw((const void *)v29);
    *(_QWORD *)&v91 = *v29;
    v33 = *((_QWORD *)v29 + 1);
    *((_QWORD *)&v91 + 1) = v33;
    v34 = v91;
    while ( (v34 & 0x1FFFE) != 0 )
    {
      if ( (v34 & 1) != 0 )
      {
        v104 = v34 - 2;
        v105 = v33;
        *(_QWORD *)&v35 = v34;
        *((_QWORD *)&v35 + 1) = v33;
        v36 = _InterlockedCompareExchange128(v31, v33, v34 - 2, (signed __int64 *)&v35);
        v33 = v35 >> 64;
        v37 = v35;
        v34 = v35;
        v91 = v35;
        if ( v36 )
        {
          if ( (unsigned __int16)(v37 >> 1) == 16 )
          {
            v34 = ((unsigned int)v34 ^ (2 * (unsigned int)(v37 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v34;
            *(_QWORD *)&v91 = v34;
          }
          v38 = (_BYTE *)((v34 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( (*v38 & 0x7F) == 3 )
            goto LABEL_47;
          ObfDereferenceObject(v38);
LABEL_134:
          v38 = 0LL;
LABEL_64:
          v46 = v28->SpecialApcDisable + 1;
          v28->SpecialApcDisable = v46;
          if ( !v46 && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
            KiCheckForKernelApcDelivery();
          if ( v38 )
          {
            Object = v38;
            goto LABEL_69;
          }
          v15 = -1073741813;
LABEL_116:
          SeDeleteAccessState(v110);
          goto LABEL_117;
        }
      }
      else
      {
        ExpBlockOnLockedHandleEntry(v32, v31);
        _m_prefetchw((const void *)v31);
        *(_QWORD *)&v91 = *v31;
        v33 = *((_QWORD *)v31 + 1);
        *((_QWORD *)&v91 + 1) = v33;
        v34 = v91;
      }
    }
    v60 = 0;
    v61 = PspCidTable;
    do
    {
      while ( 1 )
      {
        _m_prefetchw((const void *)v31);
        v62 = *v31;
        if ( (*v31 & 1) != 0 )
          break;
        if ( !v62 )
          goto LABEL_134;
        ExpBlockOnLockedHandleEntry(v61, v31);
      }
    }
    while ( v62 != _InterlockedCompareExchange64(v31, v62 - 1, v62) );
    v38 = (_BYTE *)((*(__int64 *)v31 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (*v38 & 0x7F) == 3 )
    {
      if ( (*(_DWORD *)(((*(__int64 *)v31 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x400000C) == 0x4000000 )
        v60 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v31);
      _m_prefetchw(v38 - 48);
      v63 = *((_QWORD *)v38 - 6);
      if ( v63 )
      {
        while ( 1 )
        {
          v64 = v63;
          v63 = _InterlockedCompareExchange64((volatile signed __int64 *)v38 - 6, (unsigned int)(v60 + 1) + v63, v63);
          if ( v64 == v63 )
            break;
          if ( !v63 )
            goto LABEL_186;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo((__int64)(v38 - 48), 1, v60 + 1, 1953261124);
LABEL_130:
        v65 = PspCidTable;
        _InterlockedExchangeAdd64(v31, 1uLL);
        v66 = (volatile __int64 *)(v65 + 48);
        _InterlockedOr(v79, 0);
        if ( *v66 )
          ExfUnblockPushLock(v66, 0LL);
LABEL_47:
        if ( v38 )
        {
          v39 = KeGetCurrentThread();
          v40 = v39->Process;
          --v39->KernelApcDisable;
          v41 = KeAbPreAcquire((ULONG_PTR)&v40[1], 0LL, 0LL, v30);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v40[1].Header.Lock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)&v40[1], v41, (ULONG_PTR)&v40[1], v42);
          if ( v41 )
            *(_BYTE *)(v41 + 26) |= 1u;
          v43 = *(void **)&v39[1].WaitBlockFill11[160];
          if ( v43 == (void *)-3LL )
            v43 = (void *)v40[2].ActiveProcessors.Bitmap[12];
          if ( v43 )
            PspReferenceSiloObject(v43);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v40[1].Header.Lock, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&v40[1].Header.Lock);
          KeAbPostRelease((ULONG_PTR)&v40[1]);
          v45 = v39->KernelApcDisable + 1;
          v39->KernelApcDisable = v45;
          if ( !v45
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
            && !v39->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( (*((_DWORD *)v38 + 193) & 0x4000000) == 0 )
          {
            _InterlockedOr(v79, 0);
            if ( (*((_QWORD *)v38 + 91) & 1) != 0 )
            {
              v77 = KeAbPreAcquire((ULONG_PTR)(v38 + 728), 0LL, 0LL, v44);
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v38 + 91, v77, (ULONG_PTR)(v38 + 728), v78);
              if ( v77 )
                *(_BYTE *)(v77 + 26) |= 1u;
              ExfReleasePushLockExclusive((volatile signed __int64 *)v38 + 91);
              if ( v77 )
                KeAbPostRelease((ULONG_PTR)(v38 + 728));
            }
            if ( (*((_DWORD *)v38 + 193) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v38, (__int64)v43) )
            {
              ObfDereferenceObjectWithTag(v38, 0x746C6644u);
              v38 = 0LL;
            }
          }
          if ( v43 )
            PspDereferenceSiloObject(v43);
          v23 = a6;
        }
        goto LABEL_64;
      }
LABEL_186:
      *v31 &= 0xFFFFFFFFFFFE0001uLL;
    }
    v38 = 0LL;
    goto LABEL_130;
  }
  v15 = PsLookupProcessThreadByCid(&v97, &Object, &v99);
  if ( v15 < 0 )
    goto LABEL_116;
  ObfDereferenceObject(v99);
  v38 = Object;
LABEL_69:
  v47 = PsProcessType;
  v98 = 0LL;
  v15 = ObReferenceObjectByPointerWithTag(v38, 0, (POBJECT_TYPE)PsProcessType, v23, 0x6E48624Fu);
  if ( v15 >= 0 )
  {
    if ( !v47 )
      v47 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v38 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v38 - 48) >> 8)];
    if ( (v88 & (_DWORD)v47[9]) != 0 || (*(v38 - 21) & 1) != 0 && *((_QWORD *)v38 - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(v38, 0x6E48624Fu);
      v15 = -1073741811;
    }
    else
    {
      LOBYTE(v80) = v23;
      v15 = ObpCreateHandle(1LL, v38, 0LL, v110, 0, v88, v80, 0LL, 0LL, &v98);
      if ( v15 < 0 )
        ObfDereferenceObjectWithTag(v38, 0x6E48624Fu);
    }
  }
  SepDeleteAccessState((__int64)v110);
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v114);
  v114 = 0LL;
  if ( v113 )
    ObfDereferenceObject(v113);
  v113 = 0LL;
  v90 = *((_DWORD *)Object + 186);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v15 < 0 )
    goto LABEL_117;
  *v100 = v98;
  v48 = v84;
LABEL_80:
  v94 = v15;
  v93 = v48;
  v95 = v90;
  UserData.Ptr = (ULONGLONG)&v95;
  *(_QWORD *)&UserData.Size = 4LL;
  v117 = &v93;
  v118 = 4LL;
  v119 = &v94;
  v120 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  return (unsigned int)v15;
}
