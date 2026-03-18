/*
 * XREFs of ?EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00731B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C00730F4 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 */

char __fastcall DirectComposition::CSharedSectionMarshaler::EmitUpdateCommands(
        DirectComposition::CSharedSectionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rbx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 24;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 1) = 258;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
  *(_QWORD *)(v3 + 12) = DirectComposition::CSharedSectionMarshaler::CreateDwmHandle((PVOID *)this);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 12);
  return 1;
}
