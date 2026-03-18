/*
 * XREFs of ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01F0F5C
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 */

void __fastcall CacheInertiaInfo(struct tagPOINT *a1, const struct INERTIA_INFO_INTERNAL *a2, void *a3)
{
  ghdevTouchpad = a3;
  gtmridTouchpadInertiaTimer = SetRITTimer(gtmridTouchpadInertiaTimer, 50, (int)xxxInertiaTimerProc, 1);
  a1[158].x ^= (a1[158].x ^ (*((_DWORD *)a2 + 34) << 23)) & 0x1000000;
  a1[159] = *(struct tagPOINT *)((char *)a2 + 120);
  a1[160] = *(struct tagPOINT *)((char *)a2 + 8);
  a1[161] = gptCursorAsync;
  a1[158].x = a1[158].x & 0xFF3FE7FF | 0xC00000;
  EtwTraceTouchpadInertiaContact();
  InvalidateInertiaInfo(*(_QWORD *)a2, *((_QWORD *)a2 + 1));
}
