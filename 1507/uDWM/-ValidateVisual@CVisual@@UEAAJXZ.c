/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290
 * Callers:
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x1800115D0 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x1800126A0 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013ED0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x1800166F0 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001A750 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180027100 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180035BE0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800388A0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180068310 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800745B0 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x18007C270 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x18007C9A0 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x180088EF0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x180099440 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009BF10 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?UpdateLayout@CCanvas@@UEAAJXZ @ 0x180019A50 (-UpdateLayout@CCanvas@@UEAAJXZ.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001A530 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001A620 (-UpdateLayout@CButton@@UEAAJXZ.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001B1A0 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001D1B0 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x18001E690 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x18001E6F0 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJXZ @ 0x18001FCA0 (-UpdateLayout@CTopLevelWindow@@UEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180076BEC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this)
{
  unsigned int v1; // edi
  __int64 (__fastcall *v4)(CVisual *); // rdi
  int v5; // eax
  __int64 (__fastcall *v6)(CTopLevelWindow *__hidden); // rdi
  int updated; // eax
  __int64 (__fastcall *v8)(CButton *); // rdi
  int v9; // eax
  __int64 (__fastcall *v10)(CVisual *__hidden); // rdi
  int v11; // eax
  int v12; // eax
  __int128 v13; // xmm1
  CResource *v14; // rcx
  int v15; // eax
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v20[4]; // [rsp+34h] [rbp-44h] BYREF
  __int128 v21; // [rsp+38h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-30h]
  __int64 v23; // [rsp+58h] [rbp-20h]
  int v24; // [rsp+60h] [rbp-18h]

  v1 = 0;
  if ( (*((_BYTE *)this + 80) & 2) != 0 )
  {
    v6 = *(__int64 (__fastcall **)(CTopLevelWindow *__hidden))(*(_QWORD *)this + 72LL);
    if ( v6 == CCanvas::UpdateLayout )
    {
      updated = CCanvas::UpdateLayout(this);
    }
    else if ( v6 == CButton::UpdateLayout )
    {
      updated = CButton::UpdateLayout(this);
    }
    else if ( v6 == CVisual::UpdateLayout )
    {
      updated = CVisual::UpdateLayout(this);
    }
    else if ( v6 == CTopLevelWindow::UpdateLayout )
    {
      updated = CTopLevelWindow::UpdateLayout(this);
    }
    else if ( v6 == CAtlasedRectsVisual::UpdateLayout )
    {
      updated = CAtlasedRectsVisual::UpdateLayout(this);
    }
    else
    {
      updated = v6(this);
    }
    v1 = updated;
    if ( updated < 0 )
    {
      v18 = 227;
      goto LABEL_42;
    }
    *((_DWORD *)this + 20) &= ~2u;
  }
  if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    v4 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 40LL);
    if ( v4 == CVisual::UpdateRenderData )
      v5 = CVisual::UpdateRenderData(this);
    else
      v5 = v4(this);
    v1 = v5;
    if ( v5 < 0 )
    {
      v18 = 234;
      goto LABEL_42;
    }
    *((_DWORD *)this + 20) &= ~4u;
  }
  if ( (*((_BYTE *)this + 80) & 8) != 0 )
  {
    v8 = *(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 168LL);
    if ( v8 == CButton::UpdateOffset )
    {
      v9 = CButton::UpdateOffset(this);
    }
    else if ( v8 == CVisual::UpdateOffset )
    {
      v9 = CVisual::UpdateOffset(this);
    }
    else
    {
      v9 = v8(this);
    }
    v1 = v9;
    if ( v9 < 0 )
    {
      v18 = 241;
      goto LABEL_42;
    }
    *((_DWORD *)this + 20) &= ~8u;
  }
  if ( (*((_BYTE *)this + 80) & 0x10) != 0 )
  {
    v17 = CVisual::UpdateTransform(this);
    v1 = v17;
    if ( v17 < 0 )
    {
      v18 = 248;
      v16 = v17;
      goto LABEL_44;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
  }
  if ( (*((_BYTE *)this + 80) & 0x20) != 0 )
  {
    v10 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 152LL);
    if ( v10 == CVisual::UpdateOpacity )
      v11 = CVisual::UpdateOpacity(this);
    else
      v11 = v10(this);
    v1 = v11;
    if ( v11 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x20u;
      goto LABEL_6;
    }
    v18 = 255;
LABEL_42:
    v16 = v1;
LABEL_44:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, v18);
    return v1;
  }
LABEL_6:
  if ( (*((_BYTE *)this + 80) & 0x40) != 0 )
  {
    v19 = 47;
    memset_0(v20, 0, 0x30uLL);
    v12 = *((_DWORD *)this + 57);
    v13 = *(_OWORD *)((char *)this + 204);
    v14 = (CResource *)*((_QWORD *)this + 2);
    v21 = *(_OWORD *)((char *)this + 188);
    v24 = v12;
    v23 = *(_QWORD *)((char *)this + 220);
    v22 = v13;
    v15 = CResource::Send(v14, &v19, 0x34u);
    v1 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x5DFu);
    if ( (v1 & 0x80000000) == 0 )
    {
      *((_DWORD *)this + 20) &= ~0x40u;
      return v1;
    }
    v18 = 262;
    goto LABEL_42;
  }
  return v1;
}
