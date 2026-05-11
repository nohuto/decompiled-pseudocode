/*
 * XREFs of USBCaptureCreatePin @ 0x1C0020810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     USBCapturePinFormatChange @ 0x1C0020730 (USBCapturePinFormatChange.c)
 */

__int64 __fastcall USBCaptureCreatePin(struct _KSPIN *PointerToPointerToItem)
{
  _QWORD *Context; // r13
  NTSTATUS v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // rsi
  int v9; // r12d
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  PIRP Irp; // rax
  PKSGATE i; // rax
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v17; // rax
  int v19; // [rsp+80h] [rbp+8h]

  Context = PointerToPointerToItem->Context;
  v3 = -1073741637;
  v4 = Context[17];
  v5 = Context[16];
  v6 = v4 + 944;
  v7 = *(_DWORD *)(v5 + 212);
  v19 = v7;
  v8 = *(_QWORD *)(*(_QWORD *)(Context[2] + 16LL) + 72LL);
  v9 = 12 * *(_DWORD *)(v8 + 208) + 152;
  v10 = v4 + 944 + (unsigned int)(12 * v9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      8u,
      0x11u,
      (__int64)&WPP_274e87896874a8a93b442ecd4ef4c817_Traceguids,
      PointerToPointerToItem);
    v10 = v4 + 944 + (unsigned int)(12 * v9);
    v6 = v4 + 944;
    v7 = v19;
  }
  *(_DWORD *)(v4 + 92) = *(_DWORD *)(v8 + 208);
  *(_BYTE *)(v4 + 96) = *(_BYTE *)(v8 + 212);
  if ( (*(_DWORD *)(v5 + 208) & 0xF000) == 0 )
  {
    v3 = 0;
    v11 = (_QWORD *)(v4 + 320);
    v12 = 0;
    v13 = 0;
    while ( v3 >= 0 )
    {
      *(v11 - 1) = PointerToPointerToItem;
      *v11 = v10 + v7 * v12 * *(_DWORD *)(v4 + 92);
      *(v11 - 3) = v6 + v13;
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(Context[2] + 40LL) + 76LL), 0);
      *(v11 - 4) = Irp;
      if ( Irp )
      {
        v3 = KsAddItemToObjectBag(PointerToPointerToItem->Bag, Irp, (PFNKSFREE)IoFreeIrp);
        if ( v3 < 0 )
          IoFreeIrp((PIRP)*(v11 - 4));
      }
      else
      {
        v3 = -1073741670;
      }
      v10 = v4 + 944 + (unsigned int)(12 * v9);
      v6 = v4 + 944;
      v7 = v19;
      ++v12;
      v13 += v9;
      v11 += 7;
      if ( v12 >= 0xC )
      {
        if ( v3 >= 0 )
        {
          v3 = USBCapturePinFormatChange((PVOID *)PointerToPointerToItem);
          if ( v3 >= 0 )
          {
            *(_QWORD *)(v4 + 128) = v4 + 120;
            *(_QWORD *)(v4 + 120) = v4 + 120;
            *(_QWORD *)(v4 + 112) = v4 + 104;
            *(_QWORD *)(v4 + 104) = v4 + 104;
            KeInitializeMutex((PRKMUTEX)(v4 + 136), 0);
            KeInitializeEvent((PRKEVENT)(v4 + 240), NotificationEvent, 0);
            KeInitializeEvent((PRKEVENT)(v4 + 200), NotificationEvent, 0);
            for ( i = KsPinGetAndGate(PointerToPointerToItem);
                  i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1;
                  i = i->NextGate )
            {
              ;
            }
            WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
            *(_QWORD *)(v4 + 224) = WorkItem;
            if ( !WorkItem )
            {
              v3 = -1073741670;
              break;
            }
            v17 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
            *(_QWORD *)(v4 + 264) = v17;
            if ( !v17 )
            {
              IoFreeWorkItem(*(PIO_WORKITEM *)(v4 + 224));
              v3 = -1073741670;
            }
            if ( v3 >= 0 )
              return (unsigned int)v3;
          }
        }
        break;
      }
    }
  }
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    8u,
    0x12u,
    (__int64)&WPP_274e87896874a8a93b442ecd4ef4c817_Traceguids,
    PointerToPointerToItem,
    v3);
  return (unsigned int)v3;
}
