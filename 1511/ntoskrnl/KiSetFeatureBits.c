/*
 * XREFs of KiSetFeatureBits @ 0x1403A7FB8
 * Callers:
 *     KiInitializeBootStructures @ 0x1403A770C (KiInitializeBootStructures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140126614 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiDetectBpbMsr @ 0x1401CBD0C (KiDetectBpbMsr.c)
 *     KiDetectAccessBitErrata @ 0x1403A8A54 (KiDetectAccessBitErrata.c)
 *     KiGetCpuVendor @ 0x1403A8AA8 (KiGetCpuVendor.c)
 *     KiDetectKvaLeakage @ 0x1403B17B8 (KiDetectKvaLeakage.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 */

void __fastcall KiSetFeatureBits(__int64 a1)
{
  char CpuVendor; // r10
  unsigned int v8; // r8d
  unsigned int v9; // ebx
  char v15; // cl
  ULONG_PTR v26; // r15
  unsigned int v27; // r13d
  int v38; // r14d
  ULONG_PTR v39; // r12
  __int64 v40; // r8
  int v41; // ecx
  __int64 v42; // r8
  int v43; // r11d
  __int64 v44; // rdi
  char v45; // r10
  unsigned int v46; // r14d
  int v52; // ecx
  bool v53; // cf
  unsigned int v54; // r12d
  int v65; // r9d
  unsigned int v71; // ecx
  unsigned int v77; // ecx
  signed int v78; // ebx
  __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rcx
  int v82; // eax
  char IsHyperThreadingEnabled; // al
  bool v84; // zf
  int v85; // eax
  char v86; // r8
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rax
  char v104; // r8
  unsigned __int64 v115; // rax
  unsigned __int64 v126; // rax
  unsigned __int64 v132; // rax
  char v138; // al
  unsigned int v139; // [rsp+30h] [rbp-68h]
  unsigned int v140; // [rsp+34h] [rbp-64h]
  int v141; // [rsp+38h] [rbp-60h]
  bool v142; // [rsp+3Ch] [rbp-5Ch]

  CpuVendor = KiGetCpuVendor();
  *(_BYTE *)(a1 + 1597) = CpuVendor;
  if ( !CpuVendor )
    KeBugCheck(0x5Du);
  _RAX = 1LL;
  __asm { cpuid }
  v8 = ((unsigned int)_RAX >> 8) & 0xF;
  if ( v8 == 15 )
  {
    v8 = (unsigned __int8)((unsigned int)_RAX >> 20) + 15;
    v9 = (unsigned __int64)(_RAX & 0xF0 | ((unsigned int)_RAX >> 8) & 0xF00) >> 4;
  }
  else
  {
    v9 = (unsigned __int8)_RAX >> 4;
  }
  if ( CpuVendor == 2 && v8 == 6 || CpuVendor == 3 && v8 == 6 )
    v9 |= ((unsigned int)_RAX >> 12) & 0xF0;
  *(_BYTE *)(a1 + 1521) = 1;
  *(_BYTE *)(a1 + 1520) = v8;
  *(_WORD *)(a1 + 1522) = _RAX & 0xF | ((_WORD)v9 << 8);
  if ( CpuVendor == 2 && (v8 >= 0xF || v8 == 6 && v9 > 0xD) )
    __writemsr(0x1A0u, __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL);
  v142 = (unsigned __int8)(CpuVendor - 1) <= 1u;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( CpuVendor == 2 )
    {
      if ( v8 != 6 )
        goto LABEL_45;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( v9 > 0x27 )
      {
        if ( v9 > 0x3A )
        {
          if ( v9 == 60 )
            goto LABEL_40;
          if ( v9 <= 0x44 )
            goto LABEL_41;
          if ( v9 <= 0x46 )
            goto LABEL_40;
          if ( v9 != 77 )
            goto LABEL_41;
        }
        else
        {
          if ( ((v9 - 42) & 0xFFFFFFEF) == 0 )
            goto LABEL_40;
          if ( v9 <= 0x2B )
            goto LABEL_41;
          if ( v9 <= 0x2F )
            goto LABEL_40;
          if ( v9 - 53 > 2 )
            goto LABEL_41;
        }
      }
      else if ( v9 < 0x26 && ((v9 - 15) & 0xFFFFFFF7) != 0 )
      {
        if ( v9 == 26 )
        {
LABEL_40:
          KiLastBranchFromBaseMSR = 1664;
          KiLastBranchToBaseMSR = 1728;
          goto LABEL_41;
        }
        if ( v9 != 28 && v9 != 29 )
        {
          if ( v9 - 30 <= 1 || v9 == 37 )
            goto LABEL_40;
LABEL_41:
          if ( KiLastBranchFromBaseMSR )
            KiLastBranchTOSMSR = 457;
          goto LABEL_45;
        }
      }
      KiLastBranchFromBaseMSR = 64;
      KiLastBranchToBaseMSR = 96;
      goto LABEL_41;
    }
    if ( CpuVendor == 1 )
    {
      KiLastBranchFromBaseMSR = 475;
      KiLastBranchToBaseMSR = 476;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
    }
  }
