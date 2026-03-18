/*
 * XREFs of ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C00130CC
 * Callers:
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00116B0 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0012928 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z @ 0x1C0013CD0 (-Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z.c)
 *     ?SeverCrossChannelLink@CDuplicatedVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0013F98 (-SeverCrossChannelLink@CDuplicatedVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChanne.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z @ 0x1C001A450 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::ReferenceSystemResource(
        DirectComposition::CConnection *this,
        unsigned int a2)
{
  unsigned int v4; // edi
  struct DirectComposition::CResourceMarshaler *v5; // rax

  DirectComposition::CCriticalSection::AcquireExclusive(*(DirectComposition::CCriticalSection **)(*((_QWORD *)this + 19)
                                                                                                + 32LL));
  v4 = 0;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
         *((DirectComposition::CApplicationChannel **)this + 19),
         a2);
  if ( v5 )
    ++*((_DWORD *)v5 + 5);
  else
    v4 = -1073741790;
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return v4;
}
