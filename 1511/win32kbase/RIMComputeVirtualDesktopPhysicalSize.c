/*
 * XREFs of RIMComputeVirtualDesktopPhysicalSize @ 0x1C00CF004
 * Callers:
 *     RIMComputeVirtualHimetricSize @ 0x1C00CF45C (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000967C (RIMUpdatePointerDeviceScalingInfo.c)
 *     ApiSetIsRemoteConnection @ 0x1C00115CC (ApiSetIsRemoteConnection.c)
 *     GreGetDeviceCaps @ 0x1C004AB10 (GreGetDeviceCaps.c)
 *     GetMonitorPhysicalDimensions @ 0x1C00BE450 (GetMonitorPhysicalDimensions.c)
 */

unsigned __int64 __fastcall RIMComputeVirtualDesktopPhysicalSize(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // r14
  int DeviceCaps; // eax
  __int64 v8; // rcx
  int v9; // ecx
  unsigned __int64 result; // rax
  bool v11; // zf
  __int64 v12; // rdi
  int v13; // r13d
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // r9d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // rdx
  __int64 v22; // r10
  int v23; // ecx
  _DWORD *v24; // r9
  __int128 v25; // xmm0
  int v26; // r14d
  unsigned int v27; // ecx
  int v28; // esi
  unsigned int v29; // ecx
  int v30; // r11d
  int v31; // r10d
  int v32; // r8d
  unsigned int v33; // ecx
  int v34; // edx
  __int64 v35; // [rsp+28h] [rbp-61h]
  int v36; // [rsp+50h] [rbp-39h] BYREF
  int v37; // [rsp+54h] [rbp-35h]
  int v38; // [rsp+58h] [rbp-31h]
  int v39; // [rsp+5Ch] [rbp-2Dh]
  __int128 v40; // [rsp+60h] [rbp-29h]
  int v41; // [rsp+70h] [rbp-19h]
  int v42; // [rsp+74h] [rbp-15h] BYREF
  _DWORD v43[4]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v44[8]; // [rsp+88h] [rbp-1h] BYREF
  unsigned int v45; // [rsp+90h] [rbp+7h]
  unsigned int v46; // [rsp+94h] [rbp+Bh]
  int v47[18]; // [rsp+98h] [rbp+Fh] BYREF
  int v49; // [rsp+108h] [rbp+7Fh] BYREF

  v49 = 0;
  v36 = 0;
  v3 = 0;
  v40 = 0LL;
  v38 = 0;
  v4 = a3;
  if ( (unsigned int)ApiSetIsRemoteConnection() )
  {
    DeviceCaps = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24), 4);
    v8 = gpDispInfo;
    *a1 = (DeviceCaps + 5) / 10;
    v9 = GreGetDeviceCaps(*(_QWORD *)(v8 + 24), 6) + 5;
    result = (unsigned int)((unsigned __int64)(1717986919LL * v9) >> 32) >> 31;
    *a2 = v9 / 10;
    if ( *a1 )
    {
      v11 = v9 / 10 == 0;
      goto LABEL_68;
    }
    goto LABEL_69;
  }
  result = gpDispInfo;
  v12 = *(_QWORD *)(gpDispInfo + 96);
  if ( !v12 )
    goto LABEL_69;
  v13 = v40;
  v39 = HIDWORD(v40);
  v37 = DWORD2(v40);
  v41 = DWORD1(v40);
  while ( 1 )
  {
    result = *(unsigned int *)(v12 + 24);
    if ( (result & 1) != 0 )
      break;
LABEL_63:
    v12 = *(_QWORD *)(v12 + 16);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( (int)GetMonitorPhysicalDimensions(*(_QWORD *)(v12 + 160), &v49, &v36, &v42) < 0 )
  {
    if ( *(_DWORD *)(gpDispInfo + 80) == 1 && v12 == *(_QWORD *)(gpDispInfo + 96) )
    {
      v14 = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24), 4);
      v15 = *(_QWORD *)(gpDispInfo + 24);
      v16 = (v14 + 5) / 10;
      v49 = v16;
      v17 = (int)(GreGetDeviceCaps(v15, 6) + 5) / 10;
LABEL_32:
      v36 = v17;
      goto LABEL_33;
    }
    v16 = 20;
    v17 = 15;
