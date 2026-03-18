/*
 * XREFs of ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_K@Z @ 0x1C00428E0
 * Callers:
 *     NtDCompositionSubmitDWMBatch @ 0x1C0042890 (NtDCompositionSubmitDWMBatch.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0041844 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 */

void __fastcall DirectComposition::CDwmChannel::SubmitDwmBatch(DirectComposition::CDwmChannel *this, __int64 a2)
{
  struct DirectComposition::CBatch *BatchFragment; // rdx
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rcx
  _QWORD *v9; // rcx

  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
  v5 = 0LL;
  *((_BYTE *)BatchFragment + 32) ^= (((*((_BYTE *)this + 48) & 2) == 0) ^ *((_BYTE *)BatchFragment + 32)) & 1;
  *((_BYTE *)this + 48) |= 2u;
  v6 = *((_QWORD *)BatchFragment + 12);
  *((_DWORD *)BatchFragment + 5) = 8;
  v7 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int64)(4096 - v7) >= 8 )
  {
    v8 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 40) = v7 + 8;
    v9 = (_QWORD *)(v7 + v8);
    if ( v9 )
    {
      *((_QWORD *)BatchFragment + 14) += 8LL;
      v5 = v9;
    }
  }
  *v5 = a2;
  *(_BYTE *)(*((_QWORD *)BatchFragment + 12) + 64LL) = 0;
  DirectComposition::CApplicationChannel::SubmitBatch(this, (LARGE_INTEGER *)BatchFragment, BatchFragment, 0);
}
