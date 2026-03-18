/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x1C0078E80
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C002A0C0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct OBJECT *__fastcall HmgShareUnlockRemoveObject(__int64 a1, int a2, int a3, int a4, char a5)
{
  __int16 v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct OBJECT *EntryObject; // rbx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]

  v7 = a2;
  v8 = a1;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v13 = 0LL;
  v14 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v13, (unsigned __int16)v8 | (v8 >> 8) & 0xFF0000, 1, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v13) )
  {
    v10 = v13;
    if ( *(_BYTE *)(v13 + 14) == a5 && *(_WORD *)(v13 + 12) == HIWORD(v8) )
    {
      EntryObject = GdiHandleManager::GetEntryObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      *(_DWORD *)v13 & 0xFFFFFF);
      if ( --*((_DWORD *)EntryObject + 2) == a3
        && *((_WORD *)EntryObject + 6) == v7
        && (a4 || (*(_BYTE *)(v10 + 15) & 1) == 0) )
      {
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v13);
        goto LABEL_8;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
  }
  EntryObject = 0LL;
LABEL_8:
  if ( v14 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
  GreReleaseHmgrSemaphore(v9);
  return EntryObject;
}
