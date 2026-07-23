/*
 * XREFs of XdvIoAllocateMdl @ 0x140223244
 * Callers:
 *     VerifierIoAllocateMdl @ 0x140705568 (VerifierIoAllocateMdl.c)
 *     VerifierPortIoAllocateMdl @ 0x1407058B8 (VerifierPortIoAllocateMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvIoAllocateMdl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 (*a7)(void))
{
  return a7();
}
