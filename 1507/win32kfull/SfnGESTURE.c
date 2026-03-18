/*
 * XREFs of SfnGESTURE @ 0x1C020E3E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnGESTURE(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 result; // rax
  unsigned __int64 v21; // [rsp+30h] [rbp-98h] BYREF
  __int64 v22; // [rsp+38h] [rbp-90h]
  _QWORD v23[7]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v24[3]; // [rsp+78h] [rbp-50h] BYREF
  __int128 v25; // [rsp+90h] [rbp-38h]
  __int64 v26; // [rsp+A0h] [rbp-28h]
  int v27; // [rsp+D0h] [rbp+8h] BYREF

  if ( a1 )
    v10 = a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v10 = 0LL;
  memset(v23, 0, 0x30uLL);
  if ( !HMValidateHandle(a4, 21) )
    return 0LL;
  v23[0] = v10;
  LODWORD(v23[1]) = a2;
  v23[2] = a3;
  v23[3] = a4;
  v23[4] = a5;
  v23[5] = a6;
  v24[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v24;
  v24[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  v12 = *(_QWORD *)(gptiCurrent + 440LL);
  v25 = *(_OWORD *)(v12 + 64);
  v22 = *(_QWORD *)(v12 + 80);
  *(_QWORD *)(v12 + 72) = v10;
  v13 = a1 ? *(_QWORD *)a1 : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v13;
  v14 = a1 ? *(_QWORD *)(a1 + 264) : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v14;
  UserSessionSwitchLeaveCrit(v14, v11);
  EtwTraceBeginCallback(112LL);
  v15 = KeUserModeCallback(112LL, v23, 48LL, &v21, &v27);
  EtwTraceEndCallback(112LL);
  EnterCrit(1LL);
  ThreadUnlock1(v17, v16);
  v18 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v18 + 64) = v25;
  *(_QWORD *)(v18 + 80) = v22;
  if ( v15 < 0 || v27 != 24 )
    return 0LL;
  v19 = (__int64 *)v21;
  if ( v21 + 8 < v21 || v21 + 8 > W32UserProbeAddress )
    v19 = (__int64 *)W32UserProbeAddress;
  result = *v19;
  v26 = *v19;
  return result;
}
