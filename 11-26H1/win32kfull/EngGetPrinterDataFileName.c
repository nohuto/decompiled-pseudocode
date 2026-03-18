/*
 * XREFs of EngGetPrinterDataFileName @ 0x14031C600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetPrinterDataFileName(HDEV hdev)
{
  return (LPWSTR)*((_QWORD *)hdev + 188);
}
