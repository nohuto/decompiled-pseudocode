/*
 * XREFs of RetrieveCurrentDisplayState @ 0x1C00794F0
 * Callers:
 *     SetProtocolType @ 0x1C0079380 (SetProtocolType.c)
 *     DriverEntry @ 0x1C01372C0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS RetrieveCurrentDisplayState()
{
  NTSTATUS result; // eax
  int v1; // edx
  NTSTATUS v2; // r8d
  int v3; // eax
  bool v4; // zf
  int OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  result = ZwPowerInformation(SystemVideoState, 0LL, 0, &OutputBuffer, 4u);
  v1 = 0;
  v2 = result;
  if ( result < 0 )
  {
    dword_1C00FFF88 = 0;
  }
  else
  {
    v3 = OutputBuffer;
    if ( *(_BYTE *)gpbInHiberBoot )
      v3 = 0;
    v4 = v3 == 0;
    dword_1C00FFF88 = v3;
    result = v2;
    LOBYTE(v1) = !v4;
  }
  gPowerTransitionsState = v1;
  return result;
}
