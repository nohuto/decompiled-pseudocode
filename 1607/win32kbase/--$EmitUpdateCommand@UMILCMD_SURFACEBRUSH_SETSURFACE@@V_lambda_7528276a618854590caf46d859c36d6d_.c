/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_SURFACEBRUSH_SETSURFACE@@V_lambda_7528276a618854590caf46d859c36d6d_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_7528276a618854590caf46d859c36d6d_@@@Z @ 0x1C00EB288
 * Callers:
 *     ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EB3D0 (-EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SURFACEBRUSH_SETSURFACE,_lambda_7528276a618854590caf46d859c36d6d_>(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char v3; // al
  int v4; // r9d
  char *v5; // r8
  __int64 v6; // rcx
  char result; // al
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x20uLL, &v8);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 32;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 1) = 70;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  v6 = *(_QWORD *)(*(_QWORD *)a2 + 40LL);
  if ( v6 )
    v4 = *(_DWORD *)(v6 + 24);
  *((_DWORD *)v5 + 3) = v4;
  result = 1;
  *((_OWORD *)v5 + 1) = *(_OWORD *)(*(_QWORD *)a2 + 56LL);
  return result;
}
