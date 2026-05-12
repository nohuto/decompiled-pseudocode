/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C0038048
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C0037E98 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(union _LARGE_INTEGER a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _BYTE *v4; // rdi
  int v6; // r14d
  char v8; // r12
  _BYTE *v9; // r15
  unsigned __int8 v10; // r13
  char v11; // al
  char v12; // r10
  unsigned int v13; // r11d
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  unsigned __int64 v20; // rcx
  char v21; // bl
  char v22; // al
  __int64 v23; // rdi
  __int64 v24; // rax
  union _LARGE_INTEGER v25; // r14
  bool v26; // zf
  LARGE_INTEGER v27; // rax
  LARGE_INTEGER v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 result; // rax
  __int64 v32; // [rsp+20h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+48h] BYREF
  __int64 v34; // [rsp+88h] [rbp+50h]
  char v35; // [rsp+90h] [rbp+58h]
  int v36; // [rsp+98h] [rbp+60h]

  v34 = a2;
  PerformanceFrequency = a1;
  v4 = 0LL;
  v6 = 0;
  v35 = *(_BYTE *)(a3 + 3);
  v36 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  memset(a4, 0, 0x20uLL);
  v11 = *(_BYTE *)(a3 + 2);
  if ( v11 == 40 )
  {
    v12 = 0;
    if ( *(_DWORD *)(a3 + 20) )
    {
      v8 = 0;
      v10 = 0;
      goto LABEL_27;
    }
    v13 = *(_DWORD *)(a3 + 56);
    v14 = 0LL;
    if ( !v13 )
      goto LABEL_27;
    while ( 1 )
    {
      v15 = *(unsigned int *)(a3 + 4 * v14 + 120);
      if ( (unsigned int)v15 >= 0x80 )
      {
        v16 = *(unsigned int *)(a3 + 16);
        if ( (unsigned int)v15 < (unsigned int)v16 )
          break;
      }
LABEL_20:
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= v13 )
      {
LABEL_21:
        v6 = v36;
        goto LABEL_27;
      }
    }
    v17 = (unsigned int)v15;
    v18 = *(_DWORD *)(v15 + a3) - 64;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 && v17 + 40 <= v16 )
        {
          v6 = *(_DWORD *)(v17 + a3 + 12);
          if ( v6 )
            v4 = (_BYTE *)(v17 + a3 + 32);
          v8 = *(_BYTE *)(v17 + a3 + 8);
          v9 = *(_BYTE **)(v17 + a3 + 24);
          v10 = *(_BYTE *)(v17 + a3 + 9);
          goto LABEL_27;
        }
        goto LABEL_19;
      }
      v20 = v17 + 56;
    }
    else
    {
      v20 = v17 + 40;
    }
    if ( v20 <= v16 )
    {
      v12 = 1;
      LOBYTE(v36) = *(_BYTE *)(v17 + a3 + 10);
      if ( (_BYTE)v36 )
        v4 = (_BYTE *)(v17 + a3 + 24);
      v10 = *(_BYTE *)(v17 + a3 + 9);
      v9 = *(_BYTE **)(v17 + a3 + 16);
      v8 = *(_BYTE *)(v17 + a3 + 8);
    }
LABEL_19:
    if ( v12 )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( !v11 )
  {
    v6 = *(unsigned __int8 *)(a3 + 10);
    if ( *(_BYTE *)(a3 + 10) )
      v4 = (_BYTE *)(a3 + 72);
    v8 = *(_BYTE *)(a3 + 4);
    v9 = *(_BYTE **)(a3 + 32);
    v10 = *(_BYTE *)(a3 + 11);
  }
LABEL_27:
  v21 = v35;
  v22 = v35;
  a4[1] = v8;
  *a4 = v22 & 0x3F;
  if ( v4 )
  {
    a4[5] = *v4;
    if ( v6 == 16 )
    {
      HIBYTE(v32) = v4[2];
      BYTE6(v32) = v4[3];
      BYTE5(v32) = v4[4];
      BYTE4(v32) = v4[5];
      BYTE3(v32) = v4[6];
      BYTE2(v32) = v4[7];
      BYTE1(v32) = v4[8];
      LOBYTE(v32) = v4[9];
    }
    else
    {
      v32 = (unsigned __int8)v4[5] | (((unsigned __int8)v4[4] | (((unsigned __int8)v4[3] | ((unsigned __int8)v4[2] << 8)) << 8)) << 8);
    }
    v23 = v34;
    *((_QWORD *)a4 + 2) = v32;
    v24 = *(_QWORD *)(v23 + 96);
    if ( v24 )
      *((_DWORD *)a4 + 2) = *(_DWORD *)(v24 + 40);
  }
  else
  {
    v23 = v34;
  }
  v25 = PerformanceFrequency;
  if ( *(_DWORD *)(PerformanceFrequency.QuadPart + 1764) != 1 )
    goto LABEL_60;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v26 = LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) == 0;
    goto LABEL_37;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      goto LABEL_42;
    v26 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_37:
    if ( !v26 )
    {
      v27 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_43:
      v28 = v27;
      goto LABEL_45;
    }
LABEL_42:
    v27.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_43;
  }
  v28.QuadPart = 0LL;
LABEL_45:
  v29 = v28.QuadPart - *(_QWORD *)(v23 + 680);
  if ( StorEtwLoggingEnabled )
  {
    if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      goto LABEL_54;
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !PerformanceFrequency.QuadPart )
        goto LABEL_60;
      v29 = 10000000 * v29 / PerformanceFrequency.QuadPart;
    }
  }
  if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
LABEL_54:
    v30 = v29 / 10000;
    if ( (unsigned __int64)(v29 / 10000) <= 0xFFFFFFFF )
    {
      if ( v30 || !v29 )
        *((_DWORD *)a4 + 3) = v30;
      else
        *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = -1;
    }
    goto LABEL_60;
  }
  if ( PerformanceFrequency.QuadPart )
  {
    v29 = 10000000 * v29 / PerformanceFrequency.QuadPart;
    goto LABEL_54;
  }
LABEL_60:
  if ( v21 < 0 && v9 && v10 >= 8u && (unsigned __int8)((*v9 & 0x7F) - 112) <= 1u )
  {
    a4[2] = v9[2] & 0xF;
    a4[3] = v9[12];
    a4[4] = v9[13];
  }
  result = *(unsigned int *)(v25.QuadPart + 1800);
  *((_DWORD *)a4 + 6) = result;
  return result;
}
