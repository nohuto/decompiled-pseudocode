/*
 * XREFs of PnpGetLogString @ 0x1401CF240
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgLogDeviceStarted @ 0x14063A2D0 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_1406EEB64;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_1406EEB64;
  return result;
}
