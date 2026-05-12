/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C0039F10
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C0039D28 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        __int64 a4,
        _BYTE *a5)
{
  _BYTE *v5; // rsi
  _BYTE *v6; // rdi
  int v8; // r14d
  char v10; // r12
  _BYTE *v11; // r15
  char v12; // al
  char v13; // r10
  unsigned int v14; // r11d
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rcx
  unsigned __int8 v23; // bl
  char v24; // r9
  char v25; // al
  __int64 v26; // r8
  union _LARGE_INTEGER v27; // rsi
  bool v28; // zf
  LARGE_INTEGER v29; // rax
  LARGE_INTEGER v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 result; // rax
  unsigned __int8 v36; // [rsp+20h] [rbp-10h]
  int v37; // [rsp+24h] [rbp-Ch]
  __int64 v38; // [rsp+28h] [rbp-8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+50h] BYREF
  char v41; // [rsp+88h] [rbp+58h]

  PerformanceFrequency = a3;
  v5 = 0LL;
  v6 = a5;
  v8 = 0;
  v41 = *(_BYTE *)(a4 + 3);
  v37 = 0;
  v36 = 0;
  v10 = 0;
  v11 = 0LL;
  memset(a5, 0, 0x28uLL);
  v12 = *(_BYTE *)(a4 + 2);
  if ( v12 == 40 )
  {
    v13 = 0;
    if ( *(_DWORD *)(a4 + 20) )
    {
      v10 = 0;
      v21 = 0;
      goto LABEL_27;
    }
    v14 = *(_DWORD *)(a4 + 56);
    v15 = 0LL;
    if ( v14 )
    {
      while ( 1 )
      {
        v16 = *(unsigned int *)(a4 + 4 * v15 + 120);
        if ( (unsigned int)v16 >= 0x80 )
        {
          v17 = *(unsigned int *)(a4 + 16);
          if ( (unsigned int)v16 < (unsigned int)v17 )
            break;
        }
LABEL_20:
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v14 )
        {
LABEL_21:
          v8 = v37;
          goto LABEL_22;
        }
      }
      v18 = (unsigned int)v16;
      v19 = *(_DWORD *)(v16 + a4) - 64;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 && v18 + 40 <= v17 )
          {
            v8 = *(_DWORD *)(v18 + a4 + 12);
            if ( v8 )
              v5 = (_BYTE *)(v18 + a4 + 32);
            v10 = *(_BYTE *)(v18 + a4 + 8);
            v11 = *(_BYTE **)(v18 + a4 + 24);
            v21 = *(_BYTE *)(v18 + a4 + 9);
LABEL_27:
            v36 = v21;
            goto LABEL_22;
          }
          goto LABEL_19;
        }
        v22 = v18 + 56;
      }
      else
      {
        v22 = v18 + 40;
      }
      if ( v22 <= v17 )
      {
        v13 = 1;
        LOBYTE(v37) = *(_BYTE *)(v18 + a4 + 10);
        if ( (_BYTE)v37 )
          v5 = (_BYTE *)(v18 + a4 + 24);
        v11 = *(_BYTE **)(v18 + a4 + 16);
        v10 = *(_BYTE *)(v18 + a4 + 8);
        v36 = *(_BYTE *)(v18 + a4 + 9);
      }
LABEL_19:
      if ( v13 )
        goto LABEL_21;
      goto LABEL_20;
    }
