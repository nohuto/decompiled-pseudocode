/*
 * XREFs of ?EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EC488
 * Callers:
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EC6A0 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0078C0C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitAddConditionAnimationResources(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  unsigned int v6; // esi
  char *v7; // rcx
  _DWORD *v8; // rdx
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 29) < *((_DWORD *)this + 28); *((_DWORD *)this + 29) += 2 * v6 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[12] + 5);
    v13 = v4;
    if ( v4 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v13) )
        return *((_DWORD *)this + 29) == *((_DWORD *)this + 28);
      v4 = v13;
    }
    v5 = (v4 - 16) >> 3;
    if ( (unsigned __int64)(unsigned int)(*((_DWORD *)this + 28) - *((_DWORD *)this + 29)) >> 1 >= v5 )
      v6 = v5;
    else
      v6 = (unsigned int)(*((_DWORD *)this + 28) - *((_DWORD *)this + 29)) >> 1;
    DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 8 * v6 + 16, &v14);
    v7 = (char *)v14;
    *(_DWORD *)v14 = 8 * v6 + 16;
    v8 = v7 + 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 215;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = v6;
    if ( v6 )
    {
      v9 = 0;
      v10 = v6;
      do
      {
        *v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 8LL * (unsigned int)(v9 + *((_DWORD *)this + 29))) + 24LL);
        v8 += 2;
        v11 = (unsigned int)(v9 + *((_DWORD *)this + 29) + 1);
        v9 += 2;
        *(v8 - 1) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 8 * v11) + 24LL);
        --v10;
      }
      while ( v10 );
    }
  }
  return *((_DWORD *)this + 29) == *((_DWORD *)this + 28);
}
