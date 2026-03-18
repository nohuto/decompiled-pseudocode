/*
 * XREFs of ?EmitSurfaceStateUpdate@CPrimitiveMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6194
 * Callers:
 *     ?EmitUpdateCommands@CPrimitiveMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D6280 (-EmitUpdateCommands@CPrimitiveMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

char __fastcall DirectComposition::CPrimitiveMarshaler::EmitSurfaceStateUpdate(
        DirectComposition::CPrimitiveMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v3; // esi
  char *v4; // rax
  char *v5; // rdi
  __int64 v6; // rax
  float *v7; // rax
  __int64 v8; // rcx
  double *v9; // rdi
  float v10; // xmm0_4
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
    return 1;
  v3 = 0;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x6CuLL, &v12) )
  {
    v4 = (char *)v12;
    *(_DWORD *)v12 = 108;
    v5 = v4 + 4;
    memset(v4 + 4, 0, 0x68uLL);
    *(_DWORD *)v5 = 199;
    *((_DWORD *)v5 + 1) = *((_DWORD *)this + 6);
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 32);
    *((_DWORD *)v5 + 25) = *((_DWORD *)this + 33);
    *((_DWORD *)v5 + 3) = *((_DWORD *)this + 34);
    v6 = *((_QWORD *)this + 5);
    if ( v6 )
      v3 = *(_DWORD *)(v6 + 24);
    *((_DWORD *)v5 + 4) = v3;
    v7 = (float *)((char *)this + 96);
    v8 = 6LL;
    *(_OWORD *)(v5 + 20) = *((_OWORD *)this + 3);
    *(_OWORD *)(v5 + 36) = *((_OWORD *)this + 4);
    v9 = (double *)(v5 + 52);
    do
    {
      v10 = *v7++;
      *v9++ = v10;
      --v8;
    }
    while ( v8 );
    *((_DWORD *)this + 4) |= 0x80u;
    return 1;
  }
  return 0;
}
