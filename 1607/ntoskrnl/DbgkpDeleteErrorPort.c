/*
 * XREFs of DbgkpDeleteErrorPort @ 0x14061A1EC
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x1401B75A4 (DbgkpDereferenceErrorPort.c)
 * Callees:
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *a1)
{
  ObCloseHandle(a1[1], 0);
  ExFreePoolWithTag(a1, 0);
}
