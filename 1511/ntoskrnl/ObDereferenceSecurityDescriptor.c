/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x140420D30
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140003C9C (IopCompleteUnloadOrDelete.c)
 *     ExpWnfCreateNameInstance @ 0x1403E5290 (ExpWnfCreateNameInstance.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140420A4C (ObQuerySecurityDescriptorInfo.c)
 *     ObReleaseObjectSecurity @ 0x140420AB8 (ObReleaseObjectSecurity.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     ObpReferenceSecurityDescriptor @ 0x140421050 (ObpReferenceSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     ObSetSecurityDescriptorInfo @ 0x14046B450 (ObSetSecurityDescriptorInfo.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14046D378 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14046D3B0 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     ObpAdjustCreatorAccessState @ 0x1404A95A0 (ObpAdjustCreatorAccessState.c)
 *     ExpWnfDeleteNameInstance @ 0x1404B2110 (ExpWnfDeleteNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x1404B68D8 (EtwpFreeGuidEntry.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404BAE04 (IopSetDeviceSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x1404C1A9C (ObDeassignSecurity.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140667728 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rdi
  signed __int64 v6; // rtt
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  volatile signed __int64 v13; // rcx
  void **v14; // rax

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 16));
  v4 = *(_QWORD *)(a1 - 32 + 16);
  v5 = a2;
  while ( v4 - a2 > 0 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(v3 + 2, v4 - a2, v4);
    if ( v6 == v4 )
      return;
  }
  if ( v4 != a2 )
    __fastfail(0xEu);
  v7 = *((_QWORD *)v3 + 3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v7 % 0x101));
  v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = _InterlockedExchangeAdd64(v3 + 2, -a2) - v5;
  if ( v12 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    if ( v12 )
      __fastfail(0xEu);
    v13 = *v3;
    v14 = (void **)*((_QWORD *)v3 + 1);
    if ( *(volatile signed __int64 **)(*v3 + 8) != v3 || *v14 != v3 )
      __fastfail(3u);
    *v14 = (void *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag((PVOID)v3, 0);
  }
}
