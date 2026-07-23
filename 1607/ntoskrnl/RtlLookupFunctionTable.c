/*
 * XREFs of RtlLookupFunctionTable @ 0x1400B38E8
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140156E88 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x140777304 (CcInitializeBcbProfiler.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400510C0 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 < *(&xmmword_1402F6FB0 + 1) || a1 >= *(&xmmword_1402F6FB0 + 1) + (unsigned int)qword_1402F6FC0 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64 *)&v6);
  }
  else
  {
    v6 = *(_OWORD *)&xmmword_1402F6FB0;
    v7 = qword_1402F6FC0;
    result = (PVOID)xmmword_1402F6FB0;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
