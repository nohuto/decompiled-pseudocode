/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x14046B450
 * Callers:
 *     SeDefaultObjectMethod @ 0x14042E060 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1404C19F8 (WmipSecurityMethod.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     ObAdjustSecurityQuota @ 0x14046B604 (ObAdjustSecurityQuota.c)
 *     SeComputeQuotaInformationSize @ 0x14046B800 (SeComputeQuotaInformationSize.c)
 *     SeSetSecurityDescriptorInfo @ 0x14046B884 (SeSetSecurityDescriptorInfo.c)
 */

__int64 __fastcall ObSetSecurityDescriptorInfo(
        unsigned __int64 *Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        __int64 a4,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v7; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rsi
  void *v14; // rbp
  int v15; // esi
  PSECURITY_DESCRIPTOR v16; // r12
  __int64 v17; // rax
  char v18; // al
  signed __int64 v19; // rax
  __int64 v20; // rtt
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v22 = 0LL;
  v11 = 0;
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)(Object - 4), 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Object - 8, 0LL) )
    ExfAcquirePushLockExclusiveEx(Object - 4, v12, (ULONG_PTR)(Object - 4));
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = (void *)(*(Object - 1) & 0xFFFFFFFFFFFFFFF0uLL);
  ObjectsSecurityDescriptor = v14;
  v15 = SeSetSecurityDescriptorInfo(
          Object,
          SecurityInformation,
          ModificationDescriptor,
          &ObjectsSecurityDescriptor,
          PoolType,
          GenericMapping);
  if ( v15 < 0 )
  {
    ObjectsSecurityDescriptor = 0LL;
  }
  else
  {
    v16 = ObjectsSecurityDescriptor;
    v15 = ObLogSecurityDescriptor((char *)ObjectsSecurityDescriptor, &v22, 0x10u);
    if ( v15 >= 0 )
    {
      v15 = SeComputeQuotaInformationSize(v16, &v24);
      if ( v15 >= 0 )
      {
        v15 = ObAdjustSecurityQuota(Object, v24);
        if ( v15 >= 0 )
        {
          v17 = v22 ? v22 | 0xF : 0LL;
          v18 = _InterlockedExchange64((volatile __int64 *)Object - 1, v17);
          v22 = 0LL;
          if ( v14 )
            v11 = (v18 & 0xF) + 1;
        }
      }
    }
  }
  _m_prefetchw(Object - 4);
  v19 = *(Object - 4);
  if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = v19 - 16;
  if ( (v19 & 2) != 0
    || (v20 = *(Object - 4), v20 != _InterlockedCompareExchange64((volatile signed __int64 *)Object - 4, v7, v19)) )
  {
    ExfReleasePushLock(Object - 4);
  }
  KeAbPostRelease((ULONG_PTR)(Object - 4));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v22 )
    ObDereferenceSecurityDescriptor(v22, 0x10u);
  if ( v14 && v11 )
    ObDereferenceSecurityDescriptor((__int64)v14, v11);
  if ( ObjectsSecurityDescriptor )
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
  return (unsigned int)v15;
}
