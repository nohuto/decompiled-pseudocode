/*
 * XREFs of ?EmitUpdateCommands@CColorBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8070
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CColorBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CColorBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // al
  char v4; // dl
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7);
  v4 = 0;
  if ( v3 )
  {
    v5 = (char *)v7;
    *(_DWORD *)v7 = 28;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 12) = 0LL;
    *(_QWORD *)(v5 + 20) = 0LL;
    *((_DWORD *)v5 + 1) = 66;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *(_OWORD *)(v5 + 12) = *(_OWORD *)((char *)this + 40);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v4;
}
