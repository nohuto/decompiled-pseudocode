/*
 * XREFs of ?InsertInListByRank@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C01C7250
 * Callers:
 *     AddToActiveDevices @ 0x1C01C8E7C (AddToActiveDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall InsertInListByRank(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rax

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
  {
LABEL_4:
    Blink = a1->Blink;
    a2->Flink = a1;
    a2->Blink = Blink;
    if ( Blink->Flink != a1 )
      __fastfail(3u);
    Blink->Flink = a2;
    a1->Blink = a2;
  }
  else
  {
    while ( SHIDWORD(Flink[-1].Blink[93].Flink) > SHIDWORD(a2[-1].Blink[93].Flink) )
    {
      Flink = Flink->Flink;
      if ( Flink == a1 )
        goto LABEL_4;
    }
    a2->Flink = Flink;
    Flink->Blink->Flink = a2;
    a2->Blink = Flink->Blink;
    Flink->Blink = a2;
  }
}
