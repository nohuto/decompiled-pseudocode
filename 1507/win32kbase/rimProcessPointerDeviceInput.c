/*
 * XREFs of rimProcessPointerDeviceInput @ 0x1C00CCB80
 * Callers:
 *     rimProcessFrameBasedHidInput @ 0x1C00C7F10 (rimProcessFrameBasedHidInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     rimHidP_GetUsageValue @ 0x1C007308C (rimHidP_GetUsageValue.c)
 *     RIMResetPointerDeviceFrameContactIdMgr @ 0x1C0081498 (RIMResetPointerDeviceFrameContactIdMgr.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00C2B98 (WPP_RECORDER_SF_Dd.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C451C (RIMUpdateDeviceFrameState.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C6E5C (WPP_RECORDER_SF_dd.c)
 *     RIMFindAndAbandonHoldingFrame @ 0x1C00C856C (RIMFindAndAbandonHoldingFrame.c)
 *     RIMProcessPointerEvent @ 0x1C00C8774 (RIMProcessPointerEvent.c)
 *     LINPSourceFromPointerType @ 0x1C00C9E8C (LINPSourceFromPointerType.c)
 *     RIMAssessPointerContactState @ 0x1C00C9EAC (RIMAssessPointerContactState.c)
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceFrameScanTime @ 0x1C00CBC4C (RIMGetPointerDeviceFrameScanTime.c)
 *     RIMSimulatedPointerDeviceScanTime @ 0x1C00CC0F4 (RIMSimulatedPointerDeviceScanTime.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1C00CD4C8 (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     ApiSetUpdateInputGlobalsEx @ 0x1C00CD618 (ApiSetUpdateInputGlobalsEx.c)
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D272C (RIMABSeekAndAbortLowerRankedActivity.c)
 */

