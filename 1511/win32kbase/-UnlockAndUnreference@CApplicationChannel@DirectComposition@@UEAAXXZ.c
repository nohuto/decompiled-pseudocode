/*
 * XREFs of ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C001D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0012004 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C00137D0 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F18 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::UnlockAndUnreference(
        DirectComposition::CApplicationChannel *this)
{
  struct DirectComposition::CrossChannelVisualData *v1; // rdi
  char v3; // al

  v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 49);
  if ( v1 )
  {
    v3 = *((_BYTE *)this + 184);
    if ( (v3 & 4) == 0 )
    {
      *((_BYTE *)this + 184) = v3 | 4;
      do
      {
        *((_QWORD *)this + 49) = 0LL;
        DirectComposition::CChannel::Unlock(this);
        DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
          *((struct DirectComposition::CConnection **)this + 5),
          v1);
        DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)this + 4));
        v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 49);
      }
      while ( v1 );
      *((_BYTE *)this + 184) &= ~4u;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)this + 4));
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
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
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
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
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 24LL))(this);
}
