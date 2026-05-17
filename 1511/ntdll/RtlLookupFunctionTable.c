/*
 * XREFs of RtlLookupFunctionTable @ 0x1800D3930
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 < *((_QWORD *)&xmmword_180155330 + 1)
    || a1 >= *((_QWORD *)&xmmword_180155330 + 1) + (unsigned __int64)(unsigned int)qword_180155340 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64)&v6);
  }
  else
  {
    result = xmmword_180155330;
    v6 = xmmword_180155330;
    v7 = qword_180155340;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
