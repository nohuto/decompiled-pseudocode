/*
 * XREFs of KiDetectHardwareSpecControlFeatures @ 0x1401D96C8
 * Callers:
 *     KiDetectBpbMsr @ 0x1401D9638 (KiDetectBpbMsr.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1401D9AD8 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1401D9B28 (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x14014B494 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x14014B4C4 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiIsBranchConfusionPresent @ 0x1401D9A70 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaPresent @ 0x1401D9C80 (KiIsTsaPresent.c)
 *     HviGetEnlightenmentInformation @ 0x140231CC8 (HviGetEnlightenmentInformation.c)
 */

int *__fastcall KiDetectHardwareSpecControlFeatures(_BYTE *a1, char a2, __int64 a3, int *a4)
{
  int v4; // esi
  int v5; // edi
  BOOL IsAnyHypervisorPresent; // r12d
  int v19; // r8d
  unsigned __int64 v20; // rax
  ULONG_PTR v31; // rbx
  char v32; // cl
  char v33; // al
  int v34; // edi
  int *result; // rax
  __int64 v36; // [rsp+20h] [rbp-50h]
  int v37; // [rsp+28h] [rbp-48h]
  __int64 v40; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v41[4]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 0;
  v36 = 0LL;
  IsAnyHypervisorPresent = 1;
  if ( HviIsHypervisorMicrosoftCompatible() )
  {
    HviGetEnlightenmentInformation(v41);
    HviGetHypervisorFeatures(&v40);
    if ( (v40 & 0x100000000000LL) != 0 )
      IsAnyHypervisorPresent = (v41[0] & 0x1000) != 0;
  }
  else
  {
    IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  }
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v19 = 0;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v19 = _RDX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v20 = __readmsr(0x10Au);
      if ( (v20 & 2) != 0 )
      {
        v5 = 1;
        LODWORD(v36) = 1;
        v4 = 1;
      }
      if ( (v20 & 0x10) != 0 )
      {
        v5 |= 0x100u;
        v4 = 1;
        LODWORD(v36) = v5;
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
      LODWORD(v36) = v5;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v5 |= 0x10u;
      v4 = 1;
      LODWORD(v36) = v5;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v5 |= 0x40u;
      v4 = 1;
      LODWORD(v36) = v5;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v5 |= 0x80u;
      LODWORD(v36) = v5;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v5 |= 0x180u;
      LODWORD(v36) = v5;
    }
    if ( (v36 & 0x80u) != 0LL )
      v4 = 1;
    if ( (v5 & 0x54) == 0x54 )
    {
      v5 |= 0x4000u;
LABEL_36:
      LODWORD(v36) = v5;
    }
  }
  else
  {
    if ( (v19 & 0x4000000) != 0 )
    {
      v5 |= 0x14u;
      v4 = 1;
      LODWORD(v36) = v5;
    }
    if ( (v19 & 0x8000000) != 0 )
    {
      v5 |= 0x44u;
      v4 = 1;
      LODWORD(v36) = v5;
    }
    if ( v19 < 0 )
    {
      v5 |= 0x80u;
      v4 = 1;
      goto LABEL_36;
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v5 |= 0x20u;
    LODWORD(v36) = v5;
  }
  v31 = KeFeatureBits2;
  if ( (KeFeatureBits2 & 0x20000) != 0 && (KiFeatureSettings & 0x400000) == 0 )
  {
    v5 |= 0x2000u;
    LODWORD(v36) = v5;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1) )
  {
    v5 |= 0x8000u;
    LODWORD(v36) = v5;
  }
  if ( (unsigned int)KiIsTsaPresent(a1) )
  {
    v5 |= 0x8000000u;
    LODWORD(v36) = v5;
  }
  v32 = a1[1597];
  if ( v32 != 1 || (v31 & 0x2000000) != 0 )
  {
    v5 |= 8u;
    LODWORD(v36) = v5;
  }
  LOBYTE(v37) = 0;
  if ( v32 == 2 )
  {
    if ( (v31 & 0x4000000) == 0 && (IsAnyHypervisorPresent || (v5 & 1) != 0) )
    {
      v5 |= 0x2000000u;
      LODWORD(v36) = v5;
    }
    if ( (v5 & 0x2000000) != 0 )
    {
      if ( (v31 & 0x8000000) != 0 )
      {
        v5 |= 0x4000000u;
        LODWORD(v36) = v5;
      }
      if ( KiTsxSupported )
      {
        LOBYTE(v37) = 3;
      }
      else if ( (v31 & 0x8000000) != 0
             || a1[1520] == 6
             && ((v33 = a1[1523], v33 == -105) && (a1[1522] == 2 || a1[1522] == 5)
              || v33 == -102 && (a1[1522] == 3 || a1[1522] == 4)) )
      {
        LOBYTE(v37) = 2;
      }
      else
      {
        LOBYTE(v37) = IsAnyHypervisorPresent + 1;
      }
    }
  }
  if ( v32 == 1 )
  {
    if ( (v31 & 0x400000000LL) == 0 )
      v5 |= 0x200000u;
    v5 |= 0x400000u;
    LODWORD(v36) = v5;
  }
  if ( v32 == 2 && (v31 & 0x800000000LL) == 0 )
  {
    v34 = v5 | 0x800000;
    LODWORD(v36) = v34;
    if ( (v31 & 0x1000000000LL) != 0 )
      LODWORD(v36) = v34 | 0x1000000;
  }
  *(_QWORD *)a3 = v36;
  *(_DWORD *)(a3 + 8) = v37;
  result = a4;
  if ( a4 )
    *a4 = v4;
  return result;
}
