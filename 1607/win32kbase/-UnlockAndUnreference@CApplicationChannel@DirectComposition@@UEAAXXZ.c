/*
 * XREFs of ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C00423C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1C0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0018F60 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00425CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C00813E4 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::UnlockAndUnreference(
        DirectComposition::CApplicationChannel *this)
{
  struct DirectComposition::CrossChannelVisualData *v1; // rdi
  char v3; // al

  v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 50);
  if ( v1 )
  {
    v3 = *((_BYTE *)this + 248);
    if ( (v3 & 4) == 0 )
    {
      *((_BYTE *)this + 248) = v3 | 4;
      do
      {
        *((_QWORD *)this + 50) = 0LL;
        DirectComposition::CChannel::Unlock(this);
        DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
          *((struct DirectComposition::CConnection **)this + 5),
          v1);
        DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 4));
        v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 50);
      }
      while ( v1 );
      *((_BYTE *)this + 248) &= ~4u;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 4));
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
      DirectComposition::CCriticalSection::AcquireShared(*(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL));
      if ( DirectComposition::CConnection::IsConnected(*((struct _ERESOURCE ***)this + 5)) )
        *((_DWORD *)this + 6) = 4;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)this + 4));
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
      DirectComposition::CCriticalSection::AcquireShared(*(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL));
      if ( !DirectComposition::CConnection::IsConnected(*((struct _ERESOURCE ***)this + 5)) )
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
