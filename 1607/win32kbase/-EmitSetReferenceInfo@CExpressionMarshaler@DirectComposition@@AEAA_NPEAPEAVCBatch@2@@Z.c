/*
 * XREFs of ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003D098
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003D310 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0078C0C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetReferenceInfo(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbp
  char *v6; // rcx
  unsigned int v7; // r9d
  _OWORD *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 51) < *((_DWORD *)this + 50); *((_DWORD *)this + 51) += v5 )
  {
    v4 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 12) + 40LL);
    v12 = v4;
    if ( v4 < 0x30 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
        return *((_DWORD *)this + 51) == *((_DWORD *)this + 50);
      v4 = v12;
    }
    v5 = (v4 - 16) >> 5;
    if ( (unsigned int)(*((_DWORD *)this + 50) - *((_DWORD *)this + 51)) < v5 )
      LODWORD(v5) = *((_DWORD *)this + 50) - *((_DWORD *)this + 51);
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(32 * v5 + 16), &v13);
    v6 = (char *)v13;
    v7 = 0;
    *(_DWORD *)v13 = 32 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 210;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v6 + 3) = v5; v7 < (unsigned int)v5; *(v8 - 1) = *(_OWORD *)(v10 + v9 + 16) )
    {
      v9 = *((_QWORD *)this + 24);
      v10 = 32LL * (v7 + *((_DWORD *)this + 51));
      ++v7;
      *v8 = *(_OWORD *)(v10 + v9);
      v8 += 2;
    }
  }
  return *((_DWORD *)this + 51) == *((_DWORD *)this + 50);
}
