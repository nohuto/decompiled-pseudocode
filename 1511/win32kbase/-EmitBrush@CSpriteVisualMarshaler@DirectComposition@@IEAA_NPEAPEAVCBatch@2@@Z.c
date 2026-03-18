/*
 * XREFs of ?EmitBrush@CSpriteVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DBDB4
 * Callers:
 *     ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DBE30 (-EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::EmitBrush(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // al
  char v4; // dl
  char *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x2000000) == 0 )
    return 1;
  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8);
  v4 = 0;
  if ( v3 )
  {
    v5 = (char *)v8;
    *(_DWORD *)v8 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 65;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 28);
    if ( v6 )
      *((_DWORD *)v5 + 3) = *(_DWORD *)(v6 + 24);
    else
      *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)this + 4) &= ~0x2000000u;
    return 1;
  }
  return v4;
}
