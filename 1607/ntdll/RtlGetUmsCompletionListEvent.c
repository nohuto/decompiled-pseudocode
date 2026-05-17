/*
 * XREFs of RtlGetUmsCompletionListEvent @ 0x1800ECA20
 * Callers:
 *     <none>
 * Callees:
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 */

__int64 __fastcall RtlGetUmsCompletionListEvent(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+50h] [rbp+8h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  result = ZwDuplicateObject();
  if ( (int)result >= 0 )
  {
    *a2 = v4;
    return 0LL;
  }
  return result;
}
