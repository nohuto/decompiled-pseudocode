/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00DB5A8 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     IsUpdateInputGlobalsExSupported_0 @ 0x1C0002CC0 (IsUpdateInputGlobalsExSupported_0.c)
 *     UpdateInputGlobalsEx_0 @ 0x1C0002CC8 (UpdateInputGlobalsEx_0.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00D19A8 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00D23C0 (WPP_RECORDER_SF_dd.c)
 *     RIMGetPointerInputType @ 0x1C00D4A84 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00D9D18 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C00D9E08 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     WPP_RECORDER_SF_i @ 0x1C00DBC74 (WPP_RECORDER_SF_i.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C00DC190 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C00DCBB4 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C00DDFEC (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C00DE1A8 (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C00DE658 (rimUpdatePointerDeviceFrameScanTime.c)
 *     RIMCmGetActiveContactsCountNoButton @ 0x1C00E12D0 (RIMCmGetActiveContactsCountNoButton.c)
 */

__int64 __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  unsigned int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rsi
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned int v9; // eax
  __int64 v10; // r12
  int v11; // edx
  int v12; // r9d
  int v13; // edx
  unsigned __int16 v14; // r12
  int v15; // eax
  LARGE_INTEGER v16; // rax
  int v17; // r8d
  int v18; // r9d
  int v20; // [rsp+20h] [rbp-49h]
  __int64 v21; // [rsp+20h] [rbp-49h]
  int v22; // [rsp+50h] [rbp-19h] BYREF
  int v23; // [rsp+54h] [rbp-15h] BYREF
  int v24; // [rsp+58h] [rbp-11h] BYREF
  int v25; // [rsp+5Ch] [rbp-Dh] BYREF
  int v26; // [rsp+60h] [rbp-9h] BYREF
  __int64 v27; // [rsp+68h] [rbp-1h]
  __int64 v28; // [rsp+70h] [rbp+7h]
  unsigned __int16 v29; // [rsp+D0h] [rbp+67h] BYREF
  int v30; // [rsp+D8h] [rbp+6Fh]
  unsigned int v31; // [rsp+E0h] [rbp+77h] BYREF
  int v32; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a2 + 464);
  v3 = a2;
  v5 = *(_DWORD *)(a2 + 264);
  v27 = *(_QWORD *)(a2 + 480);
  v6 = *(_QWORD *)(v2 + 24);
  v7 = *(unsigned __int16 *)(v2 + 44);
  v30 = (*(_DWORD *)(a2 + 184) >> 11) & 1;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    13,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  RIMGetPointerInputType(v27);
  v28 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( (int)IsUpdateInputGlobalsExSupported_0() >= 0 )
    UpdateInputGlobalsEx_0();
  v9 = v5 / (unsigned int)v7;
  if ( v5 % (unsigned int)v7 )
  {
    if ( v5 > (unsigned int)v7 )
    {
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0xEu,
        (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
      goto LABEL_37;
    }
    v9 = 1;
  }
  if ( v9 )
  {
    v10 = v27;
    v28 = v9;
    do
    {
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  v3,
                  v6,
                  v7,
                  (__int64)&v23,
                  (__int64)&v31,
                  (__int64)&v22,
                  (__int64)&v32,
                  (__int64)&v25,
                  (__int64)&v29) >= 0 )
      {
        if ( !v22 )
          goto LABEL_22;
        rimUpdatePointerDeviceFrameScanTime(a1, v3, v6, (unsigned int)v7);
        if ( !v23 )
        {
          if ( *(_DWORD *)(v27 + 24) != 7 || (unsigned int)RIMCmGetActiveContactsCountNoButton(v27) )
          {
            LOBYTE(v13) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v13,
              5,
              16,
              (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
          }
          else
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(a1, v3, v6, v7, PerformanceCounter.QuadPart);
          }
          v10 = v27;
          goto LABEL_33;
        }
        if ( (unsigned int)RIMStartPointerDeviceFrame(a1, v3, PerformanceCounter.QuadPart) )
        {
          if ( *(_DWORD *)(v10 + 24) == 7 )
          {
            LODWORD(v21) = 0;
            rimProcessPointerDeviceButtonContact(a1, v3, v6, v7, v21);
          }
LABEL_22:
          RIMStoreRawDataInPointerDeviceFrame(a1, v3, v6, (unsigned int)v7, &v24);
          v30 = 0;
          if ( v31 )
          {
            v14 = v29;
            while ( 1 )
            {
              rimProcessPointerDeviceContact(a1, v3, v6, v7, v14, v24, (__int64)&v26);
              if ( v25 )
              {
                if ( v26 )
                  break;
              }
              if ( (*(_DWORD *)(v27 + 252) & 8) != 0 )
              {
                v14 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 680) + 24LL) + 8LL * v14 + 4);
                v29 = v14;
              }
              if ( ++v30 >= v31 )
              {
                v10 = v27;
                goto LABEL_30;
              }
            }
            v10 = v27;
            v15 = 1;
            v32 = 1;
          }
          else
          {
LABEL_30:
            v15 = v32;
          }
          if ( v15 )
          {
            RIMAbArbitratePointerDeviceFrame(a1, v3);
            RIMCompletePointerDeviceFrame(a1, v3);
          }
          goto LABEL_33;
        }
        v12 = 17;
      }
      else
      {
        v12 = 15;
      }
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        5,
        v12,
        (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
LABEL_33:
      v6 += v7;
      --v28;
    }
    while ( v28 );
  }
LABEL_37:
  v16 = KeQueryPerformanceCounter(0LL);
  return WPP_RECORDER_SF_i(
           WPP_GLOBAL_Control->DeviceExtension,
           (unsigned __int64)(1000000 * (v16.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 648),
           v17,
           v18,
           v20,
           (unsigned __int64)(1000000 * (v16.QuadPart - PerformanceCounter.QuadPart)) / *(_QWORD *)(a1 + 648));
}
