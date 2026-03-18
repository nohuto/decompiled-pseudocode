/*
 * XREFs of ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00189C0
 * Callers:
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C003F160 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0048798 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C003DB48 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00408B8 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00425CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0079FE8 (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::CreateSystemResource(
        DirectComposition::CConnection *this,
        unsigned int a2,
        struct ResourceHandle *a3)
{
  int v6; // edi
  unsigned int v7; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  v6 = DirectComposition::CApplicationChannel::CreateInternalResource(
         *((DirectComposition::CApplicationChannel **)this + 19),
         a2,
         &v9);
  if ( v6 >= 0 )
  {
    v7 = *((_DWORD *)v9 + 6);
    v6 = DirectComposition::CApplicationChannel::Commit(*((DirectComposition::CApplicationChannel **)this + 19), 0LL, 0);
    if ( v6 < 0 )
      DirectComposition::CSystemChannel::ReleaseSystemResource(*((_QWORD *)this + 19), v7);
    else
      *(_DWORD *)a3 = v7;
  }
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return (unsigned int)v6;
}
