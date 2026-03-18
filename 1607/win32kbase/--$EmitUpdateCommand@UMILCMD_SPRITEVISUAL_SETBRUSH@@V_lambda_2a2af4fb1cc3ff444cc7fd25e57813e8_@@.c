/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_SPRITEVISUAL_SETBRUSH@@V_lambda_2a2af4fb1cc3ff444cc7fd25e57813e8_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_2a2af4fb1cc3ff444cc7fd25e57813e8_@@@Z @ 0x1C00EAE44
 * Callers:
 *     ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EAF30 (-EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_SPRITEVISUAL_SETBRUSH,_lambda_2a2af4fb1cc3ff444cc7fd25e57813e8_>(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char *v3; // r8
  __int64 v4; // rcx
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x10uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 16;
  *(_QWORD *)(v3 + 4) = 0LL;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 1) = 67;
  *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 240LL);
  if ( v4 )
    *((_DWORD *)v3 + 3) = *(_DWORD *)(v4 + 24);
  else
    *((_DWORD *)v3 + 3) = 0;
  return 1;
}
