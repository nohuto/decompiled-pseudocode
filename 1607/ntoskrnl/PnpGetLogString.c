/*
 * XREFs of PnpGetLogString @ 0x1401CF4AC
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140639900 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgLogDeviceStarted @ 0x14063A21C (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_1406EEA34;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_1406EEA34;
  return result;
}
