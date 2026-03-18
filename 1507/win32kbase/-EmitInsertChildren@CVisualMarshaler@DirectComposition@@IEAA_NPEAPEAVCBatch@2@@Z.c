/*
 * XREFs of ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0029E5C
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002A520 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitInsertChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v5; // rbx
  int i; // esi
  char *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x10000) == 0 )
    return 1;
  v5 = *((_QWORD *)this + 17);
  for ( i = 0; ; ++i )
  {
    if ( !v5 )
    {
      *((_DWORD *)this + 4) &= ~0x10000u;
      return 1;
    }
    if ( (*(_DWORD *)(v5 + 16) & 0x20) == 0 )
      break;
LABEL_8:
    v5 = *(_QWORD *)(v5 + 144);
  }
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
  {
    v7 = (char *)v8;
    *(_DWORD *)v8 = 20;
    *(_QWORD *)(v7 + 4) = 0LL;
    *(_QWORD *)(v7 + 12) = 0LL;
    *((_DWORD *)v7 + 1) = 52;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = *(_DWORD *)(v5 + 24);
    *((_DWORD *)v7 + 4) = i;
    *(_DWORD *)(v5 + 16) |= 0x20u;
    goto LABEL_8;
  }
  return 0;
}
