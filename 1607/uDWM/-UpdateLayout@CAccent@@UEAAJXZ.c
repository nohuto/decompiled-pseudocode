/*
 * XREFs of ?UpdateLayout@CAccent@@UEAAJXZ @ 0x180035920
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001DDE0 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180007368 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJXZ @ 0x18001F850 (-UpdateLayout@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x18003609C (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x1800360D0 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800362A8 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180036490 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x1800368D0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180036E3C (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x1800373C0 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18003796C (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::UpdateLayout(struct CVisual **this)
{
  int updated; // eax
  unsigned int v3; // ebx
  struct tagSIZE *v4; // rcx
  const struct tagSIZE *v5; // rdx
  __int64 (__fastcall *v6)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v7; // eax
  CVisual *v8; // rcx
  void (__fastcall *v9)(CVisual *, int); // rax
  int v11; // ecx
  int v12; // eax
  float SolidFillOpacity; // xmm0_4
  __int64 v14; // rcx
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-30h]
  char *v17; // [rsp+30h] [rbp-20h] BYREF
  float v18; // [rsp+38h] [rbp-18h]
  float v19; // [rsp+3Ch] [rbp-14h]

  if ( !*((_BYTE *)this + 349) && (unsigned int)(*((_DWORD *)this + 66) - 2) > 1 )
  {
    updated = CAccent::_UpdateResources(this);
    v3 = updated;
    if ( updated >= 0 )
      goto LABEL_4;
    v16 = 529;
LABEL_29:
    v15 = updated;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v16);
    return v3;
  }
  if ( *((_DWORD *)this + 66) == 3 )
  {
    CAccent::_UpdateAccentBlurBehind((CAccent *)this);
  }
  else
  {
    v11 = *((_DWORD *)this + 145) - *((_DWORD *)this + 143);
    if ( v11 < 0 )
      v11 = 0;
    v12 = *((_DWORD *)this + 144) - *((_DWORD *)this + 142);
    if ( v12 < 0 )
      v12 = 0;
    v17 = 0LL;
    v19 = (float)v11 + 0.0;
    v18 = (float)v12 + 0.0;
    SolidFillOpacity = CAccent::_GetSolidFillOpacity((CAccent *)this);
    updated = CAccent::_UpdateSolidFill(v14, this, *((unsigned int *)this + 82), &v17, LODWORD(SolidFillOpacity));
    v3 = updated;
    if ( updated < 0 )
    {
      v16 = 544;
      goto LABEL_29;
    }
    updated = CAccent::_AddOcclusionInstruction((CAccent *)this);
    v3 = updated;
    if ( updated < 0 )
    {
      v16 = 547;
      goto LABEL_29;
    }
  }
LABEL_4:
  if ( (*((_BYTE *)this + 268) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas((CAccent *)this);
    v3 = updated;
    if ( updated < 0 )
    {
      v16 = 552;
      goto LABEL_29;
    }
    updated = CAccent::_UpdateBorderShadowParts((CAccent *)this);
    v3 = updated;
    if ( updated < 0 )
    {
      v16 = 553;
      goto LABEL_29;
    }
    updated = CAccent::_UpdateBorderShadowForAccent((CAccent *)this);
    v3 = updated;
    if ( updated < 0 )
    {
      v16 = 554;
      goto LABEL_29;
    }
  }
  updated = CVisual::UpdateLayout((CVisual *)this);
  v3 = updated;
  if ( updated < 0 )
  {
    v16 = 557;
    goto LABEL_29;
  }
  v4 = (struct tagSIZE *)this[48];
  if ( v4 )
  {
    v5 = (const struct tagSIZE *)(this + 14);
    v6 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v4 + 80LL);
    v7 = v6 == CVisual::SetSize ? CVisual::SetSize(v4, v5) : v6(v4, v5);
    v3 = v7;
    if ( v7 < 0 )
    {
      v16 = 562;
      v15 = v7;
      goto LABEL_31;
    }
  }
  v18 = NAN;
  v17 = (char *)(this + 4);
  LOWORD(v19) = 0;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v17) )
  {
    v8 = *(CVisual **)(*((_QWORD *)v17 + 2) + 8LL * LODWORD(v18));
    v9 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v8 + 24LL);
    if ( v9 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v8, 2);
    else
      v9(v8, 2);
  }
  return v3;
}
