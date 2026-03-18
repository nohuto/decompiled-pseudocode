/*
 * XREFs of Etw_EnableCallback @ 0x1C0006F30
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0006DF0 (McGenControlCallbackV2.c)
 * Callees:
 *     Etw_ControllerRundown @ 0x1C0007174 (Etw_ControllerRundown.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     TemplateEventDescriptor @ 0x1C003301C (TemplateEventDescriptor.c)
 */

void __fastcall Etw_EnableCallback(__int64 a1, int a2)
{
  __int64 v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rbx
  __int64 v5; // rcx
  size_t v6; // rsi
  PVOID PoolWithTag; // rdi
  KIRQL v8; // al
  unsigned __int64 ProcessorHistory; // rcx
  KIRQL v10; // r12
  __int64 v11; // rsi
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  _QWORD *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // rbp
  GUID v19; // [rsp+30h] [rbp-48h] BYREF

  if ( a2 )
  {
    *(_QWORD *)&v19.Data1 = 0LL;
    *(_QWORD *)v19.Data4 = 0LL;
    EtwActivityIdControl(3u, &v19);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 1) != 0 )
      TemplateEventDescriptor(v2, &USBXHCI_ETW_EVENT_RUNDOWN_START, &v19);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16));
    v4 = *(unsigned int *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24);
    KeReleaseSpinLock((PKSPIN_LOCK)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16), v3);
    if ( (_DWORD)v4 )
    {
      v6 = 8 * v4;
      PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 8 * v4, 0x49434858u);
      if ( PoolWithTag )
      {
        while ( 1 )
        {
          memset(PoolWithTag, 0, v6);
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16));
          ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
          v10 = v8;
          if ( (unsigned int)v4 >= *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24) )
            break;
          v4 = *(unsigned int *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24);
          KeReleaseSpinLock((PKSPIN_LOCK)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16), v8);
          ExFreePoolWithTag(PoolWithTag, 0x49434858u);
          v6 = 8 * v4;
          PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 8 * v4, 0x49434858u);
          if ( !PoolWithTag )
            return;
        }
        v11 = *(_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory - 16LL;
        v12 = 0;
        v13 = 0;
        v14 = *(_QWORD **)WPP_MAIN_CB.Dpc.ProcessorHistory;
        if ( WPP_MAIN_CB.Dpc.ProcessorHistory != *(_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory )
        {
          do
          {
            (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01015 + 1640))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              *(_QWORD *)(v11 + 8),
              Etw_EnableCallback,
              159LL,
              "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
            v15 = v13++;
            *((_QWORD *)PoolWithTag + v15) = v11;
            v11 = *v14 - 16LL;
            v14 = (_QWORD *)*v14;
          }
          while ( (_QWORD *)ProcessorHistory != v14 );
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(ProcessorHistory + 16), v10);
        if ( (_DWORD)v4 )
        {
          v17 = PoolWithTag;
          do
          {
            v18 = *v17;
            if ( !*v17 )
              break;
            Etw_ControllerRundown(&v19, *v17);
            (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01015 + 1648))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              *(_QWORD *)(v18 + 8),
              Etw_EnableCallback,
              193LL,
              "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v12;
            ++v17;
          }
          while ( v12 < (unsigned int)v4 );
        }
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 1) != 0 )
          TemplateEventDescriptor(v16, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v19);
        ExFreePoolWithTag(PoolWithTag, 0x49434858u);
      }
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 1) != 0 )
    {
      TemplateEventDescriptor(v5, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v19);
    }
  }
}
