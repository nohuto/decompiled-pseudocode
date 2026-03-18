/*
 * XREFs of rimProcessPTPDeviceInput @ 0x1C00CC708
 * Callers:
 *     rimProcessFrameBasedHidInput @ 0x1C00C7F10 (rimProcessFrameBasedHidInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     EtwTraceTouchPadHIDProcessingStart @ 0x1C00A80F0 (EtwTraceTouchPadHIDProcessingStart.c)
 *     EtwTraceTouchPadHIDProcessingStop @ 0x1C00A8120 (EtwTraceTouchPadHIDProcessingStop.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C451C (RIMUpdateDeviceFrameState.c)
 *     RIMProcessPointerEvent @ 0x1C00C8774 (RIMProcessPointerEvent.c)
 *     RIMAssessPointerContactState @ 0x1C00C9EAC (RIMAssessPointerContactState.c)
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceFrameScanTime @ 0x1C00CBC4C (RIMGetPointerDeviceFrameScanTime.c)
 *     RIMSimulatedPointerDeviceScanTime @ 0x1C00CC0F4 (RIMSimulatedPointerDeviceScanTime.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1C00CD4C8 (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C00CD51C (ApiSetIsPTPInputEnabled.c)
 *     ApiSetUpdateInputGlobalsEx @ 0x1C00CD618 (ApiSetUpdateInputGlobalsEx.c)
 *     RIMGetPTPFrameContactCount @ 0x1C00D0A88 (RIMGetPTPFrameContactCount.c)
 */

