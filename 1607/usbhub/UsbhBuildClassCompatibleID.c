/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x1C0006730
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C0006424 (UsbhBuildCompatibleID.c)
 * Callees:
 *     UsbhMakeId @ 0x1C0006BF0 (UsbhMakeId.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0052554 (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(int a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rsi
  __int16 v7; // r14
  __int16 v8; // r12
  __int16 v9; // r13
  __int64 v10; // r11
  __int16 v11; // dx
  unsigned int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r9d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // r10
  char v25; // r11
  __int64 v27; // rax
  _BYTE *v28; // rax
  __int64 Id; // r8
  _BYTE *v30; // rax
  int v31; // r8d
  unsigned int v32; // r10d
  __int64 v33; // r8
  int v34; // [rsp+20h] [rbp-20h]
  int v35; // [rsp+20h] [rbp-20h]
  int v36; // [rsp+20h] [rbp-20h]
  int v37; // [rsp+20h] [rbp-20h]
  int v38; // [rsp+20h] [rbp-20h]
  int v39; // [rsp+20h] [rbp-20h]
  int v40; // [rsp+20h] [rbp-20h]
  int v41; // [rsp+20h] [rbp-20h]
  int v42; // [rsp+28h] [rbp-18h]
  int v43; // [rsp+28h] [rbp-18h]
  int v44; // [rsp+28h] [rbp-18h]
  int v45; // [rsp+28h] [rbp-18h]
  int v46; // [rsp+28h] [rbp-18h]
  int v47; // [rsp+28h] [rbp-18h]
  int v48; // [rsp+28h] [rbp-18h]
  int v49; // [rsp+28h] [rbp-18h]
  int v50; // [rsp+30h] [rbp-10h]
  int v51; // [rsp+30h] [rbp-10h]
  int v52; // [rsp+30h] [rbp-10h]
  int v53; // [rsp+30h] [rbp-10h]
  int v54; // [rsp+30h] [rbp-10h]
  int v55; // [rsp+30h] [rbp-10h]
  int v56; // [rsp+30h] [rbp-10h]
  int v57; // [rsp+30h] [rbp-10h]
  int v58; // [rsp+88h] [rbp+48h] BYREF

  v5 = a2;
  v6 = PdoExt(a2);
  v58 = 0;
  v7 = *(unsigned __int8 *)(v6 + 2413);
  v8 = *(unsigned __int8 *)(v6 + 2414);
  v9 = *(unsigned __int8 *)(v6 + 2415);
  Log(a1, 4096, 1684228420, *(unsigned __int8 *)(v6 + 2413), *(unsigned __int8 *)(v6 + 2414));
  v11 = v10 + 1;
  v12 = v10 + 2;
  if ( (*(_DWORD *)(v6 + 2800) & 0x20) != 0 )
  {
    v27 = *(_QWORD *)(v6 + 2824);
    if ( *(_BYTE *)(v27 + 12) )
    {
      v28 = (_BYTE *)(v27 + 4);
      if ( *v28 )
      {
        LOWORD(v34) = 0;
        Id = UsbhMakeId(v12, L"USB\\MS_COMP_n", 0LL, &v58, v34, (unsigned __int16)v10 + 1, 0, v28);
        if ( !Id )
          goto LABEL_27;
        LOWORD(v56) = 0;
        LOWORD(v48) = 1;
        LOWORD(v40) = 1;
        v10 = UsbhMakeId(2LL, L"&MS_SUBCOMP_n", Id, &v58, v40, v48, v56, *(_QWORD *)(v6 + 2824) + 12LL);
        if ( !v10 )
          goto LABEL_27;
        v11 = 1;
        v12 = 2;
      }
    }
    v30 = (_BYTE *)(*(_QWORD *)(v6 + 2824) + 4LL);
  }
  else
  {
    v13 = *(_QWORD *)(v6 + 2504);
    if ( !v13 )
      goto LABEL_3;
    if ( *(_BYTE *)(v13 + 26) )
    {
      LOWORD(v34) = 0;
      v33 = UsbhMakeId(v12, L"USB\\MS_COMP_n", 0LL, &v58, v34, (unsigned __int16)v10 + 1, 0, v13 + 18);
      if ( !v33 )
        goto LABEL_27;
      LOWORD(v57) = 0;
      LOWORD(v49) = 1;
      LOWORD(v41) = 1;
      v10 = UsbhMakeId(2LL, L"&MS_SUBCOMP_n", v33, &v58, v41, v49, v57, *(_QWORD *)(v6 + 2504) + 26LL);
      if ( !v10 )
        goto LABEL_27;
      v11 = 1;
      v12 = 2;
    }
    v30 = (_BYTE *)(*(_QWORD *)(v6 + 2504) + 18LL);
  }
  if ( *v30 )
  {
    LOWORD(v50) = 0;
    LOWORD(v42) = v11;
    LOWORD(v34) = v11;
    v10 = UsbhMakeId(v12, L"USB\\MS_COMP_n", v10, &v58, v34, v42, v50, v30);
    if ( !v10 )
    {
LABEL_27:
      v21 = 4;
      goto LABEL_19;
    }
  }
LABEL_3:
  LOWORD(v50) = v7;
  LOWORD(v42) = 2;
  LOWORD(v34) = 0;
  v14 = UsbhMakeId(0LL, L"USB\\Class_nn", v10, &v58, v34, v42, v50, 0LL);
  if ( !v14 )
  {
    v21 = 4096;
LABEL_19:
    v31 = 1667839265;
LABEL_21:
    v20 = v5;
    v22 = a1;
LABEL_23:
    Log(v22, v21, v31, v20, -1073741670LL);
    return v32;
  }
  LOWORD(v51) = v8;
  LOWORD(v43) = 2;
  LOWORD(v35) = 0;
  v15 = UsbhMakeId(0LL, L"&SubClass_nn", v14, &v58, v35, v43, v51, 0LL);
  if ( !v15 )
  {
    v21 = 4096;
    v31 = 1667839009;
    goto LABEL_21;
  }
  LOWORD(v52) = v9;
  LOWORD(v44) = 2;
  LOWORD(v36) = 1;
  v16 = UsbhMakeId(0LL, L"&Prot_nn", v15, &v58, v36, v44, v52, 0LL);
  if ( !v16 )
  {
    v21 = 4096;
    v31 = 1667838753;
    goto LABEL_21;
  }
  LOWORD(v53) = v7;
  LOWORD(v45) = 2;
  LOWORD(v37) = 0;
  v17 = UsbhMakeId(0LL, L"USB\\Class_nn", v16, &v58, v37, v45, v53, 0LL);
  if ( !v17 )
  {
    v21 = 4096;
    v31 = 1667838497;
    goto LABEL_21;
  }
  LOWORD(v54) = v8;
  LOWORD(v46) = 2;
  LOWORD(v38) = 1;
  v18 = UsbhMakeId(0LL, L"&SubClass_nn", v17, &v58, v38, v46, v54, 0LL);
  if ( !v18 )
  {
    v21 = 4096;
    v31 = 1667838241;
    goto LABEL_21;
  }
  LOWORD(v55) = v7;
  LOWORD(v47) = 2;
  LOWORD(v39) = 2;
  v19 = UsbhMakeId(0LL, L"USB\\Class_nn", v18, &v58, v39, v47, v55, 0LL);
  v20 = v5;
  v21 = 4096;
  v22 = a1;
  if ( !v19 )
  {
    v31 = 1667837985;
    goto LABEL_23;
  }
  *(_DWORD *)(a3 + 4) = v58;
  *(_QWORD *)(a3 + 8) = v19;
  Log(a1, 4096, 1667459428, v5, v19);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_Sd(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v23,
      19,
      (__int64)&WPP_2d2b0fda08bf32e864eb2e9af8737d93_Traceguids,
      v24,
      v25);
  return 0LL;
}
