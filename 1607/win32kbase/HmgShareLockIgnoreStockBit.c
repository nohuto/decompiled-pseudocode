/*
 * XREFs of HmgShareLockIgnoreStockBit @ 0x1C007A960
 * Callers:
 *     EngModifySurface @ 0x1C007A100 (EngModifySurface.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct OBJECT *__fastcall HmgShareLockIgnoreStockBit(unsigned int a1)
{
  struct OBJECT *EntryObject; // rdi
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  EntryObject = 0LL;
  v4 = 0LL;
  v5 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v4) )
  {
    if ( *(_BYTE *)(v4 + 14) == 5 && ((*(unsigned __int16 *)(v4 + 12) ^ HIWORD(a1)) & 0xFFFFFF7F) == 0 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      *(_DWORD *)v4 & 0xFFFFFF);
      ++*((_DWORD *)EntryObject + 2);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
  }
  if ( v5 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
  return EntryObject;
}
