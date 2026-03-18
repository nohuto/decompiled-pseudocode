/*
 * XREFs of ?EmitUpdateTransform@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007C330
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::EmitUpdateTransform(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v6) )
  {
    v3 = (char *)v6;
    *(_DWORD *)v6 = 48;
    v4 = v3 + 4;
    memset(v3 + 4, 0, 0x2CuLL);
    *(_DWORD *)v4 = 125;
    *((_DWORD *)v4 + 1) = *((_DWORD *)this + 6);
    *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 76);
    *(_OWORD *)(v4 + 24) = *(_OWORD *)((char *)this + 92);
    *((_DWORD *)v4 + 10) = *((_DWORD *)this + 27);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
