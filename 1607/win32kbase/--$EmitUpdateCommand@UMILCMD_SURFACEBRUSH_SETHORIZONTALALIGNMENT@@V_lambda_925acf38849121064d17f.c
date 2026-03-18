/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@V_lambda_925acf38849121064d17ffe99330a147_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_925acf38849121064d17ffe99330a147_@@@Z @ 0x1C00EB174
 * Callers:
 *     ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EB3D0 (-EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT,_lambda_925acf38849121064d17ffe99330a147_>(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char *v3; // r8
  char result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x10uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 16;
  *(_QWORD *)(v3 + 4) = 0LL;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 1) = 71;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  result = 1;
  *((_DWORD *)v3 + 3) = *(_DWORD *)(*(_QWORD *)a2 + 72LL);
  return result;
}
