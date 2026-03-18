/*
 * XREFs of HmgLockAllOwners @ 0x1C00741F0
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct OBJECT *__fastcall HmgLockAllOwners(unsigned int a1, char a2)
{
  __int16 v3; // edi^2
  struct OBJECT *EntryObject; // rbx
  __int16 v5; // ax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  v7 = 0LL;
  v3 = HIWORD(a1);
  v8 = 0;
  EntryObject = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v7, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v7) )
  {
    if ( *(_BYTE *)(v7 + 14) == a2 && *(_WORD *)(v7 + 12) == v3 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      *(_DWORD *)v7 & 0xFFFFFF);
      v5 = *((_WORD *)EntryObject + 6);
      if ( !v5 || *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
      {
        *((_WORD *)EntryObject + 6) = v5 + 1;
        *((_QWORD *)EntryObject + 2) = KeGetCurrentThread();
      }
      else
      {
        EntryObject = 0LL;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  }
  if ( v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  return EntryObject;
}
