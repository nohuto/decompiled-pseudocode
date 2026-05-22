/*
 * XREFs of ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x1800722F0
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z @ 0x180072150 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800725A4 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 */

__int64 __fastcall RIMDeviceCollection::OnReadCallbackStatic(RIMDeviceCollection *a1, int a2, void *a3)
{
  int Event; // eax
  __int64 v4; // rcx

  if ( a2 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 2, 437, 255);
  }
  else
  {
    Event = RIMDeviceCollection::OnReadEvent(a1);
    if ( Event < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 2, 433, Event);
  }
  return 0LL;
}
