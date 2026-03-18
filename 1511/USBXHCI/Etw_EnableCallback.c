/*
 * XREFs of Etw_EnableCallback @ 0x1C0001140
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001000 (McGenControlCallbackV2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Etw_DeviceRundown @ 0x1C0033A84 (Etw_DeviceRundown.c)
 *     TemplateEventDescriptor @ 0x1C0033FEC (TemplateEventDescriptor.c)
 *     Template_pqqqqqqqsssxqqqt @ 0x1C0034390 (Template_pqqqqqqqsssxqqqt.c)
 */

void __fastcall Etw_EnableCallback(__int64 a1, int a2)
{
  __int64 v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rbp
  __int64 v5; // rcx
  SIZE_T v6; // rbx
  void *v7; // rsi
  KIRQL v8; // al
  unsigned __int64 ProcessorHistory; // rcx
  KIRQL v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // r12d
  __int64 *v16; // r15
  __int64 v17; // r14
  KSPIN_LOCK *v18; // rbx
  KIRQL v19; // al
  __int64 v20; // rdi
  PVOID v21; // r13
  KIRQL v22; // al
  _QWORD *v23; // rsi
  unsigned int v24; // ebp
  _QWORD *v25; // rbx
  _QWORD *v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // [rsp+20h] [rbp-F8h]
  KIRQL v31; // [rsp+A0h] [rbp-78h]
  int v32; // [rsp+A4h] [rbp-74h]
  unsigned int v33; // [rsp+A4h] [rbp-74h]
  int v34; // [rsp+A8h] [rbp-70h]
  __int64 Size; // [rsp+B0h] [rbp-68h]
  size_t Sizea; // [rsp+B0h] [rbp-68h]
  PVOID PoolWithTag; // [rsp+B8h] [rbp-60h]
  __int64 v38; // [rsp+C8h] [rbp-50h]
  GUID v39; // [rsp+D8h] [rbp-40h] BYREF

  if ( a2 )
  {
    *(_QWORD *)&v39.Data1 = 0LL;
    *(_QWORD *)v39.Data4 = 0LL;
    EtwActivityIdControl(3u, &v39);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 1) != 0 )
      TemplateEventDescriptor(v2, &USBXHCI_ETW_EVENT_RUNDOWN_START, &v39);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16));
    LODWORD(v4) = *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24);
    v34 = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16), v3);
    if ( (_DWORD)v4 )
    {
      v6 = 8LL * (unsigned int)v4;
      PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, v6, 0x49434858u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        while ( 1 )
        {
          memset(v7, 0, v6);
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16));
          ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
          v10 = v8;
          if ( (unsigned int)v4 >= *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24) )
            break;
          v4 = *(unsigned int *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24);
          v34 = *(_DWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24);
          KeReleaseSpinLock((PKSPIN_LOCK)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16), v8);
          ExFreePoolWithTag(v7, 0x49434858u);
          v6 = 8 * v4;
          PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 8 * v4, 0x49434858u);
          v7 = PoolWithTag;
          if ( !PoolWithTag )
            return;
        }
        v11 = *(_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory - 16LL;
        v12 = 0LL;
        v13 = *(_QWORD **)WPP_MAIN_CB.Dpc.ProcessorHistory;
        if ( WPP_MAIN_CB.Dpc.ProcessorHistory != *(_QWORD *)WPP_MAIN_CB.Dpc.ProcessorHistory )
        {
          do
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01015 + 1640))(
              WdfDriverGlobals,
              *(_QWORD *)(v11 + 8),
              Etw_EnableCallback,
              159LL,
              "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
            *((_QWORD *)v7 + v12) = v11;
            v12 = (unsigned int)(v12 + 1);
            v11 = *v13 - 16LL;
            v13 = (_QWORD *)*v13;
          }
          while ( (_QWORD *)ProcessorHistory != v13 );
          LODWORD(v4) = v34;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(ProcessorHistory + 16), v10);
        v15 = 0;
        if ( (_DWORD)v4 )
        {
          v16 = (__int64 *)v7;
          do
          {
            v17 = *v16;
            v38 = *v16;
            if ( !*v16 )
              break;
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 1) != 0 )
            {
              LODWORD(v30) = *(_DWORD *)(v17 + 148);
              Template_pqqqqqqqsssxqqqt(
                v17 + 210,
                &USBXHCI_ETW_EVENT_RUNDOWN_CONTROLLER_INFORMATION,
                &v39,
                *(_QWORD *)(v17 + 8),
                v30,
                *(_DWORD *)(v17 + 164),
                *(unsigned __int16 *)(v17 + 168),
                *(unsigned __int16 *)(v17 + 172),
                *(unsigned __int16 *)(v17 + 152),
                *(unsigned __int16 *)(v17 + 156),
                *(unsigned __int8 *)(v17 + 160),
                v17 + 200,
                v17 + 205,
                v17 + 210,
                *(_QWORD *)(v17 + 224),
                *(_DWORD *)(v17 + 344),
                *(_DWORD *)(v17 + 280),
                *(_DWORD *)(v17 + 144),
                *(unsigned __int8 *)(v17 + 408));
            }
            v18 = (KSPIN_LOCK *)(v17 + 32);
            v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 32));
            v20 = *(unsigned int *)(v17 + 56);
            v32 = *(_DWORD *)(v17 + 56);
            KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 32), v19);
            if ( (_DWORD)v20 )
            {
              Size = 8 * v20;
              v21 = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 8 * v20, 0x49434858u);
              if ( v21 )
              {
                while ( 1 )
                {
                  memset(v21, 0, Size);
                  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 32));
                  v31 = v22;
                  if ( (unsigned int)v20 >= *(_DWORD *)(v17 + 56) )
                    break;
                  LODWORD(v20) = *(_DWORD *)(v17 + 56);
                  v32 = v20;
                  KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 32), v22);
                  ExFreePoolWithTag(v21, 0x49434858u);
                  Size = 8LL * (unsigned int)v20;
                  v21 = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, Size, 0x49434858u);
                  if ( !v21 )
                    goto LABEL_16;
                }
                v23 = *(_QWORD **)(v17 + 40);
                if ( (_QWORD *)(v17 + 40) != v23 )
                {
                  v24 = 0;
                  v25 = (_QWORD *)(*(_QWORD *)(v17 + 40) - 72LL);
                  v26 = (_QWORD *)(v17 + 40);
                  do
                  {
                    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015 + 1640))(
                      WdfDriverGlobals,
                      *v25,
                      Etw_DeviceListRundown,
                      358LL,
                      "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
                    v27 = v24++;
                    *((_QWORD *)v21 + v27) = v25;
                    v25 = (_QWORD *)(*v23 - 72LL);
                    v23 = (_QWORD *)*v23;
                  }
                  while ( v26 != v23 );
                  v17 = v38;
                  LODWORD(v4) = v34;
                  LODWORD(v20) = v32;
                  v18 = (KSPIN_LOCK *)(v38 + 32);
                }
                KeReleaseSpinLock(v18, v31);
                v33 = 0;
                if ( (_DWORD)v20 )
                {
                  v28 = v21;
                  Sizea = (size_t)v21;
                  do
                  {
                    v29 = (_QWORD *)*v28;
                    if ( !*v28 )
                      break;
                    Etw_DeviceRundown(&v39, *v28);
                    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015 + 1648))(
                      WdfDriverGlobals,
                      *v29,
                      Etw_DeviceListRundown,
                      391LL,
                      "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
                    v28 = (_QWORD *)(Sizea + 8);
                    ++v33;
                    Sizea += 8LL;
                  }
                  while ( v33 < (unsigned int)v20 );
                  LODWORD(v4) = v34;
                }
                ExFreePoolWithTag(v21, 0x49434858u);
              }
            }
LABEL_16:
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01015 + 1648))(
              WdfDriverGlobals,
              *(_QWORD *)(v17 + 8),
              Etw_EnableCallback,
              193LL,
              "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v15;
            ++v16;
          }
          while ( v15 < (unsigned int)v4 );
          v7 = PoolWithTag;
        }
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 1) != 0 )
          TemplateEventDescriptor(v14, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v39);
        if ( v7 )
          ExFreePoolWithTag(v7, 0x49434858u);
      }
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 1) != 0 )
    {
      TemplateEventDescriptor(v5, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v39);
    }
  }
}
