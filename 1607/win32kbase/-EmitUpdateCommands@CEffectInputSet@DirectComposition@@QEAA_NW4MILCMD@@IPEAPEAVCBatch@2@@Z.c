/*
 * XREFs of ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C0003F80
 * Callers:
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003C70 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0078C0C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CEffectInputSet::EmitUpdateCommands(
        __int64 a1,
        __int64 a2,
        int a3,
        struct DirectComposition::CBatch **a4)
{
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rbp
  char *v9; // rdx
  unsigned int v10; // r9d
  char *v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rcx
  void *v16; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  for ( ; *(_DWORD *)(a1 + 32) < *(_DWORD *)a1; *(_DWORD *)(a1 + 32) += v8 )
  {
    v7 = 4096LL - *(_QWORD *)(*((_QWORD *)*a4 + 12) + 40LL);
    v17 = v7;
    if ( v7 < 0x30 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a4, &v17) )
        return *(_DWORD *)(a1 + 32) == *(_DWORD *)a1;
      v7 = v17;
    }
    v8 = (v7 - 20) / 0x1C;
    if ( (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 32)) < v8 )
      LODWORD(v8) = *(_DWORD *)a1 - *(_DWORD *)(a1 + 32);
    DirectComposition::CBatch::EnsureBatchBuffer(a4, (unsigned int)(28 * v8 + 20), &v16);
    v9 = (char *)v16;
    *(_DWORD *)v16 = 28 * v8 + 20;
    *(_QWORD *)(v9 + 4) = 0LL;
    *(_QWORD *)(v9 + 12) = 0LL;
    *((_DWORD *)v9 + 1) = 240;
    *((_DWORD *)v9 + 2) = a3;
    *((_DWORD *)v9 + 4) = v8;
    v10 = *(_DWORD *)(a1 + 32);
    if ( (_DWORD)v8 )
    {
      v11 = v9 + 24;
      v12 = (unsigned int)v8;
      do
      {
        *((_DWORD *)v11 - 1) = v10;
        v13 = v10;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v10);
        if ( v14 )
          *(_DWORD *)v11 = *(_DWORD *)(v14 + 24);
        else
          *(_DWORD *)v11 = 0;
        ++v10;
        *((_DWORD *)v11 + 5) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v13);
        *(_OWORD *)(v11 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 16 * v13);
        v11 += 28;
        --v12;
      }
      while ( v12 );
    }
  }
  return *(_DWORD *)(a1 + 32) == *(_DWORD *)a1;
}