LABEL_31:
    v49 = v16;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(gpDispInfo + 80) == 1 && v12 == *(_QWORD *)(gpDispInfo + 96) )
  {
    v16 = v49;
    if ( !v49 || (v17 = v36) == 0 )
    {
      v18 = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24), 4);
      v19 = *(_QWORD *)(gpDispInfo + 24);
      v16 = (v18 + 5) / 10;
      v49 = v16;
      v17 = (int)(GreGetDeviceCaps(v19, 6) + 5) / 10;
      v36 = v17;
    }
  }
  else
  {
    v16 = v49;
    v17 = v36;
  }
  if ( v4 )
  {
    v20 = 0LL;
    v21 = 0LL;
    if ( *(_DWORD *)v4 )
    {
      v22 = *(_QWORD *)(v4 + 8);
      while ( *(_DWORD *)(v22 + 72 * v21 + 28) != v42 )
      {
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= *(_DWORD *)v4 )
          goto LABEL_25;
      }
      v20 = v22 + 72 * v21;
LABEL_25:
      v3 = v38;
    }
    if ( v20 )
    {
      v43[0] = 0;
      v43[1] = 0;
      v23 = *(_DWORD *)(v20 + 32);
      v43[2] = v16;
      v43[3] = v17;
      if ( (_WORD)v23 == 0xFFFF )
        v24 = 0LL;
      else
        v24 = (_DWORD *)(*(_QWORD *)(v4 + 16) + ((unsigned __int64)(unsigned __int16)v23 << 6));
      RIMUpdatePointerDeviceScalingInfo(
        (__int64)v43,
        (unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v20 + 14) << 6) + *(_QWORD *)(v4 + 16) + 16LL),
        *(_QWORD *)(v4 + 16) + ((unsigned __int64)*(unsigned __int16 *)(v20 + 34) << 6),
        v24,
        v20 + 20,
        v35,
        0LL,
        v47,
        (__int64)v44);
      v17 = v46;
      v16 = v45;
      goto LABEL_31;
    }
  }
LABEL_33:
  if ( !v16 || !v17 )
  {
    v16 = 20;
    v49 = 20;
    v17 = 15;
    v36 = 15;
  }
  if ( !v3 )
  {
    v25 = *(_OWORD *)(v12 + 28);
    v3 = 1;
    *a1 = v16;
    v38 = 1;
    v40 = v25;
    v13 = v25;
    v39 = HIDWORD(v25);
    v37 = DWORD2(v25);
    result = DWORD1(v25);
    v41 = DWORD1(v25);
    *a2 = v17;
    goto LABEL_63;
  }
  v26 = *(_DWORD *)(v12 + 28);
  v27 = 0;
  if ( v26 < v13 )
    v27 = v13 - v26;
  v28 = *(_DWORD *)(v12 + 36);
  if ( v28 > v37 )
    v27 += v28 - v37;
  if ( v27 && v28 > v26 )
  {
    result = (unsigned int)*a1 + v16 * (unsigned __int64)v27 / (v28 - v26);
    if ( result > 0xFFFFFFFF )
    {
      *a1 = -1;
      goto LABEL_69;
    }
    *a1 = result;
  }
  v29 = 0;
  v30 = *(_DWORD *)(v12 + 32);
  result = DWORD1(v40);
  if ( v30 < SDWORD1(v40) )
    v29 = DWORD1(v40) - v30;
  v31 = *(_DWORD *)(v12 + 40);
  if ( v31 > SHIDWORD(v40) )
  {
    result = (unsigned int)(v31 - HIDWORD(v40));
    v29 += result;
  }
  if ( !v29 || v31 <= v30 )
    goto LABEL_54;
  result = (unsigned int)*a2 + v17 * (unsigned __int64)v29 / (v31 - v30);
  if ( result <= 0xFFFFFFFF )
  {
    *a2 = result;
LABEL_54:
    v32 = v41;
    v33 = v37;
    v34 = v39;
    if ( v13 >= v26 )
      v13 = v26;
    v4 = a3;
    LODWORD(v40) = v13;
    if ( v41 >= v30 )
      v32 = v30;
    v41 = v32;
    if ( v37 <= v28 )
      v33 = v28;
    DWORD1(v40) = v32;
    v3 = v38;
    v37 = v33;
    if ( v39 <= v31 )
      v34 = v31;
    *((_QWORD *)&v40 + 1) = __PAIR64__(v34, v33);
    v39 = v34;
    goto LABEL_63;
  }
  *a2 = -1;
  v3 = 0;
LABEL_67:
  v11 = v3 == 0;
LABEL_68:
  if ( v11 )
  {
LABEL_69:
    *a1 = 20;
    *a2 = 15;
  }
  return result;
}
