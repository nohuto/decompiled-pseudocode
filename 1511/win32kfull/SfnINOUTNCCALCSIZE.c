/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C00DE750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 *v11; // r15
  __int64 v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm6
  __int64 v19; // xmm1_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int128 v30; // xmm0
  __int64 v31; // rax
  unsigned __int64 v33; // [rsp+30h] [rbp-168h] BYREF
  int v34; // [rsp+38h] [rbp-160h] BYREF
  __int128 v35; // [rsp+40h] [rbp-158h]
  unsigned __int64 v36; // [rsp+50h] [rbp-148h]
  _QWORD v37[5]; // [rsp+58h] [rbp-140h] BYREF
  __int128 v38; // [rsp+80h] [rbp-118h]
  __int64 v39; // [rsp+90h] [rbp-108h]
  __int128 v40; // [rsp+98h] [rbp-100h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-F0h]
  _OWORD v42[9]; // [rsp+B0h] [rbp-E8h] BYREF

  v33 = a3;
  v11 = (__int64 *)gptiCurrent;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  v13 = 136;
  memset(v42, 0, 0x88uLL);
  *(_QWORD *)&v42[0] = v12;
  DWORD2(v42[0]) = a2;
  v15 = v33;
  *(_QWORD *)&v42[1] = v33;
  *((_QWORD *)&v42[1] + 1) = a5;
  *(_QWORD *)&v42[2] = a6;
  *(_OWORD *)((char *)&v42[2] + 8) = *(_OWORD *)a4;
  if ( v33 )
  {
    *(_OWORD *)((char *)&v42[3] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v42[4] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v42[5] + 1) = *(_QWORD *)(a4 + 48);
    *(_DWORD *)(*((_QWORD *)&v42[5] + 1) + 36LL) = 0;
    v42[6] = **((_OWORD **)&v42[5] + 1);
    v42[7] = *(_OWORD *)(*((_QWORD *)&v42[5] + 1) + 16LL);
    *(_QWORD *)&v42[8] = *(_QWORD *)(*((_QWORD *)&v42[5] + 1) + 32LL);
    *((_QWORD *)&v42[5] + 1) = 0LL;
    v11 = (__int64 *)gptiCurrent;
  }
  else
  {
    v13 = 56;
  }
  v16 = *v11;
  v37[0] = *(_QWORD *)(*v11 + 368);
  *(_QWORD *)(v16 + 368) = v37;
  v37[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  v18 = *(_OWORD *)(v17 + 64);
  v38 = v18;
  v19 = *(_QWORD *)(v17 + 80);
  v39 = v19;
  *(_QWORD *)(v17 + 72) = v12;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v20;
  if ( a1 )
    v21 = a1[33];
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v21;
  UserSessionSwitchLeaveCrit(v21, v14);
  EtwTraceBeginCallback(21LL);
  v22 = KeUserModeCallback(21LL, v42, v13, &v33, &v34);
  EtwTraceEndCallback(21LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v24, v23);
  v25 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v25 + 64) = v18;
  *(_QWORD *)(v25 + 80) = v19;
  if ( v22 < 0 || v34 != 24 )
    return 0LL;
  v26 = (__int64 *)v33;
  if ( v33 + 8 < v33 || v33 + 8 > W32UserProbeAddress )
    v26 = (__int64 *)W32UserProbeAddress;
  v27 = *v26;
  v37[3] = *v26;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v28 = v33;
    if ( v33 + 24 < v33 || v33 + 24 > W32UserProbeAddress )
      v28 = W32UserProbeAddress;
    v35 = *(_OWORD *)v28;
    v36 = *(_QWORD *)(v28 + 16);
    v40 = v35;
    v41 = v36;
    if ( (v36 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v29 = v36;
    if ( v36 + 96 > W32UserProbeAddress || v36 + 96 < v36 )
      *W32UserProbeAddress = 0;
    v30 = *(_OWORD *)v29;
    if ( v15 )
    {
      v31 = *(_QWORD *)(a4 + 48);
      *(_OWORD *)a4 = v30;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(v29 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(v29 + 32);
      *(_QWORD *)(a4 + 48) = *(_QWORD *)(v29 + 48);
      *(_OWORD *)v31 = *(_OWORD *)(v29 + 56);
      *(_OWORD *)(v31 + 16) = *(_OWORD *)(v29 + 72);
      *(_QWORD *)(v31 + 32) = *(_QWORD *)(v29 + 88);
      *(_QWORD *)(a4 + 48) = v31;
    }
    else
    {
      *(_OWORD *)a4 = v30;
    }
  }
  return v27;
}
