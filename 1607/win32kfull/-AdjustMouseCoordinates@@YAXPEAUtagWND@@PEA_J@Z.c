/*
 * XREFs of ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0142A34
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PhysicalToLogicalInPlacePoint @ 0x1C01DC23C (PhysicalToLogicalInPlacePoint.c)
 */

void __fastcall AdjustMouseCoordinates(struct tagWND *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  if ( *((_QWORD *)a1 + 34)
    && (*((_DWORD *)a1 + 88) & 0xF) == 1
    && (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, a3, a4) & 0xF) == 2
    && *(_DWORD *)(gptiCurrent + 676LL) == *(_DWORD *)(gptiCurrent + 684LL)
    && *(_DWORD *)(gptiCurrent + 680LL) == *(_DWORD *)(gptiCurrent + 688LL) )
  {
    v6 = *(__int16 *)a2;
    v7 = *((__int16 *)a2 + 1);
    PhysicalToLogicalInPlacePoint(a1, &v6, 0LL);
    *a2 = ((unsigned __int16)v7 << 16) | (unsigned __int16)v6;
  }
}
