/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C0007F84
 * Callers:
 *     RIMFindMonitorForDigitizer @ 0x1C00066B4 (RIMFindMonitorForDigitizer.c)
 *     RIMOnMonitorNotification @ 0x1C0007D20 (RIMOnMonitorNotification.c)
 * Callees:
 *     UserLogError @ 0x1C0006770 (UserLogError.c)
 *     rimSetPointerDeviceDisplayConfig @ 0x1C00083A8 (rimSetPointerDeviceDisplayConfig.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C00086F0 (DrvGetWDDMAdapterInfo.c)
 *     RIMGetContainerId @ 0x1C000876C (RIMGetContainerId.c)
 *     DrvDxgkGetMonitorDeviceObject @ 0x1C0008910 (DrvDxgkGetMonitorDeviceObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004A240 (DrvDisplayConfigGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  _DWORD *v5; // r13
  unsigned int v6; // r12d
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r8
  int v16; // ecx
  int v17; // r11d
  int v18; // r13d
  __int64 v19; // rcx
  unsigned __int16 *v20; // rax
  int v21; // ecx
  int v22; // edx
  unsigned __int16 *v23; // rax
  int v24; // ecx
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rbx
  unsigned int v32; // r14d
  int v33; // r12d
  __int64 v34; // r11
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r8
  __int64 v37; // r14
  unsigned int v38; // r13d
  __int64 result; // rax
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // [rsp+30h] [rbp-D0h]
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  int v48; // [rsp+40h] [rbp-C0h]
  int v49; // [rsp+44h] [rbp-BCh]
  int v50; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  unsigned int v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  _QWORD v60[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-40h]
  _DWORD v64[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-28h]
  int v66; // [rsp+E0h] [rbp-20h]
  _WORD v67[134]; // [rsp+174h] [rbp+74h] BYREF

  v5 = a5;
  v6 = 0;
  v52 = a3;
  v59 = a1;
  v8 = a2;
  v55 = (__int64)a5;
  if ( !a4 )
    goto LABEL_81;
  v54 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v51 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v47 = 0LL;
  v15 = 0LL;
  v53 = 0LL;
  v16 = 0;
  v48 = 0;
  v17 = 0;
  v46 = 0;
  v58 = 0LL;
  v50 = 1;
  if ( !*(_DWORD *)a4 )
    goto LABEL_33;
  v18 = 0;
  do
  {
    v62 = 0LL;
    v63 = 0LL;
    if ( (int)DrvDxgkGetMonitorDeviceObject(
                *(_QWORD *)(a4 + 8) + 20LL + 72LL * v6,
                *(unsigned int *)(*(_QWORD *)(a4 + 8) + 72LL * v6 + 28),
                &Object,
                &v56) >= 0 )
    {
      RIMGetContainerId(v56, &v62, 0LL);
      ObfDereferenceObject(Object);
    }
    v19 = *(_QWORD *)(a4 + 8);
    v65 = *(_QWORD *)(v19 + 72LL * v6 + 20);
    v66 = *(_DWORD *)(v19 + 72LL * v6 + 28);
    v64[1] = 420;
    v64[0] = 2;
    if ( (int)DrvDisplayConfigGetDeviceInfo(v64) < 0 || !v67[0] )
      goto LABEL_17;
    v20 = v67;
    do
    {
      v21 = *(unsigned __int16 *)((char *)v20 + v8 + 1128 - (_QWORD)v67);
      v22 = *v20 - v21;
      if ( v22 )
        break;
      ++v20;
    }
    while ( v21 );
    if ( !v22 )
      v11 = *(_QWORD *)(a4 + 8) + 72LL * v6;
    v23 = v67;
    do
    {
      v24 = *(unsigned __int16 *)((char *)v23 + v8 + 872 - (_QWORD)v67);
      v25 = *v23 - v24;
      if ( v25 )
        break;
      ++v23;
    }
    while ( v24 );
    if ( !v25 )
    {
      v9 = *(_QWORD *)(a4 + 8) + 72LL * v6;
      v51 = v9;
    }
    else
    {
LABEL_17:
      v9 = v51;
    }
    v26 = *(_QWORD *)(v8 + 260) - v62;
    if ( !v26 )
      v26 = *(_QWORD *)(v8 + 268) - v63;
    if ( v26 )
    {
      v17 = v46;
    }
    else
    {
      v44 = v58 - *(_QWORD *)(v8 + 260);
      if ( v58 == *(_QWORD *)(v8 + 260) )
        v44 = v58 - *(_QWORD *)(v8 + 268);
      v17 = v46;
      if ( v44 )
      {
        v17 = ++v46;
        v15 = *(_QWORD *)(a4 + 8) + 72LL * v6;
        v53 = v15;
        goto LABEL_23;
      }
    }
    v15 = v53;
LABEL_23:
    v27 = *(_QWORD *)(a4 + 8) + 72LL * v6;
    v28 = *(_DWORD *)(v27 + 36);
    if ( v28 == 0x80000000 || v28 == 11 || v28 == 13 )
    {
      v13 = *(_QWORD *)(a4 + 8) + 72LL * v6;
      v14 = v47;
      v10 = ++v48;
      v54 = v27;
    }
    else
    {
      v10 = v48;
      ++v18;
      v13 = v54;
      v14 = *(_QWORD *)(a4 + 8) + 72LL * v6;
      v47 = v14;
    }
    if ( !v12 )
    {
      v29 = *(_QWORD *)(a4 + 16) + ((unsigned __int64)*(unsigned __int16 *)(v27 + 14) << 6);
      if ( !*(_DWORD *)(v29 + 28) && !*(_DWORD *)(v29 + 32) )
        v12 = v27;
    }
    ++v6;
  }
  while ( v6 < *(_DWORD *)a4 );
  v49 = v18;
  v16 = v18;
  v5 = (_DWORD *)v55;
LABEL_33:
  if ( v5 )
  {
    v43 = 0;
    if ( v16 )
      v43 = v50;
    *v5 = v43;
  }
  if ( v11 )
  {
    *(_DWORD *)(v8 + 868) = 5;
    goto LABEL_43;
  }
  if ( v9 )
  {
    v11 = v9;
    *(_DWORD *)(v8 + 868) = 1;
    goto LABEL_43;
  }
  LODWORD(a2) = 1;
  if ( v15 && v17 == 1 )
  {
    v11 = v15;
    goto LABEL_77;
  }
  v30 = *(_DWORD *)(v8 + 256);
  if ( !v30 && v13 && v10 == 1 )
  {
    v11 = v13;
    goto LABEL_77;
  }
  if ( v30 != 1 || !v14 || v16 != 1 )
  {
    if ( v12 )
    {
      *(_DWORD *)(v8 + 868) = 3;
      v11 = v12;
      if ( v5 )
        UserLogError(-2147483385);
      goto LABEL_43;
    }
    goto LABEL_81;
  }
  v11 = v14;
LABEL_77:
  *(_DWORD *)(v8 + 868) = 2;
LABEL_43:
  v31 = *(_QWORD *)v11;
  v32 = *(_DWORD *)a4;
  LODWORD(a2) = 0;
  v33 = *(_DWORD *)(v11 + 8);
  v47 = *(_QWORD *)v11;
  if ( v32 )
  {
    v13 = *(_QWORD *)(a4 + 16);
    v34 = *(_QWORD *)(a4 + 8);
    v35 = (unsigned __int64)*(unsigned __int16 *)(v11 + 14) << 6;
    while ( 1 )
    {
      v36 = (unsigned __int64)*(unsigned __int16 *)(v34 + 72LL * (unsigned int)a2 + 14) << 6;
      if ( *(_DWORD *)(v36 + v13 + 28) == *(_DWORD *)(v35 + v13 + 28)
        && *(_DWORD *)(v36 + v13 + 32) == *(_DWORD *)(v35 + v13 + 32) )
      {
        break;
      }
      LODWORD(a2) = a2 + 1;
      if ( (unsigned int)a2 >= v32 )
        goto LABEL_48;
    }
    v31 = *(_QWORD *)(v34 + 72LL * (unsigned int)a2);
    v33 = *(_DWORD *)(v34 + 72LL * (unsigned int)a2 + 8);
    v47 = v31;
  }
LABEL_48:
  v37 = *(_QWORD *)(gpDispInfo + 96);
  if ( !v37 )
  {
LABEL_81:
    if ( v55 )
      UserLogError(-2147483385);
    v45 = *(_QWORD *)(gpDispInfo + 88);
    *(_QWORD *)(v8 + 280) = v45;
    if ( v45 )
      *(_OWORD *)(v8 + 124) = *(_OWORD *)(v45 + 28);
    LOBYTE(a2) = 3;
    result = WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               a2,
               3,
               11,
               (__int64)&WPP_c96a4b6ea92639e1a4a8c71189e6796b_Traceguids);
    *(_DWORD *)(v8 + 868) = 4;
    return result;
  }
  v38 = HIDWORD(v47);
  while ( !(unsigned int)DrvGetWDDMAdapterInfo(*(_QWORD *)(v37 + 168), &v47, &v50, v13)
       || v50 != v33
       || v47 != __PAIR64__(v38, v31) )
  {
    v37 = *(_QWORD *)(v37 + 16);
    if ( !v37 )
      goto LABEL_81;
  }
  result = *(unsigned int *)(v8 + 252);
  *(_QWORD *)(v8 + 280) = v37;
  *(_OWORD *)(v8 + 124) = *(_OWORD *)(v37 + 28);
  if ( (result & 0x20) == 0 )
  {
    v40 = *(_QWORD *)(a4 + 16);
    v41 = *(_DWORD *)(v11 + 32);
    v42 = v40 + ((unsigned __int64)*(unsigned __int16 *)(v11 + 14) << 6);
    v60[0] = v11;
    v60[1] = v42;
    v60[2] = v40 + ((unsigned __int64)*(unsigned __int16 *)(v11 + 34) << 6);
    if ( (_WORD)v41 == 0xFFFF )
      v61 = 0LL;
    else
      v61 = v40 + ((unsigned __int64)(unsigned __int16)v41 << 6);
    return rimSetPointerDeviceDisplayConfig(v59, v8, v52, v60);
  }
  return result;
}
