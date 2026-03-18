/*
 * XREFs of RIMComputeVirtualDesktopPhysicalSize @ 0x1C0005CF4
 * Callers:
 *     RIMComputeVirtualHimetricSize @ 0x1C0005C6C (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000855C (RIMUpdatePointerDeviceScalingInfo.c)
 *     ApiSetIsRemoteConnection @ 0x1C000F57C (ApiSetIsRemoteConnection.c)
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     GetMonitorPhysicalDimensions @ 0x1C005DB60 (GetMonitorPhysicalDimensions.c)
 */

unsigned __int64 __fastcall RIMComputeVirtualDesktopPhysicalSize(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // r14
  unsigned __int64 result; // rax
  __int64 v8; // rdi
  int v9; // r13d
  unsigned int v10; // ebx
  int DeviceCaps; // eax
  HDC v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r10
  int v17; // ecx
  unsigned __int64 v18; // r9
  __int128 v19; // xmm0
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // eax
  HDC v25; // rcx
  int v26; // r14d
  unsigned int v27; // ecx
  int v28; // esi
  unsigned int v29; // ecx
  int v30; // r11d
  int v31; // r10d
  int v32; // r8d
  unsigned int v33; // ecx
  int v34; // edx
  int v35; // [rsp+28h] [rbp-71h]
  int v36; // [rsp+50h] [rbp-49h] BYREF
  int v37; // [rsp+54h] [rbp-45h]
  int v38; // [rsp+58h] [rbp-41h]
  int v39; // [rsp+5Ch] [rbp-3Dh]
  int v40; // [rsp+60h] [rbp-39h]
  __int128 v41; // [rsp+68h] [rbp-31h]
  int v42; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v43[4]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v44[8]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v45; // [rsp+98h] [rbp-1h]
  unsigned int v46; // [rsp+9Ch] [rbp+3h]
  _BYTE v47[80]; // [rsp+A0h] [rbp+7h] BYREF
  int v49; // [rsp+118h] [rbp+7Fh] BYREF

  v49 = 0;
  v36 = 0;
  v3 = 0;
  v41 = 0LL;
  v38 = 0;
  v4 = a3;
  if ( !(unsigned int)ApiSetIsRemoteConnection() )
  {
    result = gpDispInfo;
    v8 = *(_QWORD *)(gpDispInfo + 96);
    if ( !v8 )
      goto LABEL_69;
    v9 = v41;
    v40 = HIDWORD(v41);
    v37 = DWORD2(v41);
    v39 = DWORD1(v41);
    while ( 1 )
    {
      result = *(unsigned int *)(v8 + 24);
      if ( (result & 1) == 0 )
        goto LABEL_26;
      if ( (int)GetMonitorPhysicalDimensions(*(_QWORD *)(v8 + 160), &v49, &v36, &v42) < 0 )
        break;
      if ( *(_DWORD *)(gpDispInfo + 80) == 1 && v8 == *(_QWORD *)(gpDispInfo + 96) )
      {
        v10 = v49;
        if ( !v49 || (v13 = v36) == 0 )
        {
          DeviceCaps = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24));
          v12 = *(HDC *)(gpDispInfo + 24);
          v10 = (DeviceCaps + 5) / 10;
          v49 = v10;
          v13 = (int)(GreGetDeviceCaps(v12) + 5) / 10;
          v36 = v13;
        }
      }
      else
      {
        v10 = v49;
        v13 = v36;
      }
      if ( v4 )
      {
        v14 = 0LL;
        v15 = 0LL;
        if ( *(_DWORD *)v4 )
        {
          v16 = *(_QWORD *)(v4 + 8);
          while ( *(_DWORD *)(v16 + 72 * v15 + 28) != v42 )
          {
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= *(_DWORD *)v4 )
              goto LABEL_15;
          }
          v14 = v16 + 72 * v15;
LABEL_15:
          v3 = v38;
        }
        if ( v14 )
        {
          v43[0] = 0;
          v43[1] = 0;
          v17 = *(_DWORD *)(v14 + 32);
          v43[2] = v10;
          v43[3] = v13;
          if ( (_WORD)v17 == 0xFFFF )
            LODWORD(v18) = 0;
          else
            v18 = *(_QWORD *)(v4 + 16) + ((unsigned __int64)(unsigned __int16)v17 << 6);
          RIMUpdatePointerDeviceScalingInfo(
            (unsigned int)v43,
            (*(unsigned __int16 *)(v14 + 14) << 6) + *(_QWORD *)(v4 + 16) + 16,
            *(_QWORD *)(v4 + 16) + (*(unsigned __int16 *)(v14 + 34) << 6),
            v18,
            v14 + 20,
            v35,
            0LL,
            (__int64)v47,
            (__int64)v44);
          v13 = v46;
          v10 = v45;
LABEL_20:
          v49 = v10;
          goto LABEL_21;
        }
      }
