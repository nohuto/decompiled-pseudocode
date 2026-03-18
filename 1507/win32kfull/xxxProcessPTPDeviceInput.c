/*
 * XREFs of xxxProcessPTPDeviceInput @ 0x1C01CFE54
 * Callers:
 *     xxxProcessHidInput @ 0x1C01D44F0 (xxxProcessHidInput.c)
 * Callees:
 *     UpdateInputGlobalsEx @ 0x1C004A4E0 (UpdateInputGlobalsEx.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C00EF440 (EnsurePointerDeviceHasMonitor.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ExtractDeviceUsages @ 0x1C01C995C (ExtractDeviceUsages.c)
 *     GetPointerDeviceFrameScanTime @ 0x1C01CB93C (GetPointerDeviceFrameScanTime.c)
 *     SimulatedPointerDeviceScanTime @ 0x1C01CC93C (SimulatedPointerDeviceScanTime.c)
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CDE84 (xxxUpdateDeviceFrameState.c)
 *     ?xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z @ 0x1C01CE970 (-xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z.c)
 *     xxxProcessPointerEvent @ 0x1C01E131C (xxxProcessPointerEvent.c)
 */

__int64 __fastcall xxxProcessPTPDeviceInput(struct DEVICEINFO *a1)
{
  __int64 v1; // rax
  unsigned int v2; // r15d
  struct DEVICEINFO *v3; // r12
  unsigned int v4; // r13d
  struct _HIDP_PREPARSED_DATA *v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  char *v8; // r14
  __int64 v9; // rsi
  bool v10; // cf
  LARGE_INTEGER v11; // rdx
  LARGE_INTEGER v12; // r8
  LARGE_INTEGER v13; // r9
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r15
  bool v24; // zf
  char *v25; // r14
  __int64 v26; // rdi
  unsigned int v27; // r13d
  _OWORD *v28; // rdx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  unsigned int *v38; // rbx
  unsigned int v39; // r12d
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v42; // [rsp+58h] [rbp-A8h]
  unsigned int v43; // [rsp+5Ch] [rbp-A4h]
  unsigned int v44; // [rsp+60h] [rbp-A0h]
  int v45; // [rsp+64h] [rbp-9Ch] BYREF
  union _LARGE_INTEGER v46; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-90h] BYREF
  char *v48; // [rsp+78h] [rbp-88h]
  int v49; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v50; // [rsp+84h] [rbp-7Ch] BYREF
  int v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  struct _HIDP_PREPARSED_DATA *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  void *QuadPart; // [rsp+B0h] [rbp-50h]
  _QWORD v57[3]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v58[10]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *((_QWORD *)a1 + 50);
  v2 = 0;
  v3 = a1;
  v52 = (__int64)a1;
  v4 = 0;
  v44 = 0;
  v46.QuadPart = 0LL;
  v5 = *(struct _HIDP_PREPARSED_DATA **)(v1 + 16);
  v6 = *((_QWORD *)v3 + 52);
  v7 = *((_DWORD *)v3 + 66);
  v50 = 1;
  v8 = *(char **)(v1 + 24);
  v9 = *(unsigned __int16 *)(v1 + 44);
  v10 = __CFSHR__(*(_DWORD *)(v6 + 236), 5);
  v54 = v5;
  v48 = v8;
  v51 = -v10;
  v55 = v6;
  v40 = 0;
  v45 = 0;
  v47 = 0;
  QuadPart = (void *)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( gbPointerSendLastPending
    && (gptiCurrent == gptiRit
     || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))IsDwmInputThread)(
                        gptiRit,
                        (LARGE_INTEGER)v11.QuadPart,
                        (LARGE_INTEGER)v12.QuadPart,
                        (LARGE_INTEGER)v13.QuadPart)) )
  {
    xxxAssessPointerContactState();
  }
  result = v7 / (unsigned int)v9;
  if ( v7 % (unsigned int)v9 )
  {
    if ( v7 <= (unsigned int)v9 )
    {
      v4 = 1;
      v44 = 1;
    }
  }
  else
  {
    v4 = v7 / (unsigned int)v9;
    v44 = v7 / (unsigned int)v9;
  }
  if ( gPTPEnabled )
  {
    result = HIDWORD(qword_1C0323098);
    if ( (qword_1C0323098 & 0x800000000LL) != 0 )
    {
      v42 = 0;
      if ( v4 )
      {
        do
        {
          EtwTraceTouchPadHIDProcessingStart();
          result = EnsurePointerDeviceHasMonitor(v6, v15, v16);
          if ( !(_DWORD)result )
            return result;
          v41 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          result = xxxGetPTPFrameContactCount(v3, v9, v8, &v45, &v40, &v50, &v47, &v41, &v46);
          v19 = result;
          if ( (*(_DWORD *)(*(_QWORD *)(v6 + 696) + 4LL) & 2) != 0
            && (gptiCurrent == gptiRit || (result = IsDwmInputThread(gptiCurrent, gptiRit, v17, v18), (_DWORD)result)) )
          {
            xxxAssessPointerContactState();
            result = *(_QWORD *)(v6 + 696);
            *(_DWORD *)(result + 4) &= ~2u;
          }
          else if ( v19 >= 0 )
          {
            v20 = v47;
            if ( v47 )
            {
              v43 = 0;
              v49 = 0;
              v53 = *(_QWORD *)(v6 + 696);
              if ( v40 )
                goto LABEL_22;
              if ( (*(_DWORD *)(v6 + 236) & 0x80u) == 0 )
              {
                v21 = v46.QuadPart;
                SimulatedPointerDeviceScanTime(v6, v46.QuadPart, (int *)&v41);
              }
              else
              {
                GetPointerDeviceFrameScanTime(v6, v54, v48, v9, &v41, (ULONG *)&v49, &v46);
LABEL_22:
                v21 = v46.QuadPart;
              }
              v22 = v20;
              result = Win32AllocPoolZInit(160 * v20, 2020635477LL);
              v23 = result;
              if ( result )
              {
                LOWORD(v40) = *(_WORD *)(v53 + 16);
                PushW32ThreadLock(result, v57, (__int64)Win32FreePool);
                v24 = (_DWORD)v20 == 0;
                v25 = v48;
                if ( !v24 )
                {
                  v26 = v53;
                  v27 = v43;
                  do
                  {
                    memset(v58, 0, sizeof(v58));
                    DWORD2(v58[0]) = 5;
                    *((_QWORD *)&v58[1] + 1) = *(_QWORD *)v52;
                    if ( ((int)ExtractDeviceUsages(
                                 v25,
                                 v9,
                                 v40,
                                 v54,
                                 (struct tagPOINTEREVENTINT *)v58,
                                 v52,
                                 v49,
                                 v41,
                                 v21,
                                 v50) >= 0
                       || v45)
                      && (DWORD1(v58[1]) || v45) )
                    {
                      DWORD2(v58[4]) = v41;
                      *((_QWORD *)&v58[5] + 1) = v21;
                      v28 = (_OWORD *)(v23 + 160LL * v27);
                      v29 = v58[1];
                      ++v27;
                      *v28 = v58[0];
                      v30 = v58[2];
                      v28[1] = v29;
                      v31 = v58[3];
                      v28[2] = v30;
                      v32 = v58[4];
                      v28[3] = v31;
                      v33 = v58[5];
                      v28[4] = v32;
                      v34 = v58[6];
                      v28[5] = v33;
                      v35 = v58[7];
                      v28[6] = v34;
                      v36 = v58[8];
                      v28[7] = v35;
                      v37 = v58[9];
                      v28[8] = v36;
                      v28[9] = v37;
                    }
                    LOWORD(v40) = *(_WORD *)(*(_QWORD *)(v26 + 24) + 8LL * (unsigned __int16)v40 + 4);
                    --v22;
                  }
                  while ( v22 );
                  v6 = v55;
                  v43 = v27;
                  v4 = v44;
                }
                UpdateInputGlobalsEx(
                  (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                  0,
                  9u,
                  1);
                v38 = (unsigned int *)v53;
                if ( !*(_DWORD *)v53 )
                  xxxUpdateDeviceFrameState((struct _LIST_ENTRY *)v6, 0, 0, 0LL);
                v39 = v43;
                if ( v43 )
                {
                  EtwTraceTouchPadHIDProcessingStop();
                  xxxProcessPointerEvent(
                    v39,
                    *v38,
                    v23,
                    (struct tagPOINTEREVENTINT *)(unsigned int)v9,
                    (unsigned int)v25,
                    0,
                    v51,
                    0,
                    QuadPart);
                }
                PopW32ThreadLock(v57);
                result = Win32FreePool(v23);
              }
              v3 = (struct DEVICEINFO *)v52;
              v2 = v42;
            }
            v8 = &v48[v9];
            v48 += v9;
          }
          v40 = 0;
          v42 = ++v2;
        }
        while ( v2 < v4 );
      }
    }
  }
  return result;
}
