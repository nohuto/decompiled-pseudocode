/*
 * XREFs of PfQuerySuperfetchInformation @ 0x140431980
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140014C60 (SepPrivilegeCheck.c)
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PfpMemoryRangesQuery @ 0x1400FF74C (PfpMemoryRangesQuery.c)
 *     PfpMemoryListQuery @ 0x140128D6C (PfpMemoryListQuery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PfpPfnPrioRequest @ 0x1404BEB40 (PfpPfnPrioRequest.c)
 *     PfGetCompletedTrace @ 0x1404F74C8 (PfGetCompletedTrace.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     SepFilterPrivilegeAudits @ 0x1405416C0 (SepFilterPrivilegeAudits.c)
 *     PfpQueryGpuUtilization @ 0x140545A28 (PfpQueryGpuUtilization.c)
 *     PfpVirtualQuery @ 0x14056850C (PfpVirtualQuery.c)
 *     PfpQueryScenarioInformation @ 0x140568774 (PfpQueryScenarioInformation.c)
 *     MmLogQueryCombineStats @ 0x1406A92D0 (MmLogQueryCombineStats.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, int a3, __int64 a4, _DWORD *a5)
{
  unsigned __int8 v5; // si
  void *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  _KPROCESS *Process; // r13
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r9
  __int16 v15; // ax
  unsigned __int64 *v16; // r14
  ULONG_PTR v17; // rbx
  __int64 v18; // r9
  __int64 v19; // rcx
  char v20; // r14
  _QWORD **v21; // rax
  void *v22; // r15
  _BYTE *v25; // rcx
  struct _KTHREAD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r9
  int v29; // ebx
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  _BYTE *v32; // rcx
  _QWORD *v33; // rax
  _BYTE *v34; // rcx
  struct _KTHREAD *v35; // rdi
  unsigned __int64 *v36; // r13
  __int64 v37; // rbx
  __int64 v38; // r9
  __int16 v39; // ax
  PSE_EXPORTS v40; // r13
  _DWORD *v41; // rdi
  __int64 v42; // [rsp+48h] [rbp-E0h]
  __int128 v43; // [rsp+50h] [rbp-D8h] BYREF
  volatile void *Address[2]; // [rsp+60h] [rbp-C8h]
  PVOID Object; // [rsp+70h] [rbp-B8h] BYREF
  int v46; // [rsp+78h] [rbp-B0h]
  ULONG_PTR v47; // [rsp+80h] [rbp-A8h]
  struct _LIST_ENTRY *Blink; // [rsp+88h] [rbp-A0h]
  __int128 v49; // [rsp+90h] [rbp-98h]
  __int128 v50; // [rsp+A8h] [rbp-80h]
  unsigned int v51; // [rsp+B8h] [rbp-70h] BYREF
  int v52; // [rsp+BCh] [rbp-6Ch]
  LUID v53; // [rsp+C0h] [rbp-68h] BYREF
  int v54; // [rsp+C8h] [rbp-60h]
  char v55[4]; // [rsp+D0h] [rbp-58h] BYREF
  int v56; // [rsp+D4h] [rbp-54h]
  int v57; // [rsp+E8h] [rbp-40h]
  int v58; // [rsp+ECh] [rbp-3Ch]

  v5 = a4;
  if ( a3 == 32 )
  {
    v6 = 0LL;
    v7 = 0;
    v43 = *a2;
    *(_OWORD *)Address = a2[1];
    if ( (_QWORD)v43 != 0x6B7568430000002DLL )
      return (unsigned int)-1073741811;
    v8 = DWORD2(v43);
    if ( DWORD2(v43) > 0x1C || (v9 = 268501248, !_bittest(&v9, DWORD2(v43))) )
    {
      v51 = 1;
      v52 = 1;
      v53 = SeProfileSingleProcessPrivilege;
      v54 = 0;
      Process = KeGetCurrentThread()->ApcState.Process;
      CurrentThread = KeGetCurrentThread();
      Blink = Process[1].Header.WaitListHead.Blink;
      if ( CurrentThread && (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
      {
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        v13 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0LL, a4);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(
            (unsigned __int64 *)&CurrentThread[1].WaitBlockList,
            v13,
            (ULONG_PTR)&CurrentThread[1].WaitBlockList,
            v14);
        if ( v13 )
          *(_BYTE *)(v13 + 26) |= 1u;
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
        {
          v6 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v6);
          v46 = CurrentThread[1].SystemCallNumber & 3;
        }
        else
        {
          v6 = 0LL;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
        KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
        v15 = v12->KernelApcDisable + 1;
        v12->KernelApcDisable = v15;
        if ( !v15
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
          && !v12->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      Object = v6;
      v16 = &Process[1].Affinity.Bitmap[5];
      v17 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
      if ( !v17 )
      {
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        v36 = (unsigned __int64 *)&Process[1];
        v37 = KeAbPreAcquire((ULONG_PTR)v36, 0LL, 0LL, v18);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v36, v37, (ULONG_PTR)v36, v38);
        if ( v37 )
          *(_BYTE *)(v37 + 26) |= 1u;
        v17 = ObFastReferenceObjectLocked(v16);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v36);
        KeAbPostRelease((ULONG_PTR)v36);
        v39 = v35->KernelApcDisable + 1;
        v35->KernelApcDisable = v39;
        if ( !v39
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
          && !v35->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v6 = Object;
      }
      v47 = v17;
      if ( v5 )
      {
        if ( v6 && v46 < 2 )
        {
          v20 = 0;
        }
        else
        {
          v19 = v17;
          if ( v6 )
            v19 = (__int64)v6;
          v20 = SepPrivilegeCheck(v19, (__int64)&v53, v51, v52, v5);
        }
      }
      else
      {
        v20 = 1;
      }
      if ( v5 )
      {
        v21 = (_QWORD **)v17;
        if ( v6 )
          v21 = (_QWORD **)v6;
        v22 = (void *)*v21[19];
        if ( !RtlEqualSid(SeLocalSystemSid, v22) )
        {
          if ( (v40 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v22))
            && !RtlEqualSid(v40->SeLocalServiceSid, v22)
            || (unsigned __int8)SepFilterPrivilegeAudits(1LL, &v51) )
          {
            SepAdtPrivilegedServiceAuditAlarm(
              (unsigned int)&Object,
              (unsigned int)&SeSubsystemName,
              0,
              (_DWORD)v6,
              v17,
              (__int64)&v51,
              v20);
          }
        }
      }
      ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v47);
      v47 = 0LL;
      if ( Object )
        ObfDereferenceObject(Object);
      Object = 0LL;
      if ( !v20 )
        return (unsigned int)-1073741790;
      v7 = 0;
      v8 = DWORD2(v43);
    }
    if ( v8 == 6 )
    {
      return (unsigned int)PfpPfnPrioRequest(&v43, v5, a5);
    }
    else
    {
      switch ( v8 )
      {
        case 1:
          return (unsigned int)PfGetCompletedTrace(Address[0], LODWORD(Address[1]), v5, a5);
        case 2:
          if ( LODWORD(Address[1]) != 28 )
            goto LABEL_101;
          v26 = KeGetCurrentThread();
          --v26->KernelApcDisable;
          v27 = KeAbPreAcquire((ULONG_PTR)qword_1403534A8, 0LL, 0LL, a4);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403534A8, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(qword_1403534A8, v27, (ULONG_PTR)qword_1403534A8, v28);
          if ( v27 )
            *(_BYTE *)(v27 + 26) |= 1u;
          v50 = xmmword_1403532F4;
          v42 = qword_140353304;
          v29 = dword_14035330C;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403534A8, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)qword_1403534A8);
          KeAbPostRelease((ULONG_PTR)qword_1403534A8);
          v30 = KeGetCurrentThread();
          v31 = v30->KernelApcDisable + 1;
          v30->KernelApcDisable = v31;
          if ( !v31
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
            && !v30->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( v5 )
          {
            v32 = Address[0];
            if ( ((__int64)Address[0] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( Address[0] >= (volatile void *)MmUserProbeAddress )
              v32 = (_BYTE *)MmUserProbeAddress;
            *v32 = *v32;
            v32[27] = v32[27];
          }
          v33 = Address[0];
          *(_OWORD *)Address[0] = v50;
          v33[2] = v42;
          *((_DWORD *)v33 + 6) = v29;
          *a5 = 28;
          v7 = 0;
          break;
        case 8:
          return (unsigned int)PfpPrivSourceEnum(&v43, v5, a5);
        case 9:
          v7 = 0;
          if ( LODWORD(Address[1]) != 4 )
            goto LABEL_101;
          if ( v5 )
          {
            v34 = Address[0];
            if ( ((__int64)Address[0] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( Address[0] >= (volatile void *)MmUserProbeAddress )
              v34 = (_BYTE *)MmUserProbeAddress;
            *v34 = *v34;
            v34[3] = v34[3];
            v7 = 0;
          }
          *(_DWORD *)Address[0] = dword_140367DD0;
          *a5 = 4;
          break;
        case 12:
          return (unsigned int)PfpQueryScenarioInformation(&v43, v5, a5);
        case 16:
          return (unsigned int)PfpMemoryListQuery((__int64)&v43, v5, a5);
        case 17:
          return (unsigned int)PfpMemoryRangesQuery((__int64)&v43, v5, a5);
        case 20:
          if ( LODWORD(Address[1]) != 16 )
            goto LABEL_101;
          v7 = 0;
          v49 = 0uLL;
          if ( v5 )
          {
            v25 = Address[0];
            if ( ((__int64)Address[0] & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( Address[0] >= (volatile void *)MmUserProbeAddress )
              v25 = (_BYTE *)MmUserProbeAddress;
            *v25 = *v25;
            v25[15] = v25[15];
            v7 = 0;
          }
          v49 = *(_OWORD *)Address[0];
          if ( (_DWORD)v49 == 1 )
          {
            *((_QWORD *)&v49 + 1) = qword_140353620;
            *(_OWORD *)Address[0] = v49;
            *a5 = 16;
          }
          else
          {
            v7 = -1073741735;
          }
          break;
        case 23:
          return (unsigned int)PfpVirtualQuery(&v43, v5, a5);
        case 24:
          if ( LODWORD(Address[1]) == 16 )
          {
            MmLogQueryCombineStats(0LL, v55);
            v41 = Address[0];
            if ( v5 )
              ProbeForWrite(Address[0], 0x10uLL, 4u);
            if ( *(_DWORD *)Address[0] == 1 )
            {
              *((_DWORD *)Address[0] + 1) = v56;
              v41[2] = v57;
              v41[3] = v58;
            }
            else
            {
              v7 = -1073741811;
            }
          }
          else
          {
LABEL_101:
            v7 = -1073741306;
          }
          break;
        case 27:
          return (unsigned int)PfpQueryFileExtentsRequest(&v43, v5, a5);
        case 28:
          return (unsigned int)PfpQueryGpuUtilization(&v43, v5, a5);
        default:
          v7 = -1073741821;
          break;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return v7;
}
