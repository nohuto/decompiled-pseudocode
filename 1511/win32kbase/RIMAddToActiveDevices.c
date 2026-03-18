/*
 * XREFs of RIMAddToActiveDevices @ 0x1C00C49C4
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 *     RIMGetPTPClickButtonState @ 0x1C00D1D6C (RIMGetPTPClickButtonState.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     RIMInsertInListByRank @ 0x1C00C4DE4 (RIMInsertInListByRank.c)
 */

__int64 __fastcall RIMAddToActiveDevices(LARGE_INTEGER *a1, __int64 a2)
{
  LARGE_INTEGER *v2; // rsi
  LARGE_INTEGER *QuadPart; // rax
  unsigned int v6; // ebx
  LARGE_INTEGER *v7; // rcx
  _QWORD *v8; // r14
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  int LowPart; // edx
  DWORD v14; // eax
  union _LARGE_INTEGER DueTime; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1 + 71;
  QuadPart = (LARGE_INTEGER *)a1[71].QuadPart;
  v6 = 0;
  do
  {
    if ( QuadPart == v2 )
    {
      v8 = Win32AllocPoolZInit(0x20uLL);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(v9 + 176) |= 0x4000000u;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          5u,
          0x28u,
          (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
          v9);
        *v8 = a2;
        RIMInsertInListByRank(v2, v8 + 1);
        v6 = 1;
        if ( ++a1[73].LowPart == 1 )
        {
          v10 = (void *)a1[59].QuadPart;
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v10, &DueTime, 0LL, 0LL, 0, 0, 0LL);
          v11 = (void *)a1[60].QuadPart;
          if ( v11 != (void *)-1LL )
          {
            LowPart = 10;
            if ( a1[61].LowPart )
              LowPart = a1[61].LowPart;
            DueTime.QuadPart = -10000LL * LowPart;
            ZwSetTimer(v11, &DueTime, 0LL, 0LL, 0, 0, 0LL);
            a1[63] = KeQueryPerformanceCounter(0LL);
          }
        }
      }
      return v6;
    }
    v7 = QuadPart - 1;
    QuadPart = (LARGE_INTEGER *)QuadPart->QuadPart;
  }
  while ( v7->QuadPart != a2 );
  v14 = v7[3].LowPart;
  v6 = 1;
  if ( (v14 & 1) != 0 )
    v7[3].LowPart = v14 & 0xFFFFFFFE;
  return v6;
}
