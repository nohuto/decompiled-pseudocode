/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@V_lambda_4752416bf0de7d01d977e47fd81afe55_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_4752416bf0de7d01d977e47fd81afe55_@@@Z @ 0x1C00EBDA8
 * Callers:
 *     ?EmitUpdateInsetPropertyCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4NineGridBrushMarshalerFlag@12@KM@Z @ 0x1C00EC058 (-EmitUpdateInsetPropertyCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY,_lambda_4752416bf0de7d01d977e47fd81afe55_>(
        struct DirectComposition::CBatch **a1,
        _DWORD *a2)
{
  char *v3; // r8
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x14uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 20;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *((_DWORD *)v3 + 1) = 85;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  *((_DWORD *)v3 + 3) = a2[2];
  *((_DWORD *)v3 + 4) = a2[3];
  return 1;
}
