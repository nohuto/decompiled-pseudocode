/*
 * XREFs of ?HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080900
 * Callers:
 *     ?QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080050 (-QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014EF40 (-HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::HrFindInterface(
        CHwDisplayRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  char *v5; // rcx
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( a3 )
  {
    v3 = 0;
    *a3 = 0LL;
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data4;
    if ( v4 )
    {
      v7 = (char *)this - 120;
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
      if ( !v8 )
        goto LABEL_17;
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( v9 )
        return (unsigned int)-2147467262;
      else
LABEL_17:
        *a3 = v7;
      return v3;
    }
    else
    {
      if ( this == (CHwDisplayRenderTarget *)120 )
        v5 = 0LL;
      else
        v5 = (char *)this + 56;
      *a3 = v5;
      return 0LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x119u);
    return 2147942487LL;
  }
}
