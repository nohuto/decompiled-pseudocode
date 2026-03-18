/*
 * XREFs of ?EmitUpdateCommands@CColorBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E67B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_COLORBRUSH_SETCOLOR@@V_lambda_e67c0f3693897c6396872a06df71240e_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_e67c0f3693897c6396872a06df71240e_@@@Z @ 0x1C00E6748 (--$EmitUpdateCommand@UMILCMD_COLORBRUSH_SETCOLOR@@V_lambda_e67c0f3693897c6396872a06df71240e_@@@C.c)
 */

char __fastcall DirectComposition::CColorBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CColorBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char updated; // al
  char v5; // dl
  DirectComposition::CColorBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v7 = this;
  if ( (v2 & 0x20) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COLORBRUSH_SETCOLOR,_lambda_e67c0f3693897c6396872a06df71240e_>(
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return v5;
}
