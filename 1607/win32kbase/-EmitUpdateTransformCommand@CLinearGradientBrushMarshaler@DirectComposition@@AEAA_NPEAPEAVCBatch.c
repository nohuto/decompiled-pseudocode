/*
 * XREFs of ?EmitUpdateTransformCommand@CLinearGradientBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EBB64
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EBAC0 (-EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::EmitUpdateTransformCommand(
        DirectComposition::CLinearGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // al
  char v4; // dl
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7);
  v4 = 0;
  if ( v3 )
  {
    v5 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 75;
    *((_QWORD *)v5 + 1) = *((unsigned int *)this + 6);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v4;
}
