/*
 * XREFs of HvlpDetermineEnlightenments @ 0x1401B3EC0
 * Callers:
 *     HvlPhase0Initialize @ 0x140530D90 (HvlPhase0Initialize.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     HviGetHypervisorFeatures @ 0x140137088 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1401B4248 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlpGetRegister128 @ 0x1401B51A4 (HvlpGetRegister128.c)
 *     HviGetEnlightenmentInformation @ 0x140217CA4 (HviGetEnlightenmentInformation.c)
 */

__int64 (__fastcall *(__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1))()
{
  char v0; // r14
  __int64 v1; // rcx
  __int16 v2; // r15
  __int64 v3; // r8
  int v4; // esi
  __int16 v5; // r12
  unsigned __int64 v6; // rax
  PHYSICAL_ADDRESS v7; // rbx
  char v8; // al
  int v9; // eax
  __int64 *v10; // rdi
  __int64 (__fastcall *(__fastcall *result)(_DWORD *))(); // rax
  int v12; // [rsp+28h] [rbp-89h] BYREF
  signed int v13; // [rsp+2Ch] [rbp-85h]
  PHYSICAL_ADDRESS v14[4]; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v15[3]; // [rsp+58h] [rbp-59h] BYREF
  int v16; // [rsp+64h] [rbp-4Dh]
  unsigned __int8 v17[16]; // [rsp+68h] [rbp-49h] BYREF
  int v18; // [rsp+78h] [rbp-39h]
  _BYTE v19[16]; // [rsp+D8h] [rbp+27h] BYREF

  v0 = 0;
  HvlEnableIdleYield = 0;
  HviGetEnlightenmentInformation(&v12);
  HviGetHypervisorFeatures(v14);
  HviGetHypervisorFeatures(v15);
  v2 = v12;
  v3 = (unsigned int)HvlpFlags;
  v4 = (v12 & 1) != 0;
  if ( (v12 & 8) != 0 )
  {
    v4 |= 0x10u;
    v3 = HvlpFlags | 2u;
    HvlpFlags |= 2u;
  }
  if ( (v12 & 0x200) != 0 )
  {
    v4 |= 0x1000u;
    v3 = (unsigned int)v3 | 0x20;
    HvlpFlags = v3;
  }
  v5 = v16;
  if ( (v16 & 0x40000) != 0 )
  {
    v1 = 1073741825LL;
    v6 = __readmsr(0x40000001u);
    if ( (v6 & 2) == 0 )
      __writemsr(0x40000001u, v6 | 2);
    v4 |= 0x100000u;
  }
  if ( (v16 & 0x10) != 0 )
    v4 |= 0x80u;
  if ( (v12 & 0x800) != 0 )
  {
    LODWORD(v3) = v3 | 0x100;
    HvlpFlags = v3;
  }
  if ( (v12 & 2) != 0 )
    v4 |= 2u;
  if ( (v12 & 4) != 0 )
    v4 |= 4u;
  if ( (v12 & 0x20) != 0 )
    v4 |= 0x20u;
  if ( (v12 & 0x400) != 0 )
    v4 |= 0x4000u;
  if ( (v16 & 0x20) != 0 )
    v4 |= 0x200u;
  if ( v13 > 0 )
  {
    _BitScanReverse((unsigned int *)&v1, v13);
    v4 |= 0x40u;
    HvlLongSpinCountMask = v13 | ((1 << v1) - 1);
  }
  v7 = v14[0];
  if ( (v14[0].QuadPart & 0x100000000000LL) != 0 )
  {
    v8 = HvlpTryToLockCpuManagementVersion(v1, (unsigned int)v13, v3);
    LODWORD(v3) = HvlpFlags;
    if ( v8 )
    {
      LODWORD(v3) = HvlpFlags | 4;
      HvlpFlags |= 4u;
    }
  }
  if ( (v3 & 4) != 0 )
  {
    HvlpGetRegister128(516LL, &v12);
    if ( (v13 & 1) != 0 )
      v4 |= 0x400u;
    if ( (v13 & 2) != 0 )
      v4 |= 0x20000u;
    if ( (v13 & 4) != 0 )
      v4 |= 0x40000u;
    v9 = HvlpRootFlags;
    if ( (v12 & 1) != 0 )
    {
      v9 = HvlpRootFlags | 0x20;
      HvlpRootFlags |= 0x20u;
    }
    if ( (v12 & 2) != 0 )
    {
      v9 |= 0x40u;
      HvlpRootFlags = v9;
    }
    if ( v12 < 0 )
    {
      v4 |= 0x10008u;
      v9 |= 0x187u;
      HvlpRootFlags = v9;
    }
    LODWORD(v3) = HvlpFlags;
    if ( (v7.QuadPart & 0x10000000000LL) != 0 )
      HvlpRootFlags = v9 | 0x10;
  }
  if ( (v5 & 0x80u) != 0 )
    v4 |= 0x800u;
  if ( (v5 & 8) == 0 )
  {
    LODWORD(v3) = v3 | 8;
    HvlpFlags = v3;
  }
  if ( (v7.LowPart & 0x202) == 0x202LL )
    v4 |= 0x100u;
  if ( (v7.QuadPart & 0x200000000LL) != 0 )
  {
    v10 = (__int64 *)HvlpAcquireHypercallPage(v14, 2, (__int64)v19, 8LL);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(70LL, 0LL, (PHYSICAL_ADDRESS)v14[3].QuadPart);
    HvlpReleaseHypercallPage((__int64)v14);
    LODWORD(v3) = HvlpFlags;
    HvlPartitionId = *v10;
  }
  if ( (v5 & 0x400) != 0 )
    v4 |= 0x2000u;
  if ( (v7.LowPart & 4) != 0 )
  {
    LODWORD(v3) = v3 | 0x40;
    HvlpFlags = v3;
  }
  if ( (v5 & 0x4000) == 0 )
  {
    LODWORD(v3) = v3 | 0x8000;
    HvlpFlags = v3;
  }
  if ( (v7.QuadPart & 0x1000000000000LL) != 0 )
    HvlpFlags = v3 | 0x80;
  if ( (v7.QuadPart & 0x20000000000000LL) != 0 )
    v4 |= 0x8000u;
  if ( (v2 & 0x2000) != 0 )
  {
    if ( HvlpVsmVtlCallVa && HvlpEnterIumSecureMode(1u, 231, 0, v17) >= 0 )
    {
      v0 = 4;
      if ( (v18 & 1) != 0 )
        v0 = 6;
      if ( (v18 & 2) != 0 )
        v0 |= 0x20u;
      if ( (v18 & 4) == 0 )
        v0 |= 0x10u;
    }
    if ( (v0 & 2) != 0 )
      v4 |= 0x80000u;
  }
  result = HvlGetEnlightenmentInfo;
  qword_1402D2780 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & 0x1FFFFF & v4;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & 0x1FFFFF & v4;
  return result;
}
