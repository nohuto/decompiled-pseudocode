/*
 * XREFs of HmgSwapLockedHandleContents @ 0x1C006C080
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002AA90 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgSwapLockedHandleContents(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4,
        char a5)
{
  unsigned int v7; // edi
  unsigned int v8; // r13d
  unsigned int v9; // esi
  _DWORD *v10; // r15
  GdiHandleEntryDirectory **DeferredContext; // r12
  _DWORD *v12; // r14
  struct OBJECT *EntryObject; // rbx
  struct OBJECT *v14; // rax
  GdiHandleManager *v15; // rcx
  GdiHandleManager *v16; // rcx
  __int64 v17; // rcx
  struct OBJECT *v18; // rdi
  struct OBJECT *v19; // rax
  __int128 v20; // xmm2
  __int64 v21; // xmm3_8
  __int16 v22; // r8
  __int16 v23; // dx
  _DWORD *v25; // [rsp+20h] [rbp-30h] BYREF
  int v26; // [rsp+28h] [rbp-28h]
  _DWORD *v27; // [rsp+38h] [rbp-18h] BYREF
  int v28; // [rsp+40h] [rbp-10h]

  v27 = 0LL;
  v28 = 0;
  v7 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v8 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, v7, 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v27) )
  {
    v25 = 0LL;
    v26 = 0;
    v9 = (unsigned __int16)a3 | (a3 >> 8) & 0xFF0000;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, v9, 0, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)&v25) )
    {
      v10 = v27;
      DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
      if ( *((_DWORD *)GdiHandleManager::GetEntryObject(
                         (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                         *v27 & 0xFFFFFF)
           + 2) == a2
        && *((_BYTE *)v10 + 14) == a5 )
      {
        v12 = v25;
        if ( *((_DWORD *)GdiHandleManager::GetEntryObject(DeferredContext, *v25 & 0xFFFFFF) + 2) == a4
          && *((_BYTE *)v12 + 14) == a5 )
        {
          EntryObject = GdiHandleManager::GetEntryObject(DeferredContext, v7);
          v14 = GdiHandleManager::GetEntryObject(DeferredContext, v9);
          GdiHandleManager::SetEntryObject(v15, v7, v14);
          GdiHandleManager::SetEntryObject(v16, v9, EntryObject);
          v17 = *((_QWORD *)v10 + 2);
          *((_QWORD *)v10 + 2) = *((_QWORD *)v12 + 2);
          *((_QWORD *)v12 + 2) = v17;
          v18 = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v7);
          v19 = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v9);
          v20 = *(_OWORD *)v18;
          v21 = *((_QWORD *)v18 + 2);
          v8 = 1;
          *(_OWORD *)v18 = *(_OWORD *)v19;
          *((_QWORD *)v18 + 2) = *((_QWORD *)v19 + 2);
          *(_OWORD *)v19 = v20;
          *((_QWORD *)v19 + 2) = v21;
          v22 = *((_WORD *)v19 + 7);
          v23 = *((_WORD *)v18 + 7);
          *((_WORD *)v18 + 7) = v22 & 0x8000 | v23 & 0x4000;
          *((_WORD *)v19 + 7) = v23 & 0x8000 | v22 & 0x4000;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
    if ( v26 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
  }
  if ( v28 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  return v8;
}
