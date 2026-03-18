/*
 * XREFs of HUBDSM_CheckingIfDeviceSupportsContainerId @ 0x1C00182A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceSupportsContainerId(__int64 a1)
{
  return (*(_BYTE *)(*(_QWORD *)(a1 + 960) + 2081LL) & 2) != 0 ? 4089 : 4061;
}
