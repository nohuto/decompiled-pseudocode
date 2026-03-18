/*
 * XREFs of ?EmitTransformParent@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016940
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00173B0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitTransformParent(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
  {
    v4 = (char *)v8;
    *(_DWORD *)v8 = 16;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 1) = 47;
    v5 = *((_DWORD *)this + 6);
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 2) = v5;
    v6 = *((_QWORD *)this + 13);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      if ( v7 )
        *((_DWORD *)v4 + 3) = *(_DWORD *)(v7 + 24);
    }
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return 0;
}
