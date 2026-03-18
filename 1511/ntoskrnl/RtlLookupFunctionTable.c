/*
 * XREFs of RtlLookupFunctionTable @ 0x1400F1248
 * Callers:
 *     KiLockExtendedServiceTable @ 0x14014D5A8 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140028170 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 < *(&xmmword_1402CFDD0 + 1) || a1 >= *(&xmmword_1402CFDD0 + 1) + (unsigned int)qword_1402CFDE0 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64 *)&v6);
  }
  else
  {
    v6 = *(_OWORD *)&xmmword_1402CFDD0;
    v7 = qword_1402CFDE0;
    result = (PVOID)xmmword_1402CFDD0;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
