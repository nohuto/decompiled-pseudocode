/*
 * XREFs of xxxProcessPTPDeviceInput @ 0x1C01D1AB4
 * Callers:
 *     xxxProcessHidInput @ 0x1C01D6080 (xxxProcessHidInput.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     UpdateInputGlobalsEx @ 0x1C0084630 (UpdateInputGlobalsEx.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C0117D60 (EnsurePointerDeviceHasMonitor.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ExtractDeviceUsages @ 0x1C01CB53C (ExtractDeviceUsages.c)
 *     GetPointerDeviceFrameScanTime @ 0x1C01CD51C (GetPointerDeviceFrameScanTime.c)
 *     SimulatedPointerDeviceScanTime @ 0x1C01CE51C (SimulatedPointerDeviceScanTime.c)
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CFA74 (xxxUpdateDeviceFrameState.c)
 *     ?xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z @ 0x1C01D0560 (-xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z.c)
 *     xxxProcessPointerEvent @ 0x1C01E192C (xxxProcessPointerEvent.c)
 */

__int64 __fastcall xxxProcessPTPDeviceInput(struct DEVICEINFO *a1)
{
  __int64 v1; // rax
  struct DEVICEINFO *v2; // r15
  unsigned int v3; // ebx
  unsigned int v4; // r13d
  struct _HIDP_PREPARSED_DATA *v5; // r12
  __int64 v6; // rdi
  char *v7; // r14
  __int64 v8; // rsi
  bool v9; // cf
  LARGE_INTEGER v10; // rdx
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // r9
  __int64 result; // rax
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r15d
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // r15
  bool v22; // zf
  char *v23; // r14
  __int64 v24; // rdi
  unsigned int v25; // r13d
  _OWORD *v26; // rdx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  unsigned int *v36; // rbx
  unsigned int v37; // r12d
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int i; // [rsp+58h] [rbp-A8h]
  unsigned int v41; // [rsp+5Ch] [rbp-A4h]
  unsigned int v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  union _LARGE_INTEGER v44; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v45; // [rsp+70h] [rbp-90h] BYREF
  char *v46; // [rsp+78h] [rbp-88h]
  int v47; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v48; // [rsp+84h] [rbp-7Ch] BYREF
  int v49; // [rsp+88h] [rbp-78h]
  struct _HIDP_PREPARSED_DATA *v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  void *QuadPart; // [rsp+B0h] [rbp-50h]
  _QWORD v55[3]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v56[10]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *((_QWORD *)a1 + 50);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 64);
  v52 = (__int64)a1;
  v4 = 0;
  v42 = 0;
  v5 = *(struct _HIDP_PREPARSED_DATA **)(v1 + 16);
  v6 = *((_QWORD *)a1 + 52);
  v48 = 1;
  v7 = *(char **)(v1 + 24);
  v8 = *(unsigned __int16 *)(v1 + 44);
  v9 = __CFSHR__(*(_DWORD *)(v6 + 252), 7);
  v50 = v5;
  v46 = v7;
  v49 = -v9;
  v53 = v6;
  v44.QuadPart = 0LL;
  v38 = 0;
  v43 = 0;
  v45 = 0;
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
  result = v3 / (unsigned int)v8;
  if ( v3 % (unsigned int)v8 )
  {
    if ( v3 <= (unsigned int)v8 )
    {
      v4 = 1;
      v42 = 1;
    }
  }
  else
  {
    v4 = v3 / (unsigned int)v8;
    v42 = v3 / (unsigned int)v8;
  }
  if ( gPTPEnabled )
  {
    result = HIDWORD(qword_1C0322020);
    if ( (qword_1C0322020 & 0x800000000LL) != 0 )
    {
      v14 = 0;
      for ( i = 0; v14 < v4; i = v14 )
      {
        EtwTraceTouchPadHIDProcessingStart();
        result = EnsurePointerDeviceHasMonitor(v6);
        if ( !(_DWORD)result )
          return result;
        v39 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        result = xxxGetPTPFrameContactCount(v2, v8, v7, &v43, &v38, &v48, &v45, &v39, &v44);
        v17 = result;
        if ( (*(_DWORD *)(*(_QWORD *)(v6 + 712) + 4LL) & 2) != 0
          && (gptiCurrent == gptiRit || (result = IsDwmInputThread(gptiCurrent, gptiRit, v15, v16), (_DWORD)result)) )
        {
          xxxAssessPointerContactState();
          result = *(_QWORD *)(v6 + 712);
          *(_DWORD *)(result + 4) &= ~2u;
        }
        else if ( v17 >= 0 )
        {
          v18 = v45;
          if ( v45 )
          {
            v41 = 0;
            v47 = 0;
            v51 = *(_QWORD *)(v6 + 712);
            if ( v38 )
              goto LABEL_22;
            if ( (*(_DWORD *)(v6 + 252) & 0x200) != 0 )
            {
              GetPointerDeviceFrameScanTime(v6, v5, v46, v8, &v39, (ULONG *)&v47, &v44);
LABEL_22:
              v19 = v44.QuadPart;
            }
            else
            {
              v19 = v44.QuadPart;
              SimulatedPointerDeviceScanTime(v6, v44.QuadPart, (int *)&v39);
            }
            v20 = v18;
            result = Win32AllocPoolZInit(160 * v18, 2020635477LL);
            v21 = result;
            if ( result )
            {
              LOWORD(v38) = *(_WORD *)(v51 + 16);
              PushW32ThreadLock(result, v55, (__int64)Win32FreePool);
              v22 = (_DWORD)v18 == 0;
              v23 = v46;
              if ( !v22 )
              {
                v24 = v51;
                v25 = v41;
                do
                {
                  memset(v56, 0, sizeof(v56));
                  DWORD2(v56[0]) = 5;
                  *((_QWORD *)&v56[1] + 1) = *(_QWORD *)v52;
                  if ( ((int)ExtractDeviceUsages(
                               v23,
                               v8,
                               v38,
                               v50,
                               (struct tagPOINTEREVENTINT *)v56,
                               v52,
                               v47,
                               v39,
                               v19,
                               v48) >= 0
                     || v43)
                    && (DWORD1(v56[1]) || v43) )
                  {
                    DWORD2(v56[4]) = v39;
                    *((_QWORD *)&v56[5] + 1) = v19;
                    v26 = (_OWORD *)(v21 + 160LL * v25);
                    v27 = v56[1];
                    ++v25;
                    *v26 = v56[0];
                    v28 = v56[2];
                    v26[1] = v27;
                    v29 = v56[3];
                    v26[2] = v28;
                    v30 = v56[4];
                    v26[3] = v29;
                    v31 = v56[5];
                    v26[4] = v30;
                    v32 = v56[6];
                    v26[5] = v31;
                    v33 = v56[7];
                    v26[6] = v32;
                    v34 = v56[8];
                    v26[7] = v33;
                    v35 = v56[9];
                    v26[8] = v34;
                    v26[9] = v35;
                  }
                  LOWORD(v38) = *(_WORD *)(*(_QWORD *)(v24 + 24) + 8LL * (unsigned __int16)v38 + 4);
                  --v20;
                }
                while ( v20 );
                v6 = v53;
                v41 = v25;
                v4 = v42;
              }
              UpdateInputGlobalsEx(
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                0,
                9u,
                1);
              v36 = (unsigned int *)v51;
              if ( !*(_DWORD *)v51 )
                xxxUpdateDeviceFrameState((struct _LIST_ENTRY *)v6, 0, 0, 0LL);
              v37 = v41;
              if ( v41 )
              {
                EtwTraceTouchPadHIDProcessingStop();
                xxxProcessPointerEvent(
                  v37,
                  *v36,
                  v21,
                  (struct tagPOINTEREVENTINT *)(unsigned int)v8,
                  (unsigned int)v23,
                  0,
                  v49,
                  0,
                  QuadPart);
              }
              PopW32ThreadLock(v55);
              result = Win32FreePool(v21);
            }
            v5 = v50;
            v14 = i;
          }
          v7 = &v46[v8];
          v46 += v8;
        }
        v38 = 0;
        ++v14;
        v2 = (struct DEVICEINFO *)v52;
      }
    }
  }
  return result;
}