LABEL_22:
    v23 = v36;
  }
  else
  {
    if ( v12 )
      goto LABEL_22;
    v8 = *(unsigned __int8 *)(a4 + 10);
    if ( *(_BYTE *)(a4 + 10) )
      v5 = (_BYTE *)(a4 + 72);
    v10 = *(_BYTE *)(a4 + 4);
    v11 = *(_BYTE **)(a4 + 32);
    v23 = *(_BYTE *)(a4 + 11);
  }
  v24 = v41;
  v25 = v41;
  v6[1] = v10;
  *v6 = v25 & 0x3F;
  if ( v5 )
  {
    v6[5] = *v5;
    if ( v8 == 16 )
    {
      HIBYTE(v38) = v5[2];
      BYTE6(v38) = v5[3];
      BYTE5(v38) = v5[4];
      BYTE4(v38) = v5[5];
      BYTE3(v38) = v5[6];
      BYTE2(v38) = v5[7];
      BYTE1(v38) = v5[8];
      LOBYTE(v38) = v5[9];
    }
    else
    {
      v38 = (unsigned __int8)v5[5] | (((unsigned __int8)v5[4] | (((unsigned __int8)v5[3] | ((unsigned __int8)v5[2] << 8)) << 8)) << 8);
    }
    *((_QWORD *)v6 + 3) = v38;
    if ( a2 )
      *((_DWORD *)v6 + 2) = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 40LL);
  }
  v26 = a1;
  v27 = PerformanceFrequency;
  if ( *(_DWORD *)(a1 + 1824) == 1 )
  {
    if ( !PerformanceFrequency.QuadPart )
      goto LABEL_70;
    PerformanceFrequency.QuadPart = 0LL;
    if ( StorEtwLoggingEnabled )
    {
      v28 = LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        v30.QuadPart = 0LL;
        goto LABEL_47;
      }
      if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
        goto LABEL_44;
      v28 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v28 )
    {
      v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_45:
      v30 = v29;
LABEL_47:
      v31 = v30.QuadPart - *(_QWORD *)(v27.QuadPart + 696);
      if ( StorEtwLoggingEnabled )
      {
        if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
          goto LABEL_56;
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !PerformanceFrequency.QuadPart )
            goto LABEL_62;
          v31 = 10000000 * v31 / PerformanceFrequency.QuadPart;
        }
      }
      if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
      {
LABEL_56:
        v32 = v31 / 10000;
        if ( (unsigned __int64)(v31 / 10000) <= 0xFFFFFFFF )
        {
          if ( v32 || !v31 )
            *((_DWORD *)v6 + 3) = v32;
          else
            *((_DWORD *)v6 + 3) = 1;
        }
        else
        {
          *((_DWORD *)v6 + 3) = -1;
        }
        goto LABEL_62;
      }
      if ( PerformanceFrequency.QuadPart )
      {
        v31 = 10000000 * v31 / PerformanceFrequency.QuadPart;
        goto LABEL_56;
      }
LABEL_62:
      v24 = v41;
      v26 = a1;
      goto LABEL_63;
    }
LABEL_44:
    v29.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_45;
  }
LABEL_63:
  if ( v27.QuadPart )
  {
    v33 = *(_QWORD *)(v27.QuadPart + 688);
    v34 = v33 / 0x2710;
    if ( v33 / 0x2710 <= 0xFFFFFFFF )
    {
      if ( v34 || !v33 )
        *((_DWORD *)v6 + 4) = v34;
      else
        *((_DWORD *)v6 + 4) = 1;
    }
    else
    {
      *((_DWORD *)v6 + 4) = -1;
    }
    goto LABEL_73;
  }
LABEL_70:
  if ( *(_BYTE *)(v26 + 2528) == 1 && *v6 == 9 )
    *((_DWORD *)v6 + 4) = 5000000 * *(_DWORD *)(v26 + 2552);
LABEL_73:
  *((_DWORD *)v6 + 5) = *(_DWORD *)(v26 + 416);
  if ( v24 < 0 && v11 && v23 >= 8u && (unsigned __int8)((*v11 & 0x7F) - 112) <= 1u )
  {
    v6[2] = v11[2] & 0xF;
    v6[3] = v11[12];
    v6[4] = v11[13];
  }
  result = *(unsigned int *)(v26 + 1864);
  *((_DWORD *)v6 + 8) = result;
  return result;
}
