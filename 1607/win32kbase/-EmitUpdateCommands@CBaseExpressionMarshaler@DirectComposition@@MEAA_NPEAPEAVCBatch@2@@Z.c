/*
 * XREFs of ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003CCA0
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003BB00 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003D310 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00EC6A0 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003C824 (-EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003C8A4 (-EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003C910 (-EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0078C0C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  unsigned int v5; // ebp
  char *v7; // rcx
  unsigned __int64 v8; // r14
  char *v9; // rcx
  void *v10; // [rsp+50h] [rbp+8h] BYREF
  void *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
  {
    v5 = *((_DWORD *)this + 24);
    if ( v5 )
    {
      if ( (v5 & 3) != 0 )
        v5 = 4 - (*((_DWORD *)this + 24) & 3) + *((_DWORD *)this + 24);
      v8 = v5 + 16;
      v10 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 12) + 40LL));
      if ( (unsigned __int64)v10 < v8
        && (!DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v10) || (unsigned __int64)v10 < v8) )
      {
        return v2;
      }
      DirectComposition::CBatch::EnsureBatchBuffer(a2, v5 + 16, &v11);
      v9 = (char *)v11;
      *(_DWORD *)v11 = v5 + 16;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_DWORD *)v9 + 1) = 207;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 24) >> 1;
      memmove(v9 + 16, *((const void **)this + 11), v5);
      *((_DWORD *)this + 4) |= 0x200u;
    }
  }
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
      return v2;
    v7 = (char *)v10;
    *(_DWORD *)v10 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 220;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(this, a2)
    && DirectComposition::CBaseExpressionMarshaler::EmitSetTracingCookie(this, a2)
    && DirectComposition::CBaseExpressionMarshaler::EmitSetBindingBroken(this, a2) )
  {
    return 1;
  }
  return v2;
}
