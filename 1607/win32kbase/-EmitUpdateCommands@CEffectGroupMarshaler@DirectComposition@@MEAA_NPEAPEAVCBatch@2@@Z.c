/*
 * XREFs of ?EmitUpdateCommands@CEffectGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007AF20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CEffectGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CEffectGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // al
  int v4; // r8d
  char *v5; // rdx
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v8);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 28;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 182;
  *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
  *(double *)(v5 + 12) = *((float *)this + 10);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
    v4 = *(_DWORD *)(v6 + 24);
  *((_DWORD *)v5 + 6) = v4;
  return 1;
}
