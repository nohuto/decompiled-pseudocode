/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001FE34
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0087A18 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C005657C (ACPISystemPowerDetermineSupportedSystemState.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C0087434 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerGetSxD @ 0x1C0087BB0 (ACPISystemPowerGetSxD.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C0087EB4 (ACPISystemPowerUpdateWakeCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __m128i v3; // xmm0
  char v4; // di
  __int64 v5; // xmm1_8
  int v7; // eax
  const char *v8; // rsi
  int v9; // edx
  int v10; // r14d
  unsigned __int8 v11; // r14
  int v12; // eax
  KIRQL v13; // al
  char v14; // r8
  __int32 v15; // ecx
  KIRQL v16; // r9
  __int64 v17; // xmm1_8
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v22; // r14d
  int updated; // eax
  signed int v24; // r14d
  __int32 *v25; // r12
  int v26; // eax
  int SxD; // eax
  unsigned int v28; // r14d
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r15
  const char *v31; // rdx
  __int64 v32; // rcx
  const char *v33; // rsi
  const char *v34; // rcx
  __int64 v35; // rdx
  char v36; // r8
  const char *v37; // r10
  const char *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // r8
  KIRQL v42; // r9
  char v43; // al
  const char *v44; // rcx
  __int64 v45; // rax
  const char *v46; // rdx
  __int64 v47; // rcx
  const char *v48; // rcx
  __int64 v49; // rdx
  char v50; // [rsp+50h] [rbp-39h]
  int v51; // [rsp+54h] [rbp-35h]
  int v52; // [rsp+58h] [rbp-31h]
  int v53; // [rsp+5Ch] [rbp-2Dh] BYREF
  int v54; // [rsp+60h] [rbp-29h] BYREF
  int v55; // [rsp+64h] [rbp-25h]
  int v56; // [rsp+68h] [rbp-21h] BYREF
  int v57; // [rsp+6Ch] [rbp-1Dh] BYREF
  int v58; // [rsp+70h] [rbp-19h]
  int v59; // [rsp+74h] [rbp-15h]
  __int32 v60; // [rsp+78h] [rbp-11h] BYREF
  __int64 v61; // [rsp+80h] [rbp-9h]
  __m128i v62; // [rsp+88h] [rbp-1h] BYREF
  __int64 v63; // [rsp+98h] [rbp+Fh]
  __int32 v64; // [rsp+A0h] [rbp+17h]

  v3 = a2[1];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v64 = a2[2].m128i_i32[2];
  v61 = a3;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 4));
  v62 = v3;
  v57 = 0;
  if ( v3.m128i_i32[1] != 1 )
    v7 = 1;
  v56 = 0;
  v62.m128i_i32[1] = v7;
  v53 = 0;
  v55 = 0;
  v59 = 0;
  v54 = 0;
  v63 = v5;
  v8 = (const char *)qword_1C002C340;
  v10 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v10 < 0 )
  {
    v31 = (const char *)qword_1C002C340;
    if ( BugCheckParameter2 )
    {
      v32 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(BugCheckParameter2 + 560);
        if ( (v32 & 0x400000000000LL) != 0 )
          v31 = *(const char **)(BugCheckParameter2 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xFu,
      0x14u,
      (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
      v10,
      v4,
      v8,
      v31);
    return (unsigned int)v10;
  }
  v11 = v55 | v59;
  v52 = v55 | v59;
  if ( v55 | v59 )
  {
LABEL_14:
    updated = ACPISystemPowerUpdateWakeCapabilities(
                BugCheckParameter2,
                v9,
                v61,
                (unsigned int)&v62,
                (unsigned int)&v54,
                (unsigned int)&v53,
                (unsigned int)&v57,
                (__int64)&v56);
    v10 = updated;
    if ( updated >= 0 )
    {
      v24 = 2;
      v25 = &v62.m128i_i32[2];
      v51 = 2;
      while ( 1 )
      {
        v26 = AcpiSupportedSystemStates;
        if ( !_bittest(&v26, v24) )
          goto LABEL_24;
        SxD = ACPISystemPowerGetSxD(BugCheckParameter2, (unsigned int)v24, &v60);
        if ( SxD >= 0 )
        {
          if ( v60 > *v25 )
            *v25 = v60;
          goto LABEL_24;
        }
        if ( SxD != -1073741772 )
        {
          v36 = 0;
          v37 = (const char *)qword_1C002C340;
          v38 = (const char *)qword_1C002C340;
          if ( BugCheckParameter2 )
          {
            v39 = *(_QWORD *)(BugCheckParameter2 + 8);
            v36 = BugCheckParameter2;
            if ( (v39 & 0x200000000000LL) != 0 )
            {
              v37 = *(const char **)(BugCheckParameter2 + 560);
              if ( (v39 & 0x400000000000LL) != 0 )
                v38 = *(const char **)(BugCheckParameter2 + 568);
            }
          }
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x16u,
            (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
            SxD,
            v36,
            v37,
            v38);
        }
        v50 = 0;
        v28 = v52 & ~((1 << *v25) - 1);
        if ( !v28 )
          goto LABEL_55;
        do
        {
          LeastSignificantBit = RtlFindLeastSignificantBit(v28);
          BugCheckParameter4 = LeastSignificantBit;
          v60 = LeastSignificantBit;
          v28 &= ~(1 << LeastSignificantBit);
          if ( v51 <= v53 )
          {
            if ( (v28 & v54) != 0 )
              continue;
            if ( LeastSignificantBit == v56 )
            {
              v50 = 1;
              *v25 = LeastSignificantBit;
            }
          }
          if ( LeastSignificantBit == 4 )
          {
            *v25 = 4;
            goto LABEL_23;
          }
          if ( !v55 )
          {
            *v25 = LeastSignificantBit;
            goto LABEL_23;
          }
          LOBYTE(v40) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v58 = ACPISystemPowerDetermineSupportedSystemState(
                  BugCheckParameter2,
                  (unsigned int)BugCheckParameter4,
                  v41,
                  v40);
          if ( !v58 )
          {
            v46 = (const char *)qword_1C002C340;
            if ( BugCheckParameter2 )
            {
              v47 = *(_QWORD *)(BugCheckParameter2 + 8);
              v4 = BugCheckParameter2;
              if ( (v47 & 0x200000000000LL) != 0 )
              {
                v8 = *(const char **)(BugCheckParameter2 + 560);
                if ( (v47 & 0x400000000000LL) != 0 )
                  v46 = *(const char **)(BugCheckParameter2 + 568);
              }
            }
            WPP_RECORDER_SF_Dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x17u,
              (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
              BugCheckParameter4 - 1,
              v4,
              v8,
              v46);
            KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
          }
          KeReleaseSpinLock(&AcpiPowerLock, v42);
          if ( v58 >= v51 )
          {
            v43 = 1;
            *v25 = BugCheckParameter4;
            goto LABEL_54;
          }
        }
        while ( v28 );
        v43 = v50;
LABEL_54:
        if ( !v43 )
        {
LABEL_55:
          v44 = (const char *)qword_1C002C340;
          if ( BugCheckParameter2 )
          {
            v45 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v45 & 0x200000000000LL) != 0 )
            {
              v8 = *(const char **)(BugCheckParameter2 + 560);
              if ( (v45 & 0x400000000000LL) != 0 )
                v44 = *(const char **)(BugCheckParameter2 + 568);
            }
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x18u,
            (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
            v51 - 1,
            v4,
            v8,
            v44);
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v51);
        }
LABEL_23:
        v24 = v51;
LABEL_24:
        ++v24;
        ++v25;
        v51 = v24;
        if ( v24 > 6 )
        {
          v11 = v52;
          goto LABEL_6;
        }
      }
    }
    v33 = (const char *)qword_1C002C340;
    v34 = (const char *)qword_1C002C340;
    if ( BugCheckParameter2 )
    {
      v35 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v35 & 0x200000000000LL) != 0 )
      {
        v33 = *(const char **)(BugCheckParameter2 + 560);
        if ( (v35 & 0x400000000000LL) != 0 )
          v34 = *(const char **)(BugCheckParameter2 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xFu,
      0x15u,
      (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
      updated,
      v4,
      v33,
      v34);
    return (unsigned int)v10;
  }
  v9 = *(_DWORD *)(v61 + 4);
  if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) != 64 || (v9 & 3) != 0 )
  {
    v22 = 18;
    if ( (v9 & 1) != 0 )
      v22 = 22;
    v52 = v22;
    if ( (v9 & 2) != 0 )
      v52 = v22 | 8;
    goto LABEL_14;
  }
