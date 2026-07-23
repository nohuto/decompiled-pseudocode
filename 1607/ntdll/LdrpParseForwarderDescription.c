/*
 * XREFs of LdrpParseForwarderDescription @ 0x18007B834
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180031D50 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x18007B5DC (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlCharToInteger @ 0x18007B8D0 (RtlCharToInteger.c)
 *     strrchr @ 0x18009BA90 (strrchr.c)
 */

__int64 __fastcall LdrpParseForwarderDescription(const char *a1, __int64 a2, char **a3, ULONG *a4)
{
  char *v8; // rax
  __int16 v9; // cx
  char *v10; // rax

  v8 = strrchr(a1, 46);
  if ( v8 )
  {
    v9 = (_WORD)v8 - (_WORD)a1;
    if ( (unsigned __int64)(v8 - a1) <= 0xFFFF )
    {
      v10 = v8 + 1;
      *(_QWORD *)(a2 + 8) = a1;
      *(_WORD *)a2 = v9;
      *(_WORD *)(a2 + 2) = v9;
      if ( *v10 != 35 )
      {
        *a3 = v10;
        return 0LL;
      }
      if ( RtlCharToInteger(v10 + 1, 0, a4) >= 0 )
      {
        *a3 = 0LL;
        return 0LL;
      }
    }
  }
  return 3221225595LL;
}
