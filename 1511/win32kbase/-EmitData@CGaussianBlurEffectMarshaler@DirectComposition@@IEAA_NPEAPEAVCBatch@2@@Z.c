/*
 * XREFs of ?EmitData@CGaussianBlurEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DDC64
 * Callers:
 *     ?EmitUpdateCommands@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DDCD0 (-EmitUpdateCommands@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CGaussianBlurEffectMarshaler::EmitData(
        DirectComposition::CGaussianBlurEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 24;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 1) = 224;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
  *((_DWORD *)v3 + 3) = *((_DWORD *)this + 22);
  *((_DWORD *)v3 + 4) = *((_DWORD *)this + 23);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 24);
  return 1;
}
