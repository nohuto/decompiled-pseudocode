/*
 * XREFs of GetCharDimensions @ 0x140124F40
 * Callers:
 *     FinalUserInit @ 0x1400CBC1C (FinalUserInit.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1400CC0D4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     ValidateExternalLogFont @ 0x1401248C4 (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 *     CreateScaledFont @ 0x1401D0CC4 (CreateScaledFont.c)
 * Callees:
 *     GreTextInitialized @ 0x1400CE928 (GreTextInitialized.c)
 *     _GetTextMetricsW @ 0x140122AE8 (_GetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     Feature_FixDPIRecursionDoubleFault__private_IsEnabledDeviceUsageNoInline @ 0x1402A1B30 (Feature_FixDPIRecursionDoubleFault__private_IsEnabledDeviceUsageNoInline.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 */

__int64 __fastcall GetCharDimensions(HDC a1, __int64 a2, _DWORD *a3)
{
  int v6; // r14d
  int v7; // ecx
  __int64 v8; // xmm1_8
  __int128 v9; // xmm3
  unsigned int v10; // ebx
  __int128 v11; // xmm2
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // xmm0_8
  __int64 DpiServerInfoForCurrentThread; // rax
  __int128 v17; // xmm0
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+68h] [rbp-8h]
  struct tagSIZE v24; // [rsp+98h] [rbp+28h] BYREF

  v19 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v23 = 0;
  v21 = 0LL;
  v6 = GreTextInitialized((__int64)a1, a2, (__int64)a3);
  if ( v6 && (unsigned int)GetTextMetricsW(a1, (__int64)&v19) )
  {
    v7 = v23;
    v8 = v22;
    v9 = v21;
    v10 = DWORD1(v20);
    v11 = v19;
  }
  else
  {
    if ( (unsigned int)Feature_FixDPIRecursionDoubleFault__private_IsEnabledDeviceUsageNoInline() )
    {
      v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
      v11 = *(_OWORD *)(v14 + 5240);
      v9 = *(_OWORD *)(v14 + 5272);
      v20 = *(_OWORD *)(v14 + 5256);
      v15 = *(_QWORD *)(v14 + 5288);
      v7 = *(_DWORD *)(v14 + 5296);
    }
    else
    {
      DpiServerInfoForCurrentThread = GetDpiServerInfoForCurrentThread(v13, v12);
      v7 = *(_DWORD *)(DpiServerInfoForCurrentThread + 96);
      v11 = *(_OWORD *)(DpiServerInfoForCurrentThread + 40);
      v9 = *(_OWORD *)(DpiServerInfoForCurrentThread + 72);
      v20 = *(_OWORD *)(DpiServerInfoForCurrentThread + 56);
      v15 = *(_QWORD *)(DpiServerInfoForCurrentThread + 88);
    }
    v10 = DWORD1(v20);
    v8 = v15;
    v22 = v15;
    v19 = v11;
    if ( !DWORD1(v20) )
      v10 = 8;
    DWORD1(v20) = v10;
  }
  if ( a2 )
  {
    v17 = v20;
    *(_OWORD *)a2 = v11;
    *(_OWORD *)(a2 + 16) = v17;
    *(_OWORD *)(a2 + 32) = v9;
    *(_QWORD *)(a2 + 48) = v8;
    *(_DWORD *)(a2 + 56) = v7;
  }
  if ( a3 )
    *a3 = v19;
  if ( v6
    && (v22 & 0x100000000000000LL) != 0
    && (v24 = 0LL, (unsigned int)GreGetTextExtentW(
                                   a1,
                                   L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
                                   52,
                                   &v24)) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v24.cx) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v24.cx) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v10;
  }
}
