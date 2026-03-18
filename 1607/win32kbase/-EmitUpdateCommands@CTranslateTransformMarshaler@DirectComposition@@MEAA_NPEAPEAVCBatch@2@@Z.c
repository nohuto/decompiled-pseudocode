/*
 * XREFs of ?EmitUpdateCommands@CTranslateTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0047DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CTranslateTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CTranslateTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rdx
  bool result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 28;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 339;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
  result = 1;
  *(double *)(v3 + 12) = *((float *)this + 14);
  *(double *)(v3 + 20) = *((float *)this + 15);
  return result;
}
