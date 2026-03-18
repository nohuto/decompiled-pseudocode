/*
 * XREFs of ?HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044D20
 * Callers:
 *     ?QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044480 (-QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013FD30 (-HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::HrFindInterface(
        CHwDisplayRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v9; // rcx

  if ( a3 )
  {
    v3 = 0;
    *a3 = 0LL;
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data4;
    if ( v4 )
    {
      v5 = (char *)this - 120;
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
      if ( !v6 )
        goto LABEL_17;
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( v7 )
        return (unsigned int)-2147467262;
      else
LABEL_17:
        *a3 = v5;
      return v3;
    }
    else
    {
      if ( this == (CHwDisplayRenderTarget *)120 )
        v9 = 0LL;
      else
        v9 = (char *)this + 56;
      *a3 = v9;
      return 0LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x118u);
    return 2147942487LL;
  }
}
