/*
 * XREFs of HmgSetLock @ 0x1C005A5C0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgSetLock(unsigned int a1)
{
  GdiHandleEntryDirectory **DeferredContext; // rbp
  __int16 v2; // edi^2
  unsigned int v3; // esi
  unsigned int v4; // eax
  struct _ENTRY *Entry; // rax
  unsigned int v6; // ebx

  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v2 = HIWORD(a1);
  v3 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v3);
  Entry = GdiHandleEntryDirectory::GetEntry(DeferredContext[2], v4, 0);
  v6 = (unsigned int)Entry;
  if ( Entry && *((_WORD *)Entry + 6) == v2 )
    *((_WORD *)GdiHandleManager::GetEntryObject(DeferredContext, v3) + 6) = 0;
  else
    return 0;
  return v6;
}
