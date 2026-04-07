/*
 * XREFs of ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x1800986D0
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008C038 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18009916C (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012308 (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18009992C (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
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
  int v15; // eax
  float v16; // xmm2_4
  int v17; // eax
  float v18; // xmm3_4
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  volatile signed __int32 *v23; // r14
  int v24; // eax
  __int64 v25; // rax
  CBaseObject *v27; // [rsp+30h] [rbp-91h] BYREF
  CResource *v28; // [rsp+38h] [rbp-89h] BYREF
  int v29; // [rsp+40h] [rbp-81h] BYREF
  _BYTE v30[4]; // [rsp+44h] [rbp-7Dh] BYREF
  double v31; // [rsp+48h] [rbp-79h]
  __int128 v32; // [rsp+50h] [rbp-71h]
  float v33[9]; // [rsp+60h] [rbp-61h]
  __int64 v34; // [rsp+84h] [rbp-3Dh]
  int v35; // [rsp+8Ch] [rbp-35h]
  int v36; // [rsp+90h] [rbp-31h]
  int v37; // [rsp+98h] [rbp-29h]
  __int64 v38; // [rsp+9Ch] [rbp-25h]
  __int64 v39; // [rsp+A4h] [rbp-1Dh]
  int v40; // [rsp+B0h] [rbp-11h]

  v28 = 0LL;
  v27 = 0LL;
  v9 = 0LL;
  if ( a4 )
  {
    v10 = CResource::Create(0x2Du, *((_QWORD *)this + 2), &v27);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x25Eu);
      v9 = v27;
      goto LABEL_40;
    }
    v9 = v27;
  }
  v12 = CDesktopThumbnailCVI::_EnsureResources(this);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x261u);
    goto LABEL_40;
  }
  v14 = CCachedVisualImageBrushResource::Create(v13, *((_QWORD *)this + 2), &v28);
  v11 = v14;
  if ( v14 >= 0 )
  {
    v29 = 250;
    memset_0(v30, 0, 0x70uLL);
    v31 = DOUBLE_1_0;
    v32 = _xmm;
    v35 = 1;
    if ( a4 )
    {
      v36 = 0;
      v37 = *((_DWORD *)v9 + 6);
      *(_OWORD *)v33 = 0LL;
    }
    else
    {
      v15 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
      v36 = 1;
      if ( (float)v15 == 0.0 )
        v16 = 0.0;
      else
        v16 = (float)((a5->left - *((_DWORD *)this + 10)) / (*((_DWORD *)this + 12) - *((_DWORD *)this + 10)));
      v17 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
      v33[0] = v16;
      if ( (float)v17 == 0.0 )
        v18 = 0.0;
      else
        v18 = (float)((a5->top - *((_DWORD *)this + 11)) / (*((_DWORD *)this + 13) - *((_DWORD *)this + 11)));
      v19 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
      v33[1] = v18;
      if ( (float)v19 == 0.0 )
      {
        v33[2] = 0.0;
      }
      else
      {
        v20 = a5->right - a5->left;
        if ( v20 < 0 )
          v20 = 0;
        v33[2] = (float)(v20 / (*((_DWORD *)this + 12) - *((_DWORD *)this + 10))) + v16;
      }
      if ( (float)(*((_DWORD *)this + 13) - *((_DWORD *)this + 11)) == 0.0 )
      {
        v33[3] = 0.0;
      }
      else
      {
        v21 = a5->bottom - a5->top;
        if ( v21 < 0 )
          v21 = 0;
        v33[3] = (float)(v21 / (*((_DWORD *)this + 13) - *((_DWORD *)this + 11))) + v18;
      }
    }
    v22 = *((_QWORD *)this + 4);
    v23 = (volatile signed __int32 *)v28;
    v34 = 0LL;
    v39 = 0LL;
    v38 = 1LL;
    v40 = *(_DWORD *)(v22 + 24);
    v24 = CResource::Send(v28, &v29, 0x74u);
    v11 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x289u);
      goto LABEL_38;
    }
    if ( a4 )
    {
      *a4 = v9;
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
        v23 = (volatile signed __int32 *)v28;
        v9 = v27;
      }
    }
    *a2 = (struct CCachedVisualImageBrushResource *)v23;
    if ( v23 )
    {
      _InterlockedIncrement(v23 + 2);
      v23 = (volatile signed __int32 *)v28;
      v9 = v27;
    }
    if ( !a3 )
      goto LABEL_38;
    *a3 = (struct CResource *)*((_QWORD *)this + 4);
    v25 = *((_QWORD *)this + 4);
    if ( !v25 )
      goto LABEL_38;
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
    v9 = v27;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x264u);
  }
  v23 = (volatile signed __int32 *)v28;
LABEL_38:
  if ( v23 )
    CBaseObject::Release((CBaseObject *)v23);
LABEL_40:
  if ( v9 )
    CBaseObject::Release(v9);
  return v11;
}
