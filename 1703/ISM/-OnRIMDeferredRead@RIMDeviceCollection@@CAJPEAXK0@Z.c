/*
 * XREFs of ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800723C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180072088 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMDeferredRead(RIMDeviceCollection *a1, int a2, void *a3)
{
  int InputReportFromRIM; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( a2 )
  {
    v5 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 2, 514, 255);
  }
  else
  {
    *((_BYTE *)a1 + 2736) = 0;
    InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM(a1);
    v5 = InputReportFromRIM;
    if ( InputReportFromRIM < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 2, 510, InputReportFromRIM);
  }
  return v5;
}
