/*
 * XREFs of HmgSafeNextObjtByIndex @ 0x1C00C0C6C
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002AD40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgSafeNextObjtByIndex(GdiHandleManager *a1, __int64 a2, struct OBJECT **a3)
{
  unsigned int v4; // edx
  unsigned int NextEntryIndex; // ebx
  struct _ENTRY *v7; // [rsp+48h] [rbp+20h] BYREF

  v4 = (unsigned int)a1;
  do
  {
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(a1, v4, &v7);
    if ( !NextEntryIndex )
      return 0LL;
    a1 = v7;
    v4 = NextEntryIndex;
  }
  while ( *((_BYTE *)v7 + 14) != 1 );
  *a3 = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, NextEntryIndex);
  return NextEntryIndex;
}
