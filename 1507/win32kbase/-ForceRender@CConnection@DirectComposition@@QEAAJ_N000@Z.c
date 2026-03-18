/*
 * XREFs of ?ForceRender@CConnection@DirectComposition@@QEAAJ_N000@Z @ 0x1C00D4C50
 * Callers:
 *     DCompositionForceRender @ 0x1C00D3C30 (DCompositionForceRender.c)
 *     NtDCompositionEnableDDASupport @ 0x1C00D3F30 (NtDCompositionEnableDDASupport.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00235CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N000@Z @ 0x1C00D5748 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N000@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::ForceRender(
        DirectComposition::CConnection *this,
        bool a2,
        bool a3,
        bool a4,
        bool a5)
{
  unsigned int v9; // ebx

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  v9 = DirectComposition::CSystemChannel::ForceRender(
         *((DirectComposition::CSystemChannel **)this + 19),
         a2,
         a3,
         a4,
         a5);
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return v9;
}
