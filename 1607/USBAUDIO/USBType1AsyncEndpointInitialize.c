/*
 * XREFs of USBType1AsyncEndpointInitialize @ 0x1C0021460
 * Callers:
 *     USBType1RenderCreatePin @ 0x1C0021BB0 (USBType1RenderCreatePin.c)
 * Callees:
 *     memset @ 0x1C0008380 (memset.c)
 *     USBHwAllocateAndBag @ 0x1C001C474 (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBType1AsyncEndpointInitialize(__int64 a1)
{
  _QWORD *v1; // rsi
  void *v3; // rbx
  __int64 v4; // r15
  PVOID v5; // r14
  int v6; // ebx
  PIRP Irp; // rax
  IRP *v8; // rdi
  _QWORD *v9; // r15
  __int64 v10; // r13
  PIO_WORKITEM WorkItem; // rax
  PVOID PoolWithTag; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 16);
  v3 = *(void **)(a1 + 8);
  v4 = v1[17];
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA4uLL, 0x41627845u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    v6 = USBHwAllocateAndBag(&PoolWithTag, v3);
  else
    v6 = -1073741670;
  if ( v6 >= 0 )
  {
    Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v1[2] + 40LL) + 76LL), 0);
    v8 = Irp;
    if ( !Irp )
      return (unsigned int)-1073741670;
    v9 = (_QWORD *)(v4 + 848);
    v10 = *(_QWORD *)(v1[16] + 176LL);
    v6 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
    if ( v6 < 0 )
    {
      IoFreeIrp(v8);
      return (unsigned int)v6;
    }
    memset(v9, 0, 0x78uLL);
    v9[1] = v8;
    *v9 = v5;
    v9[2] = v1;
    *((_DWORD *)v9 + 9) = 1 << *(_BYTE *)(v10 + 7);
    KeInitializeEvent((PRKEVENT)(v9 + 7), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v9 + 10), SynchronizationEvent, 0);
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v1[2] + 40LL));
    v9[13] = WorkItem;
    if ( !WorkItem )
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
