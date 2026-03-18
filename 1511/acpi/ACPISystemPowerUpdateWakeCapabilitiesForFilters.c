/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C001960C
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C0068470 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0019A5C (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0068760 (AcpiGetIdleWakeInfo.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C006AC3C (ACPISystemPowerGetDeviceWake.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForFilters(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        signed int *a6,
        signed int *a7,
        signed int *a8)
{
  signed int v10; // ebx
  signed int v11; // edi
  int v12; // ecx
  int IdleWakeInfo; // eax
  bool v14; // zf
  int v15; // r8d
  signed int *v16; // rdx
  signed int v17; // ecx
  KIRQL v18; // al
  signed int v19; // r13d
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  signed int v23; // r12d
  KIRQL v24; // r9
  int DeviceWake; // eax
  char v26; // al
  bool v27; // zf
  __int64 v29; // rax
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // eax
  signed int v33; // ecx
  int v34; // eax
  int v35; // eax
  char v36; // [rsp+20h] [rbp-50h]
  char v37; // [rsp+21h] [rbp-4Fh]
  unsigned int v38; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v39; // [rsp+28h] [rbp-48h]
  signed int *v40; // [rsp+30h] [rbp-40h]
  signed int *v41; // [rsp+38h] [rbp-38h]
  signed int *v42; // [rsp+40h] [rbp-30h]
  __m128i si128; // [rsp+48h] [rbp-28h]
  int v44; // [rsp+58h] [rbp-18h]
  int v45; // [rsp+5Ch] [rbp-14h]

  v10 = a3[12];
  v11 = a3[11];
  v42 = a6;
  v40 = a7;
  v41 = a8;
  v39 = a4;
  *a5 = 0;
  v12 = 0;
  v36 = 0;
  v37 = 0;
  if ( (a3[1] & 0x400) != 0 )
    v12 = 2;
  *a5 = v12;
  if ( (a3[1] & 0x800) != 0 )
    *a5 |= 4u;
  if ( (a3[1] & 0x1000) != 0 )
    *a5 |= 8u;
  if ( (a3[1] & 0x2000) != 0 )
    *a5 |= 0x10u;
  if ( !v10 || !v11 )
  {
    v36 = 1;
    v10 = 0;
    v11 = 0;
  }
  if ( (*(_DWORD *)a1 & 0x10000) == 0 )
  {
    IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v38);
    if ( IdleWakeInfo == -1073741275 )
      IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v38);
    if ( IdleWakeInfo >= 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v44 = 4;
      v45 = 4;
      v33 = v38 > 5 ? 0 : si128.m128i_i32[v38];
      if ( v33 > 0 )
      {
        while ( 1 )
        {
          v34 = *a5;
          if ( _bittest(&v34, v33) )
            break;
          if ( --v33 <= 0 )
            goto LABEL_15;
        }
        v10 = v33;
      }
    }
LABEL_15:
    v14 = v11 == 0;
    if ( v11 > 0 )
    {
      v15 = AcpiSupportedSystemStates;
      v16 = (signed int *)(a4 + 4LL * v11);
      while ( 1 )
      {
        if ( _bittest(&v15, v11) )
        {
          v17 = *v16;
          if ( *v16 )
          {
            if ( v17 <= v10 )
              goto LABEL_20;
            v35 = *a5;
            if ( _bittest(&v35, v17) )
              break;
          }
        }
        --v11;
        --v16;
        if ( v11 <= 0 )
          goto LABEL_20;
      }
      v10 = *v16;
LABEL_20:
      v14 = v11 == 0;
    }
    if ( v14 )
      goto LABEL_22;
    goto LABEL_43;
  }
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v19 = *(_DWORD *)(a1 + 480);
  LOBYTE(v20) = v18;
  v23 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v21, v22, v20);
  KeReleaseSpinLock(&AcpiPowerLock, v24);
  if ( v36 || v19 < v11 )
    v11 = v19;
  if ( !v11 )
  {
    v29 = *(_QWORD *)(a1 + 904);
    if ( (v29 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v11 = 5;
      else
        v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v11 = (v29 & 0x100000000LL) != 0;
    }
  }
  if ( v23 )
  {
    v37 = 1;
    v10 = v23;
  }
  DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v19, &v38);
  if ( DeviceWake == -1073741275 )
  {
    DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v38);
    if ( DeviceWake == -1073741275 )
      DeviceWake = ACPISystemPowerGetDeviceWake(a1, &v38);
  }
  if ( DeviceWake >= 0
    && ((si128 = _mm_load_si128((const __m128i *)&_xmm), v44 = 4, v45 = 4, v38 > 5)
      ? (v30 = 0)
      : (v30 = si128.m128i_u32[v38]),
        v31 = *a5,
        _bittest(&v31, v30)) )
  {
    v26 = 1;
    v10 = v30;
  }
  else
  {
    v26 = v37;
  }
  if ( !v26 )
  {
    if ( (unsigned int)v11 > 6 )
      v11 = 0;
    v10 = *(_DWORD *)(v39 + 4LL * v11);
    if ( !v10 )
      v10 = 4;
  }
  if ( v36 )
    goto LABEL_39;
  v27 = v10 == 5;
  if ( v10 < 5 )
  {
    do
    {
      v32 = *a5;
      if ( _bittest(&v32, v10) )
        break;
      ++v10;
    }
    while ( v10 < 5 );
LABEL_39:
    v27 = v10 == 5;
  }
  if ( v27 || !v10 )
  {
    v11 = 0;
LABEL_22:
    *a5 = 0;
    v10 = 0;
    goto LABEL_43;
  }
  *a5 = 1 << v10;
LABEL_43:
  if ( v42 )
    *v42 = v11;
  if ( v40 )
    *v40 = v10;
  if ( v41 )
    *v41 = v10;
  return 0LL;
}
