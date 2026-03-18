/*
 * XREFs of ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C006B374
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C0045A60 (NtDCompositionRetireFrame.c)
 *     NtDCompositionSignalGpuFence @ 0x1C006B170 (NtDCompositionSignalGpuFence.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C006B614 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C00A43C8 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionFrame::Release(
        DirectComposition::CCompositionFrame *this,
        unsigned int a2)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      DirectComposition::CCompositionFrame::Discard(this, a2);
    Win32FreePool();
  }
  return v2;
}
