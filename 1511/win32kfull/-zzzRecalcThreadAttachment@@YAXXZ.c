/*
 * XREFs of ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C008BA28
 * Callers:
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 * Callees:
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C008BABC (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C008BAD4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C008BBA4 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 */

void zzzRecalcThreadAttachment(void)
{
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax

  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry && !*((_QWORD *)RecalcPtiFromListEntry + 72) )
    {
      v4 = *((_QWORD *)RecalcPtiFromListEntry + 48);
      if ( *(_DWORD *)(v4 + 336) > 1u )
      {
        v5 = AllocQueue(0LL, 0LL);
        *((_QWORD *)v3 + 72) = v5;
        if ( !v5 )
          return;
        ++*(_DWORD *)(v5 + 336);
      }
      else
      {
        *((_QWORD *)v3 + 72) = v4;
      }
      zzzRecalc2(*((struct tagQ **)v3 + 72));
    }
  }
}
