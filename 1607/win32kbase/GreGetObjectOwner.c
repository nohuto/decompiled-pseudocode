/*
 * XREFs of GreGetObjectOwner @ 0x1C0078980
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0038F60 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EngGetRgnData @ 0x1C00786C0 (EngGetRgnData.c)
 *     EngCombineRgn @ 0x1C00787F0 (EngCombineRgn.c)
 *     EngSetRectRgn @ 0x1C0078890 (EngSetRectRgn.c)
 *     EngDeleteRgn @ 0x1C0078910 (EngDeleteRgn.c)
 *     EngCopyRgn @ 0x1C00CB3E0 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C00CB460 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00CB520 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C00CB580 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00CB610 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00CB680 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C00CB6E0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00CB770 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00CB800 (EngXorRgn.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GreGetObjectOwner(unsigned int a1, int a2)
{
  GdiHandleEntryDirectory **DeferredContext; // rbx
  __int16 v4; // esi^2
  unsigned int v5; // edi
  unsigned int v6; // eax
  struct _ENTRY *Entry; // rax

  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v4 = HIWORD(a1);
  v5 = -2147483614;
  v6 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(DeferredContext[2], v6, 0);
  if ( Entry && *((unsigned __int8 *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    return *((_DWORD *)Entry + 2) & 0xFFFFFFFE;
  return v5;
}
