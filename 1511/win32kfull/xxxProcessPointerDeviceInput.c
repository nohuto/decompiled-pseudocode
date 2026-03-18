/*
 * XREFs of xxxProcessPointerDeviceInput @ 0x1C01CF3C8
 * Callers:
 *     xxxProcessHidInput @ 0x1C01D6080 (xxxProcessHidInput.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     UpdateInputGlobalsEx @ 0x1C0084630 (UpdateInputGlobalsEx.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C0117D60 (EnsurePointerDeviceHasMonitor.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?xxxSeekAndAbortLowerRankedActivity@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C8CE8 (-xxxSeekAndAbortLowerRankedActivity@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ExtractDeviceUsages @ 0x1C01CB53C (ExtractDeviceUsages.c)
 *     GetPointerDeviceFrameScanTime @ 0x1C01CD51C (GetPointerDeviceFrameScanTime.c)
 *     LINPSourceFromPointerType @ 0x1C01CDE3C (LINPSourceFromPointerType.c)
 *     SimulatedPointerDeviceScanTime @ 0x1C01CE51C (SimulatedPointerDeviceScanTime.c)
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CFA74 (xxxUpdateDeviceFrameState.c)
 *     xxxProcessPointerEvent @ 0x1C01E192C (xxxProcessPointerEvent.c)
 */

