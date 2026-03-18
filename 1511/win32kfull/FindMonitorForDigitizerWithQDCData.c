/*
 * XREFs of FindMonitorForDigitizerWithQDCData @ 0x1C01CBFE0
 * Callers:
 *     UpdatePointerDevices @ 0x1C0111510 (UpdatePointerDevices.c)
 *     FindMonitorForDigitizer @ 0x1C01CBF70 (FindMonitorForDigitizer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01C81E8 (-SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PE.c)
 *     GetContainerId @ 0x1C01CC714 (GetContainerId.c)
 */

void __fastcall FindMonitorForDigitizerWithQDCData(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        __int64 a2,
        __int64 a3,
        int *a4)
{
  __int64 v5; // rcx
  int *v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // ebx
  int v14; // r11d
  unsigned int v15; // r13d
  __int64 v16; // rcx
  unsigned __int16 *v17; // rax
  int v18; // ecx
  int v19; // edx
  unsigned __int16 *v20; // rax
  int v21; // ecx
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rbx
  unsigned int v31; // r14d
  int v32; // r12d
  __int64 v33; // r11
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r9
  __int64 v36; // r14
  unsigned int v37; // r13d
  int WDDMAdapterInfo; // eax
  struct tagQDC_DATA *v39; // r9
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // [rsp+20h] [rbp-E0h]
  __int64 v47; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+34h] [rbp-CCh]
  int v50; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  int *v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v58[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-60h]
  _DWORD v61[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+C0h] [rbp-40h]
  _WORD v64[134]; // [rsp+154h] [rbp+54h] BYREF

  v55 = a4;
  v5 = 0LL;
  v53 = a2;
  v6 = a4;
  v7 = a3;
  if ( !a3 )
    goto LABEL_74;
  v54 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v47 = 0LL;
  a3 = 0LL;
  v52 = 0LL;
  v13 = 0;
  v49 = 0;
  a2 = 0LL;
  v48 = 0;
  v14 = 0;
  v46 = 0;
  v56 = 0LL;
  v50 = 1;
  if ( !*(_DWORD *)v7 )
    goto LABEL_38;
  v15 = 0;
  do
  {
    v59 = 0LL;
    v60 = 0LL;
    if ( (int)DrvDxgkGetMonitorDeviceObject(
                *(_QWORD *)(v7 + 8) + 20LL + 72LL * v15,
                *(unsigned int *)(*(_QWORD *)(v7 + 8) + 72LL * v15 + 28),
                &Object,
                &v51) >= 0 )
    {
      GetContainerId(v51, &v59, 0LL);
      ObfDereferenceObject(Object);
    }
    v16 = *(_QWORD *)(v7 + 8);
    v62 = *(_QWORD *)(v16 + 72LL * v15 + 20);
    v63 = *(_DWORD *)(v16 + 72LL * v15 + 28);
    v61[1] = 420;
    v61[0] = 2;
    if ( (int)DrvDisplayConfigGetDeviceInfo(v61) >= 0 && v64[0] )
    {
      v17 = v64;
      do
      {
        v18 = *(unsigned __int16 *)((char *)v17
                                  + (struct tagHID_POINTER_DEVICE_INFO *)((char *)a1 + 1160)
                                  - (struct tagHID_POINTER_DEVICE_INFO *)v64);
        v19 = *v17 - v18;
        if ( v19 )
          break;
        ++v17;
      }
      while ( v18 );
      if ( !v19 )
        v8 = *(_QWORD *)(v7 + 8) + 72LL * v15;
      v20 = v64;
      do
      {
        v21 = *(unsigned __int16 *)((char *)v20
                                  + (struct tagHID_POINTER_DEVICE_INFO *)((char *)a1 + 904)
                                  - (struct tagHID_POINTER_DEVICE_INFO *)v64);
        v22 = *v20 - v21;
        if ( v22 )
          break;
        ++v20;
      }
      while ( v21 );
      if ( !v22 )
        v9 = *(_QWORD *)(v7 + 8) + 72LL * v15;
    }
    v23 = *(_QWORD *)((char *)a1 + 260) - v59;
    if ( !v23 )
      v23 = *(_QWORD *)((char *)a1 + 268) - v60;
    if ( v23 )
    {
      v14 = v46;
LABEL_26:
      a3 = v52;
      goto LABEL_27;
    }
    v24 = v56 - *(_QWORD *)((char *)a1 + 260);
    if ( v56 == *(_QWORD *)((char *)a1 + 260) )
      v24 = v56 - *(_QWORD *)((char *)a1 + 268);
    v14 = v46;
    if ( !v24 )
      goto LABEL_26;
    v14 = ++v46;
    a3 = *(_QWORD *)(v7 + 8) + 72LL * v15;
    v52 = a3;
LABEL_27:
    v25 = *(_QWORD *)(v7 + 8) + 72LL * v15;
    v26 = *(_DWORD *)(v25 + 36);
    if ( v26 == 0x80000000 || v26 == 11 || v26 == 13 )
    {
      v11 = *(_QWORD *)(v7 + 8) + 72LL * v15;
      v12 = v47;
      v13 = v49 + 1;
      a2 = v48;
      ++v49;
      v54 = v25;
    }
    else
    {
      v12 = *(_QWORD *)(v7 + 8) + 72LL * v15;
      v11 = v54;
      a2 = v48 + 1;
      v13 = v49;
      ++v48;
      v47 = v25;
    }
    if ( !v10 )
    {
      v27 = *(_QWORD *)(v7 + 16) + ((unsigned __int64)*(unsigned __int16 *)(v25 + 14) << 6);
      if ( !*(_DWORD *)(v27 + 28) && !*(_DWORD *)(v27 + 32) )
        v10 = v25;
    }
    ++v15;
  }
  while ( v15 < *(_DWORD *)v7 );
  v6 = v55;
  v5 = 0LL;
