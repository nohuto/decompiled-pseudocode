/*
 * XREFs of HmgFree @ 0x1C0036630
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0027064 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002F000 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C002A0C0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 */

__int64 __fastcall HmgFree(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  struct OBJECT *v4; // rdi
  unsigned __int8 v5; // si
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  struct OBJECT *EntryObject; // rax
  __int64 result; // rax
  _DWORD *v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]

  v3 = a1;
  v4 = 0LL;
  v5 = 0;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v10 = 0LL;
  v11 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v10, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v10) )
  {
    v7 = v10;
    EntryObject = GdiHandleManager::GetEntryObject(
                    (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                    *v10 & 0xFFFFFF);
    v5 = *((_BYTE *)v7 + 14);
    v4 = EntryObject;
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v10);
  }
  if ( v11 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v10);
  result = GreReleaseHmgrSemaphore(v6);
  if ( v4 )
    return FreeObject(v4, v5);
  return result;
}
