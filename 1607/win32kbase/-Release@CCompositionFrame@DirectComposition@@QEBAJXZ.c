/*
 * XREFs of ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00196F8
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C0017390 (NtDCompositionRetireFrame.c)
 *     ?DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z @ 0x1C00186D8 (-DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00192AC (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 * Callees:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CCompositionFrame::Release(DirectComposition::CCompositionFrame *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      DirectComposition::CCompositionFrame::Discard(this);
    Win32FreePool(this);
  }
  return v2;
}