LABEL_38:
  if ( v6 )
  {
    v28 = 0;
    if ( (_DWORD)a2 )
      v28 = v50;
    *v6 = v28;
  }
  if ( v8 )
  {
    *((_DWORD *)a1 + 225) = 5;
    goto LABEL_61;
  }
  if ( v9 )
  {
    v8 = v9;
    *((_DWORD *)a1 + 225) = 1;
    goto LABEL_61;
  }
  if ( a3 && v14 == 1 )
  {
    v8 = a3;
    goto LABEL_57;
  }
  v29 = *((_DWORD *)a1 + 64);
  if ( !v29 && v11 && v13 == 1 )
  {
    v8 = v11;
    goto LABEL_57;
  }
  if ( v29 != 1 || !v12 || (_DWORD)a2 != 1 )
  {
    if ( v10 )
    {
      *((_DWORD *)a1 + 225) = 3;
      v8 = v10;
      if ( v6 )
        UserLogError(2147483911LL);
      goto LABEL_61;
    }
    goto LABEL_74;
  }
  v8 = v12;
LABEL_57:
  *((_DWORD *)a1 + 225) = 2;
LABEL_61:
  v30 = *(_QWORD *)v8;
  a2 = 0LL;
  v31 = *(_DWORD *)v7;
  v32 = *(_DWORD *)(v8 + 8);
  v47 = *(_QWORD *)v8;
  if ( v31 )
  {
    a3 = *(_QWORD *)(v7 + 16);
    v33 = *(_QWORD *)(v7 + 8);
    v34 = (unsigned __int64)*(unsigned __int16 *)(v8 + 14) << 6;
    while ( 1 )
    {
      v35 = (unsigned __int64)*(unsigned __int16 *)(v33 + 72LL * (unsigned int)a2 + 14) << 6;
      if ( *(_DWORD *)(v35 + a3 + 28) == *(_DWORD *)(v34 + a3 + 28)
        && *(_DWORD *)(v35 + a3 + 32) == *(_DWORD *)(v34 + a3 + 32) )
      {
        break;
      }
      a2 = (unsigned int)(a2 + 1);
      if ( (unsigned int)a2 >= v31 )
        goto LABEL_68;
    }
    v30 = *(_QWORD *)(v33 + 72LL * (unsigned int)a2);
    v32 = *(_DWORD *)(v33 + 72LL * (unsigned int)a2 + 8);
    v47 = v30;
  }
LABEL_68:
  v36 = *(_QWORD *)(gpDispInfo + 96LL);
  v5 = 0LL;
  if ( !v36 )
  {
LABEL_74:
    if ( v55 )
      UserLogError(2147483911LL);
    v40 = *(_QWORD *)(GetDispInfo(v5, a2, a3) + 88);
    *((_QWORD *)a1 + 35) = v40;
    if ( v40 )
      *(_OWORD *)((char *)a1 + 124) = *(_OWORD *)(v40 + 28);
    *((_DWORD *)a1 + 225) = 4;
    return;
  }
  v37 = HIDWORD(v47);
  while ( 1 )
  {
    WDDMAdapterInfo = DrvGetWDDMAdapterInfo(*(_QWORD *)(v36 + 168), &v47, &v50);
    v5 = 0LL;
    if ( WDDMAdapterInfo )
    {
      if ( v50 == v32 && v47 == __PAIR64__(v37, v30) )
        break;
    }
    v36 = *(_QWORD *)(v36 + 16);
    if ( !v36 )
      goto LABEL_74;
  }
  v41 = *((_DWORD *)a1 + 63);
  *((_QWORD *)a1 + 35) = v36;
  *(_OWORD *)((char *)a1 + 124) = *(_OWORD *)(v36 + 28);
  if ( (v41 & 0x20) == 0 )
  {
    v42 = *(_QWORD *)(v7 + 16);
    v43 = *(_DWORD *)(v8 + 32);
    v44 = v42 + ((unsigned __int64)*(unsigned __int16 *)(v8 + 14) << 6);
    v58[0] = v8;
    v58[1] = v44;
    v58[2] = v42 + ((unsigned __int64)*(unsigned __int16 *)(v8 + 34) << 6);
    if ( (_WORD)v43 == 0xFFFF )
      v45 = 0LL;
    else
      v45 = v42 + ((unsigned __int64)(unsigned __int16)v43 << 6);
    v58[3] = v45;
    SetPointerDeviceDisplayConfig(a1, v53, (struct tagDISPLAY_PATH_INFO *)v58, v39);
  }
}
