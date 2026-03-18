/*
 * XREFs of ?HrFindInterface@CSwRenderTargetGetBounds@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044050
 * Callers:
 *     ?QueryInterface@CSwRenderTargetGetBounds@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180043D90 (-QueryInterface@CSwRenderTargetGetBounds@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::HrFindInterface(
        CSwRenderTargetGetBounds *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !a3 )
    return 2147942487LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0784e14c_5fb4_422c_9f18_6109bbc92771.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0784e14c_5fb4_422c_9f18_6109bbc92771.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0784e14c_5fb4_422c_9f18_6109bbc92771.Data4;
  if ( v3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( v6 )
        return 2147500034LL;
    }
  }
  if ( this )
    this = (CSwRenderTargetGetBounds *)((char *)this + 16);
  *a3 = this;
  return 0LL;
}
