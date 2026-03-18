/*
 * XREFs of ?EmitUpdateCommands@CHostVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003330
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002A520 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CHostVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CHostVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool updated; // di
  char *v6; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  updated = DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2);
  if ( updated && (*((_DWORD *)this + 4) & 0x4000000) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v7) )
    {
      v6 = (char *)v7;
      *(_DWORD *)v7 = 12;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 1) = 60;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)this + 4) &= ~0x4000000u;
    }
    else
    {
      return 0;
    }
  }
  return updated;
}
