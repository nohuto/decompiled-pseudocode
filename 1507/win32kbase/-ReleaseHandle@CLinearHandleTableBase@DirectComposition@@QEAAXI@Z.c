/*
 * XREFs of ?ReleaseHandle@CLinearHandleTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0031348
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C001DB90 (NtDCompositionConfirmFrame.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C006B7A8 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 * Callees:
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

void __fastcall DirectComposition::CLinearHandleTableBase::ReleaseHandle(
        DirectComposition::CLinearHandleTableBase *this,
        int a2)
{
  unsigned __int64 v2; // r9
  size_t v4; // r8
  __int64 Src; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    v2 = (unsigned int)(a2 - 1);
    if ( v2 < *((_QWORD *)this + 4) )
    {
      v4 = *((_QWORD *)this + 5);
      Src = 0LL;
      memmove((void *)(*((_QWORD *)this + 1) + v2 * v4), &Src, v4);
      --*((_QWORD *)this + 6);
    }
  }
}
