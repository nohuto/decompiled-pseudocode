/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@V_lambda_a9009d9e366029060374bab62bcea2b6_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_a9009d9e366029060374bab62bcea2b6_@@@Z @ 0x1C00EBE08
 * Callers:
 *     ?EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EC0AC (-EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW,_lambda_a9009d9e366029060374bab62bcea2b6_>(
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
  *((_DWORD *)v3 + 1) = 86;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  result = 1;
  *((_DWORD *)v3 + 3) = *(unsigned __int8 *)(*(_QWORD *)a2 + 80LL);
  return result;
}