__int64 __fastcall rimProcessPTPDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  unsigned int v6; // ebx
  struct _HIDP_PREPARSED_DATA *v7; // rcx
  char *v8; // r15
  __int64 v9; // r12
  unsigned int v10; // r13d
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r15
  __int64 v15; // rbx
  char *v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rax
  __int128 v19; // xmm1
  _OWORD *v20; // rdx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rcx
  int *v30; // rbx
  int v31; // r15d
  __int64 v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v36; // [rsp+68h] [rbp-98h]
  unsigned int v37; // [rsp+6Ch] [rbp-94h]
  unsigned int i; // [rsp+70h] [rbp-90h]
  int v39; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v43; // [rsp+88h] [rbp-78h] BYREF
  char *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  struct _HIDP_PREPARSED_DATA *v47; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER PerformanceCounter; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  _OWORD v50[10]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 400);
  v4 = *(_QWORD *)(a2 + 416);
  v6 = *(_DWORD *)(a2 + 264);
  v49 = v4;
  v7 = *(struct _HIDP_PREPARSED_DATA **)(v2 + 16);
  v42 = 1;
  v8 = *(char **)(v2 + 24);
  v9 = *(unsigned __int16 *)(v2 + 44);
  v47 = v7;
  v10 = 0;
  v36 = 0;
  v40 = 0LL;
  v34 = 0;
  v39 = 0;
  v43 = 0;
  v44 = v8;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( *(_BYTE *)(a1 + 649) )
    RIMAssessPointerContactState(a1);
  result = ApiSetIsPTPInputEnabled();
  if ( (_DWORD)result || *(_DWORD *)(v4 + 24) != 8 )
  {
    result = v6 / (unsigned int)v9;
    if ( v6 % (unsigned int)v9 )
    {
      if ( v6 <= (unsigned int)v9 )
      {
        v10 = 1;
        v36 = 1;
      }
    }
    else
    {
      v10 = v6 / (unsigned int)v9;
      v36 = v6 / (unsigned int)v9;
    }
    v13 = 0;
    for ( i = 0; v13 < v10; i = ++v13 )
    {
      EtwTraceTouchPadHIDProcessingStart(v12);
      result = ApiSetEnsurePointerDeviceHasMonitor(v4);
      if ( !(_DWORD)result )
        return result;
      v35 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      result = RIMGetPTPFrameContactCount(
                 a1,
                 a2,
                 v9,
                 (_DWORD)v8,
                 (__int64)&v39,
                 (__int64)&v34,
                 (__int64)&v42,
                 (__int64)&v43,
                 (__int64)&v35,
                 (__int64)&v40);
      v46 = *(_QWORD *)(v4 + 696);
      v12 = *(unsigned int *)(v46 + 4);
      if ( (v12 & 2) != 0 )
      {
        RIMAssessPointerContactState(a1);
        result = *(_QWORD *)(v4 + 696);
        *(_DWORD *)(result + 4) &= ~2u;
      }
      else if ( (int)result >= 0 )
      {
        v14 = v43;
        if ( v43 )
        {
          v37 = 0;
          v41 = 0;
          if ( v34 )
            goto LABEL_18;
          if ( (*(_DWORD *)(v4 + 236) & 0x80u) == 0 )
          {
            v15 = v40;
            RIMSimulatedPointerDeviceScanTime(a1, v4, v40, &v35);
          }
          else
          {
            RIMGetPointerDeviceFrameScanTime(a1, v4, v47, v44, v9, &v35, &v41, &v40);
LABEL_18:
            v15 = v40;
          }
          result = (__int64)Win32AllocPoolZInit(160 * v14);
          v45 = result;
          if ( result )
          {
            LOWORD(v34) = *(_WORD *)(v46 + 16);
            if ( (_DWORD)v14 )
            {
              v16 = v44;
              v17 = v45;
              do
              {
                memset(v50, 0, sizeof(v50));
                if ( (*(_DWORD *)(a2 + 184) & 0x800) != 0 )
                  v18 = *(_QWORD *)(a2 + 24);
                else
                  v18 = *(_QWORD *)(a2 + 16);
                *((_QWORD *)&v50[1] + 1) = v18;
                DWORD2(v50[0]) = 5;
                if ( ((int)RIMExtractDeviceUsages(a1, a2, v16, v9, v34, v47, (__int64)v50, v41, v35, v15, v42) >= 0
                   || v39)
                  && (DWORD1(v50[1]) || v39) )
                {
                  DWORD2(v50[4]) = v35;
                  *((_QWORD *)&v50[5] + 1) = v15;
                  v19 = v50[1];
                  v20 = (_OWORD *)(v17 + 160LL * v37++);
                  *v20 = v50[0];
                  v21 = v50[2];
                  v20[1] = v19;
                  v22 = v50[3];
                  v20[2] = v21;
                  v23 = v50[4];
                  v20[3] = v22;
                  v24 = v50[5];
                  v20[4] = v23;
                  v25 = v50[6];
                  v20[5] = v24;
                  v26 = v50[7];
                  v20[6] = v25;
                  v27 = v50[8];
                  v20[7] = v26;
                  v28 = v50[9];
                  v20[8] = v27;
                  v20[9] = v28;
                }
                LOWORD(v34) = *(_WORD *)(*(_QWORD *)(v46 + 24) + 8LL * (unsigned __int16)v34 + 4);
                --v14;
              }
              while ( v14 );
              v4 = v49;
              v10 = v36;
            }
            ApiSetUpdateInputGlobalsEx(
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              0LL,
              9LL);
            v30 = (int *)v46;
            if ( !*(_DWORD *)v46 )
            {
              if ( *(_BYTE *)(a1 + 649) )
                RIMAssessPointerContactState(a1);
              RIMUpdateDeviceFrameState(a1, v4);
            }
            v31 = v37;
            if ( v37 )
            {
              EtwTraceTouchPadHIDProcessingStop(v29);
              RIMProcessPointerEvent(a1, a2, v31, *v30, v45, v9, (__int64)v44, v32, v33, 0, PerformanceCounter.LowPart);
            }
            result = Win32FreePool();
          }
          v13 = i;
        }
        LODWORD(v8) = v9 + (_DWORD)v44;
        v44 += v9;
      }
      v34 = 0;
    }
  }
  return result;
}
