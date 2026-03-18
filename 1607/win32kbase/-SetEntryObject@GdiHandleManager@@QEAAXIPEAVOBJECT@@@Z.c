/*
 * XREFs of ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002AA90
 * Callers:
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0036B60 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C006C080 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C002AF70 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?SetEntryObject@GdiHandleEntryTable@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002B344 (-SetEntryObject@GdiHandleEntryTable@@QEAAXIPEAVOBJECT@@@Z.c)
 */

void __fastcall GdiHandleManager::SetEntryObject(GdiHandleManager *this, unsigned int a2, struct OBJECT *a3)
{
  GdiHandleEntryDirectory **DeferredContext; // rbx
  unsigned int v5; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]
  struct GdiHandleEntryTable *v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = HIDWORD(this);
  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v8 = 0LL;
  v6 = 0;
  v5 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, a2);
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(DeferredContext[2], v5, &v8, &v6) )
    GdiHandleEntryTable::SetEntryObject(v8, v6, a3);
}
