/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021020 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180010A88 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180014140 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180014318 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001452C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180014970 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180014EB8 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180015410 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180015DCC (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18001611C (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x1800225C0 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAccent::UpdateLayout(CAccent *this)
{
  int updated; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(CVisual *__hidden, const struct tagSIZE *); // rbx
  int v8; // eax
  __int64 v9; // rcx
  CVisual *v10; // rdi
  void (__fastcall *v11)(CVisual *__hidden, unsigned int); // rsi
  int v13; // ecx
  int v14; // eax
  int v15; // xmm0_4
  _DWORD *v16; // rcx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-30h]
  struct tagRECT v19; // [rsp+30h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 349) && (unsigned int)(*((_DWORD *)this + 66) - 2) > 1 )
  {
    updated = CAccent::_UpdateResources((struct CVisual **)this);
    v3 = updated;
    if ( updated >= 0 )
      goto LABEL_4;
    v18 = 549;
LABEL_33:
    v17 = updated;
LABEL_36:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, v18);
    return v3;
  }
  if ( *((_DWORD *)this + 66) == 3 )
  {
    CAccent::_UpdateAccentBlurBehind(this);
  }
  else
  {
    v13 = *((_DWORD *)this + 145) - *((_DWORD *)this + 143);
    if ( v13 < 0 )
      v13 = 0;
    v14 = *((_DWORD *)this + 144) - *((_DWORD *)this + 142);
    if ( v14 < 0 )
      v14 = 0;
    *(_QWORD *)&v19.left = 0LL;
    *(float *)&v19.bottom = (float)v13 + 0.0;
    *(float *)&v19.right = (float)v14 + 0.0;
    *(float *)&v15 = CAccent::_GetSolidFillOpacity(this);
    updated = CAccent::_UpdateSolidFill(v16, this, *((_DWORD *)this + 82), &v19, v15);
    v3 = updated;
    if ( updated < 0 )
    {
      v18 = 564;
      goto LABEL_33;
    }
    updated = CAccent::_AddOcclusionInstruction(this);
    v3 = updated;
    if ( updated < 0 )
    {
      v18 = 567;
      goto LABEL_33;
    }
  }
LABEL_4:
  if ( (*((_BYTE *)this + 268) & 0xE0) == 0 )
    goto LABEL_8;
  updated = CAccent::_EnsureBorderShadowAtlas(this);
  v3 = updated;
  if ( updated < 0 )
  {
    v18 = 572;
    goto LABEL_33;
  }
  updated = CAccent::_UpdateBorderShadowParts(this, v4, v5);
  v3 = updated;
  if ( updated < 0 )
  {
    v18 = 573;
    goto LABEL_33;
  }
  updated = CAccent::_UpdateBorderShadowForAccent(this);
  v3 = updated;
  if ( updated < 0 )
  {
    v18 = 574;
    goto LABEL_33;
  }
LABEL_8:
  updated = CVisual::UpdateLayout(this);
  v3 = updated;
  if ( updated < 0 )
  {
    v18 = 577;
    goto LABEL_33;
  }
  v6 = *((_QWORD *)this + 48);
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)v6 + 80LL);
    v8 = v7 == CVisual::SetSize
       ? CVisual::SetSize(*((CVisual **)this + 48), (const struct tagSIZE *)this + 14)
       : v7(*((CVisual **)this + 48), (const struct tagSIZE *)this + 14);
    v3 = v8;
    if ( v8 < 0 )
    {
      v18 = 582;
      v17 = v8;
      goto LABEL_36;
    }
  }
  v19.right = -1;
  *(_QWORD *)&v19.left = (char *)this + 32;
  LOWORD(v19.bottom) = 0;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v19) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)&v19.left + 16LL);
    v10 = *(CVisual **)(v9 + 8LL * (unsigned int)v19.right);
    v11 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v10 + 24LL);
    if ( v11 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v10, 2u);
    else
      v11(*(CVisual **)(v9 + 8LL * (unsigned int)v19.right), 2u);
  }
  return v3;
}
