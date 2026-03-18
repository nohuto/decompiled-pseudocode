/*
 * XREFs of HmgValidHandle @ 0x1C00577F0
 * Callers:
 *     GreValidateServerHandle @ 0x1C0057780 (GreValidateServerHandle.c)
 *     UserValidateCopyRgn @ 0x1C0057790 (UserValidateCopyRgn.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgValidHandle(unsigned int a1, char a2)
{
  GdiHandleEntryDirectory **DeferredContext; // rbx
  __int16 v4; // edi^2
  unsigned int v5; // eax
  struct _ENTRY *Entry; // rax
  int v7; // r8d

  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v4 = HIWORD(a1);
  v5 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(DeferredContext[2], v5, 0);
  if ( Entry && *((_BYTE *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    return (unsigned int)(v7 + 1);
  else
    return 0LL;
}
