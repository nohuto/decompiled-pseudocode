/*
 * XREFs of ?HrFindInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CB10
 * Callers:
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085ED8 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::HrFindInterface(
        CHwTextureRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rax
  char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3.Data4;
  v5 = 0;
  if ( !v4 )
  {
    if ( this != (CHwTextureRenderTarget *)120 )
    {
      v7 = (char *)this + 56;
LABEL_17:
      *a3 = v7;
      return v5;
    }
LABEL_20:
    v7 = 0LL;
    goto LABEL_17;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
  if ( !v6 )
  {
    if ( this != (CHwTextureRenderTarget *)120 )
    {
      v7 = (char *)this + 64;
      goto LABEL_17;
    }
    goto LABEL_20;
  }
  v7 = (char *)this - 120;
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
  if ( !v8 )
    goto LABEL_17;
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  if ( !v9 )
    goto LABEL_17;
  return (unsigned int)-2147467262;
}
