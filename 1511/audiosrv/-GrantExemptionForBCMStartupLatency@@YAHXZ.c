/*
 * XREFs of ?GrantExemptionForBCMStartupLatency@@YAHXZ @ 0x180003788
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 GrantExemptionForBCMStartupLatency(void)
{
  unsigned int v0; // ebx
  DWORD v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 4;
  v0 = 1;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"DisableExemptionForBCMStartupLatency",
          0x18u,
          0LL,
          &v3,
          &v2) )
    return v3 == 0;
  return v0;
}
