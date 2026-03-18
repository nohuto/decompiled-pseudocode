/*
 * XREFs of ?AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C00A426C
 * Callers:
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00D4CC4 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::AppendRetrievingBatches(
        DirectComposition::CConnection *this,
        struct DirectComposition::CBatch *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    while ( *v2 )
      v2 = (_QWORD *)*v2;
    *v2 = a2;
  }
  else
  {
    *((_QWORD *)this + 14) = a2;
  }
}
