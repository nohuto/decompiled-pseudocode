/*
 * XREFs of ?EmitUpdatePropertyBagCommand@CCompiledEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D88C0
 * Callers:
 *     ?EmitUpdateCommands@CCompiledEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D8820 (-EmitUpdateCommands@CCompiledEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCompiledEffectMarshaler::EmitUpdatePropertyBagCommand(
        DirectComposition::CCompiledEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // al
  char v4; // dl
  char *v5; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
    return 1;
  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7);
  v4 = 0;
  if ( v3 )
  {
    v5 = (char *)v7;
    *(_DWORD *)v7 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 183;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 3) = *(_DWORD *)(*((_QWORD *)this + 6) + 24LL);
    *((_DWORD *)this + 4) |= 0x80u;
    return 1;
  }
  return v4;
}
