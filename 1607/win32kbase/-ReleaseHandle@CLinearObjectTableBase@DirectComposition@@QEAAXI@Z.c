/*
 * XREFs of ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C003BF50
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C003EC6C (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C003FC3C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 * Callees:
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

void __fastcall DirectComposition::CLinearObjectTableBase::ReleaseHandle(
        DirectComposition::CLinearObjectTableBase *this,
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
