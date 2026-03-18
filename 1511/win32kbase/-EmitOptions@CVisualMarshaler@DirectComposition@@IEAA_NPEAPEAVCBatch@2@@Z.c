/*
 * XREFs of ?EmitOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00165E4
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00173B0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitOptions(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 20;
    *(_QWORD *)(v4 + 4) = 0LL;
    *(_QWORD *)(v4 + 12) = 0LL;
    *((_DWORD *)v4 + 1) = 51;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v4 + 3) = (*((unsigned __int8 *)this + 220) >> 3) & 1;
    *((_DWORD *)v4 + 4) = (*((unsigned __int8 *)this + 220) >> 2) & 1;
    *((_DWORD *)this + 4) &= ~0x20000u;
    return 1;
  }
  return 0;
}
