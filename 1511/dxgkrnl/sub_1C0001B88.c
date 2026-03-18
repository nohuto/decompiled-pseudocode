/*
 * XREFs of sub_1C0001B88 @ 0x1C0001B88
 * Callers:
 *     RtlStringCchLengthW @ 0x1C00011C8 (RtlStringCchLengthW.c)
 *     RtlStringCbLengthW @ 0x1C0001B30 (RtlStringCbLengthW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0001B88(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = a2;
  result = 0LL;
  if ( !a2 )
    goto LABEL_9;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
LABEL_9:
    result = 3221225485LL;
  if ( a3 )
  {
    if ( (int)result < 0 )
      *a3 = 0LL;
    else
      *a3 = v3 - a2;
  }
  return result;
}
