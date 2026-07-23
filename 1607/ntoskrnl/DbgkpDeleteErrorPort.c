/*
 * XREFs of DbgkpDeleteErrorPort @ 0x14061A2A0
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x1401B7488 (DbgkpDereferenceErrorPort.c)
 * Callees:
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *a1)
{
  ObCloseHandle(a1[1], 0);
  ExFreePoolWithTag(a1, 0);
}
