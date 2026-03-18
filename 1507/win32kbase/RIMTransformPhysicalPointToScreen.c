/*
 * XREFs of RIMTransformPhysicalPointToScreen @ 0x1C00CE690
 * Callers:
 *     RIMApplyTransforms @ 0x1C00CD848 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C00CE2A4 (RIMSetContactBoundary.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     UserLogError @ 0x1C0083DC0 (UserLogError.c)
 *     DbgPrintRIMAlways @ 0x1C00B3870 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00C9A94 (WPP_RECORDER_SF_qd.c)
 *     ApiSetTransformForInputMagnification @ 0x1C00CD5D4 (ApiSetTransformForInputMagnification.c)
 *     RIMConvertPointCoordinates @ 0x1C00CE190 (RIMConvertPointCoordinates.c)
 */

__int64 __fastcall RIMTransformPhysicalPointToScreen(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 *v14; // rax
  int v15; // ecx
  __int64 v16; // rcx
  __int128 v17; // xmm1
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+30h] [rbp-38h]
  __int128 v23; // [rsp+40h] [rbp-28h] BYREF
  __int128 v24; // [rsp+50h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 264) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3, a4, v18, v20) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v12, v13, v19, v21) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v11 = 0LL)
        : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v11) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v12, v13, v19, v21) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v15 = 0)
          : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v15) )
      {
        v14 = (__int128 *)(*(_QWORD *)(a1 + 264) + 60LL);
      }
      else
      {
        v14 = (__int128 *)(*(_QWORD *)(a1 + 264) + 28LL);
      }
    }
    else
    {
      v14 = (__int128 *)(*(_QWORD *)(a1 + 264) + 44LL);
    }
    v16 = *a2;
    v17 = *(_OWORD *)(a1 + 140);
    v23 = *v14;
    v24 = v17;
    if ( !(unsigned int)RIMConvertPointCoordinates(v16, &v24, &v23, (_QWORD *)a3) )
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
    }
    ApiSetTransformForInputMagnification();
    return 0LL;
  }
  else
  {
    UserLogError(-2147483385);
    v22 = *(_DWORD *)(a1 + 24);
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x11u,
      (__int64)&WPP_c671d3244828ed8229bc566b772a601b_Traceguids,
      *(_QWORD *)(a1 + 16),
      v22);
    DbgPrintRIMAlways(
      "rimmon:RIMTransformPhysicalPointToScreen: pMonitor not set for pointer device hRIM:%p HPD_TYPE:%d\n",
      *(const void **)(a1 + 16),
      *(_DWORD *)(a1 + 24));
    return 3221225628LL;
  }
}
