/*
 * XREFs of IoPropagateIrpExtension @ 0x14008DC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoPropagateIrpExtension(__int64 a1, __int64 a2, unsigned int a3)
{
  return IoPropagateIrpExtensionEx(a1, a2, 0LL, a3);
}
