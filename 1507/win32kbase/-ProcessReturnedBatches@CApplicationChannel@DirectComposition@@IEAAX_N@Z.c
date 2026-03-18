/*
 * XREFs of ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z @ 0x1C002DCE4
 * Callers:
 *     NtDCompositionWaitForChannel @ 0x1C0016660 (NtDCompositionWaitForChannel.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C002DAE0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C002E1C8 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C002F340 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C002F754 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C002FC9C (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C002FE20 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C00205D4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ProcessReturnedBatches(union _SLIST_HEADER *this, char a2)
{
  void *Alignment; // rcx
  union _LARGE_INTEGER *Timeout; // rax
  PSLIST_ENTRY v5; // rax
  struct DirectComposition::CApplicationChannel **v6; // rdi
  ULONGLONG v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    Alignment = (void *)this[10].Alignment;
    Timeout = (union _LARGE_INTEGER *)&v8;
    v8 = 0LL;
    if ( a2 )
      Timeout = 0LL;
    if ( KeWaitForSingleObject(Alignment, UserRequest, 0, 0, Timeout) )
      break;
    v5 = ExpInterlockedPopEntrySList(this + 9);
    --*((_DWORD *)&this[10].HeaderX64 + 3);
    v6 = (struct DirectComposition::CApplicationChannel **)v5;
    v7 = *((_QWORD *)&v5[4].Next + 1);
    if ( v7 > this[11].Alignment )
    {
      *((_BYTE *)&this[11].HeaderX64 + 8) |= 2u;
      this[11].Alignment = v7;
    }
    DirectComposition::CBatch::Clear(v6);
    a2 = 0;
    *v6 = (struct DirectComposition::CApplicationChannel *)this[8].Region;
    this[8].Region = (ULONGLONG)v6;
  }
}
