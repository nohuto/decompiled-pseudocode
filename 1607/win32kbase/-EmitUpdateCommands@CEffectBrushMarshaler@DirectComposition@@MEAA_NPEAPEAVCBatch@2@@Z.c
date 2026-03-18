/*
 * XREFs of ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E6990
 * Callers:
 *     <none>
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@V_lambda_9895c6ebf346605641fcd25f1dfabd39_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_9895c6ebf346605641fcd25f1dfabd39_@@@Z @ 0x1C00E6824 (--$EmitUpdateCommand@UMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@V_lambda_9895c6ebf346605641fcd25f1dfabd.c)
 *     ??$EmitUpdateCommand@UMILCMD_EFFECTBRUSH_SETTEMPLATE@@V_lambda_9f8ff668831ae9ab7eb87b24e54bd6e1_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_9f8ff668831ae9ab7eb87b24e54bd6e1_@@@Z @ 0x1C00E688C (--$EmitUpdateCommand@UMILCMD_EFFECTBRUSH_SETTEMPLATE@@V_lambda_9f8ff668831ae9ab7eb87b24e54bd6e1_.c)
 *     ?EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E68F4 (-EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CEffectBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  DirectComposition::CEffectBrushMarshaler *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_EFFECTBRUSH_SETTEMPLATE,_lambda_9f8ff668831ae9ab7eb87b24e54bd6e1_>(
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v6 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v6 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_EFFECTBRUSH_SETPROPERTYBAG,_lambda_9895c6ebf346605641fcd25f1dfabd39_>(
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  if ( DirectComposition::CEffectBrushMarshaler::EmitSetInputs(this, a2) )
    return 1;
  return v3;
}
