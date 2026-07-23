/*
 * XREFs of RtlGetNextRange @ 0x14055A5F0
 * Callers:
 *     ArbOverrideConflict @ 0x1405586C4 (ArbOverrideConflict.c)
 *     ArbShareDriverExclusive @ 0x140558810 (ArbShareDriverExclusive.c)
 *     RtlpIsRangeAvailable @ 0x14055A524 (RtlpIsRangeAvailable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetNextRange(PRTL_RANGE_LIST_ITERATOR Iterator, PRTL_RANGE *Range, BOOLEAN MoveForwards)
{
  PLIST_ENTRY RangeListHead; // r11
  _QWORD *Current; // rax
  __int64 v7; // rcx
  PLIST_ENTRY MergedHead; // r8
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v12; // rax

  RangeListHead = Iterator->RangeListHead;
  if ( LODWORD(Iterator->RangeListHead[1].Blink) != Iterator->Stamp )
    return -1073741811;
  Current = Iterator->Current;
  if ( Current )
  {
    if ( MoveForwards )
      v7 = Current[5];
    else
      v7 = Current[6];
    MergedHead = Iterator->MergedHead;
    p_Blink = (struct _LIST_ENTRY **)(v7 - 40);
    if ( MergedHead )
    {
      if ( p_Blink + 5 != (struct _LIST_ENTRY **)MergedHead )
      {
        Iterator->Current = p_Blink;
        *Range = (PRTL_RANGE)p_Blink;
        return 0;
      }
      if ( MoveForwards )
        Blink = MergedHead[1].Blink;
      else
        Blink = MergedHead[2].Flink;
      p_Blink = &Blink[-3].Blink;
      Iterator->MergedHead = 0LL;
    }
    if ( p_Blink + 5 != (struct _LIST_ENTRY **)RangeListHead )
    {
      if ( (*((_BYTE *)p_Blink + 34) & 1) != 0 )
      {
        Iterator->MergedHead = (PLIST_ENTRY)(p_Blink + 2);
        if ( MoveForwards )
          v12 = p_Blink[2];
        else
          v12 = p_Blink[3];
        Iterator->Current = &v12[-3].Blink;
      }
      else
      {
        Iterator->Current = p_Blink;
      }
      *Range = (PRTL_RANGE)Iterator->Current;
      return 0;
    }
    Iterator->Current = 0LL;
  }
  *Range = 0LL;
  return -2147483622;
}
