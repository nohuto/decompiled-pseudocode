/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004EAA8 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004ECFC (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004F428 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bp
  unsigned int v6; // esi
  char *v7; // rdx
  __int64 v8; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2) )
    return 0;
  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
  {
    while ( *((_DWORD *)this + 52) )
    {
      v6 = *((_DWORD *)this + 52) - 1;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
        return 0;
      v7 = (char *)v9;
      *(_DWORD *)v9 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 177;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v7 + 3) = *(_DWORD *)(*((_QWORD *)this + 25) + 4LL * v6);
      if ( v6 < --*((_DWORD *)this + 52) )
      {
        do
        {
          v8 = v6++;
          *(_DWORD *)(*((_QWORD *)this + 25) + 4 * v8) = *(_DWORD *)(*((_QWORD *)this + 25) + 4LL * v6);
        }
        while ( v6 < *((_DWORD *)this + 52) );
      }
    }
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 40),
          a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 112),
          a2) )
  {
    return 0;
  }
  return v4;
}
