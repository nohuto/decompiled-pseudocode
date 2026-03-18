/*
 * XREFs of ?EmitUpdateSourceCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EC0E8
 * Callers:
 *     ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EBED0 (-EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_NINEGRIDBRUSH_SETSOURCE@@V_lambda_bbbbfaf5e425b5858bd5aa190ce74ce9_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_bbbbfaf5e425b5858bd5aa190ce74ce9_@@@Z @ 0x1C00EBE64 (--$EmitUpdateCommand@UMILCMD_NINEGRIDBRUSH_SETSOURCE@@V_lambda_bbbbfaf5e425b5858bd5aa190ce74ce9_.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateSourceCommand(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char updated; // al
  char v5; // dl
  DirectComposition::CNineGridBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v7 = this;
  if ( (v2 & 0x20) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_NINEGRIDBRUSH_SETSOURCE,_lambda_bbbbfaf5e425b5858bd5aa190ce74ce9_>(
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
