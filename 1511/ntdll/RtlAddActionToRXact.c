/*
 * XREFs of RtlAddActionToRXact @ 0x180082650
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlAddAttributeActionToRXact @ 0x1800826D0 (RtlAddAttributeActionToRXact.c)
 */

__int64 __fastcall RtlAddActionToRXact(int a1, int a2, int a3, int a4, void *Src, size_t a6)
{
  size_t Size; // [rsp+38h] [rbp-20h]
  _UNICODE_STRING v12; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&v12, 0LL);
  LODWORD(Size) = a6;
  return RtlAddAttributeActionToRXact(a1, a2, a3, -1, (__int64)&v12, a4, Src, Size);
}
