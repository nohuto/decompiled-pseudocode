/*
 * XREFs of ExpQueryProcessorInformationCounters @ 0x140406ACC
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x140406328 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     PoGetIdleTimes @ 0x14000D734 (PoGetIdleTimes.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14020A0E4 (PoGetPerfStateAndParkingInfo.c)
 */

__int64 __fastcall ExpQueryProcessorInformationCounters(__int64 a1, char a2, char a3, char a4, __int64 a5)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-51h] BYREF
  int v17[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v18; // [rsp+48h] [rbp-29h] BYREF
  __int64 v19; // [rsp+50h] [rbp-21h]
  __int64 v20; // [rsp+58h] [rbp-19h]
  _DWORD v21[2]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v22; // [rsp+68h] [rbp-9h]
  _BYTE v23[8]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v24; // [rsp+78h] [rbp+7h]
  __int64 v25; // [rsp+80h] [rbp+Fh]
  __int64 v26; // [rsp+88h] [rbp+17h]
  unsigned int v27; // [rsp+90h] [rbp+1Fh]
  unsigned int v28; // [rsp+94h] [rbp+23h]
  unsigned int v29; // [rsp+98h] [rbp+27h]

  ProcNumber.Group = *(unsigned __int8 *)(a1 + 1616);
  ProcNumber.Number = *(_BYTE *)(a1 + 1617);
  ProcNumber.Reserved = 0;
  if ( a2 )
  {
    PoGetIdleTimes(&ProcNumber, (__int64)v23, (__int64)v21);
    v8 = KeMaximumIncrement;
    v9 = v21[0];
    *(_QWORD *)(a5 + 72) = v24;
    *(_QWORD *)(a5 + 96) = v27;
    *(_QWORD *)(a5 + 80) = v25;
    *(_QWORD *)(a5 + 104) = v28;
    *(_QWORD *)(a5 + 88) = v26;
    *(_QWORD *)(a5 + 112) = v29;
    *(_QWORD *)(a5 + 120) = v22;
    v10 = v8 * v9;
    *(_QWORD *)a5 = v10;
    *(_QWORD *)(a5 + 8) = v10 + v8 * *(unsigned int *)(a1 + 23344);
    *(_QWORD *)(a5 + 24) = v8 * v21[1] - v10;
  }
  else
  {
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
    LODWORD(v8) = KeMaximumIncrement;
  }
  *(_QWORD *)(a5 + 16) = (unsigned int)v8 * (unsigned __int64)*(unsigned int *)(a1 + 23304);
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(a1 + 23296);
  *(_QWORD *)(a5 + 48) = (unsigned int)v8 * (unsigned __int64)*(unsigned int *)(a1 + 23312);
  *(_DWORD *)(a5 + 60) = *(_DWORD *)(a1 + 11676);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(a1 + 11740);
  *(_QWORD *)(a5 + 40) = (unsigned int)v8 * (unsigned __int64)*(unsigned int *)(a1 + 23308);
  *(_DWORD *)(a5 + 56) = *(_DWORD *)(a1 + 11768);
  *(_QWORD *)(a5 + 168) = *(_QWORD *)(a5 + 72) + *(_QWORD *)(a5 + 80) + *(_QWORD *)(a5 + 88);
  *(_QWORD *)(a5 + 176) = *(_QWORD *)(a5 + 104) + *(_QWORD *)(a5 + 112) + *(_QWORD *)(a5 + 96);
  memset(v17, 0, sizeof(v17));
  v11 = 0;
  v18 = 0LL;
  v12 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v13 = (unsigned __int64)&v18 & -(__int64)(a4 != 0);
  v14 = 0LL;
  if ( a3 || v13 )
  {
    PoGetPerfStateAndParkingInfo(&ProcNumber, v17, v13, 0LL);
    v14 = v20;
    v12 = v19;
    v11 = v18;
  }
  *(_DWORD *)(a5 + 128) = BYTE1(v17[7]);
  *(_DWORD *)(a5 + 132) = v17[1];
  *(_DWORD *)(a5 + 136) = v17[2];
  *(_DWORD *)(a5 + 140) = v17[0];
  *(_DWORD *)(a5 + 184) = v17[5];
  *(_DWORD *)(a5 + 188) = v17[6];
  result = HIDWORD(v18);
  *(_DWORD *)(a5 + 148) = HIDWORD(v18);
  *(_DWORD *)(a5 + 144) = v11;
  *(_QWORD *)(a5 + 152) = v12;
  *(_QWORD *)(a5 + 160) = v14;
  return result;
}
