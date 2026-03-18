/*
 * XREFs of NtGdiBitBlt @ 0x1C0095CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiBitBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return NtGdiBitBltInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11 & 0xFFFFFFFD);
}
