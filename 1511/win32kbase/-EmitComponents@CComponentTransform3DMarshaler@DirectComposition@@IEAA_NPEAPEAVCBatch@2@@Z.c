/*
 * XREFs of ?EmitComponents@CComponentTransform3DMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC8B4
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC9B0 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

bool __fastcall DirectComposition::CComponentTransform3DMarshaler::EmitComponents(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x8CuLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 140;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x88uLL);
  *(_DWORD *)v4 = 206;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
  *((_DWORD *)v4 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v4 + 5) = *((_DWORD *)this + 15);
  *((_DWORD *)v4 + 6) = *((_DWORD *)this + 16);
  *((_DWORD *)v4 + 2) = *((_DWORD *)this + 17);
  *((_DWORD *)v4 + 3) = *((_DWORD *)this + 18);
  *((_DWORD *)v4 + 7) = *((_DWORD *)this + 19);
  *((_DWORD *)v4 + 8) = *((_DWORD *)this + 20);
  *((_DWORD *)v4 + 9) = *((_DWORD *)this + 21);
  *((_DWORD *)v4 + 10) = *((_DWORD *)this + 22);
  *((_DWORD *)v4 + 11) = *((_DWORD *)this + 26);
  *((_DWORD *)v4 + 12) = *((_DWORD *)this + 23);
  *((_DWORD *)v4 + 13) = *((_DWORD *)this + 24);
  *((_DWORD *)v4 + 14) = *((_DWORD *)this + 25);
  *((_DWORD *)v4 + 15) = *((_DWORD *)this + 27);
  *((_DWORD *)v4 + 16) = *((_DWORD *)this + 28);
  *((_DWORD *)v4 + 17) = *((_DWORD *)this + 29);
  result = 1;
  *(_OWORD *)(v4 + 72) = *(_OWORD *)((char *)this + 120);
  *(_OWORD *)(v4 + 88) = *(_OWORD *)((char *)this + 136);
  *(_OWORD *)(v4 + 104) = *(_OWORD *)((char *)this + 152);
  *(_OWORD *)(v4 + 120) = *(_OWORD *)((char *)this + 168);
  return result;
}
