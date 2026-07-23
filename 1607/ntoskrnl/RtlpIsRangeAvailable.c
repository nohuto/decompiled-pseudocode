/*
 * XREFs of RtlpIsRangeAvailable @ 0x14055A524
 * Callers:
 *     RtlFindRange @ 0x14055A330 (RtlFindRange.c)
 *     RtlIsRangeAvailable @ 0x14055A478 (RtlIsRangeAvailable.c)
 * Callees:
 *     RtlGetNextRange @ 0x14055A5F0 (RtlGetNextRange.c)
 */

char __fastcall RtlpIsRangeAvailable(
        PRTL_RANGE_LIST_ITERATOR Iterator,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        BOOLEAN MoveForwards,
        __int64 a8,
        unsigned __int8 (__fastcall *a9)(__int64))
{
  struct _RTL_RANGE *Current; // rdx
  unsigned __int64 Start; // rax
  bool v15; // cf
  PRTL_RANGE Range; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _RTL_RANGE *)Iterator->Current;
  for ( Range = Current; ; Current = Range )
  {
    if ( !Current )
      return 1;
    if ( MoveForwards )
    {
      if ( !Iterator->MergedHead && a3 < Current->Start )
        return 1;
    }
    else if ( !Iterator->MergedHead && a2 > Current->End )
    {
      return 1;
    }
    Start = Current->Start;
    v15 = Current->Start < a2;
    if ( Current->Start > a2 )
    {
      if ( a3 < Start )
        goto LABEL_9;
      v15 = Start < a2;
    }
    if ( (!v15 || Current->End >= a2)
      && (!a5 || (Current->Flags & 1) == 0)
      && (Current->Attributes & a4) == 0
      && (!a6 || Current->Owner)
      && (!a9 || !a9(a8)) )
    {
      break;
    }
LABEL_9:
    RtlGetNextRange(Iterator, &Range, MoveForwards);
  }
  return 0;
}
