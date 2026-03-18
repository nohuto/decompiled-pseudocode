/*
 * XREFs of ?EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001D1F8
 * Callers:
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001D4B4 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdatePenConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 3) & 2) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_QWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 12) = 0LL;
    *((_DWORD *)v3 + 5) = 0;
    *((_DWORD *)v3 + 1) = 164;
    *((_DWORD *)v3 + 2) = *(_DWORD *)(*(_QWORD *)this + 24LL);
    *((_DWORD *)v3 + 3) = 1;
    *((_DWORD *)v3 + 4) = *((_DWORD *)this + 2);
    *((_DWORD *)v3 + 5) = 3;
    *((_DWORD *)v3 + 6) = *((_DWORD *)this + 15);
    *((_DWORD *)this + 3) &= ~2u;
    return 1;
  }
  return 0;
}
