/*
 * XREFs of RIMTransformPhysicalPointToScreen @ 0x1C00CFA04
 * Callers:
 *     RIMApplyTransforms @ 0x1C00CEB84 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C00CF618 (RIMSetContactBoundary.c)
 * Callees:
 *     UserLogError @ 0x1C0009DD0 (UserLogError.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     DbgPrintRIMAlways @ 0x1C00B62F0 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00CA994 (WPP_RECORDER_SF_qd.c)
 *     ApiSetTransformForInputMagnification @ 0x1C00CE910 (ApiSetTransformForInputMagnification.c)
 *     RIMConvertPointCoordinates @ 0x1C00CF504 (RIMConvertPointCoordinates.c)
 */

__int64 __fastcall RIMTransformPhysicalPointToScreen(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int128 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rcx
  __int128 v21; // xmm1
  int v22; // [rsp+30h] [rbp-38h]
  __int128 v23; // [rsp+40h] [rbp-28h] BYREF
  __int128 v24; // [rsp+50h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 280) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11) + 408)
        ? (v9 = 0LL)
        : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
          !(_DWORD)v9) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16) + 408)
          ? (v19 = 0)
          : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v19) )
      {
        v14 = (__int128 *)(*(_QWORD *)(a1 + 280) + 60LL);
      }
      else
      {
        v14 = (__int128 *)(*(_QWORD *)(a1 + 280) + 28LL);
      }
    }
    else
    {
      v14 = (__int128 *)(*(_QWORD *)(a1 + 280) + 44LL);
    }
    v20 = *a2;
    v21 = *(_OWORD *)(a1 + 140);
    v23 = *v14;
    v24 = v21;
    if ( !(unsigned int)RIMConvertPointCoordinates(v20, &v24, &v23, (_QWORD *)a3) )
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
      v6,
      v7,
      0x11u,
      (__int64)&WPP_50b46ce6803749bc9aaa05a2c0feb581_Traceguids,
      *(_QWORD *)(a1 + 16),
      v22);
    DbgPrintRIMAlways(
      "rimmon:RIMTransformPhysicalPointToScreen: pMonitor not set for pointer device hRIM:%p HPD_TYPE:%d\n",
      *(const void **)(a1 + 16),
      *(_DWORD *)(a1 + 24));
    return 3221225628LL;
  }
}
