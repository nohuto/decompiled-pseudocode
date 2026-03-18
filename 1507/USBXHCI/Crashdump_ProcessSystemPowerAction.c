/*
 * XREFs of Crashdump_ProcessSystemPowerAction @ 0x1C0034454
 * Callers:
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0001FC0 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall Crashdump_ProcessSystemPowerAction(__int64 a1, int a2)
{
  int v3; // edx
  ULONG result; // eax

  v3 = a2 - 4;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = DbgPrintEx(0x93u, 3u, "XHCIDUMP: Going to S4\n");
      *(_DWORD *)(a1 + 576) = 1;
    }
  }
  else
  {
    result = DbgPrintEx(0x93u, 3u, "XHCIDUMP: Going to S3\n");
    *(_DWORD *)(a1 + 576) = 5;
  }
  return result;
}
