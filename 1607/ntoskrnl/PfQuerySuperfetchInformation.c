/*
 * XREFs of PfQuerySuperfetchInformation @ 0x140418550
 * Callers:
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x1400064A4 (PfLockSharedAcquire.c)
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14000F5B0 (SepPrivilegeCheck.c)
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14000F760 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PfpMemoryListQuery @ 0x1400ADD24 (PfpMemoryListQuery.c)
 *     PfpMemoryRangesQuery @ 0x1400B0144 (PfpMemoryRangesQuery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     PspUnlockProcessShared @ 0x1400C9C44 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C9C88 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400D1534 (ObFastReferenceObjectLocked.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PfGetCompletedTrace @ 0x1403E6AB4 (PfGetCompletedTrace.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140414C0C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     PfpPfnPrioRequest @ 0x14041B450 (PfpPfnPrioRequest.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 *     SepFilterPrivilegeAudits @ 0x1404D24A8 (SepFilterPrivilegeAudits.c)
 *     PfpQueryGpuUtilization @ 0x1404D5DB0 (PfpQueryGpuUtilization.c)
 *     PfpPrivSourceEnum @ 0x140508A08 (PfpPrivSourceEnum.c)
 *     PfpVirtualQuery @ 0x140532640 (PfpVirtualQuery.c)
 *     PfpQueryScenarioInformation @ 0x140532B48 (PfpQueryScenarioInformation.c)
 *     MmLogQueryCombineStats @ 0x1406644B0 (MmLogQueryCombineStats.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, int a3, unsigned __int8 a4, unsigned int *a5)
{
  _QWORD *v6; // rdi
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
  _QWORD *v17; // rax
  void *v18; // r15
  __int64 v21; // rcx
  PSE_EXPORTS v22; // r13
  int v23; // ebx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  struct _KTHREAD *v27; // rbx
  _DWORD *v28; // rdi
  __int128 v29; // [rsp+48h] [rbp-E0h] BYREF
  volatile void *Address[2]; // [rsp+58h] [rbp-D0h]
  PVOID Object; // [rsp+68h] [rbp-C0h] BYREF
  int v32; // [rsp+70h] [rbp-B8h]
  ULONG_PTR v33; // [rsp+78h] [rbp-B0h]
  struct _LIST_ENTRY *Blink; // [rsp+80h] [rbp-A8h]
  __int64 v35; // [rsp+88h] [rbp-A0h]
  __int128 v36; // [rsp+90h] [rbp-98h]
  volatile void *v37; // [rsp+A8h] [rbp-80h]
  __int128 v38; // [rsp+B0h] [rbp-78h]
  unsigned int v39; // [rsp+C0h] [rbp-68h] BYREF
  int v40; // [rsp+C4h] [rbp-64h]
  LUID v41; // [rsp+C8h] [rbp-60h] BYREF
  int v42; // [rsp+D0h] [rbp-58h]
  _BYTE v43[4]; // [rsp+D8h] [rbp-50h] BYREF
  int v44; // [rsp+DCh] [rbp-4Ch]
  int v45; // [rsp+F0h] [rbp-38h]
  int v46; // [rsp+F4h] [rbp-34h]

  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v6 = 0LL;
  v7 = 0;
  v29 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v29 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  v8 = DWORD2(v29);
  if ( DWORD2(v29) <= 0x1C )
  {
    v9 = 268501248;
    if ( _bittest(&v9, DWORD2(v29)) )
      goto LABEL_33;
  }
  v39 = 1;
  v40 = 1;
  v41 = SeProfileSingleProcessPrivilege;
  v42 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Blink = Process[1].Header.WaitListHead.Blink;
  if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (unsigned __int64 *)&CurrentThread[1].WaitBlockList,
        v13,
        (ULONG_PTR)&CurrentThread[1].WaitBlockList);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v6 = (_QWORD *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObject(v6);
      v32 = CurrentThread[1].SystemCallNumber & 3;
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
  v33 = v14;
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
      if ( v14 == SepTokenLeakToken )
        __debugbreak();
      v6 = Object;
      v14 = v33;
    }
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6[143] + 284LL));
      v6 = Object;
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v14 = v33;
    }
  }
  if ( a4 )
  {
    if ( !v6 )
    {
      v15 = v14;
      goto LABEL_23;
    }
    if ( v32 >= 2 )
    {
      v15 = (__int64)v6;
LABEL_23:
      v16 = SepPrivilegeCheck(v15, (__int64)&v41, v39, v40, a4);
      goto LABEL_24;
    }
    v16 = 0;
  }
  else
  {
    v16 = 1;
  }
LABEL_24:
  if ( a4 )
  {
    v17 = v6 ? v6 : (_QWORD *)v14;
    v18 = *(void **)v17[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v18) )
    {
      if ( (v22 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v18))
        && !RtlEqualSid(v22->SeLocalServiceSid, v18)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, &v39) )
      {
        SepAdtPrivilegedServiceAuditAlarm((int)&Object, &SeSubsystemName, 0LL, (__int64)v6, v14, (int *)&v39, v16);
        v14 = v33;
        v6 = Object;
      }
    }
  }
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
      if ( v33 == SepTokenLeakToken )
        __debugbreak();
      v6 = Object;
    }
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6[143] + 284LL));
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v33);
  v33 = 0LL;
  if ( Object )
    ObfDereferenceObject(Object);
  Object = 0LL;
  if ( !v16 )
    return (unsigned int)-1073741790;
  v7 = 0;
  v8 = DWORD2(v29);
LABEL_33:
  if ( v8 == 6 )
  {
    return (unsigned int)PfpPfnPrioRequest(&v29, a4, a5);
  }
  else
  {
    switch ( v8 )
    {
      case 1:
        return (unsigned int)PfGetCompletedTrace((_QWORD *)Address[0], (unsigned int)Address[1], a4, a5);
      case 2:
        if ( LODWORD(Address[1]) != 28 )
          goto LABEL_98;
        PfLockSharedAcquire((volatile signed __int64 *)qword_140328538);
        v38 = xmmword_140328384;
        v35 = qword_140328394;
        v23 = dword_14032839C;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140328538, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)qword_140328538);
        KeAbPostRelease((ULONG_PTR)qword_140328538);
        KeLeaveCriticalRegion();
        if ( a4 )
        {
          v24 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v24 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v24 = *(_BYTE *)v24;
          *(_BYTE *)(v24 + 27) = *(_BYTE *)(v24 + 27);
        }
        v25 = Address[0];
        *(_OWORD *)Address[0] = v38;
        v25[2] = v35;
        *((_DWORD *)v25 + 6) = v23;
        *a5 = 28;
        v7 = 0;
        break;
      case 8:
        return (unsigned int)PfpPrivSourceEnum(&v29, a4, a5);
      case 9:
        v7 = 0;
        if ( LODWORD(Address[1]) != 4 )
          goto LABEL_98;
        if ( a4 )
        {
          v26 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v26 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v26 = *(_BYTE *)v26;
          *(_BYTE *)(v26 + 3) = *(_BYTE *)(v26 + 3);
          v7 = 0;
        }
        *(_DWORD *)Address[0] = dword_14033B810;
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
          goto LABEL_98;
        v7 = 0;
        v36 = 0uLL;
        if ( a4 )
        {
          v21 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v21 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v21 = *(_BYTE *)v21;
          *(_BYTE *)(v21 + 15) = *(_BYTE *)(v21 + 15);
          v7 = 0;
        }
        v36 = *(_OWORD *)Address[0];
        if ( (_DWORD)v36 == 1 )
        {
          *((_QWORD *)&v36 + 1) = qword_1403286B0;
          *(_OWORD *)Address[0] = v36;
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
          MmLogQueryCombineStats(0LL, v43);
          v28 = Address[0];
          if ( a4 )
            ProbeForWrite(Address[0], 0x10uLL, 4u);
          v37 = Address[0];
          if ( *(_DWORD *)Address[0] == 1 )
          {
            *((_DWORD *)Address[0] + 1) = v44;
            v28[2] = v45;
            v28[3] = v46;
          }
          else
          {
            v7 = -1073741811;
          }
        }
        else
        {
LABEL_98:
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
