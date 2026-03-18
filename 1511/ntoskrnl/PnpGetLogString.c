/*
 * XREFs of PnpGetLogString @ 0x14012C398
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x1405130C4 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140513368 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_1406A7164;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_1406A7164;
  return result;
}
