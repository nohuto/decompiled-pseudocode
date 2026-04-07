/*
 * XREFs of ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0
 * Callers:
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18000A180 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180014730 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180016D00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180018790 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18001C130 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029B30 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800366E0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180039AC0 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180073170 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x18007D3E0 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x1800843D0 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 *     ?ValidateVisual@CRippleEffect@@UEAAJXZ @ 0x180084AD0 (-ValidateVisual@CRippleEffect@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18008BCD0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x180097940 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009A0F0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001BF60 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001C010 (-UpdateLayout@CButton@@UEAAJXZ.c)
 *     ?UpdateLayout@CCanvas@@UEAAJXZ @ 0x18001C7A0 (-UpdateLayout@CCanvas@@UEAAJXZ.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001D610 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001F850 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x180020070 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180020960 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?UpdateOffset@CVisual@@MEAAJXZ @ 0x1800209B0 (-UpdateOffset@CVisual@@MEAAJXZ.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJXZ @ 0x180021F80 (-UpdateLayout@CTopLevelWindow@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18007F478 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CVisual::ValidateVisual(CVisual *this)
{
  unsigned int v1; // edi
  __int64 (__fastcall *v4)(CVisual *); // rax
  int v5; // eax
  __int64 (__fastcall *v6)(CTopLevelWindow *__hidden); // rax
  int updated; // eax
  __int64 (__fastcall *v8)(CButton *); // rax
  int v9; // eax
  __int64 (__fastcall *v10)(CVisual *__hidden); // rax
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-18h]

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
      v15 = 227;
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
      v15 = 234;
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
      v15 = 241;
      goto LABEL_42;
    }
    *((_DWORD *)this + 20) &= ~8u;
  }
  if ( (*((_BYTE *)this + 80) & 0x10) != 0 )
  {
    v14 = CVisual::UpdateTransform(this);
    v1 = v14;
    if ( v14 < 0 )
    {
      v15 = 248;
      v13 = v14;
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
    v15 = 255;
LABEL_42:
    v13 = v1;
LABEL_44:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v15);
    return v1;
  }
LABEL_6:
  if ( (*((_BYTE *)this + 80) & 0x40) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 376LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            (char *)this + 188);
    v1 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x567u);
    if ( (v1 & 0x80000000) == 0 )
    {
      *((_DWORD *)this + 20) &= ~0x40u;
      return v1;
    }
    v15 = 262;
    goto LABEL_42;
  }
  return v1;
}
