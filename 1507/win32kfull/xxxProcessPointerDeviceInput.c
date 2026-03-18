/*
 * XREFs of xxxProcessPointerDeviceInput @ 0x1C01CD7D8
 * Callers:
 *     xxxProcessHidInput @ 0x1C01D44F0 (xxxProcessHidInput.c)
 * Callees:
 *     UpdateInputGlobalsEx @ 0x1C004A4E0 (UpdateInputGlobalsEx.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C00EF440 (EnsurePointerDeviceHasMonitor.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxSeekAndAbortLowerRankedActivity@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C7128 (-xxxSeekAndAbortLowerRankedActivity@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ExtractDeviceUsages @ 0x1C01C995C (ExtractDeviceUsages.c)
 *     GetPointerDeviceFrameScanTime @ 0x1C01CB93C (GetPointerDeviceFrameScanTime.c)
 *     LINPSourceFromPointerType @ 0x1C01CC25C (LINPSourceFromPointerType.c)
 *     SimulatedPointerDeviceScanTime @ 0x1C01CC93C (SimulatedPointerDeviceScanTime.c)
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CDE84 (xxxUpdateDeviceFrameState.c)
 *     xxxProcessPointerEvent @ 0x1C01E131C (xxxProcessPointerEvent.c)
 */

__int64 __fastcall xxxProcessPointerDeviceInput(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // r14
  int v3; // r15d
  __int64 v4; // rdi
  unsigned int v5; // esi
  ULONG v6; // ebx
  char *Report; // r13
  ULONG ReportLength; // r12d
  int v9; // esi
  LARGE_INTEGER v10; // rdx
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // r9
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r15
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned int v20; // eax
  __int64 v21; // r10
  ULONG v22; // esi
  __int64 v23; // r14
  NTSTATUS v24; // eax
  __int64 v25; // r9
  ULONG v26; // eax
  unsigned int v27; // ecx
  ULONG v28; // eax
  ULONG v29; // eax
  int v30; // eax
  __int64 v31; // r13
  __int64 v32; // r12
  bool v33; // zf
  ULONG v34; // esi
  __int64 v35; // rdi
  __int128 v36; // xmm1
  _OWORD *v37; // rdx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  int v46; // ebx
  bool v47; // cf
  unsigned int v48; // [rsp+58h] [rbp-B0h] BYREF
  ULONG v49; // [rsp+5Ch] [rbp-ACh]
  ULONG UsageValue; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+64h] [rbp-A4h]
  int v52; // [rsp+68h] [rbp-A0h]
  unsigned int v53; // [rsp+6Ch] [rbp-9Ch]
  int v54; // [rsp+70h] [rbp-98h]
  int v55; // [rsp+74h] [rbp-94h]
  int v56[2]; // [rsp+78h] [rbp-90h]
  char *v57; // [rsp+80h] [rbp-88h]
  int v58; // [rsp+88h] [rbp-80h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+90h] [rbp-78h]
  LARGE_INTEGER v60; // [rsp+98h] [rbp-70h] BYREF
  void *QuadPart; // [rsp+A0h] [rbp-68h]
  __int64 v62; // [rsp+A8h] [rbp-60h]
  __int64 v63; // [rsp+B0h] [rbp-58h]
  _QWORD v64[4]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v65[40]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v66[10]; // [rsp+178h] [rbp+70h] BYREF

  v1 = *(_QWORD *)(a1 + 400);
  v2 = (_QWORD *)a1;
  v62 = a1;
  v3 = 0;
  v53 = 0;
  v4 = *(_QWORD *)(a1 + 416);
  v5 = *(unsigned __int8 *)(a1 + 64);
  v6 = *(_DWORD *)(a1 + 264);
  PreparsedData = *(PHIDP_PREPARSED_DATA *)(v1 + 16);
  UsageValue = 1;
  Report = *(char **)(v1 + 24);
  ReportLength = *(unsigned __int16 *)(v1 + 44);
  LODWORD(v1) = *(_DWORD *)(v4 + 236);
  v9 = (v5 >> 6) & 1;
  v57 = Report;
  v49 = ReportLength;
  v63 = v4;
  v52 = 0;
  v55 = 0;
  v56[1] = -__CFSHR__(v1, 5);
  v56[0] = v9;
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
  if ( gbTouchInputAllowed || (result = (unsigned int)(*(_DWORD *)(v4 + 24) - 1), (unsigned int)result > 4) )
  {
    v14 = v6 % ReportLength;
    result = v6 / ReportLength;
    if ( v6 % ReportLength )
    {
      if ( v6 <= ReportLength )
      {
        v3 = 1;
        v53 = 1;
      }
    }
    else
    {
      v3 = v6 / ReportLength;
      v53 = v6 / ReportLength;
    }
    v54 = 0;
    if ( v3 )
    {
      do
      {
        result = EnsurePointerDeviceHasMonitor(v4, v14, v11.QuadPart);
        if ( !(_DWORD)result )
          return result;
        xxxSeekAndAbortLowerRankedActivity((struct tagHID_POINTER_DEVICE_INFO *)v4, v15, v16, v17);
        v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v48 = v18;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v60 = PerformanceCounter;
        if ( (*(_DWORD *)(v4 + 236) & 2) == 0 )
        {
          memset(v65, 0, sizeof(v65));
          SimulatedPointerDeviceScanTime(v4, PerformanceCounter.QuadPart, (int *)&v48);
          v65[2] = (0x300000001LL - (unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 24) - 6)) >> 32;
          if ( (int)ExtractDeviceUsages(
                      Report,
                      ReportLength,
                      0,
                      PreparsedData,
                      (struct tagPOINTEREVENTINT *)v65,
                      (__int64)v2,
                      0,
                      0,
                      0LL,
                      0) >= 0 )
          {
            v65[18] = v48;
            *(_QWORD *)&v65[6] = *v2;
            *(LARGE_INTEGER *)&v65[22] = PerformanceCounter;
            xxxUpdateDeviceFrameState((struct tagHID_POINTER_DEVICE_INFO *)v4);
            v20 = LINPSourceFromPointerType(v65[2]);
            UpdateInputGlobalsEx(v21, v9, v20, 1);
            xxxProcessPointerEvent(
              1uLL,
              0,
              (unsigned int)v65,
              (struct tagPOINTEREVENTINT *)ReportLength,
              (unsigned int)Report,
              v9,
              v56[1],
              0,
              QuadPart);
          }
LABEL_58:
          result = ReportLength;
          Report += ReportLength;
          v57 = Report;
          goto LABEL_59;
        }
        v22 = 0;
        v51 = 0;
        v23 = *(_QWORD *)(v4 + 696);
        v24 = HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, &UsageValue, PreparsedData, Report, ReportLength);
        v14 = 0LL;
        if ( v24 < 0 )
        {
          v22 = *(_DWORD *)(v23 + 40);
          goto LABEL_31;
        }
        v26 = UsageValue;
        if ( UsageValue > *(_DWORD *)(v4 + 704) )
        {
          if ( *(_DWORD *)v23 )
LABEL_29:
            *(_DWORD *)(*(_QWORD *)(v4 + 696) + 4LL) |= 2u;
        }
        else
        {
          if ( !UsageValue )
          {
            v29 = *(_DWORD *)v23;
            if ( !*(_DWORD *)v23 )
              goto LABEL_29;
            PerformanceCounter = *(LARGE_INTEGER *)(v4 + 1448);
            v22 = *(_DWORD *)(v23 + 40);
            LODWORD(v18) = *(_DWORD *)(v4 + 1420);
            v55 = 1;
            v60 = PerformanceCounter;
            v52 = 1;
            v48 = v18;
            if ( v29 <= v22 )
            {
              v22 = v29;
              *(_DWORD *)v23 = 0;
              goto LABEL_31;
            }
            v28 = v29 - v22;
            goto LABEL_22;
          }
          if ( *(_DWORD *)v23 )
            goto LABEL_29;
          *(LARGE_INTEGER *)(v4 + 1448) = PerformanceCounter;
          v22 = v26;
          v27 = *(_DWORD *)(v23 + 40);
          if ( UsageValue > v27 )
          {
            v22 = *(_DWORD *)(v23 + 40);
            v28 = UsageValue - v27;
LABEL_22:
            *(_DWORD *)v23 = v28;
          }
        }
LABEL_31:
        if ( (*(_DWORD *)(*(_QWORD *)(v4 + 696) + 4LL) & 2) == 0
          || gptiCurrent != gptiRit
          && (v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))IsDwmInputThread)(
                      gptiRit,
                      0LL,
                      (LARGE_INTEGER)v11.QuadPart,
                      v25),
              v14 = 0LL,
              !v30) )
        {
          if ( v22 )
          {
            v58 = 0;
            if ( !v52 )
            {
              if ( (*(_DWORD *)(v4 + 236) & 0x80u) == 0 )
              {
                SimulatedPointerDeviceScanTime(v4, PerformanceCounter.QuadPart, (int *)&v48);
              }
              else
              {
                GetPointerDeviceFrameScanTime(v4, PreparsedData, Report, ReportLength, &v48, (ULONG *)&v58, &v60);
                PerformanceCounter = v60;
              }
              LODWORD(v18) = v48;
            }
            v31 = v22;
            v32 = Win32AllocPoolZInit(160LL * v22, 2020635477LL);
            if ( v32 )
            {
              LOWORD(v48) = *(_WORD *)(v23 + 16);
              PushW32ThreadLock(v32, v64, (__int64)Win32FreePool);
              v33 = v22 == 0;
              v34 = v49;
              if ( !v33 )
              {
                v35 = v55;
                do
                {
                  memset(v66, 0, sizeof(v66));
                  DWORD2(v66[0]) = 2;
                  *((_QWORD *)&v66[1] + 1) = *(_QWORD *)v62;
                  if ( ((int)ExtractDeviceUsages(
                               v57,
                               v34,
                               v48,
                               PreparsedData,
                               (struct tagPOINTEREVENTINT *)v66,
                               v62,
                               v58,
                               v18,
                               PerformanceCounter.QuadPart,
                               UsageValue) >= 0
                     || v35)
                    && (DWORD1(v66[1]) || v35) )
                  {
                    DWORD2(v66[4]) = v18;
                    *((LARGE_INTEGER *)&v66[5] + 1) = PerformanceCounter;
                    v36 = v66[1];
                    v37 = (_OWORD *)(v32 + 160LL * v51++);
                    *v37 = v66[0];
                    v38 = v66[2];
                    v37[1] = v36;
                    v39 = v66[3];
                    v37[2] = v38;
                    v40 = v66[4];
                    v37[3] = v39;
                    v41 = v66[5];
                    v37[4] = v40;
                    v42 = v66[6];
                    v37[5] = v41;
                    v43 = v66[7];
                    v37[6] = v42;
                    v44 = v66[8];
                    v37[7] = v43;
                    v45 = v66[9];
                    v37[8] = v44;
                    v37[9] = v45;
                  }
                  LOWORD(v48) = *(_WORD *)(*(_QWORD *)(v23 + 24) + 8LL * (unsigned __int16)v48 + 4);
                  --v31;
                }
                while ( v31 );
                v4 = v63;
              }
              v46 = v56[0];
              UpdateInputGlobalsEx(
                (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                v56[0],
                9u,
                1);
              if ( !*(_DWORD *)v23 )
                xxxUpdateDeviceFrameState((struct tagHID_POINTER_DEVICE_INFO *)v4);
              Report = v57;
              if ( v51 )
                xxxProcessPointerEvent(
                  v51,
                  *(_DWORD *)v23,
                  v32,
                  (struct tagPOINTEREVENTINT *)v34,
                  (unsigned int)v57,
                  v46,
                  v56[1],
                  0,
                  QuadPart);
              PopW32ThreadLock(v64);
              Win32FreePool(v32);
            }
            else
            {
              Report = v57;
            }
            ReportLength = v49;
          }
          goto LABEL_58;
        }
        xxxAssessPointerContactState();
        result = *(_QWORD *)(v4 + 696);
        *(_DWORD *)(result + 4) &= ~2u;
LABEL_59:
        v52 = 0;
        v47 = v54 + 1 < v53;
        v9 = v56[0];
        v2 = (_QWORD *)v62;
        ++v54;
      }
      while ( v47 );
    }
  }
  return result;
}
