/*
 * XREFs of ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ECC20
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E9F40 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR@@V_lambda_4699fdc5a14f149076d9c69ea67dcfaa_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_4699fdc5a14f149076d9c69ea67dcfaa_@@@Z @ 0x1C00ECAD4 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR@@V_lambda_4699fdc5a14f149076d9c69e.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@V_lambda_6c97bdd75333e172b3f4469c63192950_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_6c97bdd75333e172b3f4469c63192950_@@@Z @ 0x1C00ECB38 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@V_lambda_6c97bdd75333e1.c)
 *     ??$EmitUpdateCommand@UMILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION@@V_lambda_7beb449fb807bf00c7ae12db90743067_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_7beb449fb807bf00c7ae12db90743067_@@@Z @ 0x1C00ECBA0 (--$EmitUpdateCommand@UMILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION@@V_lambda_7beb449fb807bf00c7ae.c)
 */

char __fastcall DirectComposition::CCompositionDistantLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  DirectComposition::CCompositionDistantLightMarshaler *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v5 & 0x40) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR,_lambda_4699fdc5a14f149076d9c69ea67dcfaa_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE,_lambda_6c97bdd75333e172b3f4469c63192950_>(
              a2,
              (__int64)&v9) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v9 = this;
    if ( v7 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION,_lambda_7beb449fb807bf00c7ae12db90743067_>(
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) &= ~0x100u;
      return 1;
    }
  }
  return v4;
}
