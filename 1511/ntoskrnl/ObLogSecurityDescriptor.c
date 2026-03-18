/*
 * XREFs of ObLogSecurityDescriptor @ 0x14042E2C0
 * Callers:
 *     ObAssignObjectSecurityDescriptor @ 0x1403E01D8 (ObAssignObjectSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x1403E5290 (ExpWnfCreateNameInstance.c)
 *     SeDefaultObjectMethod @ 0x14042E060 (SeDefaultObjectMethod.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     ObSetSecurityDescriptorInfo @ 0x14046B450 (ObSetSecurityDescriptorInfo.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404BAE04 (IopSetDeviceSecurityDescriptor.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpAllocGuidEntry @ 0x1404CEEAC (EtwpAllocGuidEntry.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140667728 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(char *Src, _QWORD *a2, unsigned int a3)
{
  char *v3; // rbp
  signed __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // r10
  unsigned __int64 v7; // rcx
  char *v8; // r11
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *PoolWithTag; // r12
  volatile signed __int64 *v15; // r15
  __int64 v16; // rsi
  _QWORD *v17; // r14
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  signed __int64 v22; // rax
  volatile signed __int64 v23; // rtt
  _QWORD *v25; // rax
  ULONG v29; // [rsp+98h] [rbp+20h]

  v3 = Src;
  v4 = 0LL;
  v29 = RtlLengthSecurityDescriptor(Src);
  v5 = 0LL;
  v6 = (__int64)v3;
  v7 = 0LL;
  v8 = &v3[v29];
  v9 = ((unsigned __int64)(v29 & 0xFFFFFFF8) + 7) >> 3;
  if ( v3 > &v3[v29 & 0xFFFFFFF8] )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      ++v7;
      v5 = __ROL8__(*(_QWORD *)v6 ^ v5, 3);
      v6 += 8LL;
    }
    while ( v7 < v9 );
  }
  v10 = &v8[-v6];
  if ( v6 > (unsigned __int64)v8 )
    v10 = 0LL;
  if ( v10 )
  {
    v11 = -v6;
    do
    {
      v12 = *(unsigned __int8 *)v6++;
      v5 = __ROL8__(v12 ^ v5, 3);
    }
    while ( v11 + v6 < (unsigned __int64)v10 );
  }
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v15 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
  v16 = KeAbPreAcquire((ULONG_PTR)v15, 0LL, 0LL);
  if ( _InterlockedCompareExchange64(v15, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (unsigned __int64 *)&ObsSecurityDescriptorCache + 3 * (v5 % 0x101),
      v16,
      (ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  v17 = v15 + 1;
  while ( 1 )
  {
    v18 = (_QWORD *)*v17;
    if ( (_QWORD *)*v17 != v17 )
      break;
LABEL_20:
    if ( PoolWithTag )
    {
      v25 = (_QWORD *)v18[1];
      *PoolWithTag = v18;
      PoolWithTag[1] = v25;
      if ( (_QWORD *)*v25 != v18 )
        __fastfail(3u);
      *v25 = PoolWithTag;
      v18[1] = PoolWithTag;
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v5 % 0x101));
      KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      *a2 = PoolWithTag + 4;
      return 0LL;
    }
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v5 % 0x101));
    KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v29 + 40 < v29 )
      return 3221225626LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29 + 32, 0x6353624Fu);
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[2] = a3;
    PoolWithTag[3] = v5;
    memmove(PoolWithTag + 4, v3, v29);
    --CurrentThread->KernelApcDisable;
    v20 = KeAbPreAcquire((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101), 0LL, 0LL);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&ObsSecurityDescriptorCache + 3 * (v5 % 0x101),
        v20,
        (ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
  }
  while ( 1 )
  {
    v19 = v18[3];
    if ( v19 != v5 )
    {
      if ( v19 > v5 )
        goto LABEL_19;
      goto LABEL_18;
    }
    if ( v29 == RtlLengthSecurityDescriptor(v18 + 4) && !memcmp(Src, v18 + 4, v29) )
      break;
LABEL_18:
    v18 = (_QWORD *)*v18;
    if ( v18 == v17 )
    {
LABEL_19:
      v3 = Src;
      goto LABEL_20;
    }
  }
  if ( _InterlockedExchangeAdd64(v18 + 2, a3) <= 0 )
    __fastfail(0xEu);
  _m_prefetchw((const void *)v15);
  v22 = *v15;
  if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v22 - 16;
  if ( (v22 & 2) != 0 || (v23 = *v15, v23 != _InterlockedCompareExchange64(v15, v4, v22)) )
    ExfReleasePushLock((_QWORD *)&ObsSecurityDescriptorCache + 3 * (v5 % 0x101));
  KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  *a2 = v18 + 4;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
