/*
 * XREFs of NtGdiGetEntry @ 0x1C007D600
 * Callers:
 *     <none>
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall NtGdiGetEntry(unsigned int a1, unsigned __int64 a2)
{
  GdiHandleEntryDirectory **DeferredContext; // rbx
  unsigned int v4; // eax
  struct _ENTRY *Entry; // r8

  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, a1);
  Entry = GdiHandleEntryDirectory::GetEntry(DeferredContext[2], v4, 0);
  if ( !Entry )
    return 3221225473LL;
  if ( a2 + 24 > W32UserProbeAddress || a2 + 24 <= a2 )
    *(_BYTE *)W32UserProbeAddress = 0;
  *(_OWORD *)a2 = *(_OWORD *)Entry;
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Entry + 2);
  return 0LL;
}
