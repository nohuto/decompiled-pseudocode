/*
 * XREFs of ExpQueryProcessorInformationCounters @ 0x1404FABCC
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1404FA400 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     PoGetIdleTimes @ 0x140014610 (PoGetIdleTimes.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14023F454 (PoGetPerfStateAndParkingInfo.c)
 */

__int64 __fastcall ExpQueryProcessorInformationCounters(__int64 a1, char a2, char a3, char a4, __int64 a5)
{
  int v5; // edi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 result; // rax
  __int16 v17; // [rsp+28h] [rbp-51h] BYREF
  char v18; // [rsp+2Ah] [rbp-4Fh]
  char v19; // [rsp+2Bh] [rbp-4Eh]
  _DWORD v20[8]; // [rsp+30h] [rbp-49h] BYREF
  int v21; // [rsp+50h] [rbp-29h] BYREF
  int v22; // [rsp+54h] [rbp-25h]
  __int64 v23; // [rsp+58h] [rbp-21h]
  __int64 v24; // [rsp+60h] [rbp-19h]
  _DWORD v25[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h]
  _BYTE v27[8]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v28; // [rsp+80h] [rbp+7h]
  __int64 v29; // [rsp+88h] [rbp+Fh]
  __int64 v30; // [rsp+90h] [rbp+17h]
  unsigned int v31; // [rsp+98h] [rbp+1Fh]
  unsigned int v32; // [rsp+9Ch] [rbp+23h]
  unsigned int v33; // [rsp+A0h] [rbp+27h]

  v5 = 0;
  v17 = *(unsigned __int8 *)(a1 + 1616);
  v18 = *(_BYTE *)(a1 + 1617);
  v19 = 0;
  if ( a2 )
  {
    PoGetIdleTimes((__int64)&v17, (__int64)v27, (__int64)v25);
    v9 = KeMaximumIncrement;
    v10 = v25[0];
    *(_QWORD *)(a5 + 72) = v28;
    *(_QWORD *)(a5 + 96) = v31;
    *(_QWORD *)(a5 + 80) = v29;
    *(_QWORD *)(a5 + 104) = v32;
    *(_QWORD *)(a5 + 88) = v30;
    *(_QWORD *)(a5 + 112) = v33;
    *(_QWORD *)(a5 + 120) = v26;
    v11 = v9 * v10;
    *(_QWORD *)a5 = v11;
    *(_QWORD *)(a5 + 8) = v11 + v9 * *(unsigned int *)(a1 + 23344);
    *(_QWORD *)(a5 + 24) = v9 * v25[1] - v11;
  }
  else
  {
    LODWORD(v9) = KeMaximumIncrement;
    *(_QWORD *)a5 = 0LL;
    *(_QWORD *)(a5 + 72) = 0LL;
    *(_QWORD *)(a5 + 80) = 0LL;
    *(_QWORD *)(a5 + 88) = 0LL;
    *(_QWORD *)(a5 + 96) = 0LL;
    *(_QWORD *)(a5 + 104) = 0LL;
    *(_QWORD *)(a5 + 112) = 0LL;
    *(_QWORD *)(a5 + 8) = 0LL;
    *(_QWORD *)(a5 + 24) = 0LL;
    *(_QWORD *)(a5 + 120) = 0LL;
  }
  *(_QWORD *)(a5 + 16) = (unsigned int)v9 * (unsigned __int64)*(unsigned int *)(a1 + 23304);
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(a1 + 23296);
  *(_QWORD *)(a5 + 48) = (unsigned int)v9 * (unsigned __int64)*(unsigned int *)(a1 + 23312);
  *(_DWORD *)(a5 + 60) = *(_DWORD *)(a1 + 11676);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(a1 + 11740);
  *(_QWORD *)(a5 + 40) = (unsigned int)v9 * (unsigned __int64)*(unsigned int *)(a1 + 23308);
  *(_DWORD *)(a5 + 56) = *(_DWORD *)(a1 + 11768);
  *(_QWORD *)(a5 + 168) = *(_QWORD *)(a5 + 72) + *(_QWORD *)(a5 + 80) + *(_QWORD *)(a5 + 88);
  *(_QWORD *)(a5 + 176) = *(_QWORD *)(a5 + 104) + *(_QWORD *)(a5 + 112) + *(_QWORD *)(a5 + 96);
  memset(v20, 0, sizeof(v20));
  v21 = 0;
  v24 = 0LL;
  v12 = 0;
  v13 = (unsigned __int64)&v21 & -(__int64)(a4 != 0);
  v22 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v23 = 0LL;
  if ( a3 || v13 )
  {
    PoGetPerfStateAndParkingInfo((__int64)&v17, (__int64)v20, v13, 0LL);
    v15 = v24;
    v14 = v23;
    v12 = v22;
    v5 = v21;
  }
  *(_DWORD *)(a5 + 128) = BYTE1(v20[7]);
  *(_DWORD *)(a5 + 132) = v20[1];
  *(_DWORD *)(a5 + 136) = v20[2];
  *(_DWORD *)(a5 + 140) = v20[0];
  *(_DWORD *)(a5 + 184) = v20[5];
  result = v20[6];
  *(_DWORD *)(a5 + 188) = v20[6];
  *(_DWORD *)(a5 + 144) = v5;
  *(_DWORD *)(a5 + 148) = v12;
  *(_QWORD *)(a5 + 152) = v14;
  *(_QWORD *)(a5 + 160) = v15;
  return result;
}
