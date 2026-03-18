/*
 * XREFs of ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x14005ABD0
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x14005AB28 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x14005AAE8 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x14005ACF8 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall zzzRecalc2(struct tagQ *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  int v4; // r15d
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *Flink; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagQ **v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *i; // rbx
  struct tagQ **v14; // rsi
  struct tagQ *v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70592);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  do
  {
    v4 = 0;
    RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
    Flink = RecalcHeadPtiListEntry->Flink;
    if ( RecalcHeadPtiListEntry->Flink == RecalcHeadPtiListEntry )
      break;
    do
    {
      RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(Flink);
      v10 = (struct tagQ **)RecalcPtiFromListEntry;
      if ( RecalcPtiFromListEntry && *((struct tagQ **)RecalcPtiFromListEntry + 86) == a1 )
      {
        for ( i = *(_QWORD **)(W32GetUserSessionState(v9, v8) + 16896); i; i = (_QWORD *)*i )
        {
          W32GetUserSessionState(v12, v11);
          v14 = (struct tagQ **)i[1];
          if ( v14 == v10 )
          {
            v14 = (struct tagQ **)i[2];
          }
          else if ( (struct tagQ **)i[2] != v10 )
          {
            continue;
          }
          if ( v14[86] != a1 )
          {
            v15 = tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)v14, a1);
            if ( v15 )
              zzzDestroyQueue(v15, v14);
            v4 = 1;
          }
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != RecalcHeadPtiListEntry );
  }
  while ( v4 );
  if ( v16[0] )
    --*(_DWORD *)(v17 + 28);
  zzzEndDeferWinEventNotify();
}
