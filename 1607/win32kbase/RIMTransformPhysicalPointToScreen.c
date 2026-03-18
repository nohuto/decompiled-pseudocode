/*
 * XREFs of RIMTransformPhysicalPointToScreen @ 0x1C00D3F64
 * Callers:
 *     RIMApplyTransforms @ 0x1C00D33A8 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C00D3A3C (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C00D3DD0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C00D3E90 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     UserLogError @ 0x1C0006770 (UserLogError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     RIMConvertPointCoordinates @ 0x1C00D3868 (RIMConvertPointCoordinates.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00D4388 (WPP_RECORDER_SF_qd.c)
 *     ApiSetTransformForInputMagnification @ 0x1C00DE8E0 (ApiSetTransformForInputMagnification.c)
 */

__int64 __fastcall RIMTransformPhysicalPointToScreen(__int64 a1, __int64 *a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d
  int v9; // ecx
  __int128 *v10; // rax
  int v11; // ecx
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 280) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v9 = 0)
        : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
          !v9) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v11 = 0)
          : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v11) )
      {
        v10 = (__int128 *)(*(_QWORD *)(a1 + 280) + 60LL);
      }
      else
      {
        v10 = (__int128 *)(*(_QWORD *)(a1 + 280) + 28LL);
      }
    }
    else
    {
      v10 = (__int128 *)(*(_QWORD *)(a1 + 280) + 44LL);
    }
    v12 = *a2;
    v13 = *(_OWORD *)(a1 + 140);
    v14 = *v10;
    v15 = v13;
    if ( !(unsigned int)RIMConvertPointCoordinates(v12, &v15, &v14, (_QWORD *)a3) )
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
    }
    ApiSetTransformForInputMagnification(a1, a2);
    return 0LL;
  }
  else
  {
    UserLogError(-2147483385);
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      17,
      (__int64)&WPP_c96a4b6ea92639e1a4a8c71189e6796b_Traceguids,
      *(_QWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 24));
    DbgPrintRIMAlways(
      "rimmon:RIMTransformPhysicalPointToScreen: pMonitor not set for pointer device hRIM:%p HPD_TYPE:%d\n",
      *(const void **)(a1 + 16),
      *(_DWORD *)(a1 + 24));
    return 3221225628LL;
  }
}
