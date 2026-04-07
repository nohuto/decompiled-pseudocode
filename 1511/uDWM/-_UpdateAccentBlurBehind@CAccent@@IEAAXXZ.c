/*
 * XREFs of ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180014140
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180014780 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000EB48 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x1800109A0 (-_HasBlurBehind@CAccent@@IEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001452C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180015410 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180015DCC (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

void __fastcall CAccent::_UpdateAccentBlurBehind(CAccent *this)
{
  int v2; // ecx
  int v3; // eax
  int inserted; // eax
  int v5; // eax
  struct CVisual *v6; // rbx
  int v7; // eax
  float SolidFillOpacity; // xmm0_4
  __int64 v9; // rcx
  int updated; // eax
  _DWORD v11[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 40) && *((_BYTE *)this + 350) )
  {
    CVisual::ClearInstructions(this);
    CAccentBlurBehind::UpdateAccentBlurBehind(
      *((struct CResource ***)this + 40),
      (struct tagRECT *)((char *)this + 568),
      *((_QWORD *)this + 45),
      *((HWND *)this + 44));
    v2 = *((_DWORD *)this + 145) - *((_DWORD *)this + 143);
    if ( v2 < 0 )
      v2 = 0;
    v3 = *((_DWORD *)this + 144) - *((_DWORD *)this + 142);
    if ( v3 < 0 )
      v3 = 0;
    v11[0] = 0;
    v11[1] = 0;
    *(float *)&v11[3] = (float)v2 + 0.0;
    *(float *)&v11[2] = (float)v3 + 0.0;
    if ( CAccent::_HasBlurBehind(this) )
    {
      inserted = VisualCollection::InsertRelative(
                   (CAccent *)((char *)this + 32),
                   *((struct CVisual **)this + 40),
                   0LL,
                   0,
                   1);
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x66Cu);
        return;
      }
    }
    if ( (*((_BYTE *)this + 268) & 2) == 0 )
      goto LABEL_11;
    v6 = *(struct CVisual **)(*((_QWORD *)this + 40) + 264LL);
    v7 = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v6, 0LL, 0, 1);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x674u);
      return;
    }
    SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
    updated = CAccent::_UpdateSolidFill(v9, v6, *((unsigned int *)this + 82), v11, LODWORD(SolidFillOpacity));
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x675u);
    }
    else
    {
LABEL_11:
      v5 = CAccent::_AddOcclusionInstruction(this);
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x678u);
    }
  }
}
