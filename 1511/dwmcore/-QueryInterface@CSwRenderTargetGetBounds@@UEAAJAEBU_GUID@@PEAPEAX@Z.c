/*
 * XREFs of ?QueryInterface@CSwRenderTargetGetBounds@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081C60
 * Callers:
 *     ?QueryInterface@CSwRenderTargetGetBounds@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDC00 (-QueryInterface@CSwRenderTargetGetBounds@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSwRenderTargetGetBounds@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BDC10 (-QueryInterface@CSwRenderTargetGetBounds@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::QueryInterface(
        CSwRenderTargetGetBounds *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CSwRenderTargetGetBounds *__hidden, const struct _GUID *, void **); // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // esi

  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v5 == CSwRenderTargetGetBounds::HrFindInterface )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0784e14c_5fb4_422c_9f18_6109bbc92771.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0784e14c_5fb4_422c_9f18_6109bbc92771.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0784e14c_5fb4_422c_9f18_6109bbc92771.Data4;
        if ( v6 )
        {
          v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
            v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
          if ( v7 )
          {
            v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
              v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
            if ( v8 )
            {
              v9 = -2147467262;
            }
            else
            {
              v9 = 0;
              *a3 = (char *)this + 16;
            }
          }
          else
          {
            v9 = 0;
            *a3 = (char *)this + 16;
          }
        }
        else
        {
          v9 = 0;
          *a3 = (char *)this + 16;
        }
      }
      else
      {
        v9 = v5(this, a2, a3);
      }
      if ( v9 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v9;
      }
    }
    else
    {
      *a3 = this;
      v9 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v9;
  }
  return 2147942487LL;
}
