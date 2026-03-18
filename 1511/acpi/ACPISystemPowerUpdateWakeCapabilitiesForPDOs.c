/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C00189E4
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C0068470 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0019A5C (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0068760 (AcpiGetIdleWakeInfo.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C006AC3C (ACPISystemPowerGetDeviceWake.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        int *a1,
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
  KIRQL v15; // al
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r15d
  KIRQL v20; // r9
  int v21; // ecx
  int IdleWakeInfo; // eax
  __int64 v23; // rax
  unsigned int v24; // [rsp+20h] [rbp-78h] BYREF
  unsigned int *v25; // [rsp+28h] [rbp-70h]
  unsigned __int128 v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  __m128i si128; // [rsp+48h] [rbp-50h]
  int v29; // [rsp+58h] [rbp-40h]
  int v30; // [rsp+5Ch] [rbp-3Ch]

  v8 = 0;
  v9 = 0;
  v25 = a6;
  v10 = 0;
  v11 = 0;
  v26 = __PAIR128__(a8, a7);
  v13 = *a1;
  v27 = a4;
  if ( (*(_QWORD *)&v13 & 0x10000LL) == 0 )
    goto LABEL_2;
  v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = a1[120];
  LOBYTE(v16) = v15;
  v19 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v17, v18, v16);
  KeReleaseSpinLock(&AcpiPowerLock, v20);
  v21 = AcpiSupportedSystemStates;
  if ( !v11 )
  {
    v23 = *((_QWORD *)a1 + 113);
    if ( (v23 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v11 = 5;
      else
        v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v11 = (v23 & 0x100000000LL) != 0;
    }
  }
  if ( !_bittest(&v21, v11) )
  {
    v11 = 0;
    goto LABEL_2;
  }
  if ( v19 )
  {
    v8 = 1;
    *a5 = 1 << v19;
    v10 = v19;
    v9 = v19;
  }
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v11, &v24);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v24);
  if ( IdleWakeInfo >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v29 = 4;
    v30 = 4;
    if ( v24 > 5 )
      v9 = 0;
    else
      v9 = si128.m128i_i32[v24];
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
  v10 = *(_DWORD *)(v27 + 4LL * (int)v11);
  if ( !v10 )
  {
    v10 = 4;
    goto LABEL_31;
  }
LABEL_19:
  *a5 = 1 << v10;
LABEL_3:
  if ( v25 )
    *v25 = v11;
  if ( (_QWORD)v26 )
    *(_DWORD *)v26 = v10;
  if ( *((_QWORD *)&v26 + 1) )
    **((_DWORD **)&v26 + 1) = v9;
  return 0LL;
}
