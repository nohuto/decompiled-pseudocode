/*
 * XREFs of ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C001B61C
 * Callers:
 *     ?CreateInternalDuplicatedVisual@CApplicationChannel@DirectComposition@@QEAAJIIPEAPEAVCDuplicatedVisualMarshaler@2@@Z @ 0x1C001B6EC (-CreateInternalDuplicatedVisual@CApplicationChannel@DirectComposition@@QEAAJIIPEAPEAVCDuplicated.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B798 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B87C (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     ?InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C001DF84 (-InsertObject@CLinearHandleTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RegisterResource(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  result = DirectComposition::CLinearHandleTableBase::InsertObject(
             (DirectComposition::CApplicationChannel *)((char *)this + 56),
             a2,
             &v5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a2 + 6) = v5;
    if ( *((int *)this + 6) <= 2 )
    {
      *((_QWORD *)a2 + 1) = *((_QWORD *)this + 50);
      *((_QWORD *)this + 50) = a2;
    }
  }
  return result;
}