__int64 __fastcall rimProcessPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  struct _HIDP_PREPARSED_DATA *v5; // rcx
  LARGE_INTEGER *v6; // rdi
  unsigned int v7; // ebx
  char *v8; // r14
  unsigned int v9; // esi
  int v10; // r12d
  unsigned __int16 v11; // r9
  unsigned __int64 v12; // r12
  LARGE_INTEGER v13; // rbx
  bool v14; // zf
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // esi
  LARGE_INTEGER v19; // r14
  __int64 v20; // rdx
  unsigned int v21; // ecx
  int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned __int16 v26; // r9
  __int64 v27; // rcx
  LARGE_INTEGER v28; // rsi
  unsigned __int16 v29; // di
  __int64 v30; // rax
  int v31; // eax
  __int128 v32; // xmm1
  char *v33; // rdx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v43; // [rsp+28h] [rbp-D8h]
  __int64 v44; // [rsp+28h] [rbp-D8h]
  __int64 v45; // [rsp+30h] [rbp-D0h]
  __int64 v46; // [rsp+30h] [rbp-D0h]
  __int64 v47; // [rsp+38h] [rbp-C8h]
  __int64 v48; // [rsp+38h] [rbp-C8h]
  __int64 v49; // [rsp+40h] [rbp-C0h]
  __int64 v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+64h] [rbp-9Ch]
  DWORD v53; // [rsp+68h] [rbp-98h] BYREF
  char *v54; // [rsp+70h] [rbp-90h]
  char *v55; // [rsp+78h] [rbp-88h]
  unsigned int v56; // [rsp+80h] [rbp-80h]
  unsigned int v57; // [rsp+84h] [rbp-7Ch]
  int v58; // [rsp+88h] [rbp-78h]
  unsigned int v59; // [rsp+8Ch] [rbp-74h]
  LARGE_INTEGER v60; // [rsp+90h] [rbp-70h] BYREF
  int v61; // [rsp+98h] [rbp-68h]
  int v62; // [rsp+9Ch] [rbp-64h] BYREF
  struct _HIDP_PREPARSED_DATA *v63; // [rsp+A0h] [rbp-60h]
  LARGE_INTEGER PerformanceCounter; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER *v65; // [rsp+B0h] [rbp-50h]
  _QWORD v66[20]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v67[10]; // [rsp+160h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 400);
  v5 = *(struct _HIDP_PREPARSED_DATA **)(v2 + 16);
  v6 = *(LARGE_INTEGER **)(a2 + 416);
  v7 = *(_DWORD *)(a2 + 264);
  v53 = 1;
  v8 = *(char **)(v2 + 24);
  v9 = *(unsigned __int16 *)(v2 + 44);
  LODWORD(v2) = *(_DWORD *)(a2 + 184);
  v63 = v5;
  v10 = 0;
  v55 = v8;
  v59 = ((unsigned int)v2 >> 11) & 1;
  v52 = v9;
  v57 = 0;
  v65 = v6;
  LODWORD(v54) = 0;
  v58 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xAu,
    (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( *(_BYTE *)(a1 + 649) )
    RIMAssessPointerContactState(a1);
  if ( RawInputManagerObject::bTouchInputAllowed || v6[3].LowPart - 1 > 4 )
  {
    if ( v7 % v9 )
    {
      if ( v7 <= v9 )
      {
        v10 = 1;
        v57 = 1;
      }
    }
    else
    {
      v10 = v7 / v9;
      v57 = v7 / v9;
    }
    v61 = 0;
    if ( !v10 )
    {
LABEL_73:
      v11 = 19;
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               4u,
               v11,
               (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
    }
    while ( 1 )
    {
      if ( !(unsigned int)ApiSetEnsurePointerDeviceHasMonitor(v6) )
      {
        v11 = 12;
        return WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 3u,
                 4u,
                 v11,
                 (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
      }
      if ( !gFastSwitchingEnabled )
        RIMABSeekAndAbortLowerRankedActivity(a1, v6, 0LL);
      v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v51 = v12;
      v13 = KeQueryPerformanceCounter(0LL);
      v60 = v13;
      if ( (v6[29].HighPart & 2) == 0 )
      {
        memset(v66, 0, sizeof(v66));
        RIMSimulatedPointerDeviceScanTime(a1, (__int64)v6, v13.QuadPart, &v51);
        LODWORD(v66[1]) = (0x300000001LL - (unsigned __int64)(v6[3].LowPart - 6)) >> 32;
        if ( (int)RIMExtractDeviceUsages(a1, a2, v8, v9, 0, v63, (__int64)v66, 0, 0, 0LL, 0) >= 0 )
        {
          if ( *(_BYTE *)(a1 + 649) )
            RIMAssessPointerContactState(a1);
          v14 = (*(_DWORD *)(a2 + 184) & 0x800) == 0;
          LODWORD(v66[9]) = v51;
          v66[11] = v13.QuadPart;
          if ( v14 )
            v15 = *(_QWORD *)(a2 + 16);
          else
            v15 = *(_QWORD *)(a2 + 24);
          v66[3] = v15;
          RIMUpdateDeviceFrameState(a1, (__int64)v6);
          v16 = LINPSourceFromPointerType(v66[1]);
          ApiSetUpdateInputGlobalsEx(v17, v59, v16);
          RIMProcessPointerEvent(a1, a2, 1, 0, (__int64)v66, v9, (__int64)v8, v47, v49, 0, PerformanceCounter.LowPart);
        }
LABEL_71:
        v8 += v9;
        v55 = v8;
        goto LABEL_72;
      }
      v18 = 0;
      v56 = 0;
      v19 = v6[87];
      if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, &v53, v63, v55, v52) < 0 )
        break;
      v21 = v53;
      if ( v53 > v6[88].LowPart )
      {
        if ( *(_DWORD *)v19.QuadPart )
        {
          *(_DWORD *)(v6[87].QuadPart + 4) |= 2u;
          v21 = v53;
        }
        v26 = 14;
        LODWORD(v45) = v6[88].LowPart;
        LODWORD(v43) = v21;
        goto LABEL_35;
      }
      if ( v53 )
      {
        if ( !*(_DWORD *)v19.QuadPart )
        {
          v22 = (int)v54;
          v18 = v53;
          v6[181] = v13;
          v23 = *(_DWORD *)(v19.QuadPart + 40);
          if ( v53 <= v23 )
            goto LABEL_41;
          v18 = *(_DWORD *)(v19.QuadPart + 40);
          v24 = v53 - v23;
          goto LABEL_28;
        }
LABEL_34:
        *(_DWORD *)(v6[87].QuadPart + 4) |= 2u;
        v26 = 13;
        LODWORD(v45) = *(_DWORD *)v19.QuadPart;
        LODWORD(v43) = v53;
LABEL_35:
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v20,
          4u,
          v26,
          (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids,
          v43,
          v45);
LABEL_40:
        v22 = (int)v54;
        goto LABEL_41;
      }
      v25 = *(_DWORD *)v19.QuadPart;
      if ( !*(_DWORD *)v19.QuadPart )
        goto LABEL_34;
      v13 = v6[181];
      v18 = *(_DWORD *)(v19.QuadPart + 40);
      v22 = 1;
      LODWORD(v12) = v6[177].HighPart;
      v58 = 1;
      v60 = v13;
      v51 = v12;
      if ( v25 > v18 )
      {
        v24 = v25 - v18;
LABEL_28:
        *(_DWORD *)v19.QuadPart = v24;
        goto LABEL_41;
      }
      v18 = v25;
      *(_DWORD *)v19.QuadPart = 0;
LABEL_41:
      if ( (*(_DWORD *)(v6[87].QuadPart + 4) & 2) == 0 )
      {
        if ( !v18 )
          goto LABEL_70;
        v62 = 0;
        if ( !v22 )
        {
          if ( (v6[29].HighPart & 0x80u) == 0 )
          {
            RIMSimulatedPointerDeviceScanTime(a1, (__int64)v6, v13.QuadPart, &v51);
          }
          else
          {
            RIMGetPointerDeviceFrameScanTime(a1, (__int64)v6, v63, v55, v52, &v51, &v62, &v60);
            v13 = v60;
          }
          LODWORD(v12) = v51;
        }
        v60.QuadPart = v18;
        v54 = (char *)Win32AllocPoolZInit(160LL * v18);
        if ( v54 )
        {
          v28 = v60;
          v29 = *(_WORD *)(v19.QuadPart + 16);
          do
          {
            memset(v67, 0, sizeof(v67));
            if ( (*(_DWORD *)(a2 + 184) & 0x800) != 0 )
              v30 = *(_QWORD *)(a2 + 24);
            else
              v30 = *(_QWORD *)(a2 + 16);
            *((_QWORD *)&v67[1] + 1) = v30;
            DWORD2(v67[0]) = 2;
            v31 = RIMExtractDeviceUsages(a1, a2, v55, v52, v29, v63, (__int64)v67, v62, v12, v13.QuadPart, v53);
            if ( v31 >= 0 || v58 )
            {
              if ( DWORD1(v67[1]) || v58 )
              {
                DWORD2(v67[4]) = v12;
                *((LARGE_INTEGER *)&v67[5] + 1) = v13;
                v32 = v67[1];
                v33 = &v54[160 * v56++];
                *(_OWORD *)v33 = v67[0];
                v34 = v67[2];
                *((_OWORD *)v33 + 1) = v32;
                v35 = v67[3];
                *((_OWORD *)v33 + 2) = v34;
                v36 = v67[4];
                *((_OWORD *)v33 + 3) = v35;
                v37 = v67[5];
                *((_OWORD *)v33 + 4) = v36;
                v38 = v67[6];
                *((_OWORD *)v33 + 5) = v37;
                v39 = v67[7];
                *((_OWORD *)v33 + 6) = v38;
                v40 = v67[8];
                *((_OWORD *)v33 + 7) = v39;
                v41 = v67[9];
                *((_OWORD *)v33 + 8) = v40;
                *((_OWORD *)v33 + 9) = v41;
              }
              else
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  4u,
                  0x10u,
                  (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
              }
            }
            else
            {
              LODWORD(v46) = 0;
              LODWORD(v44) = v31;
              WPP_RECORDER_SF_Dd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                4u,
                0x11u,
                (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids,
                v44,
                v46);
            }
            v29 = *(_WORD *)(*(_QWORD *)(v19.QuadPart + 24) + 8LL * v29 + 4);
            --v28.QuadPart;
          }
          while ( v28.QuadPart );
          v6 = v65;
          ApiSetUpdateInputGlobalsEx(
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            v59,
            9LL);
          if ( !*(_DWORD *)v19.QuadPart )
          {
            if ( *(_BYTE *)(a1 + 649) )
              RIMAssessPointerContactState(a1);
            RIMUpdateDeviceFrameState(a1, (__int64)v6);
          }
          if ( v56 )
          {
            v9 = v52;
            RIMProcessPointerEvent(
              a1,
              a2,
              v56,
              *(_DWORD *)v19.QuadPart,
              (__int64)v54,
              v52,
              (__int64)v55,
              v48,
              v50,
              0,
              PerformanceCounter.LowPart);
          }
          else
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              4u,
              0x12u,
              (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
            v9 = v52;
          }
          Win32FreePool();
          v8 = v55;
        }
        else
        {
LABEL_70:
          v8 = v55;
          v9 = v52;
        }
        goto LABEL_71;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0xFu,
        (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
      RIMFindAndAbandonHoldingFrame(a1, v6[2].QuadPart);
      *(_DWORD *)v6[87].QuadPart = 0;
      *(_DWORD *)(v6[87].QuadPart + 4) &= ~2u;
      RIMResetPointerDeviceFrameContactIdMgr(v27, (__int64)v6);
      v9 = v52;
      v8 = v55;
LABEL_72:
      LODWORD(v54) = 0;
      if ( ++v61 >= v57 )
        goto LABEL_73;
    }
    v18 = *(_DWORD *)(v19.QuadPart + 40);
    goto LABEL_40;
  }
  v11 = 11;
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           v11,
           (__int64)&WPP_2c7f50c433cd1680a9916eb2ae7b3359_Traceguids);
}
