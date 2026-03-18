/*
 * XREFs of ?EmitUpdateCommands@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EEF40
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

bool __fastcall DirectComposition::CRotateTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CRotateTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 68;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x40uLL);
  *(_DWORD *)v4 = 334;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
  result = 1;
  *((double *)v4 + 1) = *((float *)this + 14);
  *((double *)v4 + 2) = *((float *)this + 15);
  *((double *)v4 + 3) = *((float *)this + 16);
  *((double *)v4 + 4) = *((float *)this + 17);
  *((double *)v4 + 5) = *((float *)this + 18);
  *((double *)v4 + 6) = *((float *)this + 19);
  *((double *)v4 + 7) = *((float *)this + 20);
  return result;
}
