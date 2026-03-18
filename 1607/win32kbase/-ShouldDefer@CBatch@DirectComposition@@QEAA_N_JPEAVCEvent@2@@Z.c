/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@@Z @ 0x1C001AE9C
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00181B0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C00B14F0 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     Template_qpqxxq @ 0x1C00B7AA4 (Template_qpqxxq.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDefer(DirectComposition::CBatch *this, __int64 a2, PRKEVENT *a3)
{
  char v4; // si
  __int64 v5; // rax
  char v7; // di

  v4 = a2;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
  {
    v7 = 1;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 249LL) )
  {
    v7 = 4;
    goto LABEL_9;
  }
  v5 = *((_QWORD *)this + 8);
  if ( v5 && a2 && v5 - a2 > 0 )
  {
    v7 = 2;
LABEL_9:
    KeSetEvent(*a3, 1, 0);
    goto LABEL_13;
  }
  if ( !*((_QWORD *)this + 5) || *((int *)this + 12) <= 0 )
    return 0;
  v7 = 3;
LABEL_13:
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    Template_qpqxxq(
      *((_DWORD *)this + 4),
      *((_QWORD *)this + 1),
      (_DWORD)a3,
      *(_DWORD *)(*((_QWORD *)this + 1) + 28LL),
      (char)this,
      *((_DWORD *)this + 4),
      *((_QWORD *)this + 8),
      v4,
      v7);
  return 1;
}
