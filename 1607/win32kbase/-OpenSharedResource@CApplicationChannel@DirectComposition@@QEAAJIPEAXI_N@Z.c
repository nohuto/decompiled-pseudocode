/*
 * XREFs of ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C00411B0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C003BE64 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C004066C (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenSharedResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        void *a3,
        __int64 a4,
        bool a5)
{
  unsigned int v6; // eax
  int inserted; // ebx
  struct DirectComposition::CResourceMarshaler *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = a4;
  LOBYTE(a4) = a5;
  inserted = DirectComposition::CApplicationChannel::OpenInternalSharedResource(this, a3, v6, a4, &v10);
  if ( inserted >= 0 )
  {
    inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
                 (DirectComposition::CApplicationChannel *)((char *)this + 56),
                 v10,
                 a2);
    if ( inserted < 0 )
      DirectComposition::CApplicationChannel::ReleaseResource(this, v10);
  }
  return (unsigned int)inserted;
}
