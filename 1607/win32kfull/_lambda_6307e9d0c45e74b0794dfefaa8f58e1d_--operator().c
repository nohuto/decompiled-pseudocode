/*
 * XREFs of _lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator() @ 0x1C028FD34
 * Callers:
 *     GreGetRandomRgn @ 0x1C014BED0 (GreGetRandomRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator()(__int64 a1, RGNOBJAPI *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v4 = a3;
  if ( a3 )
    return RGNOBJAPI::bCopy(a2, (struct RGNOBJ *)&v4) != 0 ? 1 : -1;
  return result;
}
