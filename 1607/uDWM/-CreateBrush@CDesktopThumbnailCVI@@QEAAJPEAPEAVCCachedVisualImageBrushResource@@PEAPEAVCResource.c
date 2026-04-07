/*
 * XREFs of ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x180096B50
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E680 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x180097664 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180009BEC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180097E30 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::CreateBrush(
        CDesktopThumbnailCVI *this,
        struct CCachedVisualImageBrushResource **a2,
        struct CResource **a3,
        struct CResource **a4,
        const struct tagRECT *a5)
{
  CBaseObject *v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r9d
  int v16; // r10d
  float v17; // xmm2_4
  int v18; // eax
  float v19; // xmm3_4
  int v20; // eax
  int v21; // eax
  int v22; // eax
  volatile signed __int32 *v23; // r14
  int v24; // eax
  __int64 v25; // rax
  CBaseObject *v27; // [rsp+90h] [rbp-31h] BYREF
  CBaseObject *v28; // [rsp+98h] [rbp-29h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-11h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v9 = 0LL;
  if ( a4 )
  {
    v10 = CResource::Create(0x19u, *((_QWORD *)this + 2), &v28);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x269u);
      v9 = v28;
      goto LABEL_39;
    }
    v9 = v28;
  }
  v12 = CDesktopThumbnailCVI::_EnsureResources(this);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x26Cu);
    goto LABEL_39;
  }
  v14 = CCachedVisualImageBrushResource::Create(v13, *((_QWORD *)this + 2), &v27);
  v11 = v14;
  if ( v14 >= 0 )
  {
    v15 = 0;
    v30 = _xmm;
    if ( a4 )
    {
      v15 = *((_DWORD *)v9 + 6);
      v29 = 0LL;
      v16 = 0;
    }
    else
    {
      v16 = 1;
      if ( (float)(*((_DWORD *)this + 12) - *((_DWORD *)this + 10)) == 0.0 )
        v17 = 0.0;
      else
        v17 = (float)((a5->left - *((_DWORD *)this + 10)) / (*((_DWORD *)this + 12) - *((_DWORD *)this + 10)));
      v18 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
      *(float *)&v29 = v17;
      if ( (float)v18 == 0.0 )
        v19 = 0.0;
      else
        v19 = (float)((a5->top - *((_DWORD *)this + 11)) / (*((_DWORD *)this + 13) - *((_DWORD *)this + 11)));
      v20 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
      *((float *)&v29 + 1) = v19;
      if ( (float)v20 == 0.0 )
      {
        DWORD2(v29) = 0;
      }
      else
      {
        v21 = a5->right - a5->left;
        if ( v21 < 0 )
          v21 = 0;
        *((float *)&v29 + 2) = (float)(v21 / (*((_DWORD *)this + 12) - *((_DWORD *)this + 10))) + v17;
      }
      if ( (float)(*((_DWORD *)this + 13) - *((_DWORD *)this + 11)) == 0.0 )
      {
        HIDWORD(v29) = 0;
      }
      else
      {
        v22 = a5->bottom - a5->top;
        if ( v22 < 0 )
          v22 = 0;
        *((float *)&v29 + 3) = (float)(v22 / (*((_DWORD *)this + 13) - *((_DWORD *)this + 11))) + v19;
      }
    }
    v23 = (volatile signed __int32 *)v27;
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v27 + 2) + 1152LL))(
            *((_QWORD *)v27 + 2),
            *((unsigned int *)v27 + 6),
            *((_QWORD *)v27 + 2),
            &v30,
            &v29,
            0,
            0,
            0,
            1,
            v16,
            0,
            v15,
            1,
            0,
            0,
            0,
            *(_DWORD *)(*((_QWORD *)this + 4) + 24LL));
    v11 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x29Du);
      goto LABEL_37;
    }
    if ( a4 )
    {
      *a4 = v9;
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
        v23 = (volatile signed __int32 *)v27;
      }
    }
    *a2 = (struct CCachedVisualImageBrushResource *)v23;
    _InterlockedIncrement(v23 + 2);
    if ( a3 )
    {
      *a3 = (struct CResource *)*((_QWORD *)this + 4);
      v25 = *((_QWORD *)this + 4);
      if ( v25 )
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
    }
    v9 = v28;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x26Fu);
  }
  v23 = (volatile signed __int32 *)v27;
LABEL_37:
  if ( v23 )
    CBaseObject::Release((CBaseObject *)v23);
LABEL_39:
  if ( v9 )
    CBaseObject::Release(v9);
  return v11;
}
