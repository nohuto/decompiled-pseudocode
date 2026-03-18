/*
 * XREFs of ?EmitUpdateInsetPropertyCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4NineGridBrushMarshalerFlag@12@KM@Z @ 0x1C00EC058
 * Callers:
 *     ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EBED0 (-EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitUpdateCommand@UMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@V_lambda_4752416bf0de7d01d977e47fd81afe55_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_4752416bf0de7d01d977e47fd81afe55_@@@Z @ 0x1C00EBDA8 (--$EmitUpdateCommand@UMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@V_lambda_4752416bf0de7d01d977e47fd8.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateInsetPropertyCommand(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        int a4,
        int a5)
{
  char updated; // al
  char v8; // cl
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]

  v12 = a5;
  v10 = a1;
  v11 = a4;
  if ( (a3 & *(_DWORD *)(a1 + 16)) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY,_lambda_4752416bf0de7d01d977e47fd81afe55_>(
              a2,
              &v10);
  v8 = 0;
  if ( updated )
  {
    *(_DWORD *)(a1 + 16) &= ~a3;
    return 1;
  }
  return v8;
}
