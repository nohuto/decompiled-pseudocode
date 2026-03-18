/*
 * XREFs of ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01F0EBC
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 */

void __fastcall CacheInertiaInfo(struct tagPOINT *a1, const struct INERTIA_INFO_INTERNAL *a2, void *a3)
{
  ghdevTouchpad = a3;
  gtmridTouchpadInertiaTimer = SetRITTimer(gtmridTouchpadInertiaTimer, 0x32u, (__int64)xxxInertiaTimerProc, 1);
  a1[193].x ^= (a1[193].x ^ (*((_DWORD *)a2 + 34) << 23)) & 0x1000000;
  a1[195] = *(struct tagPOINT *)((char *)a2 + 120);
  a1[196] = *(struct tagPOINT *)((char *)a2 + 8);
  a1[197] = gptCursorAsync;
  a1[193].x = a1[193].x & 0xFF3FE7FF | 0xC00000;
  EtwTraceTouchpadInertiaContact();
  InvalidateInertiaInfo(*(_QWORD *)a2, *((_QWORD *)a2 + 1));
}
