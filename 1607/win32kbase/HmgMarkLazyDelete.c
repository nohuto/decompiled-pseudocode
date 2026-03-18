/*
 * XREFs of HmgMarkLazyDelete @ 0x1C00768F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002A438 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgMarkLazyDelete(struct HOBJ__ *a1, char a2, _DWORD *a3)
{
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  _DWORD *v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  v7 = 0LL;
  v8 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v7, a1, a2);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v7) )
  {
    *a3 = 0;
    v4 = v7;
    v5 = 1;
    if ( *((_DWORD *)GdiHandleManager::GetEntryObject(
                       (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                       *v7 & 0xFFFFFF)
         + 2) )
    {
      *((_BYTE *)v4 + 15) |= 2u;
      *a3 = 1;
    }
    *((_QWORD *)v4 + 2) = 0LL;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  }
  else
  {
    v5 = 0;
  }
  if ( v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  return v5;
}