LABEL_22:
      if ( !v10 || !v13 )
      {
        v10 = 20;
        v49 = 20;
        v13 = 15;
        v36 = 15;
      }
      if ( v3 )
      {
        v26 = *(_DWORD *)(v8 + 28);
        v27 = 0;
        if ( v26 < v9 )
          v27 = v9 - v26;
        v28 = *(_DWORD *)(v8 + 36);
        if ( v28 > v37 )
          v27 += v28 - v37;
        if ( v27 && v28 > v26 )
        {
          result = (unsigned int)*a1 + v10 * (unsigned __int64)v27 / (v28 - v26);
          if ( result > 0xFFFFFFFF )
          {
            *a1 = -1;
            goto LABEL_69;
          }
          *a1 = result;
        }
        v29 = 0;
        v30 = *(_DWORD *)(v8 + 32);
        result = DWORD1(v41);
        if ( v30 < SDWORD1(v41) )
          v29 = DWORD1(v41) - v30;
        v31 = *(_DWORD *)(v8 + 40);
        if ( v31 > SHIDWORD(v41) )
        {
          result = (unsigned int)(v31 - HIDWORD(v41));
          v29 += result;
        }
        if ( v29 && v31 > v30 )
        {
          result = (unsigned int)*a2 + v13 * (unsigned __int64)v29 / (v31 - v30);
          if ( result > 0xFFFFFFFF )
          {
            *a2 = -1;
            v3 = 0;
LABEL_27:
            v20 = v3 == 0;
            goto LABEL_28;
          }
          *a2 = result;
        }
        v32 = v39;
        v33 = v37;
        v34 = v40;
        if ( v9 >= v26 )
          v9 = v26;
        v4 = a3;
        LODWORD(v41) = v9;
        if ( v39 >= v30 )
          v32 = v30;
        v39 = v32;
        if ( v37 <= v28 )
          v33 = v28;
        DWORD1(v41) = v32;
        v3 = v38;
        v37 = v33;
        if ( v40 <= v31 )
          v34 = v31;
        *((_QWORD *)&v41 + 1) = __PAIR64__(v34, v33);
        v40 = v34;
      }
      else
      {
        v19 = *(_OWORD *)(v8 + 28);
        v3 = 1;
        *a1 = v10;
        v38 = 1;
        v41 = v19;
        v9 = v19;
        v40 = HIDWORD(v19);
        v37 = DWORD2(v19);
        result = DWORD1(v19);
        v39 = DWORD1(v19);
        *a2 = v13;
      }
LABEL_26:
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v8 )
        goto LABEL_27;
    }
    if ( *(_DWORD *)(gpDispInfo + 80) != 1 || v8 != *(_QWORD *)(gpDispInfo + 96) )
    {
      v10 = 20;
      v13 = 15;
      goto LABEL_20;
    }
    v24 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24));
    v25 = *(HDC *)(gpDispInfo + 24);
    v10 = (v24 + 5) / 10;
    v49 = v10;
    v13 = (int)(GreGetDeviceCaps(v25) + 5) / 10;
LABEL_21:
    v36 = v13;
    goto LABEL_22;
  }
  v21 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24));
  v22 = gpDispInfo;
  *a1 = (v21 + 5) / 10;
  v23 = GreGetDeviceCaps(*(HDC *)(v22 + 24)) + 5;
  result = (unsigned int)((unsigned __int64)(1717986919LL * v23) >> 32) >> 31;
  *a2 = v23 / 10;
  if ( !*a1 )
    goto LABEL_69;
  v20 = v23 / 10 == 0;
LABEL_28:
  if ( v20 )
  {
LABEL_69:
    *a1 = 20;
    *a2 = 15;
  }
  return result;
}
