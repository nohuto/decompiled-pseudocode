/*
 * XREFs of ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C00A8D3C
 * Callers:
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C00A8DDC (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@@Z @ 0x1C00A8784 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@@Z.c)
 */

void __fastcall DirectComposition::CConnection::KeepOrDeferBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        struct DirectComposition::CBatch **a3)
{
  struct DirectComposition::CBatch *v3; // rbx
  _QWORD *v4; // r14
  struct DirectComposition::CBatch **v5; // rdi
  struct DirectComposition::CBatch *v8; // rax

  v3 = *a3;
  v4 = (_QWORD *)((char *)this + 136);
  v5 = a3;
  while ( v3 )
  {
    if ( DirectComposition::CBatch::ShouldDefer(v3, *((_QWORD *)this + 20), *((PRKEVENT **)this + 11)) )
    {
      *(_BYTE *)(*((_QWORD *)v3 + 1) + 49LL) = 1;
      v8 = *(struct DirectComposition::CBatch **)v3;
      *((_QWORD *)v3 + 7) = 0LL;
      *v5 = v8;
      *v4 = v3;
      v4 = v3;
      *(_QWORD *)v3 = 0LL;
    }
    else
    {
      if ( (*((_BYTE *)v3 + 32) & 8) != 0 )
        *(_BYTE *)(*((_QWORD *)v3 + 1) + 185LL) = 1;
      *((_QWORD *)v3 + 7) = a2;
      v5 = (struct DirectComposition::CBatch **)v3;
    }
    v3 = *v5;
  }
}
