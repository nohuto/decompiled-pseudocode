/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@@Z @ 0x1C00A3C88
 * Callers:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C00A4288 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     Template_qpqxxq @ 0x1C00A9E3C (Template_qpqxxq.c)
 */

char __fastcall DirectComposition::CBatch::ShouldDefer(DirectComposition::CBatch *this, __int64 a2, PRKEVENT *a3)
{
  char v4; // si
  char v5; // di
  __int64 v6; // rax

  v4 = a2;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
  {
    v5 = 1;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 185LL) )
  {
    v5 = 4;
LABEL_9:
    KeSetEvent(*a3, 1, 0);
    goto LABEL_13;
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 && a2 && v6 - a2 > 0 )
  {
    v5 = 2;
    goto LABEL_9;
  }
  if ( !*((_QWORD *)this + 5) || *((int *)this + 12) <= 0 )
    return 0;
  v5 = 3;
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
      v5);
  return 1;
}
