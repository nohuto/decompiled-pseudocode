/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C00189DC
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C006AA10 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C00076CC (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C0069380 (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0069AD0 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  char v8; // r12
  int v9; // ebp
  int v10; // edi
  unsigned int v11; // ebx
  int v13; // eax
  int v15; // r15d
  KIRQL v16; // r9
  int v17; // ecx
  int IdleWakeInfo; // eax
  __int64 v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-78h] BYREF
  unsigned int *v21; // [rsp+28h] [rbp-70h]
  unsigned __int128 v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+40h] [rbp-58h]
  __m128i si128; // [rsp+48h] [rbp-50h]
  int v25; // [rsp+58h] [rbp-40h]
  int v26; // [rsp+5Ch] [rbp-3Ch]

  v8 = 0;
  v9 = 0;
  v21 = a6;
  v10 = 0;
  v11 = 0;
  v22 = __PAIR128__(a8, a7);
  v13 = *(_DWORD *)a1;
  v23 = a4;
  if ( (*(_QWORD *)&v13 & 0x10000LL) == 0 )
    goto LABEL_2;
  KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = *(_DWORD *)(a1 + 480);
  v15 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
  KeReleaseSpinLock(&AcpiPowerLock, v16);
  v17 = AcpiSupportedSystemStates;
  if ( !v11 )
  {
    v19 = *(_QWORD *)(a1 + 904);
    if ( (v19 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v11 = 5;
      else
        v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v11 = (v19 & 0x100000000LL) != 0;
    }
  }
  if ( !_bittest(&v17, v11) )
  {
    v11 = 0;
    goto LABEL_2;
  }
  if ( v15 )
  {
    v8 = 1;
    *a5 = 1 << v15;
    v10 = v15;
    v9 = v15;
  }
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v11, &v20);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v20);
  if ( IdleWakeInfo >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v25 = 4;
    v26 = 4;
    if ( v20 > 5 )
      v9 = 0;
    else
      v9 = si128.m128i_i32[v20];
    v10 = v9;
    v8 = 1;
  }
  if ( v8 )
  {
LABEL_31:
    if ( v10 )
      goto LABEL_19;
LABEL_2:
    *a5 = 0;
    goto LABEL_3;
  }
  v10 = *(_DWORD *)(v23 + 4LL * (int)v11);
  if ( !v10 )
  {
    v10 = 4;
    goto LABEL_31;
  }
LABEL_19:
  *a5 = 1 << v10;
LABEL_3:
  if ( v21 )
    *v21 = v11;
  if ( (_QWORD)v22 )
    *(_DWORD *)v22 = v10;
  if ( *((_QWORD *)&v22 + 1) )
    **((_DWORD **)&v22 + 1) = v9;
  return 0LL;
}
