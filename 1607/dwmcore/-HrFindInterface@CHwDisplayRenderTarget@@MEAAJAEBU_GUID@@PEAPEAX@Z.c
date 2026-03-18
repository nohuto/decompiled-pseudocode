/*
 * XREFs of ?HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008EF80
 * Callers:
 *     ?QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E9F0 (-QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017F8E0 (-HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::HrFindInterface(
        CHwDisplayRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v9; // rax

  v3 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data4;
    if ( v4 )
    {
      v5 = (char *)this - 128;
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
      if ( !v6 )
        goto LABEL_16;
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( v7 )
        return (unsigned int)-2147467262;
      else
LABEL_16:
        *a3 = v5;
    }
    else
    {
      v9 = (char *)this + 48;
      if ( this == (CHwDisplayRenderTarget *)128 )
        v9 = 0LL;
      *a3 = v9;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF3u);
  }
  return v3;
}
