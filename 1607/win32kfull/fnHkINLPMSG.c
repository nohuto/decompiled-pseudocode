/*
 * XREFs of fnHkINLPMSG @ 0x1C0084D00
 * Callers:
 *     xxxCallCtfHook @ 0x1C007F1EC (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01D48A0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C01FB7F0 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0246070 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C02461D8 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall fnHkINLPMSG(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edi
  _DWORD *v19; // r14
  int v20; // ebx
  unsigned int v21; // r9d
  __int64 *v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v28; // rbx
  _DWORD *v29; // rax
  int v30; // r10d
  _QWORD *v31; // rdx
  __int64 v32; // r14
  unsigned __int64 v33; // [rsp+50h] [rbp-D8h]
  _OWORD v34[6]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-68h]
  __int128 v36; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-40h]
  int v38; // [rsp+130h] [rbp+8h] BYREF
  __int64 v39; // [rsp+138h] [rbp+10h]
  unsigned __int64 v40; // [rsp+140h] [rbp+18h] BYREF

  v11 = 0LL;
  v39 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  memset(v34, 0, 0x58uLL);
  LODWORD(v34[0]) = a1;
  *((_QWORD *)&v34[0] + 1) = a2;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  v34[2] = *(_OWORD *)a3;
  v34[3] = *(_OWORD *)(a3 + 16);
  v34[4] = *(_OWORD *)(a3 + 32);
  v18 = *(_DWORD *)(a3 + 8);
  if ( ((v18 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v18 == 576 || ((v18 - 281) & 0xFFFFFFFD) == 0 )
    {
      v11 = *(_QWORD *)(a3 + 16);
      v28 = *(_QWORD *)(a3 + 24);
      v39 = v28;
      LOBYTE(v14) = -1;
      v29 = (_DWORD *)HMValidateHandle(v28, v14, v16, v17);
      if ( !v29 )
        return 0LL;
      v30 = *(_DWORD *)(a3 + 8);
      if ( v30 == 576
        && *(_BYTE *)((unsigned int)(unsigned __int16)*v29 * *((_DWORD *)&gSharedInfo + 4)
                    + *((_QWORD *)&gSharedInfo + 1)
                    + 16LL) != 20 )
      {
        return 0LL;
      }
      if ( ((v30 - 281) & 0xFFFFFFFD) == 0
        && *(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*v29
                    + *((_QWORD *)&gSharedInfo + 1)
                    + 16LL) != 21 )
      {
        return 0LL;
      }
      v12 = *(_QWORD *)(gptiCurrent + 616LL);
      v13 = *(_QWORD *)(gptiCurrent + 624LL);
      *(_QWORD *)(gptiCurrent + 616LL) = v28;
      v15 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 624LL) = v11;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a3 + 16);
    RtlWCSMessageWParamCharToMB(v18, &v34[3]);
  }
  *(_QWORD *)&v34[1] = a4;
  *((_QWORD *)&v34[1] + 1) = a5;
  v19 = a7;
  LODWORD(v34[5]) = *a7;
  if ( gdwInAtomicOperation )
  {
    v15 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation);
  EtwTraceBeginCallback(47LL);
  v20 = KeUserModeCallback(47LL, v34, 88LL, &v40, &v38);
  EtwTraceEndCallback(47LL);
  EnterCrit(0LL, 1LL);
  v21 = v18 - 576;
  if ( v18 == 576 || ((v18 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_QWORD *)(gptiCurrent + 616LL) = v12;
    *(_QWORD *)(gptiCurrent + 624LL) = v13;
  }
  if ( v20 < 0 || v38 != 24 )
    return 0LL;
  v22 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v35 = *v22;
  v24 = v40;
  if ( v40 + 24 < v40 || v40 + 24 > W32UserProbeAddress )
    v24 = W32UserProbeAddress;
  v33 = *(_QWORD *)(v24 + 16);
  v36 = *(_OWORD *)v24;
  v37 = v33;
  if ( (v33 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v33 + 56 > W32UserProbeAddress || v33 + 56 < v33 )
    *W32UserProbeAddress = 0;
  *(_OWORD *)a3 = *(_OWORD *)v33;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v33 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v33 + 32);
  *v19 ^= (*v19 ^ *(_DWORD *)(v33 + 48)) & 0x10;
  v25 = *(unsigned int *)(a3 + 8);
  if ( (((_DWORD)v25 - 258) & 0xFFFFFFFB) == 0 && a6 )
  {
    v31 = (_QWORD *)(a3 + 16);
    if ( *(_QWORD *)&v34[3] == *(_QWORD *)(a3 + 16) )
    {
      *v31 = v11;
    }
    else
    {
      RtlMBMessageWParamCharToWCS(v25, v31);
      v21 = v18 - 576;
    }
  }
  v26 = *(_DWORD *)(a3 + 8);
  if ( v26 == 576 || ((v26 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a3 + 8) = v18;
    *(_QWORD *)(a3 + 16) = v11;
    *(_QWORD *)(a3 + 24) = v39;
  }
  else if ( v11 == 1 )
  {
    v32 = v39;
    if ( !v21 )
      FreeTouchInputInfo(v39, 1LL);
    if ( ((v18 - 281) & 0xFFFFFFFD) == 0 )
      FreeGestureInfo(v32, 1LL);
  }
  return (unsigned int)v23;
}
