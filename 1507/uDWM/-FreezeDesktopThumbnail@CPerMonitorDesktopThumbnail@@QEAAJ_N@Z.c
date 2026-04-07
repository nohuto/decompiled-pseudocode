/*
 * XREFs of ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x180098AE0
 * Callers:
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800989E0 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180008C20 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x18001BEBC (-_IsMultiMon@CDesktopManager@@AEBA_NXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18009992C (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::FreezeDesktopThumbnail(CPerMonitorDesktopThumbnail *this, char a2)
{
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  __int128 v7; // xmm0
  CResource *v8; // rcx
  CBaseObject *v9; // rcx
  _DWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h]

  v4 = 0;
  if ( !CDesktopManager::_IsMultiMon(CDesktopManager::s_pDesktopManagerInstance) && a2 )
  {
    if ( !CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v5 = CDesktopThumbnailCVI::_EnsureResources(this);
      v4 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x14Au);
        return v4;
      }
      v6 = CVisual::RenderRecursive(*((CVisual **)this + 9));
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x14Bu);
        return v4;
      }
      v7 = *(_OWORD *)((char *)this + 40);
      v8 = (CResource *)*((_QWORD *)this + 4);
      v11[0] = 154;
      v11[1] = 0;
      v12 = v7;
      CResource::Send(v8, v11, 0x18u);
    }
    *(_BYTE *)(*((_QWORD *)this + 9) + 336LL) = a2;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    return v4;
  }
  if ( CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    CBaseObject::Release(this);
  *(_BYTE *)(*((_QWORD *)this + 9) + 336LL) = 0;
  v9 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 4) = 0LL;
  }
  return v4;
}
