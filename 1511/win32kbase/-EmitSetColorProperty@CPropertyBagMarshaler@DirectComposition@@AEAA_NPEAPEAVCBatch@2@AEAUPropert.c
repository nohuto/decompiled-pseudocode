/*
 * XREFs of ?EmitSetColorProperty@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C00D93A8
 * Callers:
 *     ?EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D95EC (-EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

char __fastcall DirectComposition::CPropertyBagMarshaler::EmitSetColorProperty(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CBatch **a2,
        struct PropertyUpdate *a3)
{
  char v5; // di
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v11; // [rsp+48h] [rbp+20h] BYREF

  v5 = 1;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, (void **)&v11) )
    return 0;
  v6 = v11;
  *v11 = 36;
  v7 = v6 + 1;
  memset(v6 + 1, 0, 0x20uLL);
  v8 = *((unsigned int *)a3 + 2);
  *v7 = 201;
  v7[1] = *((_DWORD *)this + 6);
  v9 = (_DWORD *)(*((_QWORD *)this + 6) + v8);
  v7[2] = v9[2];
  v7[3] = *((_DWORD *)a3 + 1);
  v7[4] = v9[3];
  v7[5] = v9[4];
  v7[6] = v9[5];
  v7[7] = v9[6];
  return v5;
}
