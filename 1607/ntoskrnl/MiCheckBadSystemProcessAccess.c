/*
 * XREFs of MiCheckBadSystemProcessAccess @ 0x14010ABB8
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckBadSystemProcessAccess(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        struct _KPROCESS *a4)
{
  __int64 result; // rax
  ULONG_PTR v5; // r10

  result = BugCheckParameter2 - 0x10000;
  if ( BugCheckParameter2 - 0x10000 <= 0x7FFFFFFCFFFFLL && !a2 && (a3 & 2) != 0 )
  {
    if ( a4 == PsInitialSystemProcess )
      KeBugCheckEx(0x1Au, 0x4477uLL, BugCheckParameter2, 0LL, 0LL);
    result = MiIsStoreProcess(a4);
    if ( (_DWORD)result )
      KeBugCheckEx(0x1Au, 0x4478uLL, v5, 0LL, 0LL);
  }
  return result;
}
