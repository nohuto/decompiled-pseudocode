/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT@@V_lambda_0b012e1993d2f99c17b34fc9d65df89a_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_0b012e1993d2f99c17b34fc9d65df89a_@@@Z @ 0x1C00EB9CC
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EBAC0 (-EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT,_lambda_0b012e1993d2f99c17b34fc9d65df89a_>(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char *v3; // r8
  char result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x14uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 20;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *((_DWORD *)v3 + 1) = 82;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  result = 1;
  *(_QWORD *)(v3 + 12) = *(_QWORD *)(*(_QWORD *)a2 + 96LL);
  return result;
}
