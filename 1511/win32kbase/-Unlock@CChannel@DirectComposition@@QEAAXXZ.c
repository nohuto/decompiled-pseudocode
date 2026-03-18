/*
 * XREFs of ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C
 * Callers:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C00130CC (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0013130 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0013638 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0013810 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C001D1C0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C00D6780 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00D68C0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z @ 0x1C00D6980 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z.c)
 *     ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C00D6B10 (-RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00D6BA8 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x1C00D74B0 (-UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C00137D0 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F18 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CChannel::Unlock(DirectComposition::CChannel *this)
{
  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)this + 4));
      (*(void (__fastcall **)(DirectComposition::CChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
      DirectComposition::CCriticalSection::AcquireShared(*(DirectComposition::CCriticalSection **)(*((_QWORD *)this + 5)
                                                                                                 + 8LL));
      if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CCriticalSection ***)this + 5)) )
        *((_DWORD *)this + 6) = 4;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)this + 4));
      (*(void (__fastcall **)(DirectComposition::CChannel *))(*(_QWORD *)this + 56LL))(this);
      DirectComposition::CCriticalSection::AcquireShared(*(DirectComposition::CCriticalSection **)(*((_QWORD *)this + 5)
                                                                                                 + 8LL));
      if ( !DirectComposition::CConnection::IsConnected(*((DirectComposition::CCriticalSection ***)this + 5)) )
        *((_DWORD *)this + 6) = 1;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *((_DWORD *)this + 6) == 1 );
}
