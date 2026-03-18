/*
 * XREFs of fnHkINLPMSG @ 0x1C006CF90
 * Callers:
 *     xxxCallCtfHook @ 0x1C0067860 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C006CB30 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C011F0F4 (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01DC920 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0204130 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0249D9C (RtlMBMessageWParamCharToWCS.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
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
  int v24; // ecx
  unsigned __int64 v26; // [rsp+40h] [rbp-C8h]
  _QWORD v27[23]; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+118h] [rbp+10h] BYREF
  __int64 v30; // [rsp+120h] [rbp+18h]
  __int64 v31; // [rsp+128h] [rbp+20h]

  v31 = a4;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  memset(v27, 0, 0x58uLL);
  LODWORD(v27[0]) = a1;
  v27[1] = a2;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_OWORD *)&v27[4] = *(_OWORD *)a3;
  *(_OWORD *)&v27[6] = *(_OWORD *)(a3 + 16);
  *(_OWORD *)&v27[8] = *(_OWORD *)(a3 + 32);
  v16 = *(_DWORD *)(a3 + 8);
  if ( ((v16 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v16 == 576 || ((v16 - 281) & 0xFFFFFFFD) == 0 )
    {
      v10 = *(_QWORD *)(a3 + 16);
      v11 = *(_QWORD *)(a3 + 24);
      LOBYTE(v14) = -1;
      v17 = (_DWORD *)HMValidateHandle(v11, v14);
      if ( !v17 )
        return 0LL;
      v18 = *(_DWORD *)(a3 + 8);
      if ( v18 == 576 )
      {
        v14 = (unsigned __int16)*v17;
        if ( *(_BYTE *)((unsigned int)(v14 * LODWORD(gSharedInfo[2])) + gSharedInfo[1] + 16LL) != 20 )
          return 0LL;
      }
      if ( ((v18 - 281) & 0xFFFFFFFD) == 0
        && *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v17 + gSharedInfo[1] + 16LL) != 21 )
      {
        return 0LL;
      }
      v12 = *(_QWORD *)(gptiCurrent + 624LL);
      v13 = *(_QWORD *)(gptiCurrent + 632LL);
      *(_QWORD *)(gptiCurrent + 624LL) = v11;
      v15 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 632LL) = v10;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 16);
    RtlWCSMessageWParamCharToMB(v16, &v27[6]);
  }
  v27[2] = v31;
  v27[3] = a5;
  LODWORD(v27[10]) = *a7;
  UserSessionSwitchLeaveCrit(v15, v14);
  EtwTraceBeginCallback(47LL);
  v19 = KeUserModeCallback(47LL, v27, 88LL, &v29, &v28);
  EtwTraceEndCallback(47LL);
  EnterCrit(1LL);
  v20 = v16 - 576;
  if ( v16 == 576 || ((v16 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_QWORD *)(gptiCurrent + 624LL) = v12;
    *(_QWORD *)(gptiCurrent + 632LL) = v13;
  }
  if ( v19 < 0 || v28 != 24 )
    return 0LL;
  v21 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > W32UserProbeAddress )
    v21 = (__int64 *)W32UserProbeAddress;
  v22 = *v21;
  v30 = *v21;
  v23 = v29;
  if ( v29 + 24 < v29 || v29 + 24 > W32UserProbeAddress )
    v23 = W32UserProbeAddress;
  v26 = *(_QWORD *)(v23 + 16);
  *(_OWORD *)&v27[13] = *(_OWORD *)v23;
  v27[15] = v26;
  if ( (v26 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v26 + 56 > W32UserProbeAddress || v26 + 56 < v26 )
    *W32UserProbeAddress = 0;
  *(_OWORD *)a3 = *(_OWORD *)v26;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v26 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v26 + 32);
  *a7 ^= (*a7 ^ *(_DWORD *)(v26 + 48)) & 0x10;
  if ( ((*(_DWORD *)(a3 + 8) - 258) & 0xFFFFFFFB) == 0 && a6 )
  {
    if ( v27[6] == *(_QWORD *)(a3 + 16) )
    {
      *(_QWORD *)(a3 + 16) = v10;
    }
    else
    {
      RtlMBMessageWParamCharToWCS();
      v20 = v16 - 576;
    }
  }
  v24 = *(_DWORD *)(a3 + 8);
  if ( v24 == 576 || ((v24 - 281) & 0xFFFFFFFD) == 0 )
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
