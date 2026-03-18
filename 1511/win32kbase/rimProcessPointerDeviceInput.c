/*
 * XREFs of rimProcessPointerDeviceInput @ 0x1C00CDE70
 * Callers:
 *     rimProcessFrameBasedHidInput @ 0x1C00C8E14 (rimProcessFrameBasedHidInput.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C000A018 (rimHidP_GetUsageValue.c)
 *     RIMResetPointerDeviceFrameContactIdMgr @ 0x1C000A808 (RIMResetPointerDeviceFrameContactIdMgr.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00C39B8 (WPP_RECORDER_SF_Dd.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C53B4 (RIMUpdateDeviceFrameState.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C7D58 (WPP_RECORDER_SF_dd.c)
 *     RIMFindAndAbandonHoldingFrame @ 0x1C00C946C (RIMFindAndAbandonHoldingFrame.c)
 *     RIMProcessPointerEvent @ 0x1C00C9674 (RIMProcessPointerEvent.c)
 *     LINPSourceFromPointerType @ 0x1C00CAF60 (LINPSourceFromPointerType.c)
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceFrameScanTime @ 0x1C00CCD08 (RIMGetPointerDeviceFrameScanTime.c)
 *     RIMSimulatedPointerDeviceScanTime @ 0x1C00CD218 (RIMSimulatedPointerDeviceScanTime.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1C00CE804 (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     ApiSetUpdateInputGlobalsEx @ 0x1C00CE954 (ApiSetUpdateInputGlobalsEx.c)
 *     RIMABSeekAndAbortLowerRankedActivity @ 0x1C00D4550 (RIMABSeekAndAbortLowerRankedActivity.c)
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
  __int64 v17; // rdx
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
  int v32; // r8d
  unsigned __int16 v33; // r9
  __int128 v34; // xmm1
  char *v35; // rdx
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int64 v45; // [rsp+28h] [rbp-D8h]
  __int64 v46; // [rsp+28h] [rbp-D8h]
  __int64 v47; // [rsp+30h] [rbp-D0h]
  __int64 v48; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+38h] [rbp-C8h]
  __int64 v50; // [rsp+38h] [rbp-C8h]
  __int64 v51; // [rsp+40h] [rbp-C0h]
  __int64 v52; // [rsp+40h] [rbp-C0h]
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+64h] [rbp-9Ch]
  DWORD v55; // [rsp+68h] [rbp-98h] BYREF
  char *v56; // [rsp+70h] [rbp-90h]
  char *v57; // [rsp+78h] [rbp-88h]
  unsigned int v58; // [rsp+80h] [rbp-80h]
  unsigned int v59; // [rsp+84h] [rbp-7Ch]
  int v60; // [rsp+88h] [rbp-78h]
  unsigned int v61; // [rsp+8Ch] [rbp-74h]
  LARGE_INTEGER v62; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+98h] [rbp-68h]
  int v64; // [rsp+9Ch] [rbp-64h] BYREF
  struct _HIDP_PREPARSED_DATA *v65; // [rsp+A0h] [rbp-60h]
  LARGE_INTEGER PerformanceCounter; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER *v67; // [rsp+B0h] [rbp-50h]
  _QWORD v68[20]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v69[10]; // [rsp+160h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 400);
  v5 = *(struct _HIDP_PREPARSED_DATA **)(v2 + 16);
  v6 = *(LARGE_INTEGER **)(a2 + 416);
  v7 = *(_DWORD *)(a2 + 256);
  v55 = 1;
  v8 = *(char **)(v2 + 24);
  v9 = *(unsigned __int16 *)(v2 + 44);
  LODWORD(v2) = *(_DWORD *)(a2 + 176);
  v65 = v5;
  v10 = 0;
  v57 = v8;
  v61 = ((unsigned int)v2 >> 11) & 1;
  v54 = v9;
  v59 = 0;
  v67 = v6;
  LODWORD(v56) = 0;
  v60 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xAu,
    (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( *(_BYTE *)(a1 + 681) )
    RIMAssessPointerContactState(a1);
  if ( RawInputManagerObject::bTouchInputAllowed || v6[3].LowPart - 1 > 4 )
  {
    if ( v7 % v9 )
    {
      if ( v7 <= v9 )
      {
        v10 = 1;
        v59 = 1;
      }
    }
    else
    {
      v10 = v7 / v9;
      v59 = v7 / v9;
    }
    v63 = 0;
    if ( !v10 )
      goto LABEL_75;
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
                 (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
      }
      if ( !gFastSwitchingEnabled )
        RIMABSeekAndAbortLowerRankedActivity(a1, v6, 0LL);
      v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v53 = v12;
      v13 = KeQueryPerformanceCounter(0LL);
      v62 = v13;
      if ( (v6[31].HighPart & 8) == 0 )
      {
        memset(v68, 0, sizeof(v68));
        RIMSimulatedPointerDeviceScanTime(a1, (__int64)v6, v13.QuadPart, &v53);
        LODWORD(v68[1]) = (0x300000001LL - (unsigned __int64)(v6[3].LowPart - 6)) >> 32;
        if ( (int)RIMExtractDeviceUsages(a1, a2, v8, v9, 0, v65, (__int64)v68, 0, 0, 0LL, 0) >= 0 )
        {
          if ( *(_BYTE *)(a1 + 681) )
            RIMAssessPointerContactState(a1);
          v14 = (*(_DWORD *)(a2 + 176) & 0x800) == 0;
          LODWORD(v68[9]) = v53;
          v68[11] = v13.QuadPart;
          if ( v14 )
            v15 = *(_QWORD *)(a2 + 16);
          else
            v15 = *(_QWORD *)(a2 + 24);
          v68[3] = v15;
          RIMUpdateDeviceFrameState(a1, (__int64)v6);
          v16 = LINPSourceFromPointerType(v68[1]);
          ApiSetUpdateInputGlobalsEx((v17 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, v61, v16);
          RIMProcessPointerEvent(a1, a2, 1, 0, (__int64)v68, v9, (__int64)v8, v49, v51, 0, PerformanceCounter.LowPart);
        }
        goto LABEL_73;
      }
      v18 = 0;
      v58 = 0;
      v19 = v6[89];
      if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, &v55, v65, v57, v54) < 0 )
      {
        v18 = *(_DWORD *)(v19.QuadPart + 40);
        goto LABEL_40;
      }
      v21 = v55;
      if ( v55 > v6[90].LowPart )
      {
        if ( *(_DWORD *)v19.QuadPart )
        {
          *(_DWORD *)(v6[89].QuadPart + 4) |= 2u;
          v21 = v55;
        }
        v26 = 14;
        LODWORD(v47) = v6[90].LowPart;
        LODWORD(v45) = v21;
LABEL_35:
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v20,
          4u,
          v26,
          (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
          v45,
          v47);
LABEL_40:
        v22 = (int)v56;
        goto LABEL_41;
      }
      if ( !v55 )
        break;
      if ( *(_DWORD *)v19.QuadPart )
        goto LABEL_34;
      v22 = (int)v56;
      v18 = v55;
      v6[183] = v13;
      v23 = *(_DWORD *)(v19.QuadPart + 40);
      if ( v55 > v23 )
      {
        v18 = *(_DWORD *)(v19.QuadPart + 40);
        v24 = v55 - v23;
LABEL_28:
        *(_DWORD *)v19.QuadPart = v24;
      }
LABEL_41:
      if ( (*(_DWORD *)(v6[89].QuadPart + 4) & 2) != 0 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          0xFu,
          (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
        RIMFindAndAbandonHoldingFrame(a1, v6[2].QuadPart);
        *(_DWORD *)v6[89].QuadPart = 0;
        *(_DWORD *)(v6[89].QuadPart + 4) &= ~2u;
        RIMResetPointerDeviceFrameContactIdMgr(v27, (__int64)v6);
        v9 = v54;
        v8 = v57;
        goto LABEL_74;
      }
      if ( !v18 )
        goto LABEL_72;
      v64 = 0;
      if ( !v22 )
      {
        if ( (v6[31].HighPart & 0x200) != 0 )
        {
          RIMGetPointerDeviceFrameScanTime(a1, (__int64)v6, v65, v57, v54, &v53, &v64, &v62);
          v13 = v62;
        }
        else
        {
          RIMSimulatedPointerDeviceScanTime(a1, (__int64)v6, v13.QuadPart, &v53);
        }
        LODWORD(v12) = v53;
      }
      v62.QuadPart = v18;
      v56 = (char *)Win32AllocPoolZInit(160LL * v18);
      if ( !v56 )
      {
LABEL_72:
        v8 = v57;
        v9 = v54;
        goto LABEL_73;
      }
      v28 = v62;
      v29 = *(_WORD *)(v19.QuadPart + 16);
      do
      {
        memset(v69, 0, sizeof(v69));
        if ( (*(_DWORD *)(a2 + 176) & 0x800) != 0 )
          v30 = *(_QWORD *)(a2 + 24);
        else
          v30 = *(_QWORD *)(a2 + 16);
        *((_QWORD *)&v69[1] + 1) = v30;
        DWORD2(v69[0]) = 2;
        v31 = RIMExtractDeviceUsages(a1, a2, v57, v54, v29, v65, (__int64)v69, v64, v12, v13.QuadPart, v55);
        if ( v31 < 0 && !v60 )
        {
          LODWORD(v48) = 0;
          LODWORD(v46) = v31;
          WPP_RECORDER_SF_Dd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            4u,
            0x12u,
            (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids,
            v46,
            v48);
          goto LABEL_63;
        }
        v32 = DWORD1(v69[1]);
        if ( DWORD1(v69[1]) || v60 )
        {
          DWORD2(v69[4]) = v12;
          *((LARGE_INTEGER *)&v69[5] + 1) = v13;
          v34 = v69[1];
          v35 = &v56[160 * v58++];
          *(_OWORD *)v35 = v69[0];
          v36 = v69[2];
          *((_OWORD *)v35 + 1) = v34;
          v37 = v69[3];
          *((_OWORD *)v35 + 2) = v36;
          v38 = v69[4];
          *((_OWORD *)v35 + 3) = v37;
          v39 = v69[5];
          *((_OWORD *)v35 + 4) = v38;
          v40 = v69[6];
          *((_OWORD *)v35 + 5) = v39;
          v41 = v69[7];
          *((_OWORD *)v35 + 6) = v40;
          v42 = v69[8];
          *((_OWORD *)v35 + 7) = v41;
          v43 = v69[9];
          *((_OWORD *)v35 + 8) = v42;
          *((_OWORD *)v35 + 9) = v43;
          if ( v32 )
            goto LABEL_63;
          v33 = 16;
        }
        else
        {
          v33 = 17;
        }
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          v33,
          (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
LABEL_63:
        v29 = *(_WORD *)(*(_QWORD *)(v19.QuadPart + 24) + 8LL * v29 + 4);
        --v28.QuadPart;
      }
      while ( v28.QuadPart );
      v6 = v67;
      ApiSetUpdateInputGlobalsEx(
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        v61,
        9LL);
      if ( !*(_DWORD *)v19.QuadPart )
      {
        if ( *(_BYTE *)(a1 + 681) )
          RIMAssessPointerContactState(a1);
        RIMUpdateDeviceFrameState(a1, (__int64)v6);
      }
      if ( v58 )
      {
        v9 = v54;
        RIMProcessPointerEvent(
          a1,
          a2,
          v58,
          *(_DWORD *)v19.QuadPart,
          (__int64)v56,
          v54,
          (__int64)v57,
          v50,
          v52,
          0,
          PerformanceCounter.LowPart);
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          0x13u,
          (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
        v9 = v54;
      }
      Win32FreePool();
      v8 = v57;
LABEL_73:
      v8 += v9;
      v57 = v8;
LABEL_74:
      LODWORD(v56) = 0;
      if ( ++v63 >= v59 )
      {
LABEL_75:
        v11 = 20;
        return WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 3u,
                 4u,
                 v11,
                 (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
      }
    }
    v25 = *(_DWORD *)v19.QuadPart;
    if ( !*(_DWORD *)v19.QuadPart )
    {
LABEL_34:
      *(_DWORD *)(v6[89].QuadPart + 4) |= 2u;
      v26 = 13;
      LODWORD(v47) = *(_DWORD *)v19.QuadPart;
      LODWORD(v45) = v55;
      goto LABEL_35;
    }
    v13 = v6[183];
    v18 = *(_DWORD *)(v19.QuadPart + 40);
    v22 = 1;
    LODWORD(v12) = v6[179].HighPart;
    v60 = 1;
    v62 = v13;
    v53 = v12;
    if ( v25 <= v18 )
    {
      v18 = v25;
      *(_DWORD *)v19.QuadPart = 0;
      goto LABEL_41;
    }
    v24 = v25 - v18;
    goto LABEL_28;
  }
  v11 = 11;
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           v11,
           (__int64)&WPP_3334582bf7da96b5bee8cee52e42f685_Traceguids);
}
