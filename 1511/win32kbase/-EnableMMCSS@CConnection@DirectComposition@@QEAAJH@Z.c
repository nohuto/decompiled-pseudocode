/*
 * XREFs of ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00D68C0
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00125CC (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00D5F90 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C00137D0 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F18 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00D7698 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
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
  if ( v5 && DirectComposition::CConnection::IsConnected((DirectComposition::CCriticalSection **)this) )
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
