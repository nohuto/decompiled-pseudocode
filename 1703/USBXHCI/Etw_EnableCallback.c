/*
 * XREFs of Etw_EnableCallback @ 0x1C000A5B0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C000A470 (McGenControlCallbackV2.c)
 * Callees:
 *     Etw_ControllerRundown @ 0x1C000A7FC (Etw_ControllerRundown.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     TemplateEventDescriptor @ 0x1C00313F8 (TemplateEventDescriptor.c)
 */

void __fastcall Etw_EnableCallback(__int64 a1, int a2)
{
  __int64 v2; // rcx
  KIRQL v3; // al
  __int64 Next_low; // rbx
  __int64 v5; // rcx
  size_t v6; // rsi
  PVOID PoolWithTag; // rdi
  KIRQL v8; // al
  _SINGLE_LIST_ENTRY *Next; // rcx
  KIRQL v10; // r12
  _SINGLE_LIST_ENTRY *v11; // rsi
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  _SINGLE_LIST_ENTRY *v14; // r15
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
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      TemplateEventDescriptor(v2, &USBXHCI_ETW_EVENT_RUNDOWN_START, &v19);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[2]);
    Next_low = LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[2], v3);
    if ( (_DWORD)Next_low )
    {
      v6 = 8 * Next_low;
      PoolWithTag = ExAllocatePoolWithTag(
                      *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                      8 * Next_low,
                      0x49434858u);
      if ( PoolWithTag )
      {
        while ( 1 )
        {
          memset(PoolWithTag, 0, v6);
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[2]);
          Next = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
          v10 = v8;
          if ( (unsigned int)Next_low >= LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next) )
            break;
          Next_low = LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next);
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[2], v8);
          ExFreePoolWithTag(PoolWithTag, 0x49434858u);
          v6 = 8 * Next_low;
          PoolWithTag = ExAllocatePoolWithTag(
                          *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                          8 * Next_low,
                          0x49434858u);
          if ( !PoolWithTag )
            return;
        }
        v11 = WPP_MAIN_CB.Dpc.DpcListEntry.Next->Next - 2;
        v12 = 0;
        v13 = 0;
        v14 = WPP_MAIN_CB.Dpc.DpcListEntry.Next->Next;
        if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next != WPP_MAIN_CB.Dpc.DpcListEntry.Next->Next )
        {
          do
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _SINGLE_LIST_ENTRY *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01015 + 1640))(
              WdfDriverGlobals,
              v11[1].Next,
              Etw_EnableCallback,
              159LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            Next = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
            v15 = v13++;
            *((_QWORD *)PoolWithTag + v15) = v11;
            v11 = v14->Next - 2;
            v14 = v14->Next;
          }
          while ( Next != v14 );
        }
        KeReleaseSpinLock((PKSPIN_LOCK)&Next[2], v10);
        if ( (_DWORD)Next_low )
        {
          v17 = PoolWithTag;
          do
          {
            v18 = *v17;
            if ( !*v17 )
              break;
            Etw_ControllerRundown(&v19, *v17);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, const char *))(WdfFunctions_01015 + 1648))(
              WdfDriverGlobals,
              *(_QWORD *)(v18 + 8),
              Etw_EnableCallback,
              193LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v12;
            ++v17;
          }
          while ( v12 < (unsigned int)Next_low );
        }
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
          TemplateEventDescriptor(v16, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v19);
        ExFreePoolWithTag(PoolWithTag, 0x49434858u);
      }
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    {
      TemplateEventDescriptor(v5, &USBXHCI_ETW_EVENT_RUNDOWN_COMPLETE, &v19);
    }
  }
}
