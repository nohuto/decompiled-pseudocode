/*
 * XREFs of ?EmitUpdateTransformCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EB4D8
 * Callers:
 *     ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EB3D0 (-EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETTRANSFORM@@V_lambda_7d595d6cdb408b31b8835e05089e20ee_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_7d595d6cdb408b31b8835e05089e20ee_@@@Z @ 0x1C00EB304 (--$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETTRANSFORM@@V_lambda_7d595d6cdb408b31b8835e05089e20e.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateTransformCommand(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char updated; // al
  char v5; // dl
  DirectComposition::CSurfaceBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v7 = this;
  if ( (v2 & 0x40) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SURFACEBRUSH_SETTRANSFORM,_lambda_7d595d6cdb408b31b8835e05089e20ee_>(
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v5;
}
