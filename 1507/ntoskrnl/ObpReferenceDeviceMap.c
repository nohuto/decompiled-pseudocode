/*
 * XREFs of ObpReferenceDeviceMap @ 0x140510B90
 * Callers:
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1405107C0 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140461D94 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140461F64 (SeGetTokenDeviceMap.c)
 *     PsReferenceImpersonationToken @ 0x1405217F0 (PsReferenceImpersonationToken.c)
 */

unsigned __int64 __fastcall ObpReferenceDeviceMap(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  char v8; // bp
  void *v9; // r14
  struct _KTHREAD *v10; // rax
  unsigned __int64 *v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r9
  signed __int64 v16; // rax
  unsigned __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  PACCESS_TOKEN v21; // rax
  unsigned __int64 *v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v23[3]; // [rsp+28h] [rbp-40h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+80h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) == 0 )
    goto LABEL_2;
  if ( a1 )
    goto LABEL_2;
  v21 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v9 = v21;
  if ( !v21 )
    goto LABEL_2;
  if ( *((_QWORD *)v21 + 3) != 999LL )
  {
    if ( (int)SeGetTokenDeviceMap((__int64)v21, v23) >= 0 )
    {
      v7 = v23[0];
      if ( v23[0] )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v23[0] + 24));
        goto LABEL_19;
      }
    }
LABEL_2:
    if ( !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[8]
      && (int)ObSetCurrentProcessDeviceMap() < 0 )
    {
      goto LABEL_19;
    }
    goto LABEL_3;
  }
  v8 = 1;
LABEL_3:
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v22, a4);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  v11 = v22 + 15;
  v14 = KeAbPreAcquire((ULONG_PTR)(v22 + 15), 0LL, 0LL, v12);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, v14, (ULONG_PTR)v11, v15);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( v8 == 1 )
    v7 = *v22;
  else
    v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[8];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 24));
  _m_prefetchw(v11);
  v16 = *v11;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v16 - 16;
  if ( (v16 & 2) != 0 || (v17 = *v11, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v6, v16)) )
    ExfReleasePushLock(v11, v13);
  KeAbPostRelease((ULONG_PTR)v11);
  v18 = KeGetCurrentThread();
  v19 = v18->SpecialApcDisable + 1;
  v18->SpecialApcDisable = v19;
  if ( !v19 && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  PsDereferenceMonitorContextServerSilo((__int64)v22);
LABEL_19:
  if ( v9 )
    ObfDereferenceObject(v9);
  return v7;
}
