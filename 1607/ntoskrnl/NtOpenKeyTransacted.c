/*
 * XREFs of NtOpenKeyTransacted @ 0x1405F97D0
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x1404DEB08 (NtOpenKeyTransactedEx.c)
 */

__int64 __fastcall NtOpenKeyTransacted(HANDLE *a1, int a2, __int64 a3, void *Handle)
{
  return NtOpenKeyTransactedEx(a1, a2, a3, 0, Handle);
}
