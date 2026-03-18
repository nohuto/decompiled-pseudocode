/*
 * XREFs of ?vComputePageXform@DC@@QEAAXXZ @ 0x1C02B3418
 * Callers:
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0005F74 (-iSetMapMode@DC@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vComputePageXform(DC *this)
{
  float v1; // xmm1_4
  __int64 v2; // rdx
  float v3; // xmm1_4

  v1 = (float)(16 * *(_DWORD *)(*((_QWORD *)this + 10) + 344LL)) / (float)*(int *)(*((_QWORD *)this + 10) + 328LL);
  *(float *)(*((_QWORD *)this + 10) + 292LL) = v1;
  v2 = *((_QWORD *)this + 10);
  *((float *)this + 111) = v1;
  v3 = (float)(16 * *(_DWORD *)(v2 + 348)) / (float)*(int *)(v2 + 332);
  *(float *)(v2 + 296) = v3;
  *((float *)this + 112) = v3;
}
