/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C002ADD0
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C002A0C0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C002B060 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C002B164 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 */

void __fastcall GdiHandleManager::ReleaseLockAndEntry(GdiHandleManager *this, struct OBJECT *a2)
{
  PVOID DeferredContext; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rax
  unsigned int v6; // edi

  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v4 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
         (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000u);
  v5 = *((_QWORD *)DeferredContext + 3);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4LL * (unsigned __int16)v4);
    if ( v6 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)DeferredContext + 2), v6, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)DeferredContext + 2), v6, 1);
      *(_DWORD *)(*((_QWORD *)DeferredContext + 3) + 4LL * (unsigned __int16)v4) = 0;
      --*((_DWORD *)DeferredContext + 1);
    }
  }
  GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)DeferredContext + 2), v4, 0);
  *(_QWORD *)a2 = 0LL;
  --*((_DWORD *)DeferredContext + 1);
}
