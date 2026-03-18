/*
 * XREFs of ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z @ 0x1C00D6980
 * Callers:
 *     DCompositionForceRender @ 0x1C00D5AF0 (DCompositionForceRender.c)
 *     NtDCompositionEnableDDASupport @ 0x1C00D5F40 (NtDCompositionEnableDDASupport.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z @ 0x1C00D77E8 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::ForceRender(__int64 a1, char a2, char a3, unsigned int a4)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // ebx

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL));
  LOBYTE(v8) = a3;
  LOBYTE(v9) = a2;
  v10 = DirectComposition::CSystemChannel::ForceRender(*(_QWORD *)(a1 + 152), v9, v8, a4);
  DirectComposition::CChannel::Unlock(*(DirectComposition::CChannel **)(a1 + 152));
  return v10;
}
