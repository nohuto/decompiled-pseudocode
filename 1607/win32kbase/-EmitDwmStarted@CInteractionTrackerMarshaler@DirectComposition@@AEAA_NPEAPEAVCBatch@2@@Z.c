/*
 * XREFs of ?EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8244
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8AF0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitDwmStarted(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x4000000) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 16;
      *(_QWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 3) = 0;
      *((_DWORD *)v4 + 1) = 239;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *((_BYTE *)this + 324) != 0;
      *((_BYTE *)this + 324) = 0;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
