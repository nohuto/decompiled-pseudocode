/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x140486190
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140007694 (IopCompleteUnloadOrDelete.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     ObReleaseObjectSecurity @ 0x140482AA4 (ObReleaseObjectSecurity.c)
 *     SeDefaultObjectMethod @ 0x140486370 (SeDefaultObjectMethod.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404CF3B0 (ObSetSecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404CFD70 (ObpReferenceSecurityDescriptor.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1404D05E0 (ObQuerySecurityDescriptorInfo.c)
 *     ObpAdjustCreatorAccessState @ 0x1404D0C60 (ObpAdjustCreatorAccessState.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1404D32A8 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1404D32E0 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     ExpWnfDeleteNameInstance @ 0x14053F340 (ExpWnfDeleteNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x14054F670 (EtwpFreeGuidEntry.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140550548 (IopSetDeviceSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x140557BA0 (ObDeassignSecurity.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1406EA9E0 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // rbx
  signed __int64 v6; // rax
  __int64 v7; // rdi
  signed __int64 v8; // rtt
  unsigned __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v15; // rax
  volatile signed __int64 v16; // rcx
  void **v17; // rax
  __int16 v18; // ax
  __int16 v19; // ax

  v5 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 16));
  v6 = *(_QWORD *)(a1 - 32 + 16);
  v7 = a2;
  while ( v6 - a2 > 0 )
  {
    v8 = v6;
    v6 = _InterlockedCompareExchange64(v5 + 2, v6 - a2, v6);
    if ( v8 == v6 )
      return;
  }
  if ( v6 != a2 )
    __fastfail(0xEu);
  v9 = *((_QWORD *)v5 + 3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v9 % 0x101));
  v12 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL, a4);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = _InterlockedExchangeAdd64(v5 + 2, -a2) - v7;
  if ( v15 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    v19 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    if ( v15 )
      __fastfail(0xEu);
    v16 = *v5;
    v17 = (void **)*((_QWORD *)v5 + 1);
    if ( *(volatile signed __int64 **)(*v5 + 8) != v5 || *v17 != v5 )
      __fastfail(3u);
    *v17 = (void *)v16;
    *(_QWORD *)(v16 + 8) = v17;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    v18 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ExFreePoolWithTag((PVOID)v5, 0);
  }
}
