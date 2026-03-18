/*
 * XREFs of MiCheckBadSystemProcessAccess @ 0x14011ECB4
 * Callers:
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckBadSystemProcessAccess(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        struct _KPROCESS *a4)
{
  __int64 result; // rax

  if ( BugCheckParameter2 >= 0x10000 )
  {
    result = (__int64)MmHighestUserAddress - 0x10000;
    if ( (char *)BugCheckParameter2 <= (char *)MmHighestUserAddress - 0x10000
      && !a2
      && (a3 & 2) != 0
      && a4 == PsInitialSystemProcess )
    {
      KeBugCheckEx(0x1Au, 0x4477uLL, BugCheckParameter2, 0LL, 0LL);
    }
  }
  return result;
}
