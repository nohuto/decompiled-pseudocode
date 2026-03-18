/*
 * XREFs of ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C001DE58
 * Callers:
 *     ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N2@Z @ 0x1C001E180 (-NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N.c)
 * Callees:
 *     ?CalcTransformChange@CCompositionBuffer@@SA?AW4TransformComparison@1@PEBM0@Z @ 0x1C00F3924 (-CalcTransformChange@CCompositionBuffer@@SA-AW4TransformComparison@1@PEBM0@Z.c)
 */

bool __fastcall CFlipExBuffer::CheckIndependentFlipAttributes(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        bool *a3)
{
  const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v4; // r10
  CFlipExBuffer *v5; // r9
  int v6; // ebx
  char v7; // si
  LONG left; // edi
  bool v9; // zf
  int v11; // eax
  float *v12; // rdx
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // r8d
  unsigned int v14; // edx

  *a3 = 0;
  v4 = a2;
  v5 = this;
  if ( *((int *)this + 89) < 1 )
    return *((_DWORD *)v5 + 89) >= 1;
  v6 = *((_DWORD *)this + 24);
  v7 = 0;
  left = a2->SourceRect.left;
  if ( *((_QWORD *)this + 12) != *(_QWORD *)&a2->SourceRect.left
    || *((_DWORD *)this + 26) != a2->SourceRect.right
    || *((_DWORD *)this + 27) != a2->SourceRect.bottom )
  {
    v7 = 1;
  }
  if ( *((_BYTE *)this + 384) )
  {
    if ( *((_DWORD *)this + 37) != a2->TargetRect.left
      || *((_DWORD *)this + 38) != a2->TargetRect.top
      || *((_DWORD *)this + 39) != a2->TargetRect.right
      || *((_DWORD *)this + 40) != a2->TargetRect.bottom
      || *((_DWORD *)this + 35) != a2->DestWidth )
    {
      goto LABEL_14;
    }
    v9 = *((_DWORD *)this + 36) == a2->DestHeight;
    goto LABEL_13;
  }
  v11 = CCompositionBuffer::CalcTransformChange((char *)this + 116, a2->Transform, a3, this);
  if ( v11 == 1 )
  {
    if ( v7 )
    {
      if ( *((_DWORD *)v5 + 26) - v6 != v4->SourceRect.right - left )
        goto LABEL_14;
      v9 = *((_DWORD *)v5 + 27) - *((_DWORD *)v5 + 25) == v4->SourceRect.bottom - v4->SourceRect.top;
LABEL_13:
      if ( !v9 )
      {
LABEL_14:
        *((_DWORD *)v5 + 89) = -1;
        return *((_DWORD *)v5 + 89) >= 1;
      }
    }
  }
  else if ( *((_DWORD *)v5 + 28) != 1
         || v11 != 2
         || COERCE_INT((float)((float)(*((_DWORD *)v5 + 26) - v6) * *((float *)v5 + 29)) + 0.5) != COERCE_INT((float)((float)(v4->SourceRect.right - left) * *v12) + 0.5)
         || COERCE_INT((float)((float)(*((_DWORD *)v5 + 27) - *((_DWORD *)v5 + 25)) * *((float *)v5 + 32)) + 0.5) != COERCE_INT((float)((float)(v4->SourceRect.bottom - v4->SourceRect.top) * v4->Transform[3]) + 0.5) )
  {
    goto LABEL_14;
  }
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)v4->Flags.Value;
  if ( (*(_BYTE *)&Value & 0x40) != 0 )
    goto LABEL_14;
  v14 = *((_DWORD *)v5 + 41);
  if ( (v14 & 1) != ((*(_BYTE *)&Value >> 1) & 1)
    || *((_DWORD *)v5 + 28) != v4->Rotation
    || ((v14 >> 2) & 1) != ((*(_BYTE *)&Value >> 3) & 1)
    || *((_DWORD *)v5 + 21) != v4->CustomDuration
    || *((_DWORD *)v5 + 12) != ((*(unsigned int *)&Value >> 7) & 3)
    || ((v14 >> 3) & 1) != ((*(_BYTE *)&Value >> 4) & 1)
    || *((_DWORD *)v5 + 23) != v4->ColorSpace )
  {
    goto LABEL_14;
  }
  if ( v7
    || *((float *)v5 + 17) != v4->RevealColor[0]
    || *((float *)v5 + 18) != v4->RevealColor[1]
    || *((float *)v5 + 19) != v4->RevealColor[2]
    || *((float *)v5 + 20) != v4->RevealColor[3] )
  {
    *a3 = 1;
  }
  return *((_DWORD *)v5 + 89) >= 1;
}
