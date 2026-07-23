/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x14051D648
 * Callers:
 *     SeDefaultObjectMethod @ 0x14041EAA0 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1404C53C0 (WmipSecurityMethod.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 *     ObAdjustSecurityQuota @ 0x14051D7E0 (ObAdjustSecurityQuota.c)
 *     SeComputeQuotaInformationSize @ 0x14051D9E0 (SeComputeQuotaInformationSize.c)
 *     SeSetSecurityDescriptorInfo @ 0x14051DA64 (SeSetSecurityDescriptorInfo.c)
 */

__int64 __fastcall ObSetSecurityDescriptorInfo(
        _QWORD *Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        __int64 a4,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // esi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // rax
  _BYTE *v13; // rdi
  void *v14; // r14
  int v15; // edi
  __int64 v16; // rax
  char v17; // al
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  unsigned __int64 v20; // rtt
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v27; // [rsp+70h] [rbp+30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v26 = 0LL;
  --CurrentThread->KernelApcDisable;
  v11 = Object - 4;
  v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(Object - 4), 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
  if ( v13 )
    v13[26] |= 1u;
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
    v15 = ObLogSecurityDescriptor(ObjectsSecurityDescriptor, &v26, 0x10u);
    if ( v15 >= 0 )
    {
      v15 = SeComputeQuotaInformationSize(ObjectsSecurityDescriptor, &v27);
      if ( v15 >= 0 )
      {
        v15 = ObAdjustSecurityQuota(Object, v27);
        if ( v15 >= 0 )
        {
          v16 = v26;
          if ( v26 )
            v16 = v26 | 0xF;
          v17 = _InterlockedExchange64(Object - 1, v16);
          v26 = 0LL;
          if ( v14 )
            v7 = (v17 & 0xF) + 1;
        }
      }
    }
  }
  _m_prefetchw(v11);
  v18 = *v11;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v19 = v18 - 16;
  else
    v19 = 0LL;
  if ( (v18 & 2) != 0 || (v20 = *v11, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v19, v18)) )
    ExfReleasePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
  if ( v26 )
    ObDereferenceSecurityDescriptor(v26, 0x10u);
  if ( v14 && v7 )
    ObDereferenceSecurityDescriptor((__int64)v14, v7);
  if ( ObjectsSecurityDescriptor )
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
  return (unsigned int)v15;
}
