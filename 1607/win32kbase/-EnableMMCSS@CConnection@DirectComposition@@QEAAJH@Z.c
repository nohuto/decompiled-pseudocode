/*
 * XREFs of ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00E3FA0
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C000DC00 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00E37B0 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1C0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0018F60 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00425CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00E4E6C (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::EnableMMCSS(DirectComposition::CConnection *this, int a2)
{
  unsigned int v4; // edi
  bool v5; // cl
  int v6; // r8d

  v4 = 0;
  DirectComposition::CCriticalSection::AcquireShared(*((struct _ERESOURCE **)this + 1));
  v5 = 0;
  if ( a2 )
  {
    v6 = *((_DWORD *)this + 62);
    if ( v6 == -1 )
    {
      v4 = -1073741823;
    }
    else
    {
      v5 = v6 == 0;
      *((_DWORD *)this + 62) = v6 + 1;
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 62))-- != 1 )
      goto LABEL_10;
    v5 = 1;
  }
  if ( v5 && DirectComposition::CConnection::IsConnected((struct _ERESOURCE **)this) )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
    v4 = DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), a2);
    DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  }
LABEL_10:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return v4;
}
