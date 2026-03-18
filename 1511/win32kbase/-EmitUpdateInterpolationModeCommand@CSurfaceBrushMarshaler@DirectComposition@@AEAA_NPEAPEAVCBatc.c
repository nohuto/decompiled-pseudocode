/*
 * XREFs of ?EmitUpdateInterpolationModeCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC100
 * Callers:
 *     ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC050 (-EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateInterpolationModeCommand(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // al
  char v4; // dl
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    return 1;
  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7);
  v4 = 0;
  if ( v3 )
  {
    v5 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 69;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 3) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return v4;
}
