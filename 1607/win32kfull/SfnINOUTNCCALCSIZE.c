/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C00FE1D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
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
  unsigned int v13; // r13d
  unsigned __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm6
  __int64 v18; // xmm1_8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // r9
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int128 v30; // xmm0
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+30h] [rbp-1B8h] BYREF
  _DWORD v33[12]; // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-180h]
  __int128 v35; // [rsp+70h] [rbp-178h]
  unsigned __int64 v36; // [rsp+80h] [rbp-168h]
  __int64 v37; // [rsp+88h] [rbp-160h]
  _QWORD v38[3]; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-120h]
  __int64 v40; // [rsp+D8h] [rbp-110h]
  __int128 v41; // [rsp+E0h] [rbp-108h]
  unsigned __int64 v42; // [rsp+F0h] [rbp-F8h]
  _OWORD v43[9]; // [rsp+100h] [rbp-E8h] BYREF

  v32 = a3;
  v34 = 0LL;
  v11 = (__int64 *)gptiCurrent;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  v13 = 136;
  memset(v43, 0, 0x88uLL);
  *(_QWORD *)&v43[0] = v12;
  DWORD2(v43[0]) = a2;
  v14 = v32;
  *(_QWORD *)&v43[1] = v32;
  *((_QWORD *)&v43[1] + 1) = a5;
  *(_QWORD *)&v43[2] = a6;
  *(_OWORD *)((char *)&v43[2] + 8) = *(_OWORD *)a4;
  if ( v32 )
  {
    *(_OWORD *)((char *)&v43[3] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v43[4] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v43[5] + 1) = *(_QWORD *)(a4 + 48);
    *(_DWORD *)(*((_QWORD *)&v43[5] + 1) + 36LL) = 0;
    v43[6] = **((_OWORD **)&v43[5] + 1);
    v43[7] = *(_OWORD *)(*((_QWORD *)&v43[5] + 1) + 16LL);
    *(_QWORD *)&v43[8] = *(_QWORD *)(*((_QWORD *)&v43[5] + 1) + 32LL);
    *((_QWORD *)&v43[5] + 1) = 0LL;
    v11 = (__int64 *)gptiCurrent;
  }
  else
  {
    v13 = 56;
  }
  v15 = *v11;
  v38[0] = *(_QWORD *)(*v11 + 368);
  *(_QWORD *)(v15 + 368) = v38;
  v38[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v17 = *(_OWORD *)(v16 + 64);
  v39 = v17;
  v18 = *(_QWORD *)(v16 + 80);
  v40 = v18;
  *(_QWORD *)(v16 + 72) = v12;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v19;
  if ( a1 )
    v20 = a1[33];
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v20;
  if ( gdwInAtomicOperation )
  {
    v20 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation);
  EtwTraceBeginCallback(21LL);
  v21 = KeUserModeCallback(21LL, v43, v13, &v32, v33);
  EtwTraceEndCallback(21LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v24 + 64) = v17;
  *(_QWORD *)(v24 + 80) = v18;
  if ( v21 < 0 || v33[0] != 24 )
    return 0LL;
  v25 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > W32UserProbeAddress )
    v25 = (__int64 *)W32UserProbeAddress;
  v26 = *v25;
  v34 = *v25;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v28 = v32;
    if ( v32 + 24 < v32 || v32 + 24 > W32UserProbeAddress )
      v28 = W32UserProbeAddress;
    v35 = *(_OWORD *)v28;
    v36 = *(_QWORD *)(v28 + 16);
    v41 = v35;
    v42 = v36;
    if ( (v36 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v29 = v36;
    if ( v36 + 96 > W32UserProbeAddress || v36 + 96 < v36 )
      *W32UserProbeAddress = 0;
    v30 = *(_OWORD *)v29;
    if ( v14 )
    {
      v37 = *(_QWORD *)(a4 + 48);
      v31 = v37;
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
  return v26;
}
