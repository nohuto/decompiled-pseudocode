/*
 * XREFs of ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C023A044
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C0239E04 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C023A5D8 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExtractRangeFromQueue(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_QUEUE *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  struct tagMOUSE_PROMOTION_ENTRY *v4; // r10
  BOOL v7; // ebx
  BOOL v8; // eax
  struct tagMOUSE_PROMOTION_ENTRY *v9; // rdx
  struct tagMOUSE_PROMOTION_ENTRY *v10; // r8

  v4 = *a1;
  if ( *a1 )
  {
    if ( !a4 )
      a4 = a1[1];
    v7 = v4 == a3;
    v8 = a1[1] == a4;
    v9 = 0LL;
    if ( v4 != a3 )
    {
      v9 = *a1;
      do
      {
        v10 = *(struct tagMOUSE_PROMOTION_ENTRY **)v9;
        if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v9 == a3 )
          break;
        v9 = *(struct tagMOUSE_PROMOTION_ENTRY **)v9;
      }
      while ( v10 );
    }
    *(_QWORD *)a2 = a3;
    *((_QWORD *)a2 + 1) = a4;
    if ( v7 )
    {
      if ( v8 )
      {
        *a1 = 0LL;
        a1[1] = 0LL;
      }
      else
      {
        *a1 = *(struct tagMOUSE_PROMOTION_ENTRY **)a4;
      }
    }
    else if ( v8 )
    {
      a1[1] = v9;
      *(_QWORD *)v9 = 0LL;
    }
    else
    {
      *(_QWORD *)v9 = *(_QWORD *)a4;
    }
    *(_QWORD *)a4 = 0LL;
  }
}
