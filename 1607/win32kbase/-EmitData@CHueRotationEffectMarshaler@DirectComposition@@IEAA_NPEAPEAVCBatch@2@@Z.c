/*
 * XREFs of ?EmitData@CHueRotationEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00F036C
 * Callers:
 *     ?EmitUpdateCommands@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00F03D0 (-EmitUpdateCommands@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CHueRotationEffectMarshaler::EmitData(
        DirectComposition::CHueRotationEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 16;
  *(_QWORD *)(v3 + 4) = 0LL;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 1) = 321;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
  *((_DWORD *)v3 + 3) = *((_DWORD *)this + 24);
  return 1;
}
