/*
 * XREFs of ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00A89F4
 * Callers:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0013AC4 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     NtDCompositionRetireFrame @ 0x1C003A8A0 (NtDCompositionRetireFrame.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C00A8E7C (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
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
