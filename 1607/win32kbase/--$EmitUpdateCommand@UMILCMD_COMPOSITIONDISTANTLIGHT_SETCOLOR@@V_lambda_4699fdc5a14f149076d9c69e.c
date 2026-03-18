/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR@@V_lambda_4699fdc5a14f149076d9c69ea67dcfaa_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_4699fdc5a14f149076d9c69ea67dcfaa_@@@Z @ 0x1C00ECAD4
 * Callers:
 *     ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ECC20 (-EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR,_lambda_4699fdc5a14f149076d9c69ea67dcfaa_>(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char *v3; // r8
  char result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x1CuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 28;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 282;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  result = 1;
  *(_OWORD *)(v3 + 12) = *(_OWORD *)(*(_QWORD *)a2 + 56LL);
  return result;
}
