/*
 * XREFs of ?EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004130
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

bool __fastcall DirectComposition::CTranslateTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CTranslateTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 36;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x20uLL);
  *(_DWORD *)v4 = 238;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
  result = 1;
  *((double *)v4 + 1) = *((float *)this + 14);
  *((double *)v4 + 2) = *((float *)this + 15);
  *((double *)v4 + 3) = *((float *)this + 16);
  return result;
}
