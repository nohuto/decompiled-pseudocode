/*
 * XREFs of ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022C34
 * Callers:
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0014730 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z @ 0x1C0022778 (-Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z.c)
 *     ?Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z @ 0x1C00238C4 (-Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z.c)
 *     ?ReleaseAllReferences@CDuplicatedVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00239D0 (-ReleaseAllReferences@CDuplicatedVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0023C08 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0023EB0 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0024A10 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00235CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C0030914 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::ReleaseSystemResource(
        DirectComposition::CConnection *this,
        unsigned int a2)
{
  DirectComposition::CApplicationChannel *v4; // rsi
  unsigned int v5; // edi
  struct DirectComposition::CResourceMarshaler *v6; // rax

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  v4 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 19);
  v5 = 0;
  v6 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v4, a2);
  if ( v6 )
  {
    if ( !DirectComposition::CApplicationChannel::ReleaseResource(v4, v6) )
      v5 = DirectComposition::CApplicationChannel::Commit(v4, 0LL, 0);
  }
  else
  {
    v5 = -1073741790;
  }
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return v5;
}
