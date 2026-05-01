/*
 * XREFs of RtlStringLengthWorkerW @ 0x18000457C
 * Callers:
 *     GetNormalizedObjectPath @ 0x180003E10 (GetNormalizedObjectPath.c)
 *     RtlStringCbCatW @ 0x18000449C (RtlStringCbCatW.c)
 *     RtlStringCbLengthW @ 0x18000451C (RtlStringCbLengthW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringLengthWorkerW(_WORD *a1, __int64 a2, _QWORD *a3)
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
