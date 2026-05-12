/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C0007BA4
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C0007970 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned __int8 v5; // al
  char *v7; // rsi
  int v8; // r14d
  char v9; // r12
  _BYTE *v10; // r15
  int v11; // r13d
  _BYTE *v12; // rdi
  char v13; // al
  unsigned __int8 v14; // bl
  char v15; // r9
  char v16; // al
  char v17; // al
  __int64 v18; // r8
  union _LARGE_INTEGER v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 result; // rax
  bool v23; // zf
  LARGE_INTEGER v24; // rax
  LARGE_INTEGER v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // r10
  unsigned int v29; // r11d
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  unsigned __int8 v37; // [rsp+20h] [rbp-18h]
  int v38; // [rsp+24h] [rbp-14h]
  __int64 v39; // [rsp+28h] [rbp-10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+58h] BYREF
  char v43; // [rsp+98h] [rbp+60h]

  PerformanceFrequency = a3;
  v5 = *(_BYTE *)(a4 + 2);
  v43 = *(_BYTE *)(a4 + 3);
  v7 = 0LL;
  v8 = 0;
  v37 = 0;
  v9 = 0;
  v38 = 0;
  v10 = 0LL;
  if ( v5 == 40 )
    v11 = *(_DWORD *)(a4 + 20);
  else
    v11 = v5;
  v12 = a5;
  memset(a5, 0, 0x28uLL);
  v13 = *(_BYTE *)(a4 + 2);
  if ( v13 != 40 )
  {
    if ( v13 )
      goto LABEL_37;
    v8 = *(unsigned __int8 *)(a4 + 10);
    if ( *(_BYTE *)(a4 + 10) )
      v7 = (char *)(a4 + 72);
    v9 = *(_BYTE *)(a4 + 4);
    v10 = *(_BYTE **)(a4 + 32);
    v14 = *(_BYTE *)(a4 + 11);
    goto LABEL_8;
  }
  v28 = 0;
  if ( *(_DWORD *)(a4 + 20) )
  {
    v9 = 0;
    v37 = 0;
    goto LABEL_37;
  }
  v29 = *(_DWORD *)(a4 + 56);
  v30 = 0LL;
  if ( !v29 )
    goto LABEL_37;
  while ( 1 )
  {
    v31 = *(unsigned int *)(a4 + 4 * v30 + 120);
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(a4 + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_68:
    v30 = (unsigned int)(v30 + 1);
    if ( (unsigned int)v30 >= v29 )
    {
LABEL_69:
      v8 = v38;
      goto LABEL_37;
    }
  }
  v33 = (unsigned int)v31;
  v34 = *(_DWORD *)(v31 + a4) - 64;
  if ( !v34 )
  {
    if ( v33 + 40 > v32 )
      goto LABEL_67;
    v28 = 1;
    LOBYTE(v38) = *(_BYTE *)(v33 + a4 + 10);
    if ( (_BYTE)v38 )
      v7 = (char *)(v33 + a4 + 24);
    v37 = *(_BYTE *)(v33 + a4 + 9);
    goto LABEL_66;
  }
  v35 = v34 - 1;
  if ( !v35 )
  {
    if ( v33 + 56 > v32 )
      goto LABEL_67;
    v28 = 1;
    LOBYTE(v38) = *(_BYTE *)(v33 + a4 + 10);
    if ( (_BYTE)v38 )
      v7 = (char *)(v33 + a4 + 24);
    v37 = *(_BYTE *)(v33 + a4 + 9);
LABEL_66:
    v10 = *(_BYTE **)(v33 + a4 + 16);
    v9 = *(_BYTE *)(v33 + a4 + 8);
    goto LABEL_67;
  }
  if ( v35 != 1 || v33 + 40 > v32 )
  {
LABEL_67:
    if ( v28 )
      goto LABEL_69;
    goto LABEL_68;
  }
  v8 = *(_DWORD *)(v33 + a4 + 12);
  if ( v8 )
    v7 = (char *)(v33 + a4 + 32);
  v9 = *(_BYTE *)(v33 + a4 + 8);
  v10 = *(_BYTE **)(v33 + a4 + 24);
  v37 = *(_BYTE *)(v33 + a4 + 9);
LABEL_37:
  v14 = v37;
LABEL_8:
  v15 = v43;
  v16 = v43;
  v12[1] = v9;
  v12[5] = -1;
  *v12 = v16 & 0x3F;
  if ( v7 )
  {
    v17 = *v7;
    v12[5] = *v7;
    if ( !v11 && ((v17 - 8) & 0x5D) == 0 )
    {
      if ( v8 == 16 )
      {
        HIBYTE(v39) = v7[2];
        BYTE6(v39) = v7[3];
        BYTE5(v39) = v7[4];
        BYTE4(v39) = v7[5];
        BYTE3(v39) = v7[6];
        BYTE2(v39) = v7[7];
        BYTE1(v39) = v7[8];
        LOBYTE(v39) = v7[9];
      }
      else
      {
        v39 = (unsigned __int8)v7[5] | (((unsigned __int8)v7[4] | (((unsigned __int8)v7[3] | ((unsigned __int8)v7[2] << 8)) << 8)) << 8);
      }
      *((_QWORD *)v12 + 3) = v39;
      if ( a2 )
      {
        v36 = *(_QWORD *)(a2 + 8);
        if ( v36 )
          *((_DWORD *)v12 + 2) = *(_DWORD *)(v36 + 40);
      }
    }
  }
  v18 = a1;
  v19 = PerformanceFrequency;
  if ( *(_DWORD *)(a1 + 1844) == 1 )
  {
    if ( !PerformanceFrequency.QuadPart )
      goto LABEL_84;
    PerformanceFrequency.QuadPart = 0LL;
    if ( StorEtwLoggingEnabled )
    {
      v23 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        v25.QuadPart = 0LL;
        goto LABEL_25;
      }
      if ( !UseQPCTime )
        goto LABEL_80;
      v23 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v23 )
    {
      v24 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_24:
      v25 = v24;
LABEL_25:
      v26 = v25.QuadPart - *(_QWORD *)(v19.QuadPart + 696);
      if ( StorEtwLoggingEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_32;
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !PerformanceFrequency.QuadPart )
            goto LABEL_36;
          v26 = 10000000 * v26 / PerformanceFrequency.QuadPart;
        }
      }
      if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
      {
LABEL_32:
        v27 = v26 / 10000;
        if ( (unsigned __int64)(v26 / 10000) > 0xFFFFFFFF )
        {
          *((_DWORD *)v12 + 3) = -1;
        }
        else if ( v27 || !v26 )
        {
          *((_DWORD *)v12 + 3) = v27;
        }
        else
        {
          *((_DWORD *)v12 + 3) = 1;
        }
        goto LABEL_36;
      }
      if ( PerformanceFrequency.QuadPart )
      {
        v26 = 10000000 * v26 / PerformanceFrequency.QuadPart;
        goto LABEL_32;
      }
