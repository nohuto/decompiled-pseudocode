/*
 * XREFs of ?EmitData@CArithmeticCompositeEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DD298
 * Callers:
 *     ?EmitUpdateCommands@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DD310 (-EmitUpdateCommands@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::EmitData(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 32;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 7) = 0;
  *((_DWORD *)v3 + 1) = 225;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
  *((_DWORD *)v3 + 3) = *((_DWORD *)this + 24);
  *((_DWORD *)v3 + 4) = *((_DWORD *)this + 25);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 26);
  *((_DWORD *)v3 + 6) = *((_DWORD *)this + 27);
  *((_DWORD *)v3 + 7) = *((_DWORD *)this + 28);
  return 1;
}
