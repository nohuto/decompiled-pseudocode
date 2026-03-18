/*
 * XREFs of PfQuerySuperfetchInformation @ 0x140475A70
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     SepPrivilegeCheck @ 0x14009DDF0 (SepPrivilegeCheck.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     PfpMemoryRangesQuery @ 0x1400C206C (PfpMemoryRangesQuery.c)
 *     PfpMemoryListQuery @ 0x1400EECF4 (PfpMemoryListQuery.c)
 *     PfLockSharedAcquire @ 0x1400FAF50 (PfLockSharedAcquire.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PfGetCompletedTrace @ 0x1403E7018 (PfGetCompletedTrace.c)
 *     PfpPfnPrioRequest @ 0x140415750 (PfpPfnPrioRequest.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140478A74 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1404B0000 (SepFilterPrivilegeAudits.c)
 *     PfpQueryGpuUtilization @ 0x1404B0D74 (PfpQueryGpuUtilization.c)
 *     PfpVirtualQuery @ 0x1404F427C (PfpVirtualQuery.c)
 *     PfpQueryScenarioInformation @ 0x1404F4348 (PfpQueryScenarioInformation.c)
 *     MmLogQueryCombineStats @ 0x14051A0A0 (MmLogQueryCombineStats.c)
 *     PfpQueryFileExtentsRequest @ 0x140630EFC (PfpQueryFileExtentsRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, int a3, unsigned __int8 a4, unsigned int *a5)
{
  void *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  _KPROCESS *Process; // r13
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v12; // r15
  __int64 v13; // rdi
  ULONG_PTR v14; // rsi
  __int64 v15; // rcx
  char v16; // bl
  _QWORD **v17; // rax
  void *v18; // r15
  _BYTE *v21; // rcx
  _DWORD *v22; // rdi
  int v23; // ebx
  _BYTE *v24; // rcx
  _QWORD *v25; // rax
  _BYTE *v26; // rcx
  struct _KTHREAD *v27; // rbx
  PSE_EXPORTS v28; // r13
  __int128 v29; // [rsp+48h] [rbp-E0h] BYREF
  volatile void *Address[2]; // [rsp+58h] [rbp-D0h]
  __int64 v31; // [rsp+68h] [rbp-C0h]
  __int128 v32; // [rsp+70h] [rbp-B8h]
  PVOID Object; // [rsp+80h] [rbp-A8h] BYREF
  int v34; // [rsp+88h] [rbp-A0h]
  ULONG_PTR v35; // [rsp+90h] [rbp-98h]
  struct _LIST_ENTRY *Blink; // [rsp+98h] [rbp-90h]
  __int128 v37; // [rsp+A8h] [rbp-80h]
  unsigned int v38; // [rsp+B8h] [rbp-70h] BYREF
  int v39; // [rsp+BCh] [rbp-6Ch]
  LUID v40; // [rsp+C0h] [rbp-68h] BYREF
  int v41; // [rsp+C8h] [rbp-60h]
  char v42[4]; // [rsp+D0h] [rbp-58h] BYREF
  int v43; // [rsp+D4h] [rbp-54h]
  int v44; // [rsp+E8h] [rbp-40h]
  int v45; // [rsp+ECh] [rbp-3Ch]

  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v6 = 0LL;
  v7 = 0;
  v29 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v29 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  v8 = DWORD2(v29);
  if ( DWORD2(v29) > 0x1C || (v9 = 268501248, !_bittest(&v9, DWORD2(v29))) )
  {
    v38 = 1;
    v39 = 1;
    v40 = SeProfileSingleProcessPrivilege;
    v41 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    CurrentThread = KeGetCurrentThread();
    Blink = Process[1].Header.WaitListHead.Blink;
    if ( CurrentThread && (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
    {
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      v13 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (unsigned __int64 *)&CurrentThread[1].WaitBlockList,
          v13,
          (ULONG_PTR)&CurrentThread[1].WaitBlockList);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) != 0 )
      {
        v6 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v6);
        v34 = CurrentThread[1].SystemCallNumber & 3;
      }
      else
      {
        v6 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v12);
    }
    Object = v6;
    v14 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v14 )
    {
      v27 = KeGetCurrentThread();
      PspLockProcessShared((__int64)Process, (__int64)v27);
      v14 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      PspUnlockProcessShared((__int64)Process, (__int64)v27);
      v6 = Object;
    }
    v35 = v14;
    if ( a4 )
    {
      if ( !v6 )
      {
        v15 = v14;
        goto LABEL_22;
      }
      if ( v34 >= 2 )
      {
        v15 = (__int64)v6;
LABEL_22:
        v16 = SepPrivilegeCheck(v15, (__int64)&v40, v38, v39, a4);
        goto LABEL_23;
      }
      v16 = 0;
    }
    else
    {
      v16 = 1;
    }
LABEL_23:
    if ( a4 )
    {
      v17 = v6 ? (_QWORD **)v6 : (_QWORD **)v14;
      v18 = (void *)*v17[19];
      if ( !RtlEqualSid(SeLocalSystemSid, v18) )
      {
        if ( (v28 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v18))
          && !RtlEqualSid(v28->SeLocalServiceSid, v18)
          || (unsigned __int8)SepFilterPrivilegeAudits(1LL, &v38) )
        {
          SepAdtPrivilegedServiceAuditAlarm(
            (unsigned int)&Object,
            (unsigned int)&SeSubsystemName,
            0,
            (_DWORD)v6,
            v14,
            (__int64)&v38,
            v16);
        }
      }
    }
    ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v35);
    v35 = 0LL;
    if ( Object )
      ObfDereferenceObject(Object);
    Object = 0LL;
    if ( !v16 )
      return (unsigned int)-1073741790;
    v7 = 0;
    v8 = DWORD2(v29);
  }
  if ( v8 == 6 )
  {
    return (unsigned int)PfpPfnPrioRequest((__int64)&v29, a4, a5);
  }
  else
  {
    switch ( v8 )
    {
      case 1:
        return (unsigned int)PfGetCompletedTrace((_QWORD *)Address[0], (unsigned int)Address[1], a4, a5);
      case 2:
        if ( LODWORD(Address[1]) != 28 )
          goto LABEL_87;
        PfLockSharedAcquire((volatile signed __int64 *)qword_140305738);
        v37 = xmmword_140305584;
        v31 = qword_140305594;
        v23 = dword_14030559C;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140305738, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)qword_140305738);
        KeAbPostRelease((ULONG_PTR)qword_140305738);
        KeLeaveCriticalRegion();
        if ( a4 )
        {
          v24 = Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)MmUserProbeAddress )
            v24 = (_BYTE *)MmUserProbeAddress;
          *v24 = *v24;
          v24[27] = v24[27];
        }
        v25 = Address[0];
        *(_OWORD *)Address[0] = v37;
        v25[2] = v31;
        *((_DWORD *)v25 + 6) = v23;
        *a5 = 28;
        v7 = 0;
        break;
      case 8:
        return (unsigned int)PfpPrivSourceEnum((__int64)&v29, a4, a5);
      case 9:
        v7 = 0;
        if ( LODWORD(Address[1]) != 4 )
          goto LABEL_87;
        if ( a4 )
        {
          v26 = Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)MmUserProbeAddress )
            v26 = (_BYTE *)MmUserProbeAddress;
          *v26 = *v26;
          v26[3] = v26[3];
          v7 = 0;
        }
        *(_DWORD *)Address[0] = dword_140317B10;
        *a5 = 4;
        break;
      case 12:
        return (unsigned int)PfpQueryScenarioInformation(&v29, a4, a5);
      case 16:
        return (unsigned int)PfpMemoryListQuery((__int64)&v29, a4, a5);
      case 17:
        return (unsigned int)PfpMemoryRangesQuery((__int64)&v29, a4, a5);
      case 20:
        if ( LODWORD(Address[1]) != 16 )
          goto LABEL_87;
        v7 = 0;
        v32 = 0uLL;
        if ( a4 )
        {
          v21 = Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)MmUserProbeAddress )
            v21 = (_BYTE *)MmUserProbeAddress;
          *v21 = *v21;
          v21[15] = v21[15];
          v7 = 0;
        }
        v32 = *(_OWORD *)Address[0];
        if ( (_DWORD)v32 == 1 )
        {
          *((_QWORD *)&v32 + 1) = qword_1403058B0;
          *(_OWORD *)Address[0] = v32;
          *a5 = 16;
        }
        else
        {
          v7 = -1073741735;
        }
        break;
      case 23:
        return (unsigned int)PfpVirtualQuery(&v29, a4, a5);
      case 24:
        if ( LODWORD(Address[1]) == 16 )
        {
          MmLogQueryCombineStats(0LL, v42);
          v22 = Address[0];
          if ( a4 )
            ProbeForWrite(Address[0], 0x10uLL, 4u);
          if ( *(_DWORD *)Address[0] == 1 )
          {
            *((_DWORD *)Address[0] + 1) = v43;
            v22[2] = v44;
            v22[3] = v45;
          }
          else
          {
            v7 = -1073741811;
          }
        }
        else
        {
LABEL_87:
          v7 = -1073741306;
        }
        break;
      case 27:
        return (unsigned int)PfpQueryFileExtentsRequest(&v29, a4, a5);
      case 28:
        return (unsigned int)PfpQueryGpuUtilization(&v29, a4, a5);
      default:
        v7 = -1073741821;
        break;
    }
  }
  return v7;
}