LABEL_36:
      v15 = v43;
      v18 = a1;
      goto LABEL_12;
    }
LABEL_80:
    v24.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_24;
  }
LABEL_12:
  if ( v19.QuadPart )
  {
    v20 = *(_QWORD *)(v19.QuadPart + 688);
    v21 = v20 / 0x2710;
    if ( v20 / 0x2710 > 0xFFFFFFFF )
    {
      *((_DWORD *)v12 + 4) = -1;
    }
    else if ( !v21 && v20 )
    {
      *((_DWORD *)v12 + 4) = 1;
    }
    else
    {
      *((_DWORD *)v12 + 4) = v21;
    }
    goto LABEL_17;
  }
LABEL_84:
  if ( *(_BYTE *)(v18 + 2552) == 1 && *v12 == 9 )
    *((_DWORD *)v12 + 4) = 5000000 * *(_DWORD *)(v18 + 2576);
LABEL_17:
  *((_DWORD *)v12 + 5) = *(_DWORD *)(v18 + 416);
  if ( v15 < 0 && v10 && v14 >= 8u && (unsigned __int8)((*v10 & 0x7F) - 112) <= 1u )
  {
    v12[2] = v10[2] & 0xF;
    v12[3] = v10[12];
    v12[4] = v10[13];
  }
  result = *(unsigned int *)(v18 + 1888);
  *((_DWORD *)v12 + 8) = result;
  return result;
}
