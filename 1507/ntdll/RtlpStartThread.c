/*
 * XREFs of RtlpStartThread @ 0x1800F6180
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateUserThread @ 0x180076510 (RtlCreateUserThread.c)
 */

NTSTATUS __fastcall RtlpStartThread(NTSTATUS (__cdecl *a1)(PVOID), void *a2, HANDLE *a3)
{
  return RtlCreateUserThread((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 1u, 0, 0LL, 0LL, a1, a2, a3, 0LL);
}
