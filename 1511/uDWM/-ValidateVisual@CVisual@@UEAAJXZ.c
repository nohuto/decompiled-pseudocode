/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000D5C0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180014780 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180019A20 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x18001B580 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001F330 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800354E0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x18003C830 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18003D770 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180071390 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x18007C770 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x180083CA0 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x1800843D0 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18008CA60 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18009AB30 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009D5E0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001F110 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001F200 (-UpdateLayout@CButton@@UEAAJXZ.c)
 *     ?UpdateLayout@CCanvas@@UEAAJXZ @ 0x18001F9A0 (-UpdateLayout@CCanvas@@UEAAJXZ.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ @ 0x180020820 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x1800225C0 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180022E20 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180023AB0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x180023B10 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJXZ @ 0x180025180 (-UpdateLayout@CTopLevelWindow@@UEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18007E9DC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 (__fastcall *v5)(CVisual *); // rdi
  int v6; // eax
  __int64 (__fastcall *v7)(CVisual *, __int64); // rdi
  int updated; // eax
  __int64 (__fastcall *v9)(CButton *); // rdi
  int v10; // eax
  __int64 (__fastcall *v11)(CVisual *__hidden); // rdi
  int v12; // eax
  int v13; // eax
  __int128 v14; // xmm1
  CResource *v15; // rcx
  int v16; // eax
  int v17; // r9d
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-58h]
  int v20; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v21[4]; // [rsp+34h] [rbp-44h] BYREF
  __int128 v22; // [rsp+38h] [rbp-40h]
  __int128 v23; // [rsp+48h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-20h]
  int v25; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( (*((_BYTE *)this + 80) & 2) != 0 )
  {
    v7 = *(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 72LL);
    if ( (char *)v7 == (char *)CCanvas::UpdateLayout )
    {
      updated = CCanvas::UpdateLayout(this);
    }
    else if ( (char *)v7 == (char *)CButton::UpdateLayout )
    {
      updated = CButton::UpdateLayout(this);
    }
    else if ( v7 == CVisual::UpdateLayout )
    {
      updated = CVisual::UpdateLayout(this, a2);
    }
    else if ( (char *)v7 == (char *)CTopLevelWindow::UpdateLayout )
    {
      updated = CTopLevelWindow::UpdateLayout(this);
    }
    else if ( (char *)v7 == (char *)CAtlasedRectsVisual::UpdateLayout )
    {
      updated = CAtlasedRectsVisual::UpdateLayout(this);
    }
    else
    {
      updated = ((__int64 (__fastcall *)(CVisual *))v7)(this);
    }
    v2 = updated;
    if ( updated < 0 )
    {
      v19 = 227;
      goto LABEL_42;
    }
    *((_DWORD *)this + 20) &= ~2u;
  }
  if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    v5 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 40LL);
    if ( v5 == CVisual::UpdateRenderData )
      v6 = CVisual::UpdateRenderData(this);
    else
      v6 = v5(this);
    v2 = v6;
    if ( v6 < 0 )
    {
      v19 = 234;
      goto LABEL_42;
    }
    *((_DWORD *)this + 20) &= ~4u;
  }
  if ( (*((_BYTE *)this + 80) & 8) != 0 )
  {
    v9 = *(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 168LL);
    if ( v9 == CButton::UpdateOffset )
    {
      v10 = CButton::UpdateOffset(this);
    }
    else if ( v9 == CVisual::UpdateOffset )
    {
      v10 = CVisual::UpdateOffset(this);
    }
    else
    {
      v10 = v9(this);
    }
    v2 = v10;
    if ( v10 < 0 )
    {
      v19 = 241;
      goto LABEL_42;
    }
    *((_DWORD *)this + 20) &= ~8u;
  }
  if ( (*((_BYTE *)this + 80) & 0x10) != 0 )
  {
    v18 = CVisual::UpdateTransform(this);
    v2 = v18;
    if ( v18 < 0 )
    {
      v19 = 248;
      v17 = v18;
      goto LABEL_44;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
  }
  if ( (*((_BYTE *)this + 80) & 0x20) != 0 )
  {
    v11 = *(__int64 (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 152LL);
    if ( v11 == CVisual::UpdateOpacity )
      v12 = CVisual::UpdateOpacity(this);
    else
      v12 = v11(this);
    v2 = v12;
    if ( v12 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x20u;
      goto LABEL_6;
    }
    v19 = 255;
LABEL_42:
    v17 = v2;
LABEL_44:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, v19);
    return v2;
  }
LABEL_6:
  if ( (*((_BYTE *)this + 80) & 0x40) != 0 )
  {
    v20 = 50;
    memset_0(v21, 0, 0x30uLL);
    v13 = *((_DWORD *)this + 57);
    v14 = *(_OWORD *)((char *)this + 204);
    v15 = (CResource *)*((_QWORD *)this + 2);
    v22 = *(_OWORD *)((char *)this + 188);
    v25 = v13;
    v24 = *(_QWORD *)((char *)this + 220);
    v23 = v14;
    v16 = CResource::Send(v15, &v20, 0x34u);
    v2 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x597u);
    if ( (v2 & 0x80000000) == 0 )
    {
      *((_DWORD *)this + 20) &= ~0x40u;
      return v2;
    }
    v19 = 262;
    goto LABEL_42;
  }
  return v2;
}
