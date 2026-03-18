/*
 * XREFs of ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8494
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00E8AF0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0078C0C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetManipulations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // si
  char v3; // bp
  char *v6; // rcx
  void *v7; // rdx
  unsigned __int64 v8; // r15
  char *v9; // rcx
  unsigned int v10; // r9d
  _DWORD *v11; // r8
  __int64 v12; // rcx
  void *v14; // [rsp+50h] [rbp+8h] BYREF
  void *v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = 1;
  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x2000) != 0 || *((_DWORD *)this + 70) )
  {
    for ( ; *((_DWORD *)this + 71) < *((_DWORD *)this + 70); *((_DWORD *)this + 71) += v8 )
    {
      v7 = (void *)(4096LL - *((_QWORD *)(*a2)[12] + 5));
      v14 = v7;
      if ( (unsigned __int64)v7 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v14) )
          break;
        v7 = v14;
      }
      v8 = ((unsigned __int64)v7 - 16) >> 3;
      if ( (unsigned int)(*((_DWORD *)this + 70) - *((_DWORD *)this + 71)) < v8 )
        LODWORD(v8) = *((_DWORD *)this + 70) - *((_DWORD *)this + 71);
      DirectComposition::CBatch::EnsureBatchBuffer(
        (struct DirectComposition::CBatch **)a2,
        (unsigned int)(8 * v8 + 16),
        &v15);
      v9 = (char *)v15;
      v10 = 0;
      *(_DWORD *)v15 = 8 * v8 + 16;
      v11 = v9 + 16;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_DWORD *)v9 + 1) = 231;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
      for ( *((_DWORD *)v9 + 3) = v8; v10 < (unsigned int)v8; ++v10 )
      {
        *v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 34) + 16LL * (v10 + *((_DWORD *)this + 71))) + 24LL);
        v12 = *(_QWORD *)(*((_QWORD *)this + 34) + 16LL * (v10 + *((_DWORD *)this + 71)) + 8);
        if ( v12 )
          v11[1] = *(_DWORD *)(v12 + 24);
        else
          v11[1] = 0;
        v11 += 2;
      }
    }
  }
  else if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &v14) )
  {
    v6 = (char *)v14;
    *(_DWORD *)v14 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 231;
    *((_QWORD *)v6 + 1) = *((unsigned int *)this + 6);
  }
  else
  {
    v3 = 0;
  }
  if ( *((_DWORD *)this + 71) != *((_DWORD *)this + 70) || !v3 )
    return 0;
  return v2;
}
