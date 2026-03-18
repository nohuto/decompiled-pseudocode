/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C000909C
 * Callers:
 *     RIMFindMonitorForDigitizer @ 0x1C00073E4 (RIMFindMonitorForDigitizer.c)
 *     RIMOnMonitorNotification @ 0x1C0008E10 (RIMOnMonitorNotification.c)
 * Callees:
 *     rimSetPointerDeviceDisplayConfig @ 0x1C00094C8 (rimSetPointerDeviceDisplayConfig.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C0009810 (DrvGetWDDMAdapterInfo.c)
 *     RIMGetContainerId @ 0x1C000988C (RIMGetContainerId.c)
 *     UserLogError @ 0x1C0009DD0 (UserLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004C750 (DrvDisplayConfigGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  _DWORD *v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r10
  int v14; // ecx
  int v15; // r11d
  int v16; // r13d
  __int64 v17; // rcx
  unsigned __int16 *v18; // rax
  int v19; // ecx
  int v20; // edx
  unsigned __int16 *v21; // rax
  int v22; // ecx
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rbx
  unsigned int v30; // r14d
  int v31; // r12d
  __int64 v32; // r11
  unsigned __int64 v33; // r10
  __int64 v34; // r14
  unsigned int v35; // r13d
  int WDDMAdapterInfo; // eax
  __int64 result; // rax
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // [rsp+30h] [rbp-D0h]
  __int64 v45; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v46[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+48h] [rbp-B8h]
  __int64 v48; // [rsp+50h] [rbp-B0h]
  unsigned int v49; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v57[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-40h]
  _DWORD v61[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+E0h] [rbp-20h]
  _WORD v64[134]; // [rsp+174h] [rbp+74h] BYREF

  v5 = a5;
  v6 = 0;
  v49 = a3;
  v7 = a4;
  v54 = a1;
  v8 = a2;
  v51 = (__int64)a5;
  if ( !a4 )
    goto LABEL_81;
  v52 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v48 = 0LL;
  v12 = 0LL;
  a4 = 0LL;
  v13 = 0LL;
  v45 = 0LL;
  a3 = 0LL;
  v50 = 0LL;
  v14 = 0;
  v47 = 0;
  v15 = 0;
  v44 = 0;
  v53 = 0LL;
  v46[0] = 1;
  if ( !*(_DWORD *)v7 )
    goto LABEL_33;
  v16 = 0;
  do
  {
    v59 = 0LL;
    v60 = 0LL;
    if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, __int64 *))qword_1C01042C8)(
                *(_QWORD *)(v7 + 8) + 20LL + 72LL * v6,
                *(unsigned int *)(*(_QWORD *)(v7 + 8) + 72LL * v6 + 28),
                &Object,
                &v56) >= 0 )
    {
      RIMGetContainerId(v56, &v59);
      ObfDereferenceObject(Object);
    }
    v17 = *(_QWORD *)(v7 + 8);
    v62 = *(_QWORD *)(v17 + 72LL * v6 + 20);
    v63 = *(_DWORD *)(v17 + 72LL * v6 + 28);
    v61[1] = 420;
    v61[0] = 2;
    if ( (int)DrvDisplayConfigGetDeviceInfo(v61) < 0 || !v64[0] )
      goto LABEL_17;
    v18 = v64;
    do
    {
      v19 = *(unsigned __int16 *)((char *)v18 + v8 + 1160 - (_QWORD)v64);
      v20 = *v18 - v19;
      if ( v20 )
        break;
      ++v18;
    }
    while ( v19 );
    if ( !v20 )
      v11 = *(_QWORD *)(v7 + 8) + 72LL * v6;
    v21 = v64;
    do
    {
      v22 = *(unsigned __int16 *)((char *)v21 + v8 + 904 - (_QWORD)v64);
      v23 = *v21 - v22;
      if ( v23 )
        break;
      ++v21;
    }
    while ( v22 );
    if ( !v23 )
    {
      v9 = *(_QWORD *)(v7 + 8) + 72LL * v6;
      v48 = v9;
    }
    else
    {
LABEL_17:
      v9 = v48;
    }
    v24 = *(_QWORD *)(v8 + 260) - v59;
    if ( !v24 )
      v24 = *(_QWORD *)(v8 + 268) - v60;
    if ( v24 )
    {
      v15 = v44;
    }
    else
    {
      v42 = v53 - *(_QWORD *)(v8 + 260);
      if ( v53 == *(_QWORD *)(v8 + 260) )
        v42 = v53 - *(_QWORD *)(v8 + 268);
      v15 = v44;
      if ( v42 )
      {
        v15 = ++v44;
        a3 = *(_QWORD *)(v7 + 8) + 72LL * v6;
        v50 = a3;
        goto LABEL_23;
      }
    }
    a3 = v50;
