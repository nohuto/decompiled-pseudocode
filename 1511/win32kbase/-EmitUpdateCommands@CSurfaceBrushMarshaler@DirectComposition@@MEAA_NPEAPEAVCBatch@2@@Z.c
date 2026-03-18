/*
 * XREFs of ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC050
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateAlignmentCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DBFD4 (-EmitUpdateAlignmentCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateInterpolationModeCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DC100 (-EmitUpdateInterpolationModeCommand@CSurfaceBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  char *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v9) )
      return v2;
    v5 = (char *)v9;
    *(_DWORD *)v9 = 32;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 12) = 0LL;
    *(_QWORD *)(v5 + 20) = 0LL;
    *((_DWORD *)v5 + 7) = 0;
    *((_DWORD *)v5 + 1) = 67;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 5);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 24);
    else
      v7 = 0;
    *((_DWORD *)v5 + 3) = v7;
    *((_OWORD *)v5 + 1) = *((_OWORD *)this + 3);
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  if ( DirectComposition::CSurfaceBrushMarshaler::EmitUpdateAlignmentCommand(this, a2)
    && DirectComposition::CSurfaceBrushMarshaler::EmitUpdateInterpolationModeCommand(this, a2) )
  {
    return 1;
  }
  return v2;
}
