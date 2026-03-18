/*
 * XREFs of ?EmitUpdateCommands@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ECA00
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E9F40 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR@@V_lambda_3a7d53e24e2750ef77c3f5162b86a6f4_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_3a7d53e24e2750ef77c3f5162b86a6f4_@@@Z @ 0x1C00EC998 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR@@V_lambda_3a7d53e24e2750ef77c3f516.c)
 */

char __fastcall DirectComposition::CCompositionAmbientLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionAmbientLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionAmbientLightMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x40) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR,_lambda_3a7d53e24e2750ef77c3f5162b86a6f4_>(
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x40u;
      return 1;
    }
  }
  return v4;
}
