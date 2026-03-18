/*
 * XREFs of EtwpDeleteRealTimeConnectionObject @ 0x1404C52E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 */

LONG_PTR __fastcall EtwpDeleteRealTimeConnectionObject(HANDLE *a1)
{
  ZwClose(a1[2]);
  ObfDereferenceObject(a1[6]);
  return ObfDereferenceObject(a1[7]);
}
