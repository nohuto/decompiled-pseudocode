/*
 * XREFs of sfac_ComputeIndex2 @ 0x1C02D9ABC
 * Callers:
 *     InvokeGlyphMappingF @ 0x1C00A402C (InvokeGlyphMappingF.c)
 *     cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C00A4080 (cjComputeGLYPHSET_MSFT_UNICODE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sfac_ComputeIndex2(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v3; // r9
  __int16 v4; // r8
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // dx
  __int16 v8; // cx

  v3 = 0;
  v4 = *(_WORD *)(a1 + 2LL * HIBYTE(a2));
  if ( v4 )
    a2 = (unsigned __int8)a2;
  else
    a2 >>= 8;
  v5 = __ROR2__(v4, 8);
  v6 = __ROR2__(*(_WORD *)(v5 + a1 + 512), 8);
  if ( a2 >= v6 )
  {
    v7 = a2 - v6;
    if ( v7 < __ROR2__(*(_WORD *)(v5 + a1 + 514), 8) )
    {
      v8 = __ROR2__(*(_WORD *)(v5 + a1 + 518 + (unsigned __int16)__ROR2__(*(_WORD *)(v5 + a1 + 518), 8) + 2LL * v7), 8);
      if ( v8 )
        return (unsigned __int16)(__ROR2__(v8, 8) + __ROR2__(*(_WORD *)(v5 + a1 + 516), 8));
    }
  }
  return v3;
}
