/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x1404CF3B0
 * Callers:
 *     SeDefaultObjectMethod @ 0x140486370 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x140557AFC (WmipSecurityMethod.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1404CF374 (SeSetSecurityDescriptorInfo.c)
 *     ObAdjustSecurityQuota @ 0x1404CF5A0 (ObAdjustSecurityQuota.c)
 *     SeComputeQuotaInformationSize @ 0x1404CF7D0 (SeComputeQuotaInformationSize.c)
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
  __int64 v13; // r9
  __int64 v14; // rsi
  void *v15; // rbp
  __int64 v16; // rdx
  int v17; // esi
  PSECURITY_DESCRIPTOR v18; // r12
  __int64 v19; // rax
  char v20; // al
  signed __int64 v21; // rax
  __int64 v22; // rtt
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 v28; // [rsp+30h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v28 = 0LL;
  v11 = 0;
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)(Object - 4), 0LL, 0LL, a4);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Object - 8, 0LL) )
    ExfAcquirePushLockExclusiveEx(Object - 4, v12, (ULONG_PTR)(Object - 4), v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = (void *)(*(Object - 1) & 0xFFFFFFFFFFFFFFF0uLL);
  ObjectsSecurityDescriptor = v15;
  v17 = SeSetSecurityDescriptorInfo(
          Object,
          SecurityInformation,
          ModificationDescriptor,
          &ObjectsSecurityDescriptor,
          PoolType,
          GenericMapping);
  if ( v17 < 0 )
  {
    ObjectsSecurityDescriptor = 0LL;
  }
  else
  {
    v18 = ObjectsSecurityDescriptor;
    v17 = ObLogSecurityDescriptor(ObjectsSecurityDescriptor, &v28, 0x10u);
    if ( v17 >= 0 )
    {
      v17 = SeComputeQuotaInformationSize(v18, &v30);
      if ( v17 >= 0 )
      {
        v17 = ObAdjustSecurityQuota(Object, v30);
        if ( v17 >= 0 )
        {
          v19 = v28 ? v28 | 0xF : 0LL;
          v20 = _InterlockedExchange64((volatile __int64 *)Object - 1, v19);
          v28 = 0LL;
          if ( v15 )
            v11 = (v20 & 0xF) + 1;
        }
      }
    }
  }
  _m_prefetchw(Object - 4);
  v21 = *(Object - 4);
  if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = v21 - 16;
  if ( (v21 & 2) != 0
    || (v22 = *(Object - 4), v22 != _InterlockedCompareExchange64((volatile signed __int64 *)Object - 4, v7, v21)) )
  {
    ExfReleasePushLock(Object - 4, v16);
  }
  KeAbPostRelease((ULONG_PTR)(Object - 4));
  v25 = KeGetCurrentThread();
  v26 = v25->KernelApcDisable + 1;
  v25->KernelApcDisable = v26;
  if ( !v26
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
    && !v25->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v28 )
    ObDereferenceSecurityDescriptor(v28, 0x10u, v23, v24);
  if ( v15 && v11 )
    ObDereferenceSecurityDescriptor((__int64)v15, v11, v23, v24);
  if ( ObjectsSecurityDescriptor )
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
  return (unsigned int)v17;
}
