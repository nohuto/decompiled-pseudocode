/*
 * XREFs of ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0013130
 * Callers:
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0012928 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0012BF0 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z @ 0x1C001D2F4 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C001D330 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C001DADC (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::CreateSystemResource(
        DirectComposition::CConnection *this,
        unsigned int a2,
        unsigned int *a3)
{
  int v6; // ebx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*(DirectComposition::CCriticalSection **)(*((_QWORD *)this + 19)
                                                                                                + 32LL));
  v6 = DirectComposition::CApplicationChannel::CreateResource(
         *((DirectComposition::CApplicationChannel **)this + 19),
         a2,
         0,
         &v8);
  if ( v6 >= 0 )
  {
    v6 = DirectComposition::CApplicationChannel::Commit(*((DirectComposition::CApplicationChannel **)this + 19), 0LL, 0);
    if ( v6 < 0 )
      DirectComposition::CApplicationChannel::ReleaseResource(
        *((DirectComposition::CApplicationChannel **)this + 19),
        v8,
        0LL);
    else
      *a3 = v8;
  }
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return (unsigned int)v6;
}
