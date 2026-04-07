/*
 * XREFs of ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180092D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093B24 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800940EC (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180097050 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::OnTransitionWindow(LPARAM a1, struct CWindowData *a2, __int16 a3)
{
  signed int v3; // ebx
  signed int LastError; // eax
  int DesktopThumbnail; // eax
  unsigned int v8; // r14d
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  int v12; // esi
  unsigned int v14; // [rsp+20h] [rbp-48h]
  CBaseObject *v15; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-28h] BYREF
  CBaseObject *v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v15 = 0LL;
  v17 = 0LL;
  if ( (a3 & 0xFFFu) - 75 > 1 )
    return (unsigned int)v3;
  SetLastError(0);
  if ( EnumDisplayMonitors(0LL, 0LL, CVirtualDesktopSwitch::s_MonitorEnumCallback, a1) )
  {
    DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v15);
    v3 = DesktopThumbnail;
    if ( DesktopThumbnail >= 0 )
    {
      v8 = 0;
      if ( *(_DWORD *)(a1 + 176) )
      {
        while ( 1 )
        {
          v16 = *(struct tagRECT *)(*(_QWORD *)(a1 + 152) + 16LL * v8);
          DesktopThumbnail = CVirtualDesktopSwitch::_CreateMonitorSnapshot(
                               (CVirtualDesktopSwitch *)a1,
                               a2,
                               &v16,
                               1,
                               &v17);
          v3 = DesktopThumbnail;
          if ( DesktopThumbnail < 0 )
            break;
          v9 = *(_DWORD *)(a1 + 144);
          v10 = v9 + 1;
          if ( v9 + 1 < v9 )
          {
            v12 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
            v3 = -2147024362;
LABEL_30:
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x1274u);
            goto LABEL_22;
          }
          if ( v10 > *(_DWORD *)(a1 + 140) )
          {
            v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 120, 8u, 1, &v17);
            v12 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xC0u);
            v3 = v12;
            if ( v12 < 0 )
              goto LABEL_30;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v9) = v17;
            *(_DWORD *)(a1 + 144) = v10;
          }
          v17 = 0LL;
          if ( ++v8 >= *(_DWORD *)(a1 + 176) )
            goto LABEL_19;
        }
        v14 = 4723;
      }
      else
      {
LABEL_19:
        DesktopThumbnail = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 4)
                                                             + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4));
        v3 = DesktopThumbnail;
        if ( DesktopThumbnail >= 0 )
          goto LABEL_22;
        v14 = 4729;
      }
    }
    else
    {
      v14 = 4716;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, DesktopThumbnail, v14);
LABEL_22:
    if ( v15 )
      CBaseObject::Release(v15);
    goto LABEL_24;
  }
  LastError = GetLastError();
  v3 = LastError;
  if ( LastError > 0 )
    v3 = (unsigned __int16)LastError | 0x80070000;
  if ( v3 >= 0 )
    v3 = -2003304445;
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v3, 0x126Bu);
LABEL_24:
  if ( v17 )
    CBaseObject::Release(v17);
  if ( v3 < 0 )
    CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents((CVirtualDesktopSwitch *)a1);
  return (unsigned int)v3;
}
