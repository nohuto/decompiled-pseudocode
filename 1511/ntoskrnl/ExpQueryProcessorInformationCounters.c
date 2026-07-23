/*
 * XREFs of ExpQueryProcessorInformationCounters @ 0x1404D0F74
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1404D07B8 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     PoGetIdleTimes @ 0x14009D63C (PoGetIdleTimes.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1401F11AC (PoGetPerfStateAndParkingInfo.c)
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
  _PROCESSOR_NUMBER ProcNumber; // [rsp+28h] [rbp-51h] BYREF
  int v18[8]; // [rsp+30h] [rbp-49h] BYREF
  int v19; // [rsp+50h] [rbp-29h] BYREF
  int v20; // [rsp+54h] [rbp-25h]
  __int64 v21; // [rsp+58h] [rbp-21h]
  __int64 v22; // [rsp+60h] [rbp-19h]
  _DWORD v23[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v24; // [rsp+70h] [rbp-9h]
  _BYTE v25[8]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v26; // [rsp+80h] [rbp+7h]
  __int64 v27; // [rsp+88h] [rbp+Fh]
  __int64 v28; // [rsp+90h] [rbp+17h]
  unsigned int v29; // [rsp+98h] [rbp+1Fh]
  unsigned int v30; // [rsp+9Ch] [rbp+23h]
  unsigned int v31; // [rsp+A0h] [rbp+27h]

  v5 = 0;
  ProcNumber.Group = *(unsigned __int8 *)(a1 + 1616);
  ProcNumber.Number = *(_BYTE *)(a1 + 1617);
  ProcNumber.Reserved = 0;
  if ( a2 )
  {
    PoGetIdleTimes(&ProcNumber, (__int64)v25, (__int64)v23);
    v9 = KeMaximumIncrement;
    v10 = v23[0];
    *(_QWORD *)(a5 + 72) = v26;
    *(_QWORD *)(a5 + 96) = v29;
    *(_QWORD *)(a5 + 80) = v27;
    *(_QWORD *)(a5 + 104) = v30;
    *(_QWORD *)(a5 + 88) = v28;
    *(_QWORD *)(a5 + 112) = v31;
    *(_QWORD *)(a5 + 120) = v24;
    v11 = v9 * v10;
    *(_QWORD *)a5 = v11;
    *(_QWORD *)(a5 + 8) = v11 + v9 * *(unsigned int *)(a1 + 23344);
    *(_QWORD *)(a5 + 24) = v9 * v23[1] - v11;
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
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  v22 = 0LL;
  v12 = 0;
  v13 = (unsigned __int64)&v19 & -(__int64)(a4 != 0);
  v20 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v21 = 0LL;
  if ( a3 || v13 )
  {
    PoGetPerfStateAndParkingInfo(&ProcNumber, v18, v13, 0LL);
    v15 = v22;
    v14 = v21;
    v12 = v20;
    v5 = v19;
  }
  *(_DWORD *)(a5 + 128) = BYTE1(v18[7]);
  *(_DWORD *)(a5 + 132) = v18[1];
  *(_DWORD *)(a5 + 136) = v18[2];
  *(_DWORD *)(a5 + 140) = v18[0];
  *(_DWORD *)(a5 + 184) = v18[5];
  result = (unsigned int)v18[6];
  *(_DWORD *)(a5 + 188) = v18[6];
  *(_DWORD *)(a5 + 144) = v5;
  *(_DWORD *)(a5 + 148) = v12;
  *(_QWORD *)(a5 + 152) = v14;
  *(_QWORD *)(a5 + 160) = v15;
  return result;
}