__int64 __fastcall xxxProcessPointerDeviceInput(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r15d
  __int64 v3; // rdi
  unsigned int v4; // r14d
  ULONG v5; // ebx
  CHAR *v6; // rsi
  ULONG ReportLength; // r12d
  int v8; // r14d
  int v9; // r13d
  LARGE_INTEGER v10; // rdx
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // r9
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  LARGE_INTEGER PerformanceCounter; // rbx
  _QWORD *v19; // r15
  unsigned int v20; // eax
  __int64 v21; // rdx
  ULONG v22; // esi
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG v27; // eax
  unsigned int v28; // ecx
  ULONG v29; // eax
  ULONG v30; // eax
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rsi
  ULONG v34; // edi
  __int128 v35; // xmm1
  _OWORD *v36; // rdx
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  int v45; // ebx
  unsigned int v46; // [rsp+58h] [rbp-B0h] BYREF
  ULONG v47; // [rsp+5Ch] [rbp-ACh]
  ULONG UsageValue[2]; // [rsp+60h] [rbp-A8h] BYREF
  PCHAR Report; // [rsp+68h] [rbp-A0h]
  unsigned int v50; // [rsp+70h] [rbp-98h]
  unsigned int v51; // [rsp+74h] [rbp-94h]
  int v52; // [rsp+78h] [rbp-90h]
  int v53; // [rsp+7Ch] [rbp-8Ch]
  int v54; // [rsp+80h] [rbp-88h]
  int v55; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v56; // [rsp+88h] [rbp-80h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+90h] [rbp-78h]
  LARGE_INTEGER v58; // [rsp+98h] [rbp-70h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-68h]
  void *QuadPart; // [rsp+A8h] [rbp-60h]
  __int64 v61; // [rsp+B0h] [rbp-58h]
  _QWORD v62[4]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v63[40]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v64[10]; // [rsp+178h] [rbp+70h] BYREF

  v1 = *(_QWORD *)(a1 + 400);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 416);
  v4 = *(unsigned __int8 *)(a1 + 64);
  v5 = *(_DWORD *)(a1 + 256);
  PreparsedData = *(PHIDP_PREPARSED_DATA *)(v1 + 16);
  UsageValue[0] = 1;
  v6 = *(CHAR **)(v1 + 24);
  ReportLength = *(unsigned __int16 *)(v1 + 44);
  LODWORD(v1) = *(_DWORD *)(v3 + 252);
  v8 = (v4 >> 6) & 1;
  v59 = a1;
  Report = v6;
  v47 = ReportLength;
  v9 = 0;
  v51 = 0;
  v53 = 0;
  v61 = v3;
  v52 = v8;
  v54 = -__CFSHR__(v1, 7);
  QuadPart = (void *)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( gbPointerSendLastPending
    && (gptiCurrent == gptiRit
     || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))IsDwmInputThread)(
                        gptiRit,
                        (LARGE_INTEGER)v10.QuadPart,
                        (LARGE_INTEGER)v11.QuadPart,
                        (LARGE_INTEGER)v12.QuadPart)) )
  {
    xxxAssessPointerContactState();
  }
  if ( gbTouchInputAllowed || (result = (unsigned int)(*(_DWORD *)(v3 + 24) - 1), (unsigned int)result > 4) )
  {
    result = v5 / ReportLength;
    if ( v5 % ReportLength )
    {
      if ( v5 <= ReportLength )
      {
        v2 = 1;
        v51 = 1;
      }
    }
    else
    {
      v2 = v5 / ReportLength;
      v51 = v5 / ReportLength;
    }
    v56 = 0;
    if ( v2 )
    {
      do
      {
        result = EnsurePointerDeviceHasMonitor(v3);
        if ( !(_DWORD)result )
          return result;
        xxxSeekAndAbortLowerRankedActivity((struct tagHID_POINTER_DEVICE_INFO *)v3, v14, v15, v16);
        v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v46 = v17;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v58 = PerformanceCounter;
        if ( (*(_DWORD *)(v3 + 252) & 8) == 0 )
        {
          memset(v63, 0, sizeof(v63));
          SimulatedPointerDeviceScanTime(v3, PerformanceCounter.QuadPart, (int *)&v46);
          v19 = (_QWORD *)v59;
          v63[2] = (0x300000001LL - (unsigned __int64)(unsigned int)(*(_DWORD *)(v3 + 24) - 6)) >> 32;
          if ( (int)ExtractDeviceUsages(
                      v6,
                      ReportLength,
                      0,
                      PreparsedData,
                      (struct tagPOINTEREVENTINT *)v63,
                      v59,
                      0,
                      0,
                      0LL,
                      0) >= 0 )
          {
            v63[18] = v46;
            *(_QWORD *)&v63[6] = *v19;
            *(LARGE_INTEGER *)&v63[22] = PerformanceCounter;
            xxxUpdateDeviceFrameState((struct tagHID_POINTER_DEVICE_INFO *)v3);
            v20 = LINPSourceFromPointerType(v63[2]);
            UpdateInputGlobalsEx((v21 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, v8, v20, 1);
            xxxProcessPointerEvent(
              1uLL,
              0,
              (unsigned int)v63,
              (struct tagPOINTEREVENTINT *)ReportLength,
              (unsigned int)v6,
              v8,
              v54,
              0,
              QuadPart);
          }
          goto LABEL_58;
        }
        v22 = 0;
        v50 = 0;
        v23 = *(_QWORD *)(v3 + 712);
        if ( HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, UsageValue, PreparsedData, Report, ReportLength) < 0 )
        {
          v22 = *(_DWORD *)(v23 + 40);
          goto LABEL_31;
        }
        v27 = UsageValue[0];
        if ( UsageValue[0] > *(_DWORD *)(v3 + 720) )
        {
          if ( *(_DWORD *)v23 )
LABEL_29:
            *(_DWORD *)(*(_QWORD *)(v3 + 712) + 4LL) |= 2u;
        }
        else
        {
          if ( !UsageValue[0] )
          {
            v30 = *(_DWORD *)v23;
            if ( !*(_DWORD *)v23 )
              goto LABEL_29;
            PerformanceCounter = *(LARGE_INTEGER *)(v3 + 1464);
            v22 = *(_DWORD *)(v23 + 40);
            v9 = 1;
            LODWORD(v17) = *(_DWORD *)(v3 + 1436);
            v53 = 1;
            v58 = PerformanceCounter;
            v46 = v17;
            if ( v30 <= v22 )
            {
              *(_DWORD *)v23 = 0;
              v22 = v30;
              goto LABEL_31;
            }
            v29 = v30 - v22;
            goto LABEL_22;
          }
          if ( *(_DWORD *)v23 )
            goto LABEL_29;
          *(LARGE_INTEGER *)(v3 + 1464) = PerformanceCounter;
          v22 = v27;
          v28 = *(_DWORD *)(v23 + 40);
          if ( UsageValue[0] > v28 )
          {
            v22 = *(_DWORD *)(v23 + 40);
            v29 = UsageValue[0] - v28;
LABEL_22:
            *(_DWORD *)v23 = v29;
          }
        }
LABEL_31:
        if ( (*(_DWORD *)(*(_QWORD *)(v3 + 712) + 4LL) & 2) == 0
          || gptiCurrent != gptiRit && !(unsigned int)IsDwmInputThread(gptiRit, v24, v25, v26) )
        {
          if ( v22 )
          {
            v55 = 0;
            if ( !v9 )
            {
              if ( (*(_DWORD *)(v3 + 252) & 0x200) != 0 )
              {
                GetPointerDeviceFrameScanTime(v3, PreparsedData, Report, ReportLength, &v46, (ULONG *)&v55, &v58);
                PerformanceCounter = v58;
              }
              else
              {
                SimulatedPointerDeviceScanTime(v3, PerformanceCounter.QuadPart, (int *)&v46);
              }
              LODWORD(v17) = v46;
            }
            v31 = v22;
            v32 = Win32AllocPoolZInit(160LL * v22, 2020635477LL);
            if ( v32 )
            {
              LOWORD(v46) = *(_WORD *)(v23 + 16);
              PushW32ThreadLock(v32, v62, (__int64)Win32FreePool);
              v33 = v53;
              v34 = v47;
              do
              {
                memset(v64, 0, sizeof(v64));
                DWORD2(v64[0]) = 2;
                *((_QWORD *)&v64[1] + 1) = *(_QWORD *)v59;
                if ( ((int)ExtractDeviceUsages(
                             Report,
                             v34,
                             v46,
                             PreparsedData,
                             (struct tagPOINTEREVENTINT *)v64,
                             v59,
                             v55,
                             v17,
                             PerformanceCounter.QuadPart,
                             UsageValue[0]) >= 0
                   || v33)
                  && (DWORD1(v64[1]) || v33) )
                {
                  DWORD2(v64[4]) = v17;
                  *((LARGE_INTEGER *)&v64[5] + 1) = PerformanceCounter;
                  v35 = v64[1];
                  v36 = (_OWORD *)(v32 + 160LL * v50++);
                  *v36 = v64[0];
                  v37 = v64[2];
                  v36[1] = v35;
                  v38 = v64[3];
                  v36[2] = v37;
                  v39 = v64[4];
                  v36[3] = v38;
                  v40 = v64[5];
                  v36[4] = v39;
                  v41 = v64[6];
                  v36[5] = v40;
                  v42 = v64[7];
                  v36[6] = v41;
                  v43 = v64[8];
                  v36[7] = v42;
                  v44 = v64[9];
                  v36[8] = v43;
                  v36[9] = v44;
                }
                LOWORD(v46) = *(_WORD *)(*(_QWORD *)(v23 + 24) + 8LL * (unsigned __int16)v46 + 4);
                --v31;
              }
              while ( v31 );
              v3 = v61;
              v45 = v52;
              UpdateInputGlobalsEx(
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                v52,
                9u,
                1);
              if ( !*(_DWORD *)v23 )
                xxxUpdateDeviceFrameState((struct tagHID_POINTER_DEVICE_INFO *)v3);
              v6 = Report;
              if ( v50 )
                xxxProcessPointerEvent(
                  v50,
                  *(_DWORD *)v23,
                  v32,
                  (struct tagPOINTEREVENTINT *)v47,
                  (unsigned int)Report,
                  v45,
                  v54,
                  0,
                  QuadPart);
              PopW32ThreadLock(v62);
              Win32FreePool(v32);
              ReportLength = v47;
              goto LABEL_58;
            }
            ReportLength = v47;
          }
          v6 = Report;
LABEL_58:
          result = ReportLength;
          v6 += ReportLength;
          Report = v6;
          goto LABEL_59;
        }
        xxxAssessPointerContactState();
        result = *(_QWORD *)(v3 + 712);
        v6 = Report;
        *(_DWORD *)(result + 4) &= ~2u;
LABEL_59:
        v9 = 0;
        v8 = v52;
        ++v56;
      }
      while ( v56 < v51 );
    }
  }
  return result;
}
