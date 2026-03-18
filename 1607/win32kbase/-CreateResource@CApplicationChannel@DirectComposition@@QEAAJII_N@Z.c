/*
 * XREFs of ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C004121C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C003BE64 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0040750 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00408B8 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  int InternalSharedResource; // eax
  int inserted; // ebx
  struct DirectComposition::CResourceMarshaler *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a4 )
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalSharedResource(this, a3, (PVOID *)v9);
  else
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalResource(this, a3, v9);
  inserted = InternalSharedResource;
  if ( InternalSharedResource >= 0 )
  {
    inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
                 (DirectComposition::CApplicationChannel *)((char *)this + 56),
                 v9[0],
                 a2);
    if ( inserted < 0 )
      DirectComposition::CApplicationChannel::ReleaseResource(this, v9[0]);
  }
  return (unsigned int)inserted;
}
