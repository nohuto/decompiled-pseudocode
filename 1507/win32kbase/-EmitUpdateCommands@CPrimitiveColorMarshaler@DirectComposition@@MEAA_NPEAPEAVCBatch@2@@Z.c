/*
 * XREFs of ?EmitUpdateCommands@CPrimitiveColorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DD830
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CPrimitiveColorMarshaler::EmitUpdateCommands(
        DirectComposition::CPrimitiveColorMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  bool result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 28;
  *(_QWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 133;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
  result = 1;
  *(_OWORD *)(v3 + 12) = *(_OWORD *)((char *)this + 40);
  return result;
}
