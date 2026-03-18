/*
 * XREFs of ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EB3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@V_lambda_925acf38849121064d17ffe99330a147_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_925acf38849121064d17ffe99330a147_@@@Z @ 0x1C00EB174 (--$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@V_lambda_925acf38849121064d17f.c)
 *     ??$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@V_lambda_6e268feab3d7cd9521baed44fbcd0ae3_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_6e268feab3d7cd9521baed44fbcd0ae3_@@@Z @ 0x1C00EB1D0 (--$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@V_lambda_6e268feab3d7cd9521baed4.c)
 *     ??$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETSTRETCH@@V_lambda_f9b8937c2670049a63a1d2fca267779f_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_f9b8937c2670049a63a1d2fca267779f_@@@Z @ 0x1C00EB22C (--$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETSTRETCH@@V_lambda_f9b8937c2670049a63a1d2fca267779f_.c)
 *     ??$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETSURFACE@@V_lambda_7528276a618854590caf46d859c36d6d_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_7528276a618854590caf46d859c36d6d_@@@Z @ 0x1C00EB288 (--$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETSURFACE@@V_lambda_7528276a618854590caf46d859c36d6d_.c)
 *     ??$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT@@V_lambda_908be733ad79dc73949ff07cf103df35_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_908be733ad79dc73949ff07cf103df35_@@@Z @ 0x1C00EB36C (--$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT@@V_lambda_908be733ad79dc73949ff07.c)
 *     ?EmitUpdateTransformCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EB4D8 (-EmitUpdateTransformCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  bool v7; // zf
  DirectComposition::CSurfaceBrushMarshaler *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v9 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SURFACEBRUSH_SETSURFACE,_lambda_7528276a618854590caf46d859c36d6d_>(
            a2,
            (__int64)&v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CSurfaceBrushMarshaler::EmitUpdateTransformCommand(this, a2) )
  {
    v6 = *((_DWORD *)this + 4);
    v9 = this;
    if ( (v6 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT,_lambda_925acf38849121064d17ffe99330a147_>(
              a2,
              (__int64)&v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SURFACEBRUSH_SETVERTICALALIGNMENT,_lambda_908be733ad79dc73949ff07cf103df35_>(
              a2,
              (__int64)&v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x200) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SURFACEBRUSH_SETSTRETCH,_lambda_f9b8937c2670049a63a1d2fca267779f_>(
              a2,
              (__int64)&v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v7 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v9 = this;
    if ( !v7 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE,_lambda_6e268feab3d7cd9521baed44fbcd0ae3_>(
              a2,
              (__int64)&v9) )
        return v3;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    if ( DirectComposition::CSurfaceBrushMarshaler::EmitUpdateTransformCommand(this, a2) )
      return 1;
  }
  return v3;
}
