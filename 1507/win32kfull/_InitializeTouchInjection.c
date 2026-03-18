/*
 * XREFs of _InitializeTouchInjection @ 0x1C01DC964
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C021CD20 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C0100AA0 (FreeQDCActivePathsData.c)
 *     GetQDCActivePathsData @ 0x1C01CBC8C (GetQDCActivePathsData.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHXZ @ 0x1C01DBCC8 (-RealizePendingRecreateTouchInjectionDevices@@YAHXZ.c)
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01DC9E8 (_InitializeTouchInjectionWithQDCData.c)
 */

__int64 __fastcall InitializeTouchInjection(unsigned int a1, unsigned int a2, __int64 a3)
{
  _QWORD *v6; // rdi
  unsigned int v7; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( gbPendRecreateTouchInjectionDevices == 1 )
  {
    gbPendRecreateTouchInjectionDevices = 0;
    RealizePendingRecreateTouchInjectionDevices();
  }
  v6 = v9;
  if ( (int)GetQDCActivePathsData(v9) < 0 )
    v6 = 0LL;
  v7 = InitializeTouchInjectionWithQDCData(a1, a2, a3, v6);
  FreeQDCActivePathsData((__int64)v6);
  return v7;
}
