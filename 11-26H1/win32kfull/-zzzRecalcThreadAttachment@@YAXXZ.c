/*
 * XREFs of ?zzzRecalcThreadAttachment@@YAXXZ @ 0x14005AB28
 * Callers:
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x14005991C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x14005AAE8 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x14005ABD0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x14005ACF8 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 */

void zzzRecalcThreadAttachment(void)
{
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ **v3; // rdi
  struct tagQ *v4; // r8
  struct tagQ *v5; // rdx
  __int64 v6; // rax

  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = (struct tagQ **)RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry && !*((_QWORD *)RecalcPtiFromListEntry + 86) )
    {
      if ( tagQ::AreMultipleThreadsAttached(*((tagQ **)RecalcPtiFromListEntry + 58)) )
      {
        v6 = AllocQueue(0LL, 0LL);
        if ( !v6 )
          return;
        v5 = (struct tagQ *)v6;
      }
      else
      {
        v5 = v4;
      }
      tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)v3, v5);
      zzzRecalc2(v3[86]);
    }
  }
}
