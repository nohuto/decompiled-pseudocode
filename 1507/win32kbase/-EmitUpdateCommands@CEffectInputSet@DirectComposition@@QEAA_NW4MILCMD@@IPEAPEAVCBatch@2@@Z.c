/*
 * XREFs of ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C00D9258
 * Callers:
 *     ?EmitUpdateCommands@CCompiledEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8820 (-EmitUpdateCommands@CCompiledEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8B80 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0014C04 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CEffectInputSet::EmitUpdateCommands(
        __int64 a1,
        int a2,
        int a3,
        struct DirectComposition::CBatch ***a4)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  char *v10; // rdx
  unsigned int v11; // r9d
  char *v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // rcx
  void *v17; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  for ( ; *(_DWORD *)(a1 + 32) < *(_DWORD *)a1; *(_DWORD *)(a1 + 32) += v9 )
  {
    v8 = 4096LL - *((_QWORD *)(*a4)[12] + 5);
    v18 = v8;
    if ( v8 < 0x30 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a4, &v18) )
        return *(_DWORD *)(a1 + 32) == *(_DWORD *)a1;
      v8 = v18;
    }
    v9 = (v8 - 20) / 0x1C;
    if ( (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 32)) < v9 )
      LODWORD(v9) = *(_DWORD *)a1 - *(_DWORD *)(a1 + 32);
    DirectComposition::CBatch::EnsureBatchBuffer(a4, (unsigned int)(28 * v9 + 20), &v17);
    v10 = (char *)v17;
    *(_DWORD *)v17 = 28 * v9 + 20;
    *(_QWORD *)(v10 + 4) = 0LL;
    *(_QWORD *)(v10 + 12) = 0LL;
    *((_DWORD *)v10 + 1) = a2;
    *((_DWORD *)v10 + 2) = a3;
    *((_DWORD *)v10 + 4) = v9;
    v11 = *(_DWORD *)(a1 + 32);
    if ( (_DWORD)v9 )
    {
      v12 = v10 + 24;
      v13 = (unsigned int)v9;
      do
      {
        *((_DWORD *)v12 - 1) = v11;
        v14 = v11;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v11);
        if ( v15 )
          *(_DWORD *)v12 = *(_DWORD *)(v15 + 24);
        else
          *(_DWORD *)v12 = 0;
        ++v11;
        *((_DWORD *)v12 + 5) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v14);
        *(_OWORD *)(v12 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 16 * v14);
        v12 += 28;
        --v13;
      }
      while ( v13 );
    }
  }
  return *(_DWORD *)(a1 + 32) == *(_DWORD *)a1;
}
