/*
 * XREFs of ?EmitUpdateAlignmentCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DBFD4
 * Callers:
 *     ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC050 (-EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateAlignmentCommand(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // al
  char v4; // dl
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v7);
  v4 = 0;
  if ( v3 )
  {
    v5 = (char *)v7;
    *(_DWORD *)v7 = 24;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 12) = 0LL;
    *((_DWORD *)v5 + 5) = 0;
    *((_DWORD *)v5 + 1) = 68;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 3) = *((_DWORD *)this + 16);
    *((_DWORD *)v5 + 4) = *((_DWORD *)this + 17);
    *((_DWORD *)v5 + 5) = *((_DWORD *)this + 18);
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return v4;
}
