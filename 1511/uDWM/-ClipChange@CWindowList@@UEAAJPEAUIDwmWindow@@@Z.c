/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E890
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032600 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18001D004 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001D1A0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180029EDC (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rsi
  struct CResource **v7; // r14
  bool v8; // bp
  int v9; // eax
  struct CResource *v10; // rdi
  CResource *(__fastcall *v11)(CResource *, char); // rsi
  int v12; // eax
  CBaseObject ***v13; // rcx
  int v15; // eax
  CWindowData *v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v17 = 0;
  v16 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v16);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x11B1u);
  }
  else
  {
    v6 = v16;
    if ( v16 && *((_QWORD *)v16 + 4) )
    {
      v7 = (struct CResource **)((char *)v16 + 352);
      v8 = *((_QWORD *)v16 + 44) != 0LL;
      v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, unsigned int *))(*(_QWORD *)a2 + 312LL))(
             a2,
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
             &v17);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x11BCu);
      }
      else
      {
        v10 = *v7;
        if ( *v7 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 && v10 )
          {
            v11 = **(CResource *(__fastcall ***)(CResource *, char))v10;
            if ( v11 == CResource::`scalar deleting destructor' )
              CResource::`scalar deleting destructor'(v10, 1);
            else
              v11(v10, 1);
          }
          *v7 = 0LL;
          v6 = v16;
        }
        if ( v17
          && (v12 = CResource::WrapExistingResource(
                      *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                      v17,
                      v7),
              v5 = v12,
              v12 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x11C0u);
        }
        else
        {
          v13 = (CBaseObject ***)*((_QWORD *)v6 + 48);
          if ( v13 )
            CTopLevelWindow::OnClipUpdated(v13);
          if ( v8 != (*v7 != 0LL) )
          {
            v15 = CWindowData::NotifyRepresentationChanged(v6);
            v5 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x11D3u);
          }
        }
      }
    }
  }
  if ( v17 )
    MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4), v17, 0LL);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
