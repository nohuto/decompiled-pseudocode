/*
 * XREFs of rimInvalidateHidKeyboardDeviceKeys @ 0x1C00D0A70
 * Callers:
 *     RIMOnPowerNotification @ 0x1C0085F40 (RIMOnPowerNotification.c)
 *     rimProcessHidKeyboardInput @ 0x1C00D0BB0 (rimProcessHidKeyboardInput.c)
 * Callees:
 *     rimDispatchHidKeyboardInputData @ 0x1C00D052C (rimDispatchHidKeyboardInputData.c)
 *     rimFillKeyboardInputData @ 0x1C00D07D8 (rimFillKeyboardInputData.c)
 *     rimIsHidUsageAllowedInLowPowerMode @ 0x1C00D0B50 (rimIsHidUsageAllowedInLowPowerMode.c)
 */

void __fastcall rimInvalidateHidKeyboardDeviceKeys(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rbp
  unsigned int i; // edi
  __int16 v9; // dx
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v7 = a1;
  *(_DWORD *)(a3 + 164) = 0;
  for ( i = 0; i < *(_DWORD *)(a3 + 292); ++i )
  {
    v9 = *(_WORD *)(a3 + 252);
    if ( v9 && (a4 || !(unsigned int)rimIsHidUsageAllowedInLowPowerMode(a3)) )
    {
      if ( (int)rimFillKeyboardInputData(
                  a1,
                  (__int64)&v10,
                  v9,
                  (_WORD *)(a3 + 2 * (*(unsigned int *)(a3 + 164) + 62LL))) < 0 )
        return;
      a1 = *(unsigned int *)(a3 + 336);
      *(_WORD *)(a3 + 2 * a1 + 296) = *(_WORD *)(a3 + 2LL * *(unsigned int *)(a3 + 164) + 124);
      ++*(_DWORD *)(a3 + 336);
      ++*(_DWORD *)(a3 + 164);
      *(_WORD *)(a3 + 252) = 0;
    }
  }
  rimDispatchHidKeyboardInputData(v7, a2, a3);
  *(_DWORD *)(a3 + 356) = 1;
}
