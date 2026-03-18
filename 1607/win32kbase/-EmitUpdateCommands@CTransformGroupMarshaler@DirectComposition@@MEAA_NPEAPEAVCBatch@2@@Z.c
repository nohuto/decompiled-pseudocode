/*
 * XREFs of ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0048090
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0078C0C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CTransformGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r14
  char *v6; // rcx
  _DWORD *v7; // r9
  unsigned int v8; // r10d
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 17) < *((_DWORD *)this + 16); *((_DWORD *)this + 17) += v5 )
  {
    v4 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 12) + 40LL);
    v12 = v4;
    if ( v4 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
        return *((_DWORD *)this + 17) == *((_DWORD *)this + 16);
      v4 = v12;
    }
    v5 = (v4 - 20) >> 2;
    if ( (unsigned int)(*((_DWORD *)this + 16) - *((_DWORD *)this + 17)) < v5 )
      LODWORD(v5) = *((_DWORD *)this + 16) - *((_DWORD *)this + 17);
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v5 + 20), &v13);
    v6 = (char *)v13;
    *(_DWORD *)v13 = 4 * v5 + 20;
    v7 = v6 + 20;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_QWORD *)(v6 + 12) = 0LL;
    *((_DWORD *)v6 + 1) = 338;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v6 + 3) = 4 * v5;
    *((_DWORD *)v6 + 4) = *((_DWORD *)this + 17) != 0;
    v8 = *((_DWORD *)this + 17);
    if ( (_DWORD)v5 )
    {
      v9 = (unsigned int)v5;
      do
      {
        v10 = v8++;
        *v7++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8 * v10) + 24LL);
        --v9;
      }
      while ( v9 );
    }
  }
  return *((_DWORD *)this + 17) == *((_DWORD *)this + 16);
}
