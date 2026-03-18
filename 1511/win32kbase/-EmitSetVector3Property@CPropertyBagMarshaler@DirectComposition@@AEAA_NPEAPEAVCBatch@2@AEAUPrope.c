/*
 * XREFs of ?EmitSetVector3Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D9910
 * Callers:
 *     ?EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D95EC (-EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPropertyBagMarshaler::EmitSetVector3Property(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CBatch **a2,
        struct PropertyUpdate *a3)
{
  char v5; // bl
  char *v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = 1;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v10) )
    return 0;
  v6 = (char *)v10;
  v7 = *((unsigned int *)a3 + 2);
  *(_DWORD *)v10 = 32;
  *(_QWORD *)(v6 + 4) = 0LL;
  *(_QWORD *)(v6 + 12) = 0LL;
  *(_QWORD *)(v6 + 20) = 0LL;
  *((_DWORD *)v6 + 7) = 0;
  *((_DWORD *)v6 + 1) = 199;
  *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
  v8 = (_DWORD *)(*((_QWORD *)this + 6) + v7);
  *((_DWORD *)v6 + 3) = v8[2];
  *((_DWORD *)v6 + 4) = *((_DWORD *)a3 + 1);
  *((_DWORD *)v6 + 5) = v8[3];
  *((_DWORD *)v6 + 6) = v8[4];
  *((_DWORD *)v6 + 7) = v8[5];
  return v5;
}
