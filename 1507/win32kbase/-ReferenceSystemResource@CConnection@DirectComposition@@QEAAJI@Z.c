/*
 * XREFs of ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022CC0
 * Callers:
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0014730 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z @ 0x1C00206E0 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z.c)
 *     ?Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z @ 0x1C00238C4 (-Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z.c)
 *     ?SeverCrossChannelLink@CDuplicatedVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0023BA8 (-SeverCrossChannelLink@CDuplicatedVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChanne.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0023C08 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00235CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::ReferenceSystemResource(
        DirectComposition::CConnection *this,
        unsigned int a2)
{
  unsigned int v4; // edi
  DirectComposition::CResourceMarshaler *v5; // rax

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  v4 = 0;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
         *((DirectComposition::CApplicationChannel **)this + 19),
         a2);
  if ( v5 )
    DirectComposition::CResourceMarshaler::AddRef(v5);
  else
    v4 = -1073741790;
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return v4;
}
