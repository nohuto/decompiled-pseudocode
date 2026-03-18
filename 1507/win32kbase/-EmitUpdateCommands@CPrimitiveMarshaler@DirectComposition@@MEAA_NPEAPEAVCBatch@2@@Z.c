/*
 * XREFs of ?EmitUpdateCommands@CPrimitiveMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6280
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitEffectStateUpdate@CPrimitiveMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6124 (-EmitEffectStateUpdate@CPrimitiveMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSurfaceStateUpdate@CPrimitiveMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6194 (-EmitSurfaceStateUpdate@CPrimitiveMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CPrimitiveMarshaler::EmitUpdateCommands(
        DirectComposition::CPrimitiveMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
      return v2;
    v5 = (char *)v7;
    *(_DWORD *)v7 = 28;
    *(_QWORD *)(v5 + 4) = 0LL;
    *(_QWORD *)(v5 + 12) = 0LL;
    *(_QWORD *)(v5 + 20) = 0LL;
    *((_DWORD *)v5 + 1) = 197;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
    *(_OWORD *)(v5 + 12) = *((_OWORD *)this + 5);
    *((_DWORD *)this + 4) |= 0x40u;
  }
  if ( DirectComposition::CPrimitiveMarshaler::EmitSurfaceStateUpdate(this, a2)
    && DirectComposition::CPrimitiveMarshaler::EmitEffectStateUpdate(this, a2) )
  {
    return 1;
  }
  return v2;
}
