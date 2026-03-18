/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DA3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

bool __fastcall DirectComposition::CComponentTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xBCuLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 188;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0xB8uLL);
  *(_DWORD *)v4 = 235;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
  result = 1;
  *((double *)v4 + 1) = *((float *)this + 10);
  *((double *)v4 + 2) = *((float *)this + 11);
  *((double *)v4 + 3) = *((float *)this + 12);
  *((double *)v4 + 4) = *((float *)this + 13);
  *((double *)v4 + 5) = *((float *)this + 14);
  *((double *)v4 + 6) = *((float *)this + 15);
  *((double *)v4 + 7) = *((float *)this + 16);
  *((double *)v4 + 11) = *((float *)this + 20);
  *((double *)v4 + 8) = *((float *)this + 17);
  *((double *)v4 + 9) = *((float *)this + 18);
  *((double *)v4 + 10) = *((float *)this + 19);
  *((double *)v4 + 12) = *((float *)this + 21);
  *((double *)v4 + 13) = *((float *)this + 22);
  *((double *)v4 + 14) = *((float *)this + 23);
  *(_OWORD *)(v4 + 120) = *((_OWORD *)this + 6);
  *(_OWORD *)(v4 + 136) = *((_OWORD *)this + 7);
  *(_OWORD *)(v4 + 152) = *((_OWORD *)this + 8);
  *(_OWORD *)(v4 + 168) = *((_OWORD *)this + 9);
  return result;
}
