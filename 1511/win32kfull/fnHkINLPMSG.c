/*
 * XREFs of fnHkINLPMSG @ 0x1C005CBA0
 * Callers:
 *     xxxCallCtfHook @ 0x1C00575D0 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C005C740 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0148DC4 (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01DCFC0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C02044A0 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0249D5C (RtlMBMessageWParamCharToWCS.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall fnHkINLPMSG(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _DWORD *v17; // rax
  int v18; // r10d
  int v19; // edi
  unsigned int v20; // r9d
  __int64 *v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  int v26; // ecx
  unsigned __int64 v28; // [rsp+40h] [rbp-C8h]
  _QWORD v29[23]; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v31; // [rsp+118h] [rbp+10h] BYREF
  __int64 v32; // [rsp+120h] [rbp+18h]
  __int64 v33; // [rsp+128h] [rbp+20h]

  v33 = a4;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  memset(v29, 0, 0x58uLL);
  LODWORD(v29[0]) = a1;
  v29[1] = a2;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_OWORD *)&v29[4] = *(_OWORD *)a3;
  *(_OWORD *)&v29[6] = *(_OWORD *)(a3 + 16);
  *(_OWORD *)&v29[8] = *(_OWORD *)(a3 + 32);
  v16 = *(_DWORD *)(a3 + 8);
  if ( ((v16 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v16 == 576 || ((v16 - 281) & 0xFFFFFFFD) == 0 )
    {
      v10 = *(_QWORD *)(a3 + 16);
      v11 = *(_QWORD *)(a3 + 24);
      v17 = (_DWORD *)HMValidateHandle(v11, 255);
      if ( !v17 )
        return 0LL;
      v18 = *(_DWORD *)(a3 + 8);
      if ( v18 == 576 )
      {
        v14 = (unsigned __int16)*v17;
        if ( *(_BYTE *)((unsigned int)(v14 * *((_DWORD *)&gSharedInfo + 4)) + *((_QWORD *)&gSharedInfo + 1) + 16LL) != 20 )
          return 0LL;
      }
      if ( ((v18 - 281) & 0xFFFFFFFD) == 0
        && *(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*v17
                    + *((_QWORD *)&gSharedInfo + 1)
                    + 16LL) != 21 )
      {
        return 0LL;
      }
      v12 = *(_QWORD *)(gptiCurrent + 616LL);
      v13 = *(_QWORD *)(gptiCurrent + 624LL);
      *(_QWORD *)(gptiCurrent + 616LL) = v11;
      v15 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 624LL) = v10;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 16);
    RtlWCSMessageWParamCharToMB(v16, &v29[6]);
  }
  v29[2] = v33;
  v29[3] = a5;
  LODWORD(v29[10]) = *a7;
  UserSessionSwitchLeaveCrit(v15, v14);
  EtwTraceBeginCallback(47LL);
  v19 = KeUserModeCallback(47LL, v29, 88LL, &v31, &v30);
  EtwTraceEndCallback(47LL);
  EnterCrit(0LL, 1LL);
  v20 = v16 - 576;
  if ( v16 == 576 || ((v16 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_QWORD *)(gptiCurrent + 616LL) = v12;
    *(_QWORD *)(gptiCurrent + 624LL) = v13;
  }
  if ( v19 < 0 || v30 != 24 )
    return 0LL;
  v21 = (__int64 *)v31;
  if ( v31 + 8 < v31 || v31 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v32 = *v21;
  v23 = v31;
  if ( v31 + 24 < v31 || v31 + 24 > W32UserProbeAddress )
    v23 = W32UserProbeAddress;
  v28 = *(_QWORD *)(v23 + 16);
  *(_OWORD *)&v29[13] = *(_OWORD *)v23;
  v29[15] = v28;
  if ( (v28 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v28 + 56 > W32UserProbeAddress || v28 + 56 < v28 )
    *W32UserProbeAddress = 0;
  *(_OWORD *)a3 = *(_OWORD *)v28;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v28 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v28 + 32);
  *a7 ^= (*a7 ^ *(_DWORD *)(v28 + 48)) & 0x10;
  v24 = *(unsigned int *)(a3 + 8);
  if ( (((_DWORD)v24 - 258) & 0xFFFFFFFB) == 0 && a6 )
  {
    v25 = (_QWORD *)(a3 + 16);
    if ( v29[6] == *(_QWORD *)(a3 + 16) )
    {
      *v25 = v10;
    }
    else
    {
      RtlMBMessageWParamCharToWCS(v24, v25);
      v20 = v16 - 576;
    }
  }
  v26 = *(_DWORD *)(a3 + 8);
  if ( v26 == 576 || ((v26 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a3 + 8) = v16;
    *(_QWORD *)(a3 + 16) = v10;
    *(_QWORD *)(a3 + 24) = v11;
  }
  else if ( v10 == 1 )
  {
    if ( !v20 )
      FreeTouchInputInfo(v11, 1LL);
    if ( ((v16 - 281) & 0xFFFFFFFD) == 0 )
      FreeGestureInfo(v11, 1LL);
  }
  return (unsigned int)v22;
}