LABEL_6:
  v12 = ACPISystemPowerUpdateWakeCapabilities(
          BugCheckParameter2,
          v9,
          v61,
          (unsigned int)&v62,
          (unsigned int)&v54,
          (unsigned int)&v53,
          (unsigned int)&v57,
          (__int64)&v56);
  v58 = v12;
  if ( v12 < 0 )
  {
    v48 = (const char *)qword_1C002C340;
    if ( BugCheckParameter2 )
    {
      v49 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v49 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(BugCheckParameter2 + 560);
        if ( (v49 & 0x400000000000LL) != 0 )
          v48 = *(const char **)(BugCheckParameter2 + 568);
      }
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xFu,
      0x19u,
      (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
      v12,
      v4,
      v8,
      v48);
    return (unsigned int)v58;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v14 = v54;
    v15 = v64;
    v16 = v13;
    v17 = v63;
    *(__m128i *)(BugCheckParameter2 + 460) = v62;
    *(_QWORD *)(BugCheckParameter2 + 476) = v17;
    *(_DWORD *)(BugCheckParameter2 + 484) = v15;
    *(_DWORD *)(BugCheckParameter2 + 492) = v57;
    *(_DWORD *)(BugCheckParameter2 + 488) = v53;
    *(_DWORD *)(BugCheckParameter2 + 552) ^= (*(_DWORD *)(BugCheckParameter2 + 552) ^ (v11 >> 2) & 1) & 1;
    v18 = *(_DWORD *)(BugCheckParameter2 + 552) ^ ((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 552) ^ (unsigned __int8)(2 * ((v11 & 8) != 0))) & 2;
    v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(4 * ((v14 & 2) != 0))) & 4;
    v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(8 * ((v14 & 4) != 0))) & 8;
    *(_DWORD *)(BugCheckParameter2 + 552) = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)(16 * ((v14 & 8) != 0))) & 0x10 ^ ((unsigned __int8)(v20 ^ (v20 ^ (16 * ((v14 & 8) != 0))) & 0x10) ^ (unsigned __int8)(32 * ((v14 & 0x10) != 0))) & 0x20;
    KeReleaseSpinLock(&AcpiPowerLock, v16);
    if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) == 0 )
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
    return 0LL;
  }
}
