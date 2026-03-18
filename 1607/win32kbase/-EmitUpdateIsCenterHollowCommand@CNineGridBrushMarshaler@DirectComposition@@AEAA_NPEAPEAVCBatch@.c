/*
 * XREFs of ?EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EC0AC
 * Callers:
 *     ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EBED0 (-EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@V_lambda_a9009d9e366029060374bab62bcea2b6_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_a9009d9e366029060374bab62bcea2b6_@@@Z @ 0x1C00EBE08 (--$EmitUpdateCommand@UMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@V_lambda_a9009d9e366029060374bab62.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateIsCenterHollowCommand(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CNineGridBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x4000) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW,_lambda_a9009d9e366029060374bab62bcea2b6_>(
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x4000u;
    return 1;
  }
  return v5;
}
