/*
 * XREFs of ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180011FA0
 * Callers:
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002A474 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002BF90 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180012000 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180077498 (-Create@CDesktopThumbnailCVIVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180098BFC (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x180098C74 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18009916C (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x180099330 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800993BC (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CDCompThumbnailData::EnsureThumbnailVisual(CDCompThumbnailData *this)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // rdi
  bool v4; // zf
  int v5; // eax
  int DesktopThumbnail; // eax
  CBaseObject *v8; // r14
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v11; // eax
  struct CDesktopThumbnailCVI *v12; // rdx
  CDesktopThumbnailCVIVisual *v13; // rcx
  int v14; // eax
  struct tagRECT v15; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v16; // [rsp+70h] [rbp+30h] BYREF
  CDesktopThumbnailCVIVisual *v17; // [rsp+78h] [rbp+38h] BYREF
  CBaseObject *v18; // [rsp+80h] [rbp+40h] BYREF

  v1 = 0;
  v2 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v4 = *((_DWORD *)this + 28) == 1;
  v17 = 0LL;
  if ( !v4 )
  {
    if ( !*((_DWORD *)this + 28) )
    {
      v5 = CThumbnailData::EnsureThumbnailVisual(this);
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x212Eu);
    }
    return v1;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 112LL) == 1 )
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x2116u);
    return v1;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v16);
  v1 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, DesktopThumbnail, 0x2119u);
LABEL_20:
    v8 = v16;
    goto LABEL_21;
  }
  v8 = v16;
  *((_QWORD *)v16 + 37) = *(_QWORD *)(*((_QWORD *)this + 2) + 120LL);
  updated = CDesktopThumbnailBase::UpdateWindowClones(v8);
  v1 = updated;
  if ( updated >= 0 )
  {
    v15 = *(struct tagRECT *)((char *)this + 56);
    PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v8, &v15, &v18);
    v1 = PerMonitorDesktopThumbnail;
    if ( PerMonitorDesktopThumbnail >= 0 )
    {
      if ( !*((_QWORD *)this + 13) )
      {
        v11 = CDesktopThumbnailCVIVisual::Create(
                *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                &v17);
        v1 = v11;
        if ( v11 >= 0 )
        {
          v2 = (volatile signed __int32 *)v17;
          v12 = v18;
          v13 = v17;
          *((_QWORD *)v17 + 37) = *((_QWORD *)this + 2);
          *((_DWORD *)v13 + 81) = *((_DWORD *)this + 9);
          *((_BYTE *)v13 + 321) = 1;
          v14 = CDesktopThumbnailCVIVisual::SetVisual(v13, v12, (const struct tagRECT *)((char *)this + 56));
          v1 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x2126u);
            goto LABEL_21;
          }
          CDesktopThumbnailCVIVisual::Update(
            (CDesktopThumbnailCVIVisual *)v2,
            (const struct tagRECT *)((char *)this + 40),
            (double)*((unsigned __int8 *)this + 72) / 255.0);
          *((_QWORD *)this + 13) = v2;
          _InterlockedIncrement(v2 + 2);
          v2 = (volatile signed __int32 *)v17;
          goto LABEL_20;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x2120u);
        v2 = (volatile signed __int32 *)v17;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, PerMonitorDesktopThumbnail, 0x211Bu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x211Au);
  }
LABEL_21:
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v18 )
    CBaseObject::Release(v18);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return v1;
}
