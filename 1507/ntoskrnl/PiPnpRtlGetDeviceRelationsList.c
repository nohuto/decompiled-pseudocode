/*
 * XREFs of PiPnpRtlGetDeviceRelationsList @ 0x140680040
 * Callers:
 *     <none>
 * Callees:
 *     PlugPlayGetDeviceRelations @ 0x14071A620 (PlugPlayGetDeviceRelations.c)
 */

__int64 __fastcall PiPnpRtlGetDeviceRelationsList(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  return PlugPlayGetDeviceRelations(a2, a3, a4, a5, a6, a7);
}
