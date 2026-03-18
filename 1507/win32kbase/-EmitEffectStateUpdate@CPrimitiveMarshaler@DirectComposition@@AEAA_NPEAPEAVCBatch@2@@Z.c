/*
 * XREFs of ?EmitEffectStateUpdate@CPrimitiveMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6124
 * Callers:
 *     ?EmitUpdateCommands@CPrimitiveMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6280 (-EmitUpdateCommands@CPrimitiveMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPrimitiveMarshaler::EmitEffectStateUpdate(
        DirectComposition::CPrimitiveMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // al
  int v4; // edx
  char *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
    return 1;
  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8);
  v4 = 0;
  if ( v3 )
  {
    v5 = (char *)v8;
    *(_DWORD *)v8 = 16;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 1) = 198;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    v6 = *((_QWORD *)this + 15);
    if ( v6 )
      v4 = *(_DWORD *)(v6 + 24);
    *((_DWORD *)v5 + 3) = v4;
    *((_DWORD *)this + 4) |= 0x100u;
    return 1;
  }
  return 0;
}
