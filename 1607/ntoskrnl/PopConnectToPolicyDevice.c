/*
 * XREFs of PopConnectToPolicyDevice @ 0x14056C618
 * Callers:
 *     PopNotifyPolicyDevice @ 0x14056C598 (PopNotifyPolicyDevice.c)
 *     PopPolicyDeviceTargetChange @ 0x140672F60 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x140055950 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoAllocateIrp @ 0x1400C3FBC (IoAllocateIrp.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     IoRegisterPlugPlayNotification @ 0x14052A9FC (IoRegisterPlugPlayNotification.c)
 *     PopGetPolicyDeviceObject @ 0x14056C8B4 (PopGetPolicyDeviceObject.c)
 */

void __fastcall PopConnectToPolicyDevice(int a1, const UNICODE_STRING *a2)
{
  unsigned int *v4; // rsi
  const UNICODE_STRING **v5; // rdi
  const UNICODE_STRING *i; // rbx
  SIZE_T v7; // rbx
  PVOID *PoolWithTag; // rax
  PVOID *Context; // rdi
  __int64 PolicyDeviceObject; // rax
  PDRIVER_OBJECT *v11; // rbx
  PIRP Irp; // rax
  PVOID v13; // r14
  IRP *v14; // rbp
  PVOID *v15; // rax
  PVOID **v16; // rdx
  PVOID EventCategoryData; // [rsp+70h] [rbp+18h] BYREF

  EventCategoryData = 0LL;
  v4 = (unsigned int *)((char *)&PopPolicyDeviceParameters + 32 * a1);
  v5 = (const UNICODE_STRING **)*((_QWORD *)v4 + 1);
  for ( i = *v5; i != (const UNICODE_STRING *)v5; i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( !RtlCompareUnicodeString(i + 2, a2, 1u) )
      return;
  }
  v7 = *v4 + a2->Length;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, v4[1]);
  Context = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v7);
    Context[5] = (char *)Context + *v4;
    *((_WORD *)Context + 17) = a2->Length;
    RtlCopyUnicodeString((PUNICODE_STRING)Context + 2, a2);
    *((_DWORD *)Context + 4) = a1;
    PolicyDeviceObject = PopGetPolicyDeviceObject(Context + 4, &EventCategoryData);
    v11 = (PDRIVER_OBJECT *)PolicyDeviceObject;
    if ( PolicyDeviceObject )
    {
      Irp = IoAllocateIrp(*(_BYTE *)(PolicyDeviceObject + 76), 0);
      v13 = EventCategoryData;
      v14 = Irp;
      if ( Irp )
      {
        if ( IoRegisterPlugPlayNotification(
               EventCategoryTargetDeviceChange,
               0,
               EventCategoryData,
               v11[1],
               PopPolicyDeviceTargetChange,
               Context,
               Context + 3) >= 0 )
        {
          Context[6] = v11;
          Context[7] = v14;
          (*((void (__fastcall **)(PVOID *))v4 + 2))(Context);
          v15 = (PVOID *)*((_QWORD *)v4 + 1);
          v16 = (PVOID **)v15[1];
          if ( *v16 != v15 )
            __fastfail(3u);
          *Context = v15;
          v14 = 0LL;
          Context[1] = v16;
          v11 = 0LL;
          *v16 = Context;
          v15[1] = Context;
          Context = 0LL;
        }
        if ( v14 )
          IoFreeIrp(v14);
      }
      if ( v11 )
        ObfDereferenceObject(v11);
      if ( v13 )
        ObfDereferenceObject(v13);
    }
    if ( Context )
      ExFreePoolWithTag(Context, v4[1]);
  }
}
