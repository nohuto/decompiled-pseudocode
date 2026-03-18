/*
 * XREFs of Counter_Register @ 0x1C00508F4
 * Callers:
 *     DriverEntry @ 0x1C00505D0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0010E80 (memset.c)
 */

NTSTATUS Counter_Register()
{
  NTSTATUS result; // eax
  int v1; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v2; // [rsp+28h] [rbp-38h]
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+30h] [rbp-30h] BYREF

  result = (NTSTATUS)WPP_MAIN_CB.Dpc.DpcListEntry.Next;
  if ( BYTE4(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next) )
  {
    v1 = 2228256;
    v2 = L"XHCI Interrupter";
    memset(&Info, 0, sizeof(Info));
    Info.Callback = 0LL;
    Info.CallbackContext = 0LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`Ctr_RegisterInterrupter'::`2'::Descriptors;
    Info.Version = 256;
    Info.Name = (const _UNICODE_STRING *)&v1;
    Info.CounterCount = 6;
    PcwRegister((PPCW_REGISTRATION *)&WPP_MAIN_CB.Dpc.ProcessorHistory, &Info);
    v1 = 2359330;
    v2 = L"XHCI CommonBuffer";
    memset(&Info, 0, sizeof(Info));
    Info.Callback = 0LL;
    Info.CallbackContext = 0LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`Ctr_RegisterCommonBuffer'::`2'::Descriptors;
    Info.Version = 256;
    Info.Name = (const _UNICODE_STRING *)&v1;
    Info.CounterCount = 4;
    PcwRegister((PPCW_REGISTRATION *)&WPP_MAIN_CB.Dpc.DeferredContext, &Info);
    v1 = 2359330;
    v2 = L"XHCI TransferRing";
    memset(&Info, 0, sizeof(Info));
    Info.Callback = 0LL;
    Info.CallbackContext = 0LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`Ctr_RegisterTransferRing'::`2'::Descriptors;
    Info.Version = 256;
    Info.Name = (const _UNICODE_STRING *)&v1;
    Info.CounterCount = 7;
    return PcwRegister((PPCW_REGISTRATION *)&WPP_MAIN_CB.Dpc.DeferredRoutine, &Info);
  }
  return result;
}
