/*
 * XREFs of HmgNextGarbageCollectible @ 0x1C00C0B98
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CCF24 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002AD40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgNextGarbageCollectible(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  GdiHandleManager *v6; // rcx
  __int64 v7; // rcx
  unsigned int NextEntryIndex; // ebx
  GdiHandleEntryDirectory **DeferredContext; // rsi
  struct _ENTRY *v10; // rdi
  struct OBJECT *EntryObject; // rax
  unsigned __int64 v13; // rdx
  struct _ENTRY *v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = a1;
  GreAcquireHmgrSemaphore(a1, (int)a2, (int)a3);
  NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v6, v5, &v14);
  if ( NextEntryIndex )
  {
    DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
    while ( 1 )
    {
      v10 = v14;
      if ( *((_DWORD *)v14 + 2) == -2147483630 )
      {
        EntryObject = GdiHandleManager::GetEntryObject(DeferredContext, NextEntryIndex);
        if ( EntryObject )
        {
          v7 = 0x4000LL;
          if ( (*((_WORD *)EntryObject + 7) & 0x4000) != 0 )
            break;
        }
      }
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)v7, NextEntryIndex, &v14);
      if ( !NextEntryIndex )
        goto LABEL_7;
    }
    v7 = (unsigned __int16)NextEntryIndex;
    v13 = (unsigned __int16)NextEntryIndex | (unsigned __int64)(*((unsigned __int16 *)v10 + 6) << 16);
    *a3 = *((_BYTE *)v10 + 14);
    *a2 = v13;
  }
  else
  {
LABEL_7:
    NextEntryIndex = 0;
  }
  GreReleaseHmgrSemaphore(v7);
  return NextEntryIndex;
}
