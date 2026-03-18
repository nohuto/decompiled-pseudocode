/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@V_lambda_a17fe493a9a3d244ffd1b2531b500889_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_a17fe493a9a3d244ffd1b2531b500889_@@@Z @ 0x1C00478D8
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044920 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS,_lambda_a17fe493a9a3d244ffd1b2531b500889_>(
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
  *((_DWORD *)v3 + 1) = 271;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  *((_DWORD *)v3 + 3) = *(_DWORD *)(*(_QWORD *)a2 + 92LL);
  *((_DWORD *)v3 + 4) = *(_DWORD *)(*(_QWORD *)a2 + 96LL);
  result = 1;
  *((_DWORD *)v3 + 5) = *(_DWORD *)(*(_QWORD *)a2 + 100LL);
  return result;
}
