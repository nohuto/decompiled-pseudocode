/*
 * XREFs of HmgUnlock @ 0x1C00C0CBC
 * Callers:
 *     GreUnlockRegion @ 0x1C007B8A0 (GreUnlockRegion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgUnlock(unsigned int a1)
{
  unsigned int v1; // ebx
  __int16 v2; // edi^2
  struct OBJECT *EntryObject; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]

  v1 = 0;
  v5 = 0LL;
  v2 = HIWORD(a1);
  v6 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v5) )
  {
    if ( *(_BYTE *)(v5 + 14) == 4 && *(_WORD *)(v5 + 12) == v2 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      *(_DWORD *)v5 & 0xFFFFFF);
      if ( EntryObject )
      {
        if ( *((_WORD *)EntryObject + 6) && *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
        {
          _InterlockedDecrement((volatile signed __int32 *)EntryObject + 3);
          v1 = 1;
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
  return v1;
}
