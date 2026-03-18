/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_MASKBRUSH_SETSOURCE@@V_lambda_5fe80d6ba38c4e3de7e7f8dfe4d269b4_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_5fe80d6ba38c4e3de7e7f8dfe4d269b4_@@@Z @ 0x1C00EB7B8
 * Callers:
 *     ?EmitUpdateCommands@CMaskBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EB820 (-EmitUpdateCommands@CMaskBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_MASKBRUSH_SETSOURCE,_lambda_5fe80d6ba38c4e3de7e7f8dfe4d269b4_>(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char v3; // al
  int v4; // r8d
  char *v5; // r9
  __int64 v6; // rcx
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x10uLL, &v8);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 16;
  *(_QWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 1) = 79;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  v6 = *(_QWORD *)(*(_QWORD *)a2 + 40LL);
  if ( v6 )
    v4 = *(_DWORD *)(v6 + 24);
  *((_DWORD *)v5 + 3) = v4;
  return 1;
}
