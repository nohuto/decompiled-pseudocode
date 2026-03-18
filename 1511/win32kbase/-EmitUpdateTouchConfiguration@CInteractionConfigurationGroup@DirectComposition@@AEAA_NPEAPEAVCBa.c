/*
 * XREFs of ?EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004F308
 * Callers:
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C004F428 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0075184 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  char *v7; // rdx
  _QWORD *v8; // r9
  unsigned int i; // r8d
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  while ( (*((_DWORD *)this + 3) & 4) != 0 || *((_DWORD *)this + 8) < *((_DWORD *)this + 6) )
  {
    v5 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 12) + 40LL);
    v12 = v5;
    if ( v5 < 0x24 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
        return *((_DWORD *)this + 8) == *((_DWORD *)this + 6);
      v5 = v12;
    }
    v6 = (v5 - 24) / 0xC;
    if ( (unsigned int)(*((_DWORD *)this + 6) - *((_DWORD *)this + 8)) < v6 )
      LODWORD(v6) = *((_DWORD *)this + 6) - *((_DWORD *)this + 8);
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * (v6 + 2)), &v13);
    v7 = (char *)v13;
    *(_DWORD *)v13 = 12 * (v6 + 2);
    v8 = v7 + 24;
    *(_QWORD *)(v7 + 4) = 0LL;
    *(_QWORD *)(v7 + 12) = 0LL;
    *((_DWORD *)v7 + 5) = 0;
    *((_DWORD *)v7 + 1) = 174;
    *((_DWORD *)v7 + 2) = *(_DWORD *)(*(_QWORD *)this + 24LL);
    *((_DWORD *)v7 + 3) = v6;
    *((_DWORD *)v7 + 4) = *((_DWORD *)this + 2);
    *((_DWORD *)v7 + 5) = 1;
    if ( *((_DWORD *)this + 6) )
    {
      for ( i = 0; i < (unsigned int)v6; *((_DWORD *)v8 - 1) = *(_DWORD *)(v11 + 8) )
      {
        v10 = i + *((_DWORD *)this + 8);
        ++i;
        v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v10);
        *v8 = *(_QWORD *)v11;
        v8 = (_QWORD *)((char *)v8 + 12);
      }
    }
    *((_DWORD *)this + 3) &= ~4u;
    *((_DWORD *)this + 8) += v6;
  }
  return *((_DWORD *)this + 8) == *((_DWORD *)this + 6);
}
