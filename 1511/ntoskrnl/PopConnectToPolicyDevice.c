/*
 * XREFs of PopConnectToPolicyDevice @ 0x14054BF5C
 * Callers:
 *     PopNotifyPolicyDevice @ 0x14054BEDC (PopNotifyPolicyDevice.c)
 *     PopPolicyDeviceTargetChange @ 0x14063BAF0 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 *     IoRegisterPlugPlayNotification @ 0x1404E90BC (IoRegisterPlugPlayNotification.c)
 *     PopGetPolicyDeviceObject @ 0x14054C1F8 (PopGetPolicyDeviceObject.c)
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
          *Context = v15;
          Context[1] = v16;
          if ( *v16 != v15 )
            __fastfail(3u);
          *v16 = Context;
          v14 = 0LL;
          v11 = 0LL;
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
