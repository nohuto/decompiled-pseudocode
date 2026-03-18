/*
 * XREFs of HmgQueryAltLock @ 0x1C006C050
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgQueryAltLock(unsigned int a1)
{
  return *((unsigned int *)GdiHandleManager::GetEntryObject(
                             (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                             (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000)
         + 2);
}
