/*
 * XREFs of HvlpDetermineEnlightenments @ 0x1401BF8C4
 * Callers:
 *     HvlPhase0Initialize @ 0x14057DA80 (HvlPhase0Initialize.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14013D6B0 (VslGetNestedPageProtectionFlags.c)
 *     HviGetHypervisorFeatures @ 0x14014B494 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1401BFC00 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlpGetRegister128 @ 0x1401C1224 (HvlpGetRegister128.c)
 *     HviGetEnlightenmentInformation @ 0x140231CC8 (HviGetEnlightenmentInformation.c)
 */

__int64 (__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1)
{
  __int64 v0; // rcx
  __int16 v1; // r14
  __int64 v2; // r8
  int v3; // esi
  __int16 v4; // r15
  unsigned __int64 v5; // rax
  PHYSICAL_ADDRESS v6; // rbx
  char v7; // al
  int v8; // eax
  __int64 *v9; // rdi
  __int64 (__fastcall *result)(_DWORD *); // rax
  int v11; // [rsp+20h] [rbp-60h] BYREF
  signed int v12; // [rsp+24h] [rbp-5Ch]
  PHYSICAL_ADDRESS v13[4]; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v14[3]; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+5Ch] [rbp-24h]
  _BYTE v16[16]; // [rsp+60h] [rbp-20h] BYREF

  HvlEnableIdleYield = 0;
  HviGetEnlightenmentInformation(&v11);
  HviGetHypervisorFeatures(v13);
  HviGetHypervisorFeatures(v14);
  v1 = v11;
  v2 = (unsigned int)HvlpFlags;
  v3 = (v11 & 1) != 0;
  if ( (v11 & 8) != 0 )
  {
    v3 |= 0x10u;
    v2 = HvlpFlags | 1u;
    HvlpFlags |= 1u;
  }
  if ( (v11 & 0x200) != 0 )
  {
    v3 |= 0x1000u;
    v2 = (unsigned int)v2 | 0x10;
    HvlpFlags = v2;
  }
  v4 = v15;
  if ( (v15 & 0x40000) != 0 )
  {
    v0 = 1073741825LL;
    v5 = __readmsr(0x40000001u);
    if ( (v5 & 2) == 0 )
      __writemsr(0x40000001u, v5 | 2);
    v3 |= 0x100000u;
  }
  if ( (v15 & 0x10) != 0 )
    v3 |= 0x80u;
  if ( (v11 & 0x800) != 0 )
  {
    v2 = (unsigned int)v2 | 0x80;
    HvlpFlags = v2;
  }
  if ( (v11 & 2) != 0 )
    v3 |= 2u;
  if ( (v11 & 4) != 0 )
    v3 |= 4u;
  if ( (v11 & 0x20) != 0 )
    v3 |= 0x20u;
  if ( (v11 & 0x400) != 0 )
    v3 |= 0x4000u;
  if ( (v15 & 0x20) != 0 )
    v3 |= 0x200u;
  if ( v12 > 0 )
  {
    _BitScanReverse((unsigned int *)&v0, v12);
    v3 |= 0x40u;
    HvlLongSpinCountMask = v12 | ((1 << v0) - 1);
  }
  v6 = v13[0];
  if ( (v13[0].QuadPart & 0x100000000000LL) != 0 )
  {
    v7 = HvlpTryToLockCpuManagementVersion(v0, (unsigned int)v12, v2);
    LODWORD(v2) = HvlpFlags;
    if ( v7 )
    {
      LODWORD(v2) = HvlpFlags | 2;
      HvlpFlags |= 2u;
    }
  }
  if ( (v2 & 2) != 0 )
  {
    HvlpGetRegister128(516LL, &v11);
    if ( (v12 & 1) != 0 )
      v3 |= 0x400u;
    if ( (v12 & 2) != 0 )
      v3 |= 0x20000u;
    if ( (v12 & 4) != 0 )
      v3 |= 0x40000u;
    v8 = HvlpRootFlags;
    if ( (v11 & 1) != 0 )
    {
      v8 = HvlpRootFlags | 0x20;
      HvlpRootFlags |= 0x20u;
    }
    if ( (v11 & 2) != 0 )
    {
      v8 |= 0x40u;
      HvlpRootFlags = v8;
    }
    if ( v11 < 0 )
    {
      v3 |= 0x10008u;
      HvlHyperVRootPartition = 1;
      v8 |= 0x187u;
      HvlpRootFlags = v8;
    }
    if ( (v6.QuadPart & 0x10000000000LL) != 0 )
    {
      v8 |= 0x10u;
      HvlpRootFlags = v8;
    }
    LODWORD(v2) = HvlpFlags;
    if ( (v1 & 0x1000) != 0 )
      HvlpRootFlags = v8 | 0x200;
  }
  if ( (v4 & 0x80u) != 0 )
    v3 |= 0x800u;
  if ( (v4 & 8) == 0 )
  {
    LODWORD(v2) = v2 | 4;
    HvlpFlags = v2;
  }
  if ( (v6.LowPart & 0x202) == 0x202LL )
    v3 |= 0x100u;
  if ( (v6.QuadPart & 0x200000000LL) != 0 )
  {
    v9 = (__int64 *)HvlpAcquireHypercallPage(v13, 2, (__int64)v16, 8LL);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(70LL, 0LL, (PHYSICAL_ADDRESS)v13[3].QuadPart);
    HvlpReleaseHypercallPage((__int64)v13);
    LODWORD(v2) = HvlpFlags;
    HvlPartitionId = *v9;
  }
  if ( (v4 & 0x400) != 0 )
    v3 |= 0x2000u;
  if ( (v6.LowPart & 4) != 0 )
  {
    LODWORD(v2) = v2 | 0x20;
    HvlpFlags = v2;
  }
  if ( (v4 & 0x4000) == 0 )
  {
    LODWORD(v2) = v2 | 0x2000;
    HvlpFlags = v2;
  }
  if ( (v6.QuadPart & 0x1000000000000LL) != 0 )
    HvlpFlags = v2 | 0x40;
  if ( (v6.QuadPart & 0x20000000000000LL) != 0 )
    v3 |= 0x8000u;
  if ( (v1 & 0x2000) != 0 && (VslGetNestedPageProtectionFlags() & 2) != 0 )
    v3 |= 0x80000u;
  result = HvlGetEnlightenmentInfo;
  qword_1402F2420 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & 0x1FFFFF & v3;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & 0x1FFFFF & v3;
  return result;
}
