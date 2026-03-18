/*
 * XREFs of sub_1401A88D0 @ 0x1401A88D0
 * Callers:
 *     RtlStringCbCatExA @ 0x1401A85AC (RtlStringCbCatExA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401A88D0(_BYTE *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = 256LL;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  result = 0LL;
  if ( !v3 )
    result = 3221225485LL;
  if ( a3 )
  {
    if ( (int)result < 0 )
      *a3 = 0LL;
    else
      *a3 = 256 - v3;
  }
  return result;
}
