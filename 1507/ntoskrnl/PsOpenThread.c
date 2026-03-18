/*
 * XREFs of PsOpenThread @ 0x140432090
 * Callers:
 *     NtOpenThread @ 0x14042E710 (NtOpenThread.c)
 *     NtAlpcOpenSenderThread @ 0x1405422C4 (NtAlpcOpenSenderThread.c)
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
 *     PsIsThreadInSilo @ 0x140243ECC (PsIsThreadInSilo.c)
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

__int64 __fastcall PsOpenThread(_QWORD *a1, ACCESS_MASK a2, __int64 a3, __int64 a4, char a5, char a6)
{
  bool v6; // cl
  char v7; // al
  char v8; // r13
  GENERIC_MAPPING *v9; // r15
  _KPROCESS *Process; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  void *v12; // r14
  unsigned __int64 *v13; // r14
  ULONG_PTR v14; // rbx
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // r9
  _KPROCESS *v18; // r14
  struct _KTHREAD *v19; // rsi
  void *v20; // rbx
  unsigned __int64 *v21; // r15
  ULONG_PTR v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rcx
  char v25; // r12
  _QWORD **v26; // rax
  void *v27; // r14
  PSE_EXPORTS v28; // r15
  struct _KTHREAD *v29; // r15
  volatile signed __int64 *v30; // rax
  __int64 v31; // r9
  volatile signed __int64 *v32; // r14
  __int64 v33; // r12
  signed __int64 v34; // rcx
  __int64 v35; // rsi
  unsigned __int128 v36; // rt0
  unsigned __int8 v37; // tt
  unsigned __int64 v38; // rax
  unsigned __int64 *v39; // rsi
  struct _KTHREAD *v40; // r14
  struct _KTHREAD *v41; // rax
  unsigned __int64 *v42; // r12
  __int64 v43; // rbx
  __int64 v44; // r9
  void *v45; // rbx
  __int64 v46; // r9
  __int16 v47; // ax
  __int16 v48; // ax
  POBJECT_TYPE *v49; // r14
  ACCESS_MASK v50; // eax
  int v52; // ebx
  __int64 v53; // rsi
  signed __int64 v54; // r8
  int v55; // eax
  signed __int64 v56; // rax
  signed __int64 v57; // rtt
  __int64 v58; // rcx
  volatile __int64 *v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // r9
  struct _KTHREAD *v62; // rcx
  __int16 v63; // ax
  struct _KTHREAD *v64; // r12
  __int64 v65; // rbx
  __int64 v66; // r9
  __int16 v67; // ax
  struct _KTHREAD *v68; // r12
  unsigned __int64 *v69; // rsi
  __int64 v70; // rbx
  __int64 v71; // r9
  __int16 v72; // ax
  struct _KTHREAD *v73; // rbx
  unsigned __int64 *v74; // r14
  __int64 v75; // rsi
  __int64 v76; // r9
  __int16 v77; // ax
  __int64 v78; // r12
  __int64 v79; // r9
  signed __int32 v80[8]; // [rsp+0h] [rbp-348h] BYREF
  int v81; // [rsp+30h] [rbp-318h]
  bool v82; // [rsp+50h] [rbp-2F8h]
  char v83; // [rsp+51h] [rbp-2F7h]
  bool v84; // [rsp+52h] [rbp-2F6h]
  bool v85; // [rsp+53h] [rbp-2F5h]
  bool v86; // [rsp+54h] [rbp-2F4h]
  bool v87; // [rsp+55h] [rbp-2F3h]
  ACCESS_MASK v88; // [rsp+58h] [rbp-2F0h]
  int v89; // [rsp+68h] [rbp-2E0h]
  ACCESS_MASK v90; // [rsp+70h] [rbp-2D8h]
  __int128 v91; // [rsp+78h] [rbp-2D0h] BYREF
  unsigned __int128 v92; // [rsp+88h] [rbp-2C0h]
  PVOID Object; // [rsp+98h] [rbp-2B0h] BYREF
  int v94; // [rsp+A0h] [rbp-2A8h] BYREF
  int v95; // [rsp+A8h] [rbp-2A0h] BYREF
  ACCESS_MASK v96; // [rsp+B0h] [rbp-298h] BYREF
  struct _KTHREAD *v97; // [rsp+B8h] [rbp-290h]
  int v98; // [rsp+C0h] [rbp-288h] BYREF
  PVOID v99; // [rsp+C8h] [rbp-280h] BYREF
  int v100; // [rsp+D0h] [rbp-278h]
  ULONG_PTR v101; // [rsp+D8h] [rbp-270h]
  struct _LIST_ENTRY *v102; // [rsp+E0h] [rbp-268h]
  __int64 v103; // [rsp+E8h] [rbp-260h] BYREF
  _QWORD *v104; // [rsp+F0h] [rbp-258h]
  __int128 v105; // [rsp+F8h] [rbp-250h] BYREF
  ULONG_PTR v106; // [rsp+108h] [rbp-240h]
  struct _LIST_ENTRY *Blink; // [rsp+110h] [rbp-238h]
  __int64 v108; // [rsp+118h] [rbp-230h]
  signed __int64 v109; // [rsp+120h] [rbp-228h]
  unsigned int v110; // [rsp+128h] [rbp-220h] BYREF
  int v111; // [rsp+12Ch] [rbp-21Ch]
  LUID v112; // [rsp+130h] [rbp-218h] BYREF
  int v113; // [rsp+138h] [rbp-210h]
  _QWORD v114[2]; // [rsp+140h] [rbp-208h] BYREF
  int v115; // [rsp+150h] [rbp-1F8h]
  int v116; // [rsp+154h] [rbp-1F4h]
  PVOID v117; // [rsp+160h] [rbp-1E8h]
  unsigned __int64 v118; // [rsp+170h] [rbp-1D8h]
  __int64 v119[28]; // [rsp+1E0h] [rbp-168h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2C0h] [rbp-88h] BYREF
  int *v121; // [rsp+2D0h] [rbp-78h]
  __int64 v122; // [rsp+2D8h] [rbp-70h]
  ACCESS_MASK *v123; // [rsp+2E0h] [rbp-68h]
  __int64 v124; // [rsp+2E8h] [rbp-60h]
  int *v125; // [rsp+2F0h] [rbp-58h]
  __int64 v126; // [rsp+2F8h] [rbp-50h]

  v90 = a2;
  v88 = a2;
  v104 = a1;
  v91 = 0LL;
  if ( a5 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = *a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *(_QWORD *)(a3 + 16) != 0LL;
    v82 = v6;
    v89 = *(_DWORD *)(a3 + 24) & 0xDF2;
    if ( a4 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v91 = *(_OWORD *)a4;
      v7 = 1;
      v83 = 1;
      v6 = v82;
    }
    else
    {
      v7 = 0;
      v83 = 0;
    }
    v8 = a6;
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 16) != 0LL;
    v82 = v6;
    v8 = a6;
    if ( a6 )
      v55 = *(_DWORD *)(a3 + 24) & 0xDF2;
    else
      v55 = *(_DWORD *)(a3 + 24) & 0x10FF2;
    v89 = v55;
    if ( a4 )
    {
      v91 = *(_OWORD *)a4;
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    v83 = v7;
  }
  if ( v6 || !v7 )
  {
    v16 = -1073741776;
    goto LABEL_91;
  }
  v9 = (GENERIC_MAPPING *)((char *)PsThreadType + 76);
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Blink = Process[1].Header.WaitListHead.Blink;
  if ( CurrentThread )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
    {
      v97 = KeGetCurrentThread();
      --v97->KernelApcDisable;
      v60 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (unsigned __int64 *)&CurrentThread[1].WaitBlockList,
          v60,
          (ULONG_PTR)&CurrentThread[1].WaitBlockList,
          v61);
      if ( v60 )
        *(_BYTE *)(v60 + 26) |= 1u;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
      {
        v12 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        v86 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x100) != 0;
        ObfReferenceObject(v12);
        DWORD2(v105) = CurrentThread[1].SystemCallNumber & 3;
        v87 = (CurrentThread[1].SystemCallNumber & 4) != 0;
      }
      else
      {
        v12 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      v62 = v97;
      v63 = v97->KernelApcDisable + 1;
      v97->KernelApcDisable = v63;
      if ( !v63
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v62->ApcState.ApcListHead[0].Flink != &v62->152
        && !v62->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v12 = 0LL;
    }
    *(_QWORD *)&v105 = v12;
  }
  else
  {
    *(_QWORD *)&v105 = 0LL;
  }
  v13 = &Process[1].Affinity.Bitmap[5];
  v14 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v14 )
  {
    v68 = KeGetCurrentThread();
    --v68->KernelApcDisable;
    v69 = (unsigned __int64 *)&Process[1];
    v70 = KeAbPreAcquire((ULONG_PTR)v69, 0LL, 0LL, v15);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v69, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v69, v70, (ULONG_PTR)v69, v71);
    if ( v70 )
      *(_BYTE *)(v70 + 26) |= 1u;
    v14 = ObFastReferenceObjectLocked(v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v69, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v69);
    KeAbPostRelease((ULONG_PTR)v69);
    v72 = v68->KernelApcDisable + 1;
    v68->KernelApcDisable = v72;
    if ( !v72
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v68->ApcState.ApcListHead[0].Flink != &v68->152
      && !v68->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v106 = v14;
  v16 = SepCreateAccessStateFromSubjectContext(&v105, v114, v119, v88, v9);
  if ( v16 < 0 )
  {
LABEL_91:
    v50 = v88;
    goto LABEL_79;
  }
  v110 = 1;
  v111 = 1;
  v112 = SeDebugPrivilege;
  v113 = 0;
  v18 = KeGetCurrentThread()->ApcState.Process;
  v19 = KeGetCurrentThread();
  v102 = v18[1].Header.WaitListHead.Blink;
  if ( v19 )
  {
    if ( (*((_DWORD *)&v19[1].SwapListEntry + 3) & 8) != 0 )
    {
      v64 = KeGetCurrentThread();
      --v64->KernelApcDisable;
      v65 = KeAbPreAcquire((ULONG_PTR)&v19[1].WaitBlockList, 0LL, 0LL, v17);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v19[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (unsigned __int64 *)&v19[1].WaitBlockList,
          v65,
          (ULONG_PTR)&v19[1].WaitBlockList,
          v66);
      if ( v65 )
        *(_BYTE *)(v65 + 26) |= 1u;
      if ( (*((_DWORD *)&v19[1].SwapListEntry + 3) & 8) != 0 )
      {
        v20 = (void *)(*(_QWORD *)&v19[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        v85 = (*((_DWORD *)&v19[1].SwapListEntry + 3) & 0x100) != 0;
        ObfReferenceObject(v20);
        v100 = v19[1].SystemCallNumber & 3;
        v84 = (v19[1].SystemCallNumber & 4) != 0;
      }
      else
      {
        v20 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v19[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&v19[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&v19[1].WaitBlockList);
      v67 = v64->KernelApcDisable + 1;
      v64->KernelApcDisable = v67;
      if ( !v67
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v64->ApcState.ApcListHead[0].Flink != &v64->152
        && !v64->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v20 = 0LL;
    }
  }
  else
  {
    v20 = 0LL;
  }
  v99 = v20;
  v21 = &v18[1].Affinity.Bitmap[5];
  v22 = ObFastReferenceObject((signed __int64 *)&v18[1].Affinity.Bitmap[5]);
  if ( !v22 )
  {
    v73 = KeGetCurrentThread();
    --v73->KernelApcDisable;
    v74 = (unsigned __int64 *)&v18[1];
    v75 = KeAbPreAcquire((ULONG_PTR)v74, 0LL, 0LL, v23);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v74, v75, (ULONG_PTR)v74, v76);
    if ( v75 )
      *(_BYTE *)(v75 + 26) |= 1u;
    v22 = ObFastReferenceObjectLocked(v21);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v74, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v74);
    KeAbPostRelease((ULONG_PTR)v74);
    v77 = v73->KernelApcDisable + 1;
    v73->KernelApcDisable = v77;
    if ( !v77
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v73->ApcState.ApcListHead[0].Flink != &v73->152
      && !v73->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v20 = v99;
  }
  v101 = v22;
  if ( v8 )
  {
    if ( v20 )
    {
      if ( v100 < 2 )
      {
        v25 = 0;
        goto LABEL_28;
      }
      v24 = (__int64)v20;
    }
    else
    {
      v24 = v22;
    }
    v25 = SepPrivilegeCheck(v24, (__int64)&v112, v110, v111, v8);
  }
  else
  {
    v25 = 1;
  }
LABEL_28:
  if ( v8 )
  {
    v26 = v20 ? (_QWORD **)v20 : (_QWORD **)v22;
    v27 = (void *)*v26[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v27) )
    {
      if ( (v28 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v27))
        && !RtlEqualSid(v28->SeLocalServiceSid, v27)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, &v110) )
      {
        SepAdtPrivilegedServiceAuditAlarm(
          (unsigned int)&v99,
          (unsigned int)&SeSubsystemName,
          0,
          (_DWORD)v20,
          v22,
          (__int64)&v110,
          v25);
      }
    }
  }
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v101);
  v101 = 0LL;
  if ( v99 )
    ObfDereferenceObject(v99);
  v99 = 0LL;
  if ( v25 )
  {
    if ( (v115 & 0x2000000) != 0 )
      v116 |= 0x1FFFFFu;
    else
      v116 |= v115;
    v115 = 0;
  }
  if ( !(_QWORD)v91 )
  {
    v29 = KeGetCurrentThread();
    --v29->SpecialApcDisable;
    if ( (WORD4(v91) & 0x3FC) == 0 )
      goto LABEL_88;
    v30 = (volatile signed __int64 *)ExpLookupHandleTableEntry(PspCidTable);
    v32 = v30;
    if ( !v30 )
      goto LABEL_88;
    v33 = PspCidTable;
    _m_prefetchw((const void *)v30);
    *(_QWORD *)&v92 = *v30;
    v34 = *((_QWORD *)v30 + 1);
    *((_QWORD *)&v92 + 1) = v34;
    v35 = v92;
    while ( (v35 & 0x1FFFE) != 0 )
    {
      if ( (v35 & 1) != 0 )
      {
        v108 = v35 - 2;
        v109 = v34;
        *(_QWORD *)&v36 = v35;
        *((_QWORD *)&v36 + 1) = v34;
        v37 = _InterlockedCompareExchange128(v32, v34, v35 - 2, (signed __int64 *)&v36);
        v34 = v36 >> 64;
        v38 = v36;
        v35 = v36;
        v92 = v36;
        if ( v37 )
        {
          if ( (unsigned __int16)(v38 >> 1) == 16 )
          {
            v35 = ((unsigned int)v35 ^ (2 * (unsigned int)(v38 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v35;
            *(_QWORD *)&v92 = v35;
          }
          v39 = (unsigned __int64 *)((v35 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( (*(_BYTE *)v39 & 0x7F) == 6 )
            goto LABEL_47;
          ObfDereferenceObject(v39);
LABEL_88:
          v39 = 0LL;
LABEL_63:
          v48 = v29->SpecialApcDisable + 1;
          v29->SpecialApcDisable = v48;
          if ( !v48 && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
            KiCheckForKernelApcDelivery();
          if ( v39 )
          {
            Object = v39;
            *(_QWORD *)&v91 = v39[197];
            goto LABEL_68;
          }
          v16 = -1073741813;
LABEL_90:
          SeDeleteAccessState(v114);
          goto LABEL_91;
        }
      }
      else
      {
        ExpBlockOnLockedHandleEntry(v33, v32);
        _m_prefetchw((const void *)v32);
        *(_QWORD *)&v92 = *v32;
        v34 = *((_QWORD *)v32 + 1);
        *((_QWORD *)&v92 + 1) = v34;
        v35 = v92;
      }
    }
    v52 = 0;
    v53 = PspCidTable;
    do
    {
      while ( 1 )
      {
        _m_prefetchw((const void *)v32);
        v54 = *v32;
        if ( (*v32 & 1) != 0 )
          break;
        if ( !v54 )
          goto LABEL_88;
        ExpBlockOnLockedHandleEntry(v53, v32);
      }
    }
    while ( v54 != _InterlockedCompareExchange64(v32, v54 - 1, v54) );
    v39 = (unsigned __int64 *)((*(__int64 *)v32 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (*(_BYTE *)v39 & 0x7F) == 6 )
    {
      if ( (*(_DWORD *)(((*(__int64 *)v32 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x6BC) & 3) == 2 )
        v52 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v32);
      _m_prefetchw(v39 - 6);
      v56 = *(v39 - 6);
      if ( v56 )
      {
        while ( 1 )
        {
          v57 = v56;
          v56 = _InterlockedCompareExchange64((volatile signed __int64 *)v39 - 6, (unsigned int)(v52 + 1) + v56, v56);
          if ( v57 == v56 )
            break;
          if ( !v56 )
            goto LABEL_176;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo((__int64)(v39 - 6), 1, v52 + 1, 1953261124);
LABEL_105:
        v58 = PspCidTable;
        _InterlockedExchangeAdd64(v32, 1uLL);
        v59 = (volatile __int64 *)(v58 + 48);
        _InterlockedOr(v80, 0);
        if ( *v59 )
          ExfUnblockPushLock(v59, 0LL);
LABEL_47:
        if ( v39 )
        {
          v40 = KeGetCurrentThread();
          v97 = (struct _KTHREAD *)v40->Process;
          v41 = v97;
          --v40->KernelApcDisable;
          v42 = (unsigned __int64 *)&v41->SchedulerApcFill5[80];
          v43 = KeAbPreAcquire((ULONG_PTR)&v41->SchedulerApcFill5[80], 0LL, 0LL, v31);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v42, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v42, v43, (ULONG_PTR)v42, v44);
          if ( v43 )
            *(_BYTE *)(v43 + 26) |= 1u;
          v45 = *(void **)&v40[1].WaitBlockFill11[160];
          if ( v45 == (void *)-3LL )
            v45 = *(void **)&v97[1].WaitBlockFill11[16];
          if ( v45 )
            PspReferenceSiloObject(v45);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v42, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v42);
          KeAbPostRelease((ULONG_PTR)v42);
          v47 = v40->KernelApcDisable + 1;
          v40->KernelApcDisable = v47;
          if ( !v47
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
            && !v40->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( (*((_DWORD *)v39 + 431) & 2) == 0 )
          {
            _InterlockedOr(v80, 0);
            if ( (v39[213] & 1) != 0 )
            {
              v78 = KeAbPreAcquire((ULONG_PTR)(v39 + 213), 0LL, 0LL, v46);
              ExfAcquirePushLockExclusiveEx(v39 + 213, v78, (ULONG_PTR)(v39 + 213), v79);
              if ( v78 )
                *(_BYTE *)(v78 + 26) |= 1u;
              ExfReleasePushLockExclusive((volatile signed __int64 *)v39 + 213);
              if ( v78 )
                KeAbPostRelease((ULONG_PTR)(v39 + 213));
            }
            if ( (*((_DWORD *)v39 + 431) & 2) == 0 || !PsIsThreadInSilo((__int64)v39, (__int64)v45) )
            {
              ObfDereferenceObject(v39);
              v39 = 0LL;
            }
          }
          if ( v45 )
            PspDereferenceSiloObject(v45);
        }
        goto LABEL_63;
      }
LABEL_176:
      *v32 &= 0xFFFFFFFFFFFE0001uLL;
    }
    v39 = 0LL;
    goto LABEL_105;
  }
  v16 = PsLookupProcessThreadByCid(&v91, 0LL, &Object);
  if ( v16 < 0 )
    goto LABEL_90;
  v39 = (unsigned __int64 *)Object;
LABEL_68:
  v49 = PsThreadType;
  v103 = 0LL;
  v16 = ObReferenceObjectByPointerWithTag(v39, 0, (POBJECT_TYPE)PsThreadType, v8, 0x6E48624Fu);
  if ( v16 >= 0 )
  {
    if ( !v49 )
      v49 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v39 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v39 - 48) >> 8)];
    if ( (v89 & (_DWORD)v49[9]) != 0 || (*((_BYTE *)v39 - 21) & 1) != 0 && *(v39 - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(v39, 0x6E48624Fu);
      v16 = -1073741811;
    }
    else
    {
      LOBYTE(v81) = v8;
      v16 = ObpCreateHandle(1LL, v39, 0LL, v114, 0, v89, v81, 0LL, 0LL, &v103);
      if ( v16 < 0 )
        ObfDereferenceObjectWithTag(v39, 0x6E48624Fu);
    }
  }
  SepDeleteAccessState((__int64)v114);
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v118);
  v118 = 0LL;
  if ( v117 )
    ObfDereferenceObject(v117);
  v117 = 0LL;
  ObfDereferenceObject(Object);
  if ( v16 < 0 )
    goto LABEL_91;
  *v104 = v103;
  v50 = v88;
LABEL_79:
  v94 = v16;
  v96 = v50;
  v95 = DWORD2(v91);
  v98 = v91;
  UserData.Ptr = (ULONGLONG)&v98;
  *(_QWORD *)&UserData.Size = 4LL;
  v121 = &v95;
  v122 = 4LL;
  v123 = &v96;
  v124 = 4LL;
  v125 = &v94;
  v126 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)v16;
}