LABEL_23:
    v25 = *(_QWORD *)(v7 + 8) + 72LL * v6;
    v26 = *(_DWORD *)(v25 + 36);
    if ( v26 == 0x80000000 || v26 == 11 || v26 == 13 )
    {
      a4 = *(_QWORD *)(v7 + 8) + 72LL * v6;
      v13 = v45;
      v10 = ++v47;
      v52 = v25;
    }
    else
    {
      v10 = v47;
      ++v16;
      a4 = v52;
      v13 = *(_QWORD *)(v7 + 8) + 72LL * v6;
      v45 = v13;
    }
    if ( !v12 )
    {
      v27 = *(_QWORD *)(v7 + 16) + ((unsigned __int64)*(unsigned __int16 *)(v25 + 14) << 6);
      if ( !*(_DWORD *)(v27 + 28) && !*(_DWORD *)(v27 + 32) )
        v12 = v25;
    }
    ++v6;
  }
  while ( v6 < *(_DWORD *)v7 );
  v46[1] = v16;
  v14 = v16;
  v5 = (_DWORD *)v51;
LABEL_33:
  if ( v5 )
  {
    v41 = 0;
    if ( v14 )
      v41 = v46[0];
    *v5 = v41;
  }
  if ( v11 )
  {
    *(_DWORD *)(v8 + 900) = 5;
    goto LABEL_43;
  }
  if ( v9 )
  {
    v11 = v9;
    *(_DWORD *)(v8 + 900) = 1;
    goto LABEL_43;
  }
  a2 = 1LL;
  if ( a3 && v15 == 1 )
  {
    v11 = a3;
    goto LABEL_77;
  }
  v28 = *(_DWORD *)(v8 + 256);
  if ( !v28 && a4 && v10 == 1 )
  {
    v11 = a4;
    goto LABEL_77;
  }
  if ( v28 != 1 || !v13 || v14 != 1 )
  {
    if ( v12 )
    {
      *(_DWORD *)(v8 + 900) = 3;
      v11 = v12;
      if ( v5 )
        UserLogError(2147483911LL, 1LL, a3, a4);
      goto LABEL_43;
    }
    goto LABEL_81;
  }
  v11 = v13;
LABEL_77:
  *(_DWORD *)(v8 + 900) = 2;
LABEL_43:
  v29 = *(_QWORD *)v11;
  v30 = *(_DWORD *)v7;
  a2 = 0LL;
  v31 = *(_DWORD *)(v11 + 8);
  v45 = *(_QWORD *)v11;
  if ( v30 )
  {
    a4 = *(_QWORD *)(v7 + 16);
    v32 = *(_QWORD *)(v7 + 8);
    v33 = (unsigned __int64)*(unsigned __int16 *)(v11 + 14) << 6;
    while ( 1 )
    {
      a3 = (unsigned __int64)*(unsigned __int16 *)(v32 + 72LL * (unsigned int)a2 + 14) << 6;
      if ( *(_DWORD *)(a3 + a4 + 28) == *(_DWORD *)(v33 + a4 + 28)
        && *(_DWORD *)(a3 + a4 + 32) == *(_DWORD *)(v33 + a4 + 32) )
      {
        break;
      }
      a2 = (unsigned int)(a2 + 1);
      if ( (unsigned int)a2 >= v30 )
        goto LABEL_48;
    }
    v29 = *(_QWORD *)(v32 + 72LL * (unsigned int)a2);
    v31 = *(_DWORD *)(v32 + 72LL * (unsigned int)a2 + 8);
    v45 = v29;
  }
LABEL_48:
  v34 = *(_QWORD *)(gpDispInfo + 96);
  if ( !v34 )
  {
LABEL_81:
    if ( v51 )
      UserLogError(2147483911LL, a2, a3, a4);
    v43 = *(_QWORD *)(gpDispInfo + 88);
    *(_QWORD *)(v8 + 280) = v43;
    if ( v43 )
      *(_OWORD *)(v8 + 124) = *(_OWORD *)(v43 + 28);
    LOBYTE(a2) = 3;
    result = WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               a2,
               3,
               11,
               (__int64)&WPP_50b46ce6803749bc9aaa05a2c0feb581_Traceguids);
    *(_DWORD *)(v8 + 900) = 4;
    return result;
  }
  v35 = HIDWORD(v45);
  while ( 1 )
  {
    WDDMAdapterInfo = DrvGetWDDMAdapterInfo(*(_QWORD *)(v34 + 168), &v45, v46, a4);
    a3 = 0LL;
    if ( WDDMAdapterInfo )
    {
      if ( v46[0] == v31 && v45 == __PAIR64__(v35, v29) )
        break;
    }
    v34 = *(_QWORD *)(v34 + 16);
    if ( !v34 )
      goto LABEL_81;
  }
  result = *(unsigned int *)(v8 + 252);
  *(_QWORD *)(v8 + 280) = v34;
  *(_OWORD *)(v8 + 124) = *(_OWORD *)(v34 + 28);
  if ( (result & 0x20) == 0 )
  {
    v38 = *(_QWORD *)(v7 + 16);
    v39 = *(_DWORD *)(v11 + 32);
    v40 = v38 + ((unsigned __int64)*(unsigned __int16 *)(v11 + 14) << 6);
    v57[0] = v11;
    v57[1] = v40;
    v57[2] = v38 + ((unsigned __int64)*(unsigned __int16 *)(v11 + 34) << 6);
    if ( (_WORD)v39 == 0xFFFF )
      v58 = 0LL;
    else
      v58 = v38 + ((unsigned __int64)(unsigned __int16)v39 << 6);
    return rimSetPointerDeviceDisplayConfig(v54, v8, v49, v57);
  }
  return result;
}
