/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C00731A0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     rimFreeQDCActivePathsData @ 0x1C0019054 (rimFreeQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0019D50 (rimFindMonitorForDigitizerWithQDCData.c)
 *     rimGetQDCActivePathsData @ 0x1C001ACEC (rimGetQDCActivePathsData.c)
 */

__int64 __fastcall RIMFindMonitorForDigitizer(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v7; // rbx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v7 = v9;
  if ( (int)rimGetQDCActivePathsData(v9) < 0 )
    v7 = 0LL;
  rimFindMonitorForDigitizerWithQDCData(a1, a2, 0LL, (__int64)v7, a4);
  return rimFreeQDCActivePathsData(v7);
}