LABEL_45:
  _RAX = 0LL;
  __asm { cpuid }
  v139 = _RAX;
  v15 = *(_BYTE *)(a1 + 1597);
  if ( v15 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
LABEL_48:
    *(_QWORD *)(a1 + 25208) = __readmsr(0x8Bu);
    goto LABEL_49;
  }
  if ( v15 == 1 )
    goto LABEL_48;
LABEL_49:
  _RAX = 1LL;
  __asm { cpuid }
  v26 = (unsigned int)_RDX;
  v141 = _RCX;
  v27 = _RBX;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v140 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v38 = _RDX;
  v39 = (unsigned int)_RCX;
  v40 = (unsigned int)_RAX;
  if ( !*(_DWORD *)(a1 + 36) && *(_BYTE *)(a1 + 1597) == 1 )
  {
    if ( (_RAX & 0xF00) == 0xF00 )
    {
      _RDX = (BYTE1(_RAX) & 0xF) + (unsigned int)(unsigned __int8)((unsigned int)_RAX >> 20);
      v41 = (unsigned __int64)(_RAX & 0xF0 | ((unsigned int)_RAX >> 8) & 0xF00) >> 4;
    }
    else
    {
      _RDX = ((unsigned int)_RAX >> 8) & 0xF;
      v41 = (unsigned __int8)_RAX >> 4;
    }
    v40 = _RAX & 0xF;
    if ( (_DWORD)_RDX == 15 && (v41 == 107 || v41 == 104) && (_DWORD)v40 == 1 )
    {
      KiCacheErrataMonitor |= 1uLL;
    }
    else if ( (_DWORD)_RDX == 16
           && (!v41 && (unsigned int)v40 <= 2
            || v41 == 2 && ((unsigned int)v40 <= 2 || (_DWORD)v40 == 10)
            || v41 == 4 && (_RAX & 0xF) == 0) )
    {
      KiCacheErrataMonitor |= 2uLL;
    }
  }
  KiDetectAccessBitErrata(a1, _RDX, v40);
  KiDetectKvaLeakage();
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 1597) == 1 )
    v38 |= 0x100000u;
  *(_DWORD *)(a1 + 1620) = HIBYTE(v27);
  *(_DWORD *)(a1 + 1640) = (v27 >> 5) & 0x7F8;
  v42 = 0LL;
  if ( (v26 & 0x789F3FD) != 0x789F3FD
    || (v38 & 0x800) == 0
    || (v38 & 0x100000) == 0
    || (v43 = v141, (v141 & 0x2000) == 0)
    || (v39 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v26, (unsigned int)v38, v39, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v44 = 538000894LL;
  if ( (v26 & 0x200000) != 0 )
    v44 = 538001406LL;
  if ( (v141 & 1) != 0 )
    v44 |= 0x80000uLL;
  if ( (v141 & 0x40000000) != 0 )
    v44 |= 0x100000000uLL;
  if ( (v38 & 0x8000000) != 0 )
  {
    v44 |= 0x400000000uLL;
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 1617) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 1616) << 8));
  }
  if ( v38 < 0 )
    v44 |= 0x4000uLL;
  if ( (v38 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  *(_WORD *)(a1 + 1598) = 257;
  v45 = *(_BYTE *)(a1 + 1597);
  if ( (unsigned __int8)(v45 - 2) <= 1u )
  {
    v54 = v139;
    if ( v139 < 0xB )
      goto LABEL_106;
    _RAX = 11LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      *(_DWORD *)(a1 + 1620) = _RDX;
      v65 = 0;
      v42 = 1LL;
      do
      {
        _RAX = 11LL;
        __asm { cpuid }
        ++v65;
        v71 = ((unsigned int)_RCX >> 8) - 1;
        if ( v71 )
        {
          if ( v71 == 1 )
            v42 = (unsigned int)(1 << (_RAX & 0x1F));
        }
        else
        {
          *(_BYTE *)(a1 + 1599) = 1 << (_RAX & 0x1F);
        }
      }
      while ( (_WORD)_RBX );
      *(_BYTE *)(a1 + 1598) = (unsigned int)v42 / *(unsigned __int8 *)(a1 + 1599);
      v46 = v140;
    }
    else
    {
LABEL_106:
      if ( v139 >= 4 )
      {
        _RAX = 4LL;
        __asm { cpuid }
        _BitScanReverse((unsigned int *)&_RCX, 2 * (((unsigned int)_RAX >> 26) + 1) - 1);
        *(_BYTE *)(a1 + 1598) = 1 << _RCX;
      }
      v46 = v140;
      if ( (v26 & 0x10000000) != 0 )
      {
        _BitScanReverse(&v77, 2 * BYTE2(v27) - 1);
        *(_BYTE *)(a1 + 1599) = (1 << v77) / (unsigned int)*(unsigned __int8 *)(a1 + 1598);
      }
    }
  }
  else
  {
    v46 = v140;
    if ( v45 != 1 || v140 < 0x80000008 )
      goto LABEL_96;
    _RAX = 2147483656LL;
    __asm { cpuid }
    v42 = (unsigned int)_RCX;
    v52 = (unsigned __int16)_RCX >> 12;
    if ( !v52 )
      _BitScanReverse((unsigned int *)&v52, 2 * ((unsigned __int8)v42 + 1) - 1);
    *(_BYTE *)(a1 + 1598) = 1 << v52;
    if ( v140 >= 0x8000001E )
    {
      v53 = (v39 & 0x400000) != 0;
      v54 = v139;
      if ( v53 )
      {
        _RAX = 2147483678LL;
        __asm { cpuid }
        LODWORD(_RBX) = (unsigned int)_RBX >> 8;
        *(_BYTE *)(a1 + 1599) = _RBX + 1;
        *(_BYTE *)(a1 + 1598) = *(unsigned __int8 *)(a1 + 1598) / (__int16)(unsigned __int8)(_RBX + 1);
      }
    }
    else
    {
LABEL_96:
      v54 = v139;
    }
  }
  if ( v45 == 1 )
  {
    v44 |= 0x200000uLL;
  }
  else if ( v45 == 2 )
  {
    v44 |= 0x1000000uLL;
  }
  v78 = *(unsigned __int8 *)(a1 + 1599);
  v79 = (unsigned int)KiMaximumGroupSize;
  v80 = (unsigned __int8)KiMaximumGroupSize;
  v81 = v78 * (unsigned int)*(unsigned __int8 *)(a1 + 1598);
  if ( (int)v81 > (unsigned __int8)KiMaximumGroupSize )
  {
    if ( v78 > (unsigned int)KiMaximumGroupSize )
      *(_BYTE *)(a1 + 1599) = KiMaximumGroupSize;
    v78 = *(unsigned __int8 *)(a1 + 1599);
    v79 = (unsigned int)(v80 >> 31);
    LODWORD(v79) = v80 % v78;
    *(_BYTE *)(a1 + 1598) = v80 / v78;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(v81, v79, v42, 1LL);
    v43 = v141;
    v84 = IsHyperThreadingEnabled == 0;
    v85 = *(unsigned __int8 *)(a1 + 1599);
    if ( v84 )
    {
      *(_DWORD *)(a1 + 1628) = ~(v85 * *(unsigned __int8 *)(a1 + 1598) - 1);
      goto LABEL_124;
    }
    v82 = v85 - 1;
  }
  else
  {
    v82 = v78 - 1;
  }
  *(_DWORD *)(a1 + 1628) = ~v82;
LABEL_124:
  v86 = *(_BYTE *)(a1 + 1597);
  if ( v86 == 2 && v46 >= 0x80000008 )
  {
LABEL_128:
    _RAX = 2147483656LL;
    __asm { cpuid }
    KiMtrrMaxRangeShift = _RAX;
    goto LABEL_130;
  }
  if ( v86 == 1 )
  {
    if ( v46 < 0x80000008 )
    {
      KiMtrrMaxRangeShift = 40;
      goto LABEL_130;
    }
    goto LABEL_128;
  }
LABEL_130:
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  if ( v86 == 2 && v54 >= 6 )
  {
    _RAX = 6LL;
    __asm { cpuid }
    if ( (_RCX & 2) != 0 )
      v44 |= 0x400000uLL;
    if ( (_RAX & 0x2000) != 0 )
      v44 |= 0x8000000000uLL;
  }
  if ( (unsigned __int8)(v86 - 1) <= 1u && v54 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x80u) != 0LL )
      v44 |= 1uLL;
    if ( (_RBX & 1) != 0 )
      v44 |= 0x10000000uLL;
    if ( (_RBX & 0x400) != 0 && (v43 & 0x20000) != 0 )
      v44 |= 0x40000000000uLL;
    if ( (v44 & 0x10000001) != 0 )
    {
      v102 = __readcr4();
      if ( (v44 & 1) != 0 )
        v102 |= 0x100000uLL;
      if ( (v44 & 0x10000000) != 0 )
        v102 |= 0x10000uLL;
      if ( *(_DWORD *)(a1 + 36) && (v44 & 0x40000000000LL) != 0 && KiFlushPcid )
        v102 |= 0x20000uLL;
      __writecr4(v102);
      if ( (v102 & 0x20000) != 0 )
      {
        v103 = __readcr3();
        __writecr3(v103 | 2);
      }
    }
  }
  v104 = *(_BYTE *)(a1 + 1597);
  if ( v104 == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x400000) != 0 )
      v44 |= 0x2000000000uLL;
    if ( (_RBX & 0x800000) != 0 )
      v44 |= 0x800000000uLL;
    if ( (_RBX & 0x1000000) != 0 )
      v44 |= 0x1000000000uLL;
  }
  if ( v142 )
    v44 |= 0x20000uLL;
  if ( v104 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL && (__readmsr(0x48Bu) & 0x200000000LL) != 0 )
        v44 |= 0x4000000uLL;
      v115 = __readmsr(0x3Au);
      if ( (v115 & 5) == 5 )
        v44 |= 0x8000000uLL;
    }
    KiDetectBpbMsr(a1, v44);
  }
  else if ( v104 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v44 |= 0x4000000uLL;
    }
    v126 = __readmsr(0xC0010114);
    if ( (v126 & 0x10) == 0 )
      v44 |= 0x8000000uLL;
  }
  if ( *(_BYTE *)(a1 + 1597) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v132 = __readmsr(0x3Au);
      if ( (v132 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        if ( (_RAX & 1) != 0 )
        {
          v44 |= 0x10000000000uLL;
          MEMORY[0xFFFFF7800000036C] |= 2u;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 1597) == 1 )
  {
    v138 = *(_BYTE *)(a1 + 1520);
    if ( v138 > 15 && v138 != 17 && !HviIsAnyHypervisorPresent() )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
  }
  *(_QWORD *)(a1 + 25192) = v44;
}
