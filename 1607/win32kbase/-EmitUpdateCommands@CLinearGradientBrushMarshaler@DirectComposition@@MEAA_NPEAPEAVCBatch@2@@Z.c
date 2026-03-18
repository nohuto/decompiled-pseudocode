/*
 * XREFs of ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EBAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_LINEARGRADIENTBRUSH_SETENDPOINT@@V_lambda_0b89941aaa52e53b5580e8bdc4ffe38d_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_0b89941aaa52e53b5580e8bdc4ffe38d_@@@Z @ 0x1C00EB96C (--$EmitUpdateCommand@UMILCMD_LINEARGRADIENTBRUSH_SETENDPOINT@@V_lambda_0b89941aaa52e53b5580e8bdc.c)
 *     ??$EmitUpdateCommand@UMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT@@V_lambda_0b012e1993d2f99c17b34fc9d65df89a_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_0b012e1993d2f99c17b34fc9d65df89a_@@@Z @ 0x1C00EB9CC (--$EmitUpdateCommand@UMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT@@V_lambda_0b012e1993d2f99c17b34fc.c)
 *     ??$EmitUpdateCommand@UMILCMD_LINEARGRADIENTBRUSH_SETSURFACE@@V_lambda_86f38ab5196f88825790a945019bd5ee_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_86f38ab5196f88825790a945019bd5ee_@@@Z @ 0x1C00EBA2C (--$EmitUpdateCommand@UMILCMD_LINEARGRADIENTBRUSH_SETSURFACE@@V_lambda_86f38ab5196f88825790a94501.c)
 *     ?EmitUpdateTransformCommand@CLinearGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EBB64 (-EmitUpdateTransformCommand@CLinearGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch.c)
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  bool v7; // zf
  DirectComposition::CLinearGradientBrushMarshaler *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v9 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_LINEARGRADIENTBRUSH_SETSURFACE,_lambda_86f38ab5196f88825790a945019bd5ee_>(
            a2,
            (__int64 *)&v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CLinearGradientBrushMarshaler::EmitUpdateTransformCommand(this, a2) )
  {
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT,_lambda_0b012e1993d2f99c17b34fc9d65df89a_>(
              a2,
              (__int64)&v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v9 = this;
    if ( v7 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_LINEARGRADIENTBRUSH_SETENDPOINT,_lambda_0b89941aaa52e53b5580e8bdc4ffe38d_>(
           a2,
           (__int64)&v9) )
    {
      *((_DWORD *)this + 4) &= ~0x100u;
      return 1;
    }
  }
  return v3;
}
