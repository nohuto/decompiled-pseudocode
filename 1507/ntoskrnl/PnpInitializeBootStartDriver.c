/*
 * XREFs of PnpInitializeBootStartDriver @ 0x1407B8F6C
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x1407B7FBC (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407BA5D4 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x1407E91B4 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     VfDriverInitStarting @ 0x1407320CC (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x1407324D4 (VfDriverInitSuccess.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x1407B963C (PnpNotifyEarlyLaunchImageLoad.c)
 *     PnpDoPolicyCheck @ 0x1407B9690 (PnpDoPolicyCheck.c)
 */

__int64 __fastcall PnpInitializeBootStartDriver(
        unsigned __int16 *a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  __int128 *v13; // r15
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int128 v19; // xmm0
  int inited; // eax
  REGHANDLE v21; // rdi
  int v22; // r14d
  int v23; // edx
  int v24; // eax
  REGHANDLE v25; // rdi
  int v26; // ebx
  unsigned __int16 v27; // ax
  _WORD v29[2]; // [rsp+30h] [rbp-B9h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-B5h] BYREF
  __int64 v31; // [rsp+38h] [rbp-B1h] BYREF
  _QWORD v32[14]; // [rsp+40h] [rbp-A9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-29h]
  int v35; // [rsp+C8h] [rbp-21h]
  int v36; // [rsp+CCh] [rbp-1Dh]
  __int64 *v37; // [rsp+D0h] [rbp-19h]
  __int64 v38; // [rsp+D8h] [rbp-11h]

  v10 = 0LL;
  v31 = a9;
  v30 = 0;
  v13 = a2;
  if ( a7 )
  {
    memset(v32, 0, 0x68uLL);
    LODWORD(v32[0]) = 0;
    if ( a4 )
    {
      v14 = *(_OWORD *)(a4 + 72);
      v15 = *(_OWORD *)(a4 + 176);
      HIDWORD(v32[0]) = *(_DWORD *)(a4 + 224) & 1;
      LODWORD(v32[11]) = *(_DWORD *)(a4 + 208);
      LODWORD(v32[12]) = *(_DWORD *)(a4 + 216);
      v32[9] = *(_QWORD *)(a4 + 192);
      v16 = *(_DWORD *)(a4 + 212);
      *(_OWORD *)&v32[1] = v14;
      HIDWORD(v32[11]) = v16;
      v17 = *v13;
      HIDWORD(v32[12]) = *(_DWORD *)(a4 + 220);
      v18 = *(_QWORD *)(a4 + 200);
      *(_OWORD *)&v32[3] = v17;
      v32[10] = v18;
      v19 = *(_OWORD *)(a4 + 160);
      *(_OWORD *)&v32[7] = v15;
      *(_OWORD *)&v32[5] = v19;
    }
    else
    {
      *(_OWORD *)&v32[1] = *(_OWORD *)a1;
    }
    PnpNotifyEarlyLaunchImageLoad(v32, &v30);
    v10 = v30;
  }
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)PnpDoPolicyCheck(v10, a2) || !a7 )
  {
    inited = VfDriverInitStarting();
    v21 = PnpEtwHandle;
    v22 = inited;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_BootInit_Start) )
    {
      v23 = *a1;
      UserData.Reserved = 0;
      v36 = 0;
      v29[0] = (unsigned __int16)v23 >> 1;
      UserData.Ptr = (ULONGLONG)v29;
      v34 = *((_QWORD *)a1 + 1);
      UserData.Size = 2;
      v35 = v23;
      EtwWrite(v21, &KMPnPEvt_BootInit_Start, 0LL, 2u, &UserData);
    }
    v24 = IopInitializeBuiltinDriver((_DWORD)a1, (_DWORD)v13, a3, a4, a6, v31);
    v25 = PnpEtwHandle;
    LODWORD(v31) = v24;
    v26 = v24;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_BootInit_Stop) )
    {
      v27 = *a1;
      v35 = *a1;
      v29[0] = v27 >> 1;
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)v29;
      v34 = *((_QWORD *)a1 + 1);
      v37 = &v31;
      v36 = 0;
      v38 = 4LL;
      EtwWrite(v25, &KMPnPEvt_BootInit_Stop, 0LL, 3u, &UserData);
    }
    if ( v26 >= 0 )
      VfDriverInitSuccess(v22, a5);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v26;
}
