/*
 * XREFs of ?EmitUpdateCommands@CCompiledEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8820
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdatePropertyBagCommand@CCompiledEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D88C0 (-EmitUpdatePropertyBagCommand@CCompiledEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C00D9258 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCompiledEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CCompiledEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  char *v5; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
      return v2;
    v5 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 182;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 3) = *(_DWORD *)(*((_QWORD *)this + 5) + 24LL);
    *((_DWORD *)this + 4) |= 0x40u;
  }
  if ( DirectComposition::CCompiledEffectMarshaler::EmitUpdatePropertyBagCommand(
         this,
         (struct DirectComposition::CBatch **)a2)
    && (unsigned __int8)DirectComposition::CEffectInputSet::EmitUpdateCommands(
                          (char *)this + 56,
                          181LL,
                          *((unsigned int *)this + 6),
                          a2) )
  {
    return 1;
  }
  return v2;
}
