/*
 * XREFs of ?EmitCreate@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007C240
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::EmitCreate(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v5; // rax
  char *v6; // rbx
  char *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x28uLL, &v8) )
      return 0;
    v5 = (char *)v8;
    *(_DWORD *)v8 = 40;
    v6 = v5 + 4;
    memset(v5 + 4, 0, 0x24uLL);
    *(_DWORD *)v6 = 124;
    *((_DWORD *)v6 + 1) = *((_DWORD *)this + 6);
    *((_DWORD *)v6 + 5) = 1;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 10);
    *((_QWORD *)v6 + 3) = *((_QWORD *)this + 6);
    *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 7);
    *((_DWORD *)v6 + 8) = *((_DWORD *)this + 18);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
  {
    v7 = (char *)v8;
    *(_DWORD *)v8 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 126;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
