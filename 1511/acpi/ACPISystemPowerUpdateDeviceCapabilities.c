/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1C00184A0
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0067B28 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C0040534 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C0067628 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerGetSxD @ 0x1C0067CD8 (ACPISystemPowerGetSxD.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C0068470 (ACPISystemPowerUpdateWakeCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __m128i v3; // xmm0
  __int32 v4; // eax
  __int64 v6; // xmm1_8
  __int64 v7; // rbx
  int v8; // eax
  __int64 result; // rax
  int v10; // edx
  int v11; // r15d
  KIRQL v12; // al
  char v13; // r8
  KIRQL v14; // r9
  int v15; // ecx
  __int64 v16; // xmm1_8
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  signed int v20; // r12d
  __int32 *v21; // r14
  int v22; // eax
  char v23; // r13
  unsigned int v24; // ebx
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v27; // r9
  __int64 v28; // r8
  KIRQL v29; // r9
  signed int v30; // [rsp+40h] [rbp-29h] BYREF
  int v31; // [rsp+44h] [rbp-25h] BYREF
  int v32; // [rsp+48h] [rbp-21h] BYREF
  int v33; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v34; // [rsp+50h] [rbp-19h]
  __int32 v35; // [rsp+54h] [rbp-15h] BYREF
  int v36; // [rsp+58h] [rbp-11h]
  signed int v37; // [rsp+5Ch] [rbp-Dh]
  __int64 v38; // [rsp+60h] [rbp-9h]
  __m128i v39; // [rsp+68h] [rbp-1h] BYREF
  __int64 v40; // [rsp+78h] [rbp+Fh]
  __int32 v41; // [rsp+80h] [rbp+17h]

  v3 = a2[1];
  v4 = a2[2].m128i_i32[2];
  v6 = a2[2].m128i_i64[0];
  v7 = a3;
  v34 = 0;
  v36 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v41 = v4;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 4));
  v39 = v3;
  v38 = a3;
  if ( v3.m128i_i32[1] != 1 )
    v8 = 1;
  v40 = v6;
  v39.m128i_i32[1] = v8;
  result = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v11 = v34 | v36;
    if ( !(v34 | v36) )
    {
      v10 = *(_DWORD *)(v7 + 4);
      if ( (*(_BYTE *)BugCheckParameter2 & 0x60) == 64 && (v10 & 3) == 0 )
      {
LABEL_6:
        result = ACPISystemPowerUpdateWakeCapabilities(
                   BugCheckParameter2,
                   v10,
                   v7,
                   (unsigned int)&v39,
                   (__int64)&v31,
                   (__int64)&v30,
                   (__int64)&v32,
                   (__int64)&v33);
        if ( (int)result >= 0 )
        {
          v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v13 = v31;
          v14 = v12;
          v15 = v41;
          v16 = v40;
          *(__m128i *)(BugCheckParameter2 + 452) = v39;
          *(_QWORD *)(BugCheckParameter2 + 468) = v16;
          *(_DWORD *)(BugCheckParameter2 + 476) = v15;
          *(_DWORD *)(BugCheckParameter2 + 484) = v32;
          *(_DWORD *)(BugCheckParameter2 + 480) = v30;
          *(_DWORD *)(BugCheckParameter2 + 544) ^= (*(_DWORD *)(BugCheckParameter2 + 544) ^ ((unsigned __int8)v11 >> 2) & 1) & 1;
          v17 = *(_DWORD *)(BugCheckParameter2 + 544) ^ ((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 544) ^ (unsigned __int8)(2 * ((v11 & 8) != 0))) & 2;
          v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(4 * ((v13 & 2) != 0))) & 4;
          v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(8 * ((v13 & 4) != 0))) & 8;
          *(_DWORD *)(BugCheckParameter2 + 544) = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(16 * ((v13 & 8) != 0))) & 0x10 ^ ((unsigned __int8)(v19 ^ (v19 ^ (16 * ((v13 & 8) != 0))) & 0x10) ^ (unsigned __int8)(32 * ((v13 & 0x10) != 0))) & 0x20;
          KeReleaseSpinLock(&AcpiPowerLock, v14);
          if ( (*(_QWORD *)BugCheckParameter2 & 0x8000000000000LL) == 0 )
            _InterlockedOr64((volatile signed __int64 *)BugCheckParameter2, 0x100000000000000uLL);
          return 0LL;
        }
        return result;
      }
      v11 = 18;
      if ( (v10 & 1) != 0 )
        v11 = 22;
      if ( (v10 & 2) != 0 )
        v11 |= 8u;
    }
    result = ACPISystemPowerUpdateWakeCapabilities(
               BugCheckParameter2,
               v10,
               v7,
               (unsigned int)&v39,
               (__int64)&v31,
               (__int64)&v30,
               (__int64)&v32,
               (__int64)&v33);
    if ( (int)result < 0 )
      return result;
    v20 = 2;
    v21 = &v39.m128i_i32[2];
LABEL_17:
    v22 = AcpiSupportedSystemStates;
    if ( !_bittest(&v22, v20) )
      goto LABEL_23;
    if ( (int)ACPISystemPowerGetSxD(BugCheckParameter2, (unsigned int)v20, &v35) >= 0 )
    {
      if ( v35 > *v21 )
        *v21 = v35;
      goto LABEL_23;
    }
    v23 = 0;
    v24 = v11 & ~((1 << *v21) - 1);
    if ( !v24 )
      goto LABEL_37;
    while ( 1 )
    {
      LeastSignificantBit = RtlFindLeastSignificantBit(v24);
      BugCheckParameter4 = LeastSignificantBit;
      v35 = LeastSignificantBit;
      v24 &= ~(1 << LeastSignificantBit);
      if ( v20 <= v30 )
      {
        if ( (v24 & v31) != 0 )
          goto LABEL_35;
        if ( LeastSignificantBit == v33 )
        {
          v23 = 1;
          *v21 = LeastSignificantBit;
        }
      }
      if ( LeastSignificantBit == 4 )
      {
        *v21 = 4;
        goto LABEL_23;
      }
      if ( !v34 )
      {
        *v21 = LeastSignificantBit;
        goto LABEL_23;
      }
      LOBYTE(v27) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v37 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, (unsigned int)BugCheckParameter4, v28, v27);
      if ( !v37 )
        KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
      KeReleaseSpinLock(&AcpiPowerLock, v29);
      if ( v37 >= v20 )
      {
        v23 = 1;
        *v21 = BugCheckParameter4;
LABEL_36:
        if ( !v23 )
LABEL_37:
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v20);
LABEL_23:
        ++v20;
        ++v21;
        if ( v20 > 6 )
        {
          LODWORD(v7) = v38;
          goto LABEL_6;
        }
        goto LABEL_17;
      }
LABEL_35:
      if ( !v24 )
        goto LABEL_36;
    }
  }
  return result;
}
