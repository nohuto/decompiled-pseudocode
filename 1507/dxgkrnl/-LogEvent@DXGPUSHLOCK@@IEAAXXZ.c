/*
 * XREFs of ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1C0002E9C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPUSHLOCK::LogEvent(DXGPUSHLOCK *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  if ( bTracingEnabled )
  {
    v3 = *((unsigned int *)this + 4);
    if ( (_DWORD)v3 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q(this, &EventBlockThread, a3, v3);
  }
}
