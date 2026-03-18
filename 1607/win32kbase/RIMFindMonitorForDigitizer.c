/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C00066B4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     rimGetQDCActivePathsData @ 0x1C00065F8 (rimGetQDCActivePathsData.c)
 *     rimFreeQDCActivePathsData @ 0x1C0006728 (rimFreeQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0007F84 (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall RIMFindMonitorForDigitizer(int a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rbx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v7 = v9;
  if ( (int)rimGetQDCActivePathsData(v9) < 0 )
    v7 = 0LL;
  rimFindMonitorForDigitizerWithQDCData(a1, a2, 0, (_DWORD)v7, a4);
  return rimFreeQDCActivePathsData(v7);
}
