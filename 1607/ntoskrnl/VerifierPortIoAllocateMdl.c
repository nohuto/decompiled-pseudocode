/*
 * XREFs of VerifierPortIoAllocateMdl @ 0x1407058B8
 * Callers:
 *     <none>
 * Callees:
 *     XdvIoAllocateMdl @ 0x140223244 (XdvIoAllocateMdl.c)
 */

__int64 __fastcall VerifierPortIoAllocateMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  return pXdvIoAllocateMdl(a1, a2, a3, a4, a5, a6, (__int64 (*)(void))IovAllocateMdl);
}
