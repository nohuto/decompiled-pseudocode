/*
 * XREFs of ObfDereferenceDeviceMap @ 0x140510A14
 * Callers:
 *     ObSetCurrentProcessDeviceMap @ 0x140461D94 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140461F64 (SeGetTokenDeviceMap.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x14050423C (ObDereferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1405107C0 (ObQueryDeviceMapInformation.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14056899C (SepDeleteLogonSessionTrack.c)
 *     ObSetDeviceMap @ 0x1405BBFDC (ObSetDeviceMap.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ObfDereferenceDeviceMap(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // edi
  bool v6; // zf
  signed __int32 v7; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdi
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  unsigned __int64 v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_DWORD *)P + 6);
  if ( v4 == 1 )
  {
LABEL_6:
    PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v25, a4);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = (unsigned __int64 *)(v25 + 120);
    v11 = KeAbPreAcquire(v25 + 120, 0LL, 0LL, v10);
    v14 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v11, (ULONG_PTR)v9, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v4 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
    if ( v4 == 1 )
    {
      *(_QWORD *)(*(_QWORD *)P + 304LL) = 0LL;
      _m_prefetchw(v9);
      v15 = *v9;
      v16 = *v9 - 16;
      if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      if ( (v15 & 2) != 0 || (v17 = *v9, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v16, v15)) )
        ExfReleasePushLock(v9, v12);
      KeAbPostRelease((ULONG_PTR)v9);
      v18 = KeGetCurrentThread();
      v19 = v18->SpecialApcDisable + 1;
      v18->SpecialApcDisable = v19;
      if ( !v19 && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
        KiCheckForKernelApcDelivery();
      ZwClose(*((HANDLE *)P + 2));
      ObfDereferenceObject(*(PVOID *)P);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      _m_prefetchw(v9);
      v20 = *v9;
      v21 = *v9 - 16;
      if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v21 = 0LL;
      if ( (v20 & 2) != 0 || (v22 = *v9, v22 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v21, v20)) )
        ExfReleasePushLock(v9, v12);
      KeAbPostRelease((ULONG_PTR)v9);
      v23 = KeGetCurrentThread();
      v24 = v23->SpecialApcDisable + 1;
      v23->SpecialApcDisable = v24;
      if ( !v24 && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
        KiCheckForKernelApcDelivery();
    }
    if ( v25 )
      PsDereferenceMonitorContextServerSilo(v25);
  }
  else
  {
    while ( 1 )
    {
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)P + 6, v4 - 1, v4);
      v6 = v4 == v7;
      v4 = v7;
      if ( v6 )
        break;
      if ( v7 == 1 )
        goto LABEL_6;
    }
  }
  if ( v4 <= 0 )
    __fastfail(0xEu);
}
