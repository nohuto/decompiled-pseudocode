/*
 * XREFs of SfnGESTURE @ 0x1C0205B90
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnGESTURE(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 result; // rax
  unsigned __int64 v23; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-98h]
  __int128 v25; // [rsp+58h] [rbp-90h]
  __int64 v26; // [rsp+68h] [rbp-80h]
  _QWORD v27[9]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v28[3]; // [rsp+B8h] [rbp-30h] BYREF
  int v29; // [rsp+F0h] [rbp+8h] BYREF

  v24 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  memset(v27, 0, 0x30uLL);
  LOBYTE(v11) = 21;
  if ( !HMValidateHandle(a4, v11, v12, v13) )
    return 0LL;
  v27[0] = v10;
  LODWORD(v27[1]) = a2;
  v27[2] = a3;
  v27[3] = a4;
  v27[4] = a5;
  v27[5] = a6;
  v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v25 = *(_OWORD *)(v14 + 64);
  v26 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v10;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v15;
  if ( a1 )
    v16 = a1[33];
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v16;
  if ( gdwInAtomicOperation )
  {
    v16 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation);
  EtwTraceBeginCallback(113LL);
  v17 = KeUserModeCallback(113LL, v27, 48LL, &v23, &v29);
  EtwTraceEndCallback(113LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v20 + 64) = v25;
  *(_QWORD *)(v20 + 80) = v26;
  if ( v17 < 0 || v29 != 24 )
    return 0LL;
  v21 = (__int64 *)v23;
  if ( v23 + 8 < v23 || v23 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  result = *v21;
  v24 = *v21;
  return result;
}
