/*
 * XREFs of rimReportHidKeyboardInputData @ 0x1C00D0D98
 * Callers:
 *     rimProcessHidKeyboardInput @ 0x1C00D0BB0 (rimProcessHidKeyboardInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CE82C (ApiSetGetPowerTransitionsState.c)
 *     rimDispatchHidKeyboardInputData @ 0x1C00D052C (rimDispatchHidKeyboardInputData.c)
 *     rimFillKeyboardInputData @ 0x1C00D07D8 (rimFillKeyboardInputData.c)
 *     rimIsHidUsageAllowedInLowPowerMode @ 0x1C00D0B50 (rimIsHidUsageAllowedInLowPowerMode.c)
 */

void *__fastcall rimReportHidKeyboardInputData(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int16 *v4; // rsi
  __int64 v7; // r14
  __int64 v8; // rdi
  int v9; // eax
  __int16 *v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int16 v14; // r9
  _BYTE v15[8]; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v16[14]; // [rsp+38h] [rbp-80h] BYREF

  v3 = 1;
  v4 = (__int16 *)(a3 + 84);
  v7 = a1;
  v8 = 20LL;
  if ( *(_DWORD *)(a3 + 164) < 0x14u )
  {
    while ( *v4 )
    {
      v9 = rimFillKeyboardInputData(a1, (__int64)v15, *v4, (_WORD *)(a3 + 2 * (*(unsigned int *)(a3 + 164) + 62LL)));
      if ( v9 < 0 )
      {
        v14 = 12;
        return (void *)WPP_RECORDER_SF_D(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         3u,
                         3u,
                         v14,
                         (__int64)&WPP_2bd8efd1c66f7dab78a0b28985ecab13_Traceguids,
                         v9);
      }
      ++v4;
      a1 = *(unsigned int *)(a3 + 336);
      *(_WORD *)(a3 + 2 * a1 + 296) = *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 164))++ + 124);
      ++*(_DWORD *)(a3 + 336);
      if ( *(_DWORD *)(a3 + 164) >= 0x14u )
        break;
    }
  }
  v10 = (__int16 *)(a3 + 44);
  if ( *(_DWORD *)(a3 + 164) < 0x14u )
  {
    do
    {
      if ( !*v10 )
        break;
      ApiSetGetPowerTransitionsState(v16);
      if ( v16[0] || (unsigned int)rimIsHidUsageAllowedInLowPowerMode(a3, *v10) )
      {
        v9 = rimFillKeyboardInputData(v11, (__int64)v15, *v10, (_WORD *)(a3 + 2 * (*(unsigned int *)(a3 + 164) + 62LL)));
        if ( v9 < 0 )
        {
          v14 = 13;
          return (void *)WPP_RECORDER_SF_D(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           3u,
                           3u,
                           v14,
                           (__int64)&WPP_2bd8efd1c66f7dab78a0b28985ecab13_Traceguids,
                           v9);
        }
        v3 = 0;
        *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 248))++ + 208) = *(_WORD *)(a3
                                                                                        + 2LL
                                                                                        * (unsigned int)(*(_DWORD *)(a3 + 164))++
                                                                                        + 124);
      }
      ++v10;
    }
    while ( *(_DWORD *)(a3 + 164) < 0x14u );
    if ( !v3 )
      goto LABEL_14;
  }
  *(_DWORD *)(a3 + 356) = 1;
LABEL_14:
  rimDispatchHidKeyboardInputData(v7, a2, a3);
  v12 = *(_DWORD *)(a3 + 352);
  if ( v12 < 0x14 )
    v8 = v12;
  return memmove(*(void **)(a3 + 344), (const void *)a3, 2 * v8);
}
