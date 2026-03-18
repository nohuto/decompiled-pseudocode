/*
 * XREFs of ComputeVirtualDesktopPhysicalSize @ 0x1C01D5FB0
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01D631C (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     UpdatePointerDeviceScalingInfo @ 0x1C01C8398 (UpdatePointerDeviceScalingInfo.c)
 */

unsigned __int64 __fastcall ComputeVirtualDesktopPhysicalSize(int *a1, _DWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  int v6; // r12d
  unsigned __int64 result; // rax
  int v8; // ecx
  bool v9; // zf
  __int64 v10; // rbx
  int v11; // r13d
  __int64 v12; // r11
  unsigned int v13; // edx
  __int64 v14; // r9
  int v15; // ecx
  _DWORD *v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // r9d
  __int128 v19; // xmm0
  unsigned int v20; // edx
  int v21; // esi
  int v22; // edi
  unsigned int v23; // ecx
  int v24; // r11d
  int v25; // r10d
  int v26; // r8d
  unsigned int v27; // ecx
  int v28; // edx
  __int64 v29; // [rsp+28h] [rbp-61h]
  int v30; // [rsp+50h] [rbp-39h] BYREF
  int v31; // [rsp+54h] [rbp-35h]
  int v32; // [rsp+58h] [rbp-31h]
  int v33; // [rsp+5Ch] [rbp-2Dh]
  __int128 v34; // [rsp+60h] [rbp-29h]
  int v35; // [rsp+70h] [rbp-19h] BYREF
  __int64 v36; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v37; // [rsp+80h] [rbp-9h]
  int v38; // [rsp+84h] [rbp-5h]
  _BYTE v39[8]; // [rsp+88h] [rbp-1h] BYREF
  unsigned int v40; // [rsp+90h] [rbp+7h]
  unsigned int v41; // [rsp+94h] [rbp+Bh]
  int v42[18]; // [rsp+98h] [rbp+Fh] BYREF
  unsigned int v44; // [rsp+108h] [rbp+7Fh] BYREF

  v44 = 0;
  v30 = 0;
  v4 = a3;
  v6 = 0;
  result = gpDispInfo;
  v34 = 0LL;
  if ( gProtocolType )
  {
    *a1 = (int)(GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24LL), 4LL) + 5) / 10;
    v8 = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24LL), 6LL) + 5;
    result = (unsigned int)((unsigned __int64)(1717986919LL * v8) >> 32) >> 31;
    *a2 = v8 / 10;
    if ( *a1 )
    {
      v9 = v8 / 10 == 0;
      goto LABEL_56;
    }
    goto LABEL_57;
  }
  v10 = *(_QWORD *)(gpDispInfo + 96LL);
  if ( !v10 )
    goto LABEL_57;
  v11 = v34;
  v33 = HIDWORD(v34);
  v31 = DWORD2(v34);
  v32 = DWORD1(v34);
  while ( 1 )
  {
    result = *(unsigned int *)(v10 + 24);
    if ( (result & 1) != 0 )
      break;
LABEL_51:
    v10 = *(_QWORD *)(v10 + 16);
    if ( !v10 )
      goto LABEL_55;
  }
  if ( (int)GetMonitorPhysicalDimensions(*(_QWORD *)(v10 + 160), &v44, &v30, &v35) < 0 )
    goto LABEL_23;
  if ( !v4 )
    goto LABEL_20;
  v12 = 0LL;
  v13 = 0;
  if ( *(_DWORD *)v4 )
  {
    v14 = *(_QWORD *)(v4 + 8);
    while ( *(_DWORD *)(v14 + 72LL * v13 + 28) != v35 )
    {
      if ( ++v13 >= *(_DWORD *)v4 )
        goto LABEL_15;
    }
    v12 = v14 + 72LL * v13;
  }
LABEL_15:
  if ( v12 )
  {
    v36 = 0LL;
    v15 = *(_DWORD *)(v12 + 32);
    v37 = v44;
    v38 = v30;
    v16 = (_WORD)v15 == 0xFFFF ? 0LL : (_DWORD *)(*(_QWORD *)(v4 + 16) + ((unsigned __int64)(unsigned __int16)v15 << 6));
    UpdatePointerDeviceScalingInfo(
      (__int64)&v36,
      (unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v12 + 14) << 6) + *(_QWORD *)(v4 + 16) + 16LL),
      *(_QWORD *)(v4 + 16) + ((unsigned __int64)*(unsigned __int16 *)(v12 + 34) << 6),
      v16,
      v12 + 20,
      v29,
      0LL,
      v42,
      (__int64)v39);
    v17 = v40;
    v18 = v41;
    v44 = v40;
    v30 = v41;
  }
  else
  {
LABEL_20:
    v17 = v44;
    v18 = v30;
  }
  if ( !(_DWORD)v17 || !v18 )
  {
LABEL_23:
    v18 = 15;
    v17 = 20LL;
    v30 = 15;
    v44 = 20;
  }
  if ( !v6 )
  {
    v19 = *(_OWORD *)(v10 + 28);
    v6 = 1;
    *a1 = v17;
    *a2 = v18;
    v34 = v19;
    v11 = v19;
    v33 = HIDWORD(v19);
    v31 = DWORD2(v19);
    result = DWORD1(v19);
    v32 = DWORD1(v19);
    goto LABEL_51;
  }
  v20 = 0;
  v21 = *(_DWORD *)(v10 + 28);
  if ( v21 < v11 )
    v20 = v11 - v21;
  v22 = *(_DWORD *)(v10 + 36);
  if ( v22 > v31 )
    v20 += v22 - v31;
  if ( v20 && v22 > v21 )
  {
    result = (unsigned int)*a1 + v17 * (unsigned __int64)v20 / (v22 - v21);
    if ( result > 0xFFFFFFFF )
    {
      *a1 = -1;
      goto LABEL_57;
    }
    *a1 = result;
  }
  v23 = 0;
  v24 = *(_DWORD *)(v10 + 32);
  result = DWORD1(v34);
  if ( v24 < SDWORD1(v34) )
    v23 = DWORD1(v34) - v24;
  v25 = *(_DWORD *)(v10 + 40);
  if ( v25 > SHIDWORD(v34) )
  {
    result = (unsigned int)(v25 - HIDWORD(v34));
    v23 += result;
  }
  if ( !v23 || v25 <= v24 )
    goto LABEL_42;
  result = (unsigned int)*a2 + v18 * (unsigned __int64)v23 / (v25 - v24);
  if ( result <= 0xFFFFFFFF )
  {
    *a2 = result;
LABEL_42:
    v26 = v32;
    v27 = v31;
    v28 = v33;
    if ( v11 >= v21 )
      v11 = v21;
    LODWORD(v34) = v11;
    if ( v32 >= v24 )
      v26 = v24;
    v32 = v26;
    if ( v31 <= v22 )
      v27 = v22;
    DWORD1(v34) = v26;
    v4 = a3;
    v31 = v27;
    if ( v33 <= v25 )
      v28 = v25;
    *((_QWORD *)&v34 + 1) = __PAIR64__(v28, v27);
    v33 = v28;
    goto LABEL_51;
  }
  *a2 = -1;
  v6 = 0;
LABEL_55:
  v9 = v6 == 0;
LABEL_56:
  if ( v9 )
  {
LABEL_57:
    *a1 = 20;
    *a2 = 15;
  }
  return result;
}
