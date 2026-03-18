/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_COLORBRUSH_SETCOLOR@@V_lambda_e67c0f3693897c6396872a06df71240e_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_e67c0f3693897c6396872a06df71240e_@@@Z @ 0x1C00E6748
 * Callers:
 *     ?EmitUpdateCommands@CColorBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E67B0 (-EmitUpdateCommands@CColorBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COLORBRUSH_SETCOLOR,_lambda_e67c0f3693897c6396872a06df71240e_>(
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
  *((_DWORD *)v3 + 1) = 69;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  result = 1;
  *(_OWORD *)(v3 + 12) = *(_OWORD *)(*(_QWORD *)a2 + 40LL);
  return result;
}
