/*
 * XREFs of ?EmitSetMatrix4x4Property@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@AEAUPropertyUpdate@@@Z @ 0x1C003C288
 * Callers:
 *     ?EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003C4AC (-EmitSetProperties@CPropertyBagMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

char __fastcall DirectComposition::CPropertyBagMarshaler::EmitSetMatrix4x4Property(
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
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x54uLL, (void **)&v11) )
    return 0;
  v6 = v11;
  *v11 = 84;
  v7 = v6 + 1;
  memset(v6 + 1, 0, 0x50uLL);
  v8 = *((unsigned int *)a3 + 2);
  *v7 = 259;
  v7[1] = *((_DWORD *)this + 6);
  v9 = (_DWORD *)(*((_QWORD *)this + 6) + v8);
  v7[2] = v9[2];
  v7[3] = *((_DWORD *)a3 + 1);
  v7[4] = v9[3];
  v7[5] = v9[4];
  v7[6] = v9[5];
  v7[7] = v9[6];
  v7[8] = v9[7];
  v7[9] = v9[8];
  v7[10] = v9[9];
  v7[11] = v9[10];
  v7[12] = v9[11];
  v7[13] = v9[12];
  v7[14] = v9[13];
  v7[15] = v9[14];
  v7[16] = v9[15];
  v7[17] = v9[16];
  v7[18] = v9[17];
  v7[19] = v9[18];
  return v5;
}
