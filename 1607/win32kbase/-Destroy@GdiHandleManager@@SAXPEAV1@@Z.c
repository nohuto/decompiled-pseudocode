/*
 * XREFs of ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C006DD38
 * Callers:
 *     HmgCreate @ 0x1C00533A4 (HmgCreate.c)
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1C006DD6C (-Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z.c)
 */

void __fastcall GdiHandleManager::Destroy(struct GdiHandleManager *a1)
{
  struct GdiHandleEntryDirectory **DeferredContext; // rbx

  DeferredContext = (struct GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  if ( *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 3) )
    Win32FreePool();
  GdiHandleEntryDirectory::Destroy(DeferredContext[2]);
  Win32FreePool();
}
