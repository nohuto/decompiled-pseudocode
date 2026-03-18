/*
 * XREFs of MultiUserCleanupDCs @ 0x1C006CF54
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C006CE28 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002AD40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 */

void MultiUserCleanupDCs()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  GdiHandleEntryDirectory **DeferredContext; // rsi
  unsigned int v3; // edi
  int v4; // ebp
  unsigned int v5; // ebx
  unsigned int NextEntryIndex; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  struct _ENTRY *Entry; // rax
  int v10; // edx
  __int64 CurrentProcessWin32Process; // rax
  int v12; // edx
  int v13; // r8d
  struct _ENTRY *v14; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v3 = 0;
  v4 = 0;
  v5 = CurrentProcessId & 0xFFFFFFFC;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v1, v3, &v14);
      v3 = NextEntryIndex;
      if ( !NextEntryIndex )
        break;
      v8 = GdiHandleManager::DecodeIndex(DeferredContext, NextEntryIndex);
      Entry = GdiHandleEntryDirectory::GetEntry(DeferredContext[2], v8, 0);
      v14 = Entry;
      if ( *((_BYTE *)Entry + 14) == 1 )
      {
        v10 = *((_DWORD *)Entry + 2);
        v1 = (GdiHandleManager *)(v10 & 0xFFFFFFFE);
        if ( (_DWORD)v1 != v5 )
        {
          *((_DWORD *)Entry + 2) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)v10) & 1;
          ++v4;
          DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v4;
    vCleanupDCs(v5, v12, v13);
  }
}
