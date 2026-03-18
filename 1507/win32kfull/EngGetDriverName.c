/*
 * XREFs of EngGetDriverName @ 0x1C027F540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetDriverName(HDEV hdev)
{
  return *(LPWSTR *)(*(_QWORD *)(*((_QWORD *)hdev + 227) + 16LL) + 8LL);
}
