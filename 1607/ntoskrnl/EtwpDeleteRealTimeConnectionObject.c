/*
 * XREFs of EtwpDeleteRealTimeConnectionObject @ 0x1404F0120
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 */

LONG_PTR __fastcall EtwpDeleteRealTimeConnectionObject(HANDLE *a1)
{
  ZwClose(a1[2]);
  ObfDereferenceObject(a1[6]);
  return ObfDereferenceObject(a1[7]);
}
