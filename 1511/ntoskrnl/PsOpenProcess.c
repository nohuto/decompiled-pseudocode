/*
 * XREFs of PsOpenProcess @ 0x140476110
 * Callers:
 *     NtOpenProcess @ 0x140472B20 (NtOpenProcess.c)
 *     NtAlpcOpenSenderProcess @ 0x140480FF8 (NtAlpcOpenSenderProcess.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x1400432D0 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140043450 (SepCreateAccessStateFromSubjectContext.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     ExLockHandleTableEntry @ 0x140079FA4 (ExLockHandleTableEntry.c)
 *     SepPrivilegeCheck @ 0x14009DDF0 (SepPrivilegeCheck.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14009E120 (ObReferenceObjectByPointerWithTag.c)
 *     PsIsProcessInSilo @ 0x14009E1A0 (PsIsProcessInSilo.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400D0410 (ExSlowReplenishHandleTableEntry.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140478A74 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 *     PsLookupProcessThreadByCid @ 0x1404AFDB0 (PsLookupProcessThreadByCid.c)
 *     SepFilterPrivilegeAudits @ 0x1404B0000 (SepFilterPrivilegeAudits.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(_QWORD *a1, ACCESS_MASK a2, __int64 a3, __int128 *a4, char a5, char a6)
{
  bool v7; // cl
  char v8; // al
  GENERIC_MAPPING *v9; // r12
  _KPROCESS *Process; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  void *v12; // r14
  ULONG_PTR v13; // r14
  int v14; // ebx
  _KPROCESS *v15; // r14
  struct _KTHREAD *v16; // rsi
  void *v17; // rbx
  ULONG_PTR v18; // rsi
  __int64 v19; // rcx
  char v20; // r14
  _QWORD **v21; // rax
  void *v22; // r15
  struct _KTHREAD *v23; // r14
  __int64 v24; // rcx
  volatile signed __int64 *v25; // rax
  volatile signed __int64 *v26; // r15
  __int64 v27; // r13
  signed __int64 v28; // rcx
  __int64 v29; // rsi
  unsigned __int128 v30; // rt0
  unsigned __int8 v31; // tt
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rsi
  struct _KTHREAD *v34; // rbx
  void *JobSilo; // rbx
  __int16 v36; // ax
  POBJECT_TYPE *v37; // r14
  ACCESS_MASK v38; // eax
  int v40; // eax
  PSE_EXPORTS v41; // r13
  struct _KTHREAD *v42; // r15
  struct _KTHREAD *v43; // r15
  int v44; // ebx
  signed __int64 v45; // rax
  signed __int64 v46; // rtt
  struct _KTHREAD *v47; // rbx
  struct _KTHREAD *v48; // rbx
  signed __int32 v49[8]; // [rsp+0h] [rbp-328h] BYREF
  bool v50; // [rsp+50h] [rbp-2D8h]
  char v51; // [rsp+51h] [rbp-2D7h]
  bool v52; // [rsp+52h] [rbp-2D6h]
  bool v53; // [rsp+53h] [rbp-2D5h]
  bool v54; // [rsp+54h] [rbp-2D4h]
  bool v55; // [rsp+55h] [rbp-2D3h]
  ACCESS_MASK v56; // [rsp+58h] [rbp-2D0h]
  unsigned int v57; // [rsp+5Ch] [rbp-2CCh]
  ACCESS_MASK v58; // [rsp+60h] [rbp-2C8h]
  int v59; // [rsp+68h] [rbp-2C0h]
  unsigned __int128 v60; // [rsp+70h] [rbp-2B8h]
  int v61; // [rsp+80h] [rbp-2A8h] BYREF
  PVOID Object; // [rsp+88h] [rbp-2A0h] BYREF
  int v63; // [rsp+90h] [rbp-298h] BYREF
  ACCESS_MASK v64; // [rsp+98h] [rbp-290h] BYREF
  __int128 v65; // [rsp+A0h] [rbp-288h] BYREF
  PVOID v66; // [rsp+B0h] [rbp-278h] BYREF
  int v67; // [rsp+B8h] [rbp-270h]
  ULONG_PTR v68; // [rsp+C0h] [rbp-268h]
  struct _LIST_ENTRY *v69; // [rsp+C8h] [rbp-260h]
  __int64 v70; // [rsp+D0h] [rbp-258h] BYREF
  PVOID v71; // [rsp+D8h] [rbp-250h] BYREF
  _QWORD *v72; // [rsp+E0h] [rbp-248h]
  __int128 v73; // [rsp+E8h] [rbp-240h] BYREF
  ULONG_PTR v74; // [rsp+F8h] [rbp-230h]
  struct _LIST_ENTRY *Blink; // [rsp+100h] [rbp-228h]
  __int64 v76; // [rsp+108h] [rbp-220h]
  signed __int64 v77; // [rsp+110h] [rbp-218h]
  unsigned int v78; // [rsp+118h] [rbp-210h] BYREF
  int v79; // [rsp+11Ch] [rbp-20Ch]
  LUID v80; // [rsp+120h] [rbp-208h] BYREF
  int v81; // [rsp+128h] [rbp-200h]
  struct _SECURITY_SUBJECT_CONTEXT v82; // [rsp+130h] [rbp-1F8h] BYREF
  PVOID v83; // [rsp+150h] [rbp-1D8h]
  unsigned __int64 v84; // [rsp+160h] [rbp-1C8h]
  __int64 v85[28]; // [rsp+1D0h] [rbp-158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B0h] [rbp-78h] BYREF
  ACCESS_MASK *v87; // [rsp+2C0h] [rbp-68h]
  __int64 v88; // [rsp+2C8h] [rbp-60h]
  int *v89; // [rsp+2D0h] [rbp-58h]
  __int64 v90; // [rsp+2D8h] [rbp-50h]

  v56 = a2;
  v72 = a1;
  v58 = a2;
  v65 = 0LL;
  v59 = -1;
  if ( a5 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = *a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(_QWORD *)(a3 + 16) != 0LL;
    v50 = v7;
    v57 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v65 = *a4;
      v8 = 1;
      v51 = 1;
      v7 = v50;
    }
    else
    {
      v8 = 0;
      v51 = 0;
    }
  }
  else
  {
    v7 = *(_QWORD *)(a3 + 16) != 0LL;
    v50 = v7;
    if ( a6 )
      v40 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    else
      v40 = *(_DWORD *)(a3 + 24) & 0x11FF2;
    v57 = v40;
    if ( a4 )
    {
      v65 = *a4;
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
    v51 = v8;
  }
  if ( v7 || !v8 )
  {
    v14 = -1073741776;
    goto LABEL_96;
  }
  v9 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Blink = Process[1].Header.WaitListHead.Blink;
  if ( CurrentThread )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
    {
      v42 = KeGetCurrentThread();
      PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)v42);
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
      {
        v12 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        v54 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x100) != 0;
        ObfReferenceObject(v12);
        DWORD2(v73) = CurrentThread[1].SystemCallNumber & 3;
        v55 = (CurrentThread[1].SystemCallNumber & 4) != 0;
      }
      else
      {
        v12 = 0LL;
      }
      PspUnlockThreadSecurityShared((__int64)CurrentThread, (__int64)v42);
    }
    else
    {
      v12 = 0LL;
    }
    *(_QWORD *)&v73 = v12;
  }
  else
  {
    *(_QWORD *)&v73 = 0LL;
  }
  v13 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v13 )
  {
    v48 = KeGetCurrentThread();
    PspLockProcessShared((__int64)Process, (__int64)v48);
    v13 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
    PspUnlockProcessShared((__int64)Process, (__int64)v48);
  }
  v74 = v13;
  v14 = SepCreateAccessStateFromSubjectContext(&v73, &v82, v85, a2, v9);
  if ( v14 < 0 )
  {
LABEL_96:
    v38 = v56;
    goto LABEL_73;
  }
  v78 = 1;
  v79 = 1;
  v80 = SeDebugPrivilege;
  v81 = 0;
  v15 = KeGetCurrentThread()->ApcState.Process;
  v16 = KeGetCurrentThread();
  v69 = v15[1].Header.WaitListHead.Blink;
  if ( v16 )
  {
    if ( (*((_DWORD *)&v16[1].SwapListEntry + 3) & 8) != 0 )
    {
      v43 = KeGetCurrentThread();
      PspLockThreadSecurityShared((__int64)v16, (__int64)v43);
      if ( (*((_DWORD *)&v16[1].SwapListEntry + 3) & 8) != 0 )
      {
        v17 = (void *)(*(_QWORD *)&v16[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        v53 = (*((_DWORD *)&v16[1].SwapListEntry + 3) & 0x100) != 0;
        ObfReferenceObject(v17);
        v67 = v16[1].SystemCallNumber & 3;
        v52 = (v16[1].SystemCallNumber & 4) != 0;
      }
      else
      {
        v17 = 0LL;
      }
      PspUnlockThreadSecurityShared((__int64)v16, (__int64)v43);
    }
    else
    {
      v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
  }
  v66 = v17;
  v18 = ObFastReferenceObject((signed __int64 *)&v15[1].Affinity.Bitmap[5]);
  if ( !v18 )
  {
    v47 = KeGetCurrentThread();
    PspLockProcessShared((__int64)v15, (__int64)v47);
    v18 = ObFastReferenceObjectLocked(&v15[1].Affinity.Bitmap[5]);
    PspUnlockProcessShared((__int64)v15, (__int64)v47);
    v17 = v66;
  }
  v68 = v18;
  if ( a6 )
  {
    if ( v17 )
    {
      if ( v67 < 2 )
      {
        v20 = 0;
        goto LABEL_29;
      }
      v19 = (__int64)v17;
    }
    else
    {
      v19 = v18;
    }
    v20 = SepPrivilegeCheck(v19, (__int64)&v80, v78, v79, a6);
  }
  else
  {
    v20 = 1;
  }
LABEL_29:
  if ( a6 )
  {
    v21 = v17 ? (_QWORD **)v17 : (_QWORD **)v18;
    v22 = (void *)*v21[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v22) )
    {
      if ( (v41 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v22))
        && !RtlEqualSid(v41->SeLocalServiceSid, v22)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, &v78) )
      {
        SepAdtPrivilegedServiceAuditAlarm(
          (unsigned int)&v66,
          (unsigned int)&SeSubsystemName,
          0,
          (_DWORD)v17,
          v18,
          (__int64)&v78,
          v20);
      }
    }
  }
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v68);
  v68 = 0LL;
  if ( v66 )
    ObfDereferenceObject(v66);
  v66 = 0LL;
  if ( v20 )
  {
    if ( ((__int64)v82.PrimaryToken & 0x2000000) != 0 )
      HIDWORD(v82.PrimaryToken) |= 0x1FFFFFu;
    else
      HIDWORD(v82.PrimaryToken) |= LODWORD(v82.PrimaryToken);
    LODWORD(v82.PrimaryToken) = 0;
  }
  if ( !*((_QWORD *)&v65 + 1) )
  {
    v23 = KeGetCurrentThread();
    --v23->SpecialApcDisable;
    v24 = PspCidTable;
    if ( (v65 & 0x3FC) == 0 )
      goto LABEL_108;
    v25 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, v65);
    v26 = v25;
    if ( !v25 )
      goto LABEL_108;
    v27 = PspCidTable;
    _m_prefetchw((const void *)v25);
    *(_QWORD *)&v60 = *v25;
    v28 = *((_QWORD *)v25 + 1);
    *((_QWORD *)&v60 + 1) = v28;
    v29 = v60;
    while ( (v29 & 0x1FFFE) != 0 )
    {
      if ( (v29 & 1) != 0 )
      {
        v76 = v29 - 2;
        v77 = v28;
        *(_QWORD *)&v30 = v29;
        *((_QWORD *)&v30 + 1) = v28;
        v31 = _InterlockedCompareExchange128(v26, v28, v29 - 2, (signed __int64 *)&v30);
        v28 = v30 >> 64;
        v32 = v30;
        v29 = v30;
        v60 = v30;
        if ( v31 )
        {
          v24 = v32 >> 1;
          if ( (unsigned __int16)(v32 >> 1) == 16 )
          {
            v29 = ((unsigned int)v29 ^ (2 * (_DWORD)v24 - 2)) & 0x1FFFE ^ (unsigned __int64)v29;
            *(_QWORD *)&v60 = v29;
          }
          v33 = (v29 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( (*(_BYTE *)v33 & 0x7F) == 3 )
          {
LABEL_48:
            if ( v33 )
            {
              v34 = KeGetCurrentThread();
              if ( *(_QWORD *)&v34[1].WaitBlockFill11[160] == -3LL )
                JobSilo = (void *)PspGetJobSilo(v34->Process[1].Affinity.Bitmap[16]);
              else
                JobSilo = *(void **)&v34[1].WaitBlockFill11[160];
              if ( JobSilo )
                ObfReferenceObject(JobSilo);
              if ( (*(_DWORD *)(v33 + 772) & 0x4000000) != 0 )
              {
                if ( PsIsProcessInSilo((struct _KPROCESS *)v33, (__int64)JobSilo) )
                  goto LABEL_55;
LABEL_131:
                ObfDereferenceObjectWithTag((PVOID)v33, 0x746C6644u);
                v33 = 0LL;
                goto LABEL_55;
              }
              _InterlockedOr(v49, 0);
              if ( (*(_QWORD *)(v33 + 728) & 1) != 0 )
                ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v33 + 728));
              if ( (*(_DWORD *)(v33 + 772) & 0x4000000) == 0
                || !PsIsProcessInSilo((struct _KPROCESS *)v33, (__int64)JobSilo) )
              {
                goto LABEL_131;
              }
LABEL_55:
              if ( JobSilo )
                ObfDereferenceObject(JobSilo);
            }
LABEL_57:
            v36 = v23->SpecialApcDisable + 1;
            v23->SpecialApcDisable = v36;
            if ( !v36 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
              KiCheckForKernelApcDelivery(v24);
            if ( v33 )
            {
              Object = (PVOID)v33;
              goto LABEL_62;
            }
            v14 = -1073741813;
LABEL_95:
            SeDeleteAccessState(&v82);
            goto LABEL_96;
          }
          ObfDereferenceObject((PVOID)v33);
LABEL_108:
          v33 = 0LL;
          goto LABEL_57;
        }
      }
      else
      {
        ExpBlockOnLockedHandleEntry(v27, v26, v29);
        _m_prefetchw((const void *)v26);
        *(_QWORD *)&v60 = *v26;
        v28 = *((_QWORD *)v26 + 1);
        *((_QWORD *)&v60 + 1) = v28;
        v29 = v60;
      }
    }
    v44 = 0;
    if ( !ExLockHandleTableEntry(PspCidTable, v26) )
      goto LABEL_108;
    v33 = (*(__int64 *)v26 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (*(_BYTE *)v33 & 0x7F) == 3 )
    {
      if ( (*(_DWORD *)(((*(__int64 *)v26 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x304) & 0x400000C) == 0x4000000 )
        v44 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v26);
      _m_prefetchw((const void *)(v33 - 48));
      v45 = *(_QWORD *)(v33 - 48);
      if ( v45 )
      {
        while ( 1 )
        {
          v46 = v45;
          v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 - 48), v45 + (unsigned int)(v44 + 1), v45);
          if ( v46 == v45 )
            break;
          if ( !v45 )
            goto LABEL_114;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v33 - 48, 1, v44 + 1, 1953261124);
        goto LABEL_105;
      }
LABEL_114:
      *v26 &= 0xFFFFFFFFFFFE0001uLL;
    }
    v33 = 0LL;
LABEL_105:
    ExUnlockHandleTableEntry(PspCidTable, v26);
    goto LABEL_48;
  }
  v14 = PsLookupProcessThreadByCid(&v65, &Object, &v71);
  if ( v14 < 0 )
    goto LABEL_95;
  ObfDereferenceObject(v71);
  v33 = (unsigned __int64)Object;
LABEL_62:
  v37 = PsProcessType;
  v70 = 0LL;
  v14 = ObReferenceObjectByPointerWithTag((PVOID)v33, 0, (POBJECT_TYPE)PsProcessType, a6, 0x6E48624Fu);
  if ( v14 >= 0 )
  {
    if ( !v37 )
      v37 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v33 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v33 - 48) >> 8)];
    if ( (v57 & (_DWORD)v37[9]) != 0 || (*(_BYTE *)(v33 - 21) & 1) != 0 && *(_QWORD *)(v33 - 16) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag((PVOID)v33, 0x6E48624Fu);
      v14 = -1073741811;
    }
    else
    {
      v14 = ObpCreateHandle(1u, (char *)v33, 0, (__int64)&v82, 0, v57, a6, 0LL, 0LL, &v70);
      if ( v14 < 0 )
        ObfDereferenceObjectWithTag((PVOID)v33, 0x6E48624Fu);
    }
  }
  SepDeleteAccessState((__int64)&v82);
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v84);
  v84 = 0LL;
  if ( v83 )
    ObfDereferenceObject(v83);
  v83 = 0LL;
  v59 = *((_DWORD *)Object + 186);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v14 < 0 )
    goto LABEL_96;
  *v72 = v70;
  v38 = v56;
LABEL_73:
  v61 = v14;
  v64 = v38;
  v63 = v59;
  UserData.Ptr = (ULONGLONG)&v63;
  *(_QWORD *)&UserData.Size = 4LL;
  v87 = &v64;
  v88 = 4LL;
  v89 = &v61;
  v90 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  return (unsigned int)v14;
}
