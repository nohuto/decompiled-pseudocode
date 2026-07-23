/*
 * XREFs of VerifierIoAllocateMdl @ 0x140705568
 * Callers:
 *     <none>
 * Callees:
 *     XdvIoAllocateMdl @ 0x140223244 (XdvIoAllocateMdl.c)
 */

__int64 __fastcall VerifierIoAllocateMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  return pXdvIoAllocateMdl(a1, a2, a3, a4, a5, (int)retaddr, (__int64 (*)(void))IovAllocateMdl);
}
