/*
 * XREFs of IrqArbpGetRangeData @ 0x1C008C68C
 * Callers:
 *     IrqArbPackResource @ 0x1C008B5D0 (IrqArbPackResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbpGetRangeData(__int64 a1, PVOID *a2)
{
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+60h] [rbp+18h] BYREF

  RtlGetFirstRange(qword_1C0073570, &Iterator, &Range);
  while ( 1 )
  {
    if ( !Range )
      return 3221226021LL;
    if ( Range->Start == a1 )
      break;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  *a2 = Range->UserData;
  return 0LL;
}
