/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x140208760
 * Callers:
 *     KiDetectBpbMsr @ 0x1402086D0 (KiDetectBpbMsr.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x140208B84 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsKvaShadowNeededForTsa @ 0x140208BD4 (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14016F420 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14016F450 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiIsBranchConfusionPresent @ 0x140208AFC (KiIsBranchConfusionPresent.c)
 *     KiIsTsaPresent @ 0x140208D4C (KiIsTsaPresent.c)
 */

__int64 __fastcall KiDetectHardwareSpecControlFeatures(_BYTE *a1, char a2, __int64 a3, int *a4)
{
  int v4; // esi
  int v5; // edi
  BOOL v9; // r12d
  int v25; // r8d
  unsigned __int64 v26; // rax
  ULONG_PTR v37; // rbx
  __int64 v38; // r10
  unsigned __int8 v39; // r11
  char v40; // cl
  char v41; // al
  __int64 result; // rax
  __int64 v43; // [rsp+20h] [rbp-30h]
  unsigned int v44; // [rsp+28h] [rbp-28h]
  __int64 v46; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  v43 = 0LL;
  if ( HviIsHypervisorMicrosoftCompatible() )
  {
    HviGetHypervisorFeatures(&v46);
    v9 = (v46 & 0x100000000000LL) == 0;
  }
  else
  {
    _RAX = 1LL;
    __asm { cpuid }
    v9 = (int)_RCX < 0;
  }
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v25 = 0;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v25 = _RDX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v26 = __readmsr(0x10Au);
      if ( (v26 & 2) != 0 )
      {
        v5 = 1;
        LODWORD(v43) = 1;
        v4 = 1;
      }
      if ( (v26 & 0x10) != 0 )
      {
        v5 |= 0x100u;
        v4 = 1;
        LODWORD(v43) = v5;
      }
    }
  }
  if ( a1[1597] == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v5 |= 4u;
      v4 = 1;
      LODWORD(v43) = v5;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v5 |= 0x10u;
      v4 = 1;
      LODWORD(v43) = v5;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v5 |= 0x40u;
      v4 = 1;
      LODWORD(v43) = v5;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v5 |= 0x80u;
      LODWORD(v43) = v5;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v5 |= 0x180u;
      LODWORD(v43) = v5;
    }
    if ( (v43 & 0x80u) != 0LL )
      v4 = 1;
    if ( (v5 & 0x54) == 0x54 )
    {
      v5 |= 0x4000u;
LABEL_35:
      LODWORD(v43) = v5;
    }
  }
  else
  {
    if ( (v25 & 0x4000000) != 0 )
    {
      v5 |= 0x14u;
      v4 = 1;
      LODWORD(v43) = v5;
    }
    if ( (v25 & 0x8000000) != 0 )
    {
      v5 |= 0x44u;
      v4 = 1;
      LODWORD(v43) = v5;
    }
    if ( v25 < 0 )
    {
      v5 |= 0x80u;
      v4 = 1;
      goto LABEL_35;
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v5 |= 0x20u;
    LODWORD(v43) = v5;
  }
  v37 = KeFeatureBits2;
  if ( (KeFeatureBits2 & 0x20000) != 0 && (KiFeatureSettings & 0x400000) == 0 )
  {
    v5 |= 0x2000u;
    LODWORD(v43) = v5;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1) )
  {
    v5 |= 0x8000u;
    LODWORD(v43) = v5;
  }
  if ( (unsigned int)KiIsTsaPresent(a1) )
  {
    v5 |= 0x8000000u;
    LODWORD(v43) = v5;
  }
  v40 = a1[1597];
  if ( v40 != v39 || (v37 & 0x2000000) != 0 )
  {
    v5 |= 8u;
    LODWORD(v43) = v5;
  }
  LOBYTE(v44) = 0;
  if ( v40 == 2 )
  {
    if ( (v37 & v38) == 0 && (v9 || ((unsigned __int8)v5 & v39) != 0) )
    {
      v5 |= 0x2000000u;
      LODWORD(v43) = v5;
    }
    if ( (v5 & 0x2000000) != 0 )
    {
      if ( (v37 & 0x8000000) != 0 )
      {
        v5 |= v38;
        LODWORD(v43) = v5;
      }
      if ( KiTsxSupported )
      {
        LOBYTE(v44) = 3;
      }
      else if ( (v37 & 0x8000000) != 0
             || a1[1520] == 6
             && ((v41 = a1[1523], v41 == -105) && (a1[1522] == 2 || a1[1522] == 5)
              || v41 == -102 && (a1[1522] == 3 || a1[1522] == 4)) )
      {
        LOBYTE(v44) = 2;
      }
      else
      {
        LOBYTE(v44) = v39 + v9;
      }
    }
  }
  if ( v40 == v39 && (v37 & 0x400000000LL) == 0 )
  {
    v5 |= 0x200000u;
    LODWORD(v43) = v5;
  }
  if ( v40 == 2 && (v37 & 0x800000000LL) == 0 )
  {
    v5 |= 0x800000u;
    LODWORD(v43) = v5;
    if ( (v37 & 0x1000000000LL) != 0 )
    {
      v5 |= 0x1000000u;
      LODWORD(v43) = v5;
    }
  }
  if ( v40 == v39 )
    LODWORD(v43) = v5 | 0x400000;
  result = v44;
  *(_QWORD *)a3 = v43;
  *(_DWORD *)(a3 + 8) = v44;
  if ( a4 )
    *a4 = v4;
  return result;
}
