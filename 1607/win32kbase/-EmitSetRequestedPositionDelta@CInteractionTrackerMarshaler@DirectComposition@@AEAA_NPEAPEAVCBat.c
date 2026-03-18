/*
 * XREFs of ?EmitSetRequestedPositionDelta@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E892C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8AF0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPositionDelta(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 28;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 1) = 227;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 28);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 29);
      *((_DWORD *)v4 + 6) = *((_DWORD *)this + 30);
      *((_DWORD *)this + 4) |= 0x400u;
      *((_DWORD *)this + 29) = 0;
      *((_DWORD *)this + 28) = 0;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
