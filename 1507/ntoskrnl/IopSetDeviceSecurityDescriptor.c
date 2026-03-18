/*
 * XREFs of IopSetDeviceSecurityDescriptor @ 0x140550548
 * Callers:
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptors @ 0x1405B7BEC (IopSetDeviceSecurityDescriptors.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1404CF374 (SeSetSecurityDescriptorInfo.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptor(__int64 a1, DWORD *a2, void *a3, POOL_TYPE a4, PGENERIC_MAPPING a5)
{
  struct _KTHREAD *CurrentThread; // rbx
  GENERIC_MAPPING *GenericMapping; // r13
  volatile signed __int64 *v11; // rdi
  __int16 v12; // ax
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // ax
  unsigned int v17; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  __int16 v21; // ax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  GenericMapping = a5;
  while ( 1 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
    v11 = *(volatile signed __int64 **)(a1 + 272);
    if ( v11 && _InterlockedExchangeAdd64(v11 - 2, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&IopSecurityResource);
    v12 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v11;
    v13 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, a4, GenericMapping);
    if ( v13 < 0 )
      break;
    v13 = ObLogSecurityDescriptor(ObjectsSecurityDescriptor, &v24, 1u);
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
    if ( v13 < 0 )
      goto LABEL_27;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = v24;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite(&IopSecurityResource);
      v16 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v16;
      if ( !v16
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v17 = 2;
      goto LABEL_10;
    }
    ExReleaseResourceLite(&IopSecurityResource);
    v21 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObDereferenceSecurityDescriptor((__int64)v11, 1u, v19, v20);
    ObDereferenceSecurityDescriptor(v24, 1u, v22, v23);
  }
  if ( v11 )
  {
LABEL_27:
    v17 = 1;
LABEL_10:
    ObDereferenceSecurityDescriptor((__int64)v11, v17, v14, v15);
  }
  return (unsigned int)v13;
}
