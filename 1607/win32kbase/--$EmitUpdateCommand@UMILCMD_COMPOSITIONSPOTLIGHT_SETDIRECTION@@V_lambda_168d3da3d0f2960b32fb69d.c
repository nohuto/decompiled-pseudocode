/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION@@V_lambda_168d3da3d0f2960b32fb69d934910f4b_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_168d3da3d0f2960b32fb69d934910f4b_@@@Z @ 0x1C00ED610
 * Callers:
 *     ?EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ED880 (-EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPOSITIONSPOTLIGHT_SETDIRECTION,_lambda_168d3da3d0f2960b32fb69d934910f4b_>(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char *v3; // r8
  char result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x18uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 24;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 1) = 295;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  *((_DWORD *)v3 + 3) = *(_DWORD *)(*(_QWORD *)a2 + 92LL);
  *((_DWORD *)v3 + 4) = *(_DWORD *)(*(_QWORD *)a2 + 96LL);
  result = 1;
  *((_DWORD *)v3 + 5) = *(_DWORD *)(*(_QWORD *)a2 + 100LL);
  return result;
}
