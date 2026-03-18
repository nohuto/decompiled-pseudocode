/*
 * XREFs of KiSetFeatureBits @ 0x1403F80E8
 * Callers:
 *     KiInitializeBootStructures @ 0x1403F77B0 (KiInitializeBootStructures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140159E3C (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiDetectAccessBitErrata @ 0x1403F8AFC (KiDetectAccessBitErrata.c)
 *     KiGetCpuVendor @ 0x1403F8B50 (KiGetCpuVendor.c)
 *     KiSetProcessorSignature @ 0x140402138 (KiSetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x1404026D0 (KiDetectKvaLeakage.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 */

char __fastcall KiSetFeatureBits(__int64 a1)
{
  char CpuVendor; // r9
  unsigned int v8; // r8d
  unsigned int v9; // edi
  unsigned int v10; // ebx
  char v11; // cl
  char v17; // cl
  ULONG_PTR v28; // r13
  int v39; // r14d
  ULONG_PTR v40; // rdi
  __int64 v41; // r8
  int v42; // ecx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // r11d
  __int64 v46; // rdi
  char v47; // r10
  unsigned int v48; // r14d
  int v54; // ecx
  unsigned int v55; // r15d
  unsigned int v71; // ecx
  unsigned int v77; // ecx
  signed int v78; // ebx
  __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rcx
  int v82; // eax
  char v84; // r8
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // rax
  char v100; // r8
  bool v109; // zf
  unsigned int v121; // [rsp+30h] [rbp-78h]
  unsigned int v122; // [rsp+38h] [rbp-70h]
  unsigned int v123; // [rsp+3Ch] [rbp-6Ch]
  int v124; // [rsp+40h] [rbp-68h]
  int v125; // [rsp+44h] [rbp-64h]
  bool v126; // [rsp+48h] [rbp-60h]

  CpuVendor = KiGetCpuVendor();
  *(_BYTE *)(a1 + 1597) = CpuVendor;
  if ( !CpuVendor )
    KeBugCheck(0x5Du);
  _RAX = 1LL;
  __asm { cpuid }
  v8 = _RAX;
  v9 = ((unsigned int)_RAX >> 8) & 0xF;
  if ( v9 == 15 )
  {
    v9 = (unsigned __int8)((unsigned int)_RAX >> 20) + 15;
    v10 = (unsigned __int64)(_RAX & 0xF0 | ((unsigned int)_RAX >> 8) & 0xF00) >> 4;
  }
  else
  {
    v10 = (unsigned __int8)_RAX >> 4;
  }
  if ( CpuVendor == 2 && v9 == 6 || CpuVendor == 3 && v9 == 6 )
    v10 |= ((unsigned int)_RAX >> 12) & 0xF0;
  *(_BYTE *)(a1 + 1521) = 1;
  *(_BYTE *)(a1 + 1520) = v9;
  *(_WORD *)(a1 + 1522) = _RAX & 0xF | ((_WORD)v10 << 8);
  if ( CpuVendor == 2 && (v9 >= 0xF || v9 == 6 && v10 > 0xD) )
    __writemsr(0x1A0u, __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL);
  KiSetProcessorSignature(a1, v8);
  v11 = *(_BYTE *)(a1 + 1597);
  v126 = (unsigned __int8)(v11 - 1) <= 1u;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v11 == 2 )
    {
      if ( v9 != 6 )
        goto LABEL_45;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( v10 > 0x27 )
      {
        if ( v10 > 0x3A )
        {
          if ( v10 == 60 )
            goto LABEL_40;
          if ( v10 <= 0x44 )
            goto LABEL_41;
          if ( v10 <= 0x46 )
            goto LABEL_40;
          if ( v10 != 77 )
            goto LABEL_41;
        }
        else
        {
          if ( ((v10 - 42) & 0xFFFFFFEF) == 0 )
            goto LABEL_40;
          if ( v10 <= 0x2B )
            goto LABEL_41;
          if ( v10 <= 0x2F )
            goto LABEL_40;
          if ( v10 - 53 > 2 )
            goto LABEL_41;
        }
      }
      else if ( v10 < 0x26 && ((v10 - 15) & 0xFFFFFFF7) != 0 )
      {
        if ( v10 == 26 )
        {
LABEL_40:
          KiLastBranchFromBaseMSR = 1664;
          KiLastBranchToBaseMSR = 1728;
          goto LABEL_41;
        }
        if ( v10 != 28 && v10 != 29 )
        {
          if ( v10 - 30 <= 1 || v10 == 37 )
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
    if ( v11 == 1 )
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
  v122 = _RAX;
  v17 = *(_BYTE *)(a1 + 1597);
  if ( v17 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
LABEL_48:
    *(_QWORD *)(a1 + 25208) = __readmsr(0x8Bu);
    goto LABEL_49;
  }
  if ( v17 == 1 )
    goto LABEL_48;
LABEL_49:
  _RAX = 1LL;
  __asm { cpuid }
  v28 = (unsigned int)_RDX;
  v124 = _RCX;
  v121 = _RBX;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v123 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v39 = _RDX;
  v40 = (unsigned int)_RCX;
  v125 = _RCX;
  v41 = (unsigned int)_RAX;
  if ( !*(_DWORD *)(a1 + 36) && *(_BYTE *)(a1 + 1597) == 1 )
  {
    if ( (_RAX & 0xF00) == 0xF00 )
    {
      _RDX = (BYTE1(_RAX) & 0xF) + (unsigned int)(unsigned __int8)((unsigned int)_RAX >> 20);
      v42 = (unsigned __int64)(_RAX & 0xF0 | ((unsigned int)_RAX >> 8) & 0xF00) >> 4;
    }
    else
    {
      _RDX = ((unsigned int)_RAX >> 8) & 0xF;
      v42 = (unsigned __int8)_RAX >> 4;
    }
    v41 = _RAX & 0xF;
    if ( (_DWORD)_RDX == 15 && (v42 == 107 || v42 == 104) && (_DWORD)v41 == 1 )
    {
      KiCacheErrataMonitor |= 1uLL;
    }
    else if ( (_DWORD)_RDX == 16
           && (!v42 && (unsigned int)v41 <= 2
            || v42 == 2 && ((unsigned int)v41 <= 2 || (_DWORD)v41 == 10)
            || v42 == 4 && (_RAX & 0xF) == 0) )
    {
      KiCacheErrataMonitor |= 2uLL;
    }
  }
  KiDetectAccessBitErrata(a1, _RDX, v41);
  KiDetectKvaLeakage();
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 1597) == 1 )
    v39 |= 0x100000u;
  v43 = v121;
  *(_DWORD *)(a1 + 1620) = HIBYTE(v121);
  *(_DWORD *)(a1 + 1640) = (v121 >> 5) & 0x7F8;
  v44 = 0LL;
  if ( (v28 & 0x789F3FD) != 0x789F3FD
    || (v39 & 0x800) == 0
    || (v39 & 0x100000) == 0
    || (v45 = v124, (v124 & 0x2000) == 0)
    || (v40 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v28, (unsigned int)v39, v40, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v46 = 538000894LL;
  if ( (v28 & 0x200000) != 0 )
    v46 = 538001406LL;
  if ( (v124 & 1) != 0 )
    v46 |= 0x80000uLL;
  if ( (v124 & 0x40000000) != 0 )
    v46 |= 0x100000000uLL;
  if ( (v39 & 0x8000000) != 0 )
  {
    v46 |= 0x400000000uLL;
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 1617) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 1616) << 8));
  }
  if ( v39 < 0 )
    v46 |= 0x4000uLL;
  if ( (v39 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  *(_WORD *)(a1 + 1598) = 257;
  v47 = *(_BYTE *)(a1 + 1597);
  if ( (unsigned __int8)(v47 - 2) <= 1u )
  {
    v55 = v122;
    if ( v122 < 0xB )
      goto LABEL_106;
    _RAX = 11LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      *(_DWORD *)(a1 + 1620) = _RDX;
      v43 = 1LL;
      do
      {
        _RAX = 11LL;
        __asm { cpuid }
        v44 = (unsigned int)(v44 + 1);
        v71 = ((unsigned int)_RCX >> 8) - 1;
        if ( v71 )
        {
          if ( v71 == 1 )
            v43 = (unsigned int)(1 << (_RAX & 0x1F));
        }
        else
        {
          *(_BYTE *)(a1 + 1599) = 1 << (_RAX & 0x1F);
        }
      }
      while ( (_WORD)_RBX );
      *(_BYTE *)(a1 + 1598) = (unsigned int)v43 / *(unsigned __int8 *)(a1 + 1599);
      v48 = v123;
    }
    else
    {
LABEL_106:
      if ( v122 >= 4 )
      {
        _RAX = 4LL;
        __asm { cpuid }
        _BitScanReverse((unsigned int *)&_RCX, 2 * (((unsigned int)_RAX >> 26) + 1) - 1);
        *(_BYTE *)(a1 + 1598) = 1 << _RCX;
      }
      v48 = v123;
      if ( (v28 & 0x10000000) != 0 )
      {
        v43 = HIWORD(v121);
        _BitScanReverse(&v77, 2 * BYTE2(v121) - 1);
        *(_BYTE *)(a1 + 1599) = (1 << v77) / (unsigned int)*(unsigned __int8 *)(a1 + 1598);
      }
    }
  }
  else
  {
    v48 = v123;
    if ( v47 != 1 || v123 < 0x80000008 )
      goto LABEL_96;
    _RAX = 2147483656LL;
    __asm { cpuid }
    v43 = (unsigned int)_RCX;
    v54 = (unsigned __int16)_RCX >> 12;
    if ( !v54 )
      _BitScanReverse((unsigned int *)&v54, 2 * ((unsigned __int8)v43 + 1) - 1);
    *(_BYTE *)(a1 + 1598) = 1 << v54;
    if ( v123 >= 0x8000001E )
    {
      v55 = v122;
      if ( (v125 & 0x400000) != 0 )
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
      v55 = v122;
    }
  }
  if ( v47 == 1 )
  {
    v46 |= 0x200000uLL;
  }
  else if ( v47 == 2 )
  {
    v46 |= 0x1000000uLL;
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
    LOBYTE(_RAX) = HalIsHyperThreadingEnabled(v81, v79, v43, v44);
    v45 = v124;
    v109 = (_BYTE)_RAX == 0;
    LODWORD(_RAX) = *(unsigned __int8 *)(a1 + 1599);
    if ( v109 )
    {
      *(_DWORD *)(a1 + 1628) = ~(_RAX * *(unsigned __int8 *)(a1 + 1598) - 1);
      goto LABEL_124;
    }
    v82 = _RAX - 1;
  }
  else
  {
    v82 = v78 - 1;
  }
  LODWORD(_RAX) = ~v82;
  *(_DWORD *)(a1 + 1628) = _RAX;
LABEL_124:
  v84 = *(_BYTE *)(a1 + 1597);
  if ( v84 == 2 && v48 >= 0x80000008 )
  {
LABEL_128:
    _RAX = 2147483656LL;
    __asm { cpuid }
    KiMtrrMaxRangeShift = _RAX;
    goto LABEL_130;
  }
  if ( v84 == 1 )
  {
    if ( v48 < 0x80000008 )
    {
      KiMtrrMaxRangeShift = 40;
      goto LABEL_130;
    }
    goto LABEL_128;
  }
LABEL_130:
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  if ( v84 == 2 && v55 >= 6 )
  {
    _RAX = 6LL;
    __asm { cpuid }
    if ( (_RCX & 2) != 0 )
      v46 |= 0x400000uLL;
    if ( (_RAX & 0x2000) != 0 )
    {
      LOBYTE(_RAX) = 0;
      v46 |= 0x8000000000uLL;
    }
  }
  if ( (unsigned __int8)(v84 - 1) <= 1u && v55 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x80u) != 0LL )
      v46 |= 1uLL;
    if ( (_RBX & 1) != 0 )
      v46 |= 0x10000000uLL;
    LOBYTE(_RAX) = 0;
    if ( (_RBX & 0x400) != 0 && (v45 & 0x20000) != 0 )
      v46 |= 0x10000000000uLL;
    if ( (v46 & 0x10000001) != 0 )
    {
      v98 = __readcr4();
      if ( (v46 & 1) != 0 )
        v98 |= 0x100000uLL;
      if ( (v46 & 0x10000000) != 0 )
        v98 |= 0x10000uLL;
      if ( *(_DWORD *)(a1 + 36) )
      {
        if ( (v46 & 0x10000000000LL) != 0 )
        {
          LOBYTE(_RAX) = KiFlushPcid;
          if ( KiFlushPcid )
            v98 |= 0x20000uLL;
        }
      }
      __writecr4(v98);
      if ( (v98 & 0x20000) != 0 )
      {
        v99 = __readcr3();
        _RAX = v99 | 2;
        __writecr3(_RAX);
      }
    }
  }
  v100 = *(_BYTE *)(a1 + 1597);
  if ( v100 == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x400000) != 0 )
    {
      LOBYTE(_RAX) = 0;
      v46 |= 0x2000000000uLL;
    }
    if ( (_RBX & 0x800000) != 0 )
    {
      LOBYTE(_RAX) = 0;
      v46 |= 0x800000000uLL;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      LOBYTE(_RAX) = 0;
      v46 |= 0x1000000000uLL;
    }
  }
  if ( v126 )
    v46 |= 0x20000uLL;
  if ( v100 != 2 )
  {
    if ( v100 != 1 )
      goto LABEL_183;
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v46 |= 0x4000000uLL;
    }
    _RAX = __readmsr(0xC0010114);
    v109 = (_RAX & 0x10) == 0;
    goto LABEL_176;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x20) != 0 )
  {
    if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL && (__readmsr(0x48Bu) & 0x200000000LL) != 0 )
      v46 |= 0x4000000uLL;
    _RAX = __readmsr(0x3Au);
    LOBYTE(_RAX) = _RAX & 5;
    v109 = (_BYTE)_RAX == 5;
LABEL_176:
    if ( v109 )
      v46 |= 0x8000000uLL;
  }
  if ( v100 == 1 )
  {
    LOBYTE(_RAX) = *(_BYTE *)(a1 + 1520);
    if ( (char)_RAX > 15 && (_BYTE)_RAX != 17 )
    {
      LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
      if ( !(_BYTE)_RAX )
      {
        _RAX = __readmsr(0xC0011029) | 2;
        __writemsr(0xC0011029, _RAX);
      }
    }
  }
LABEL_183:
  *(_QWORD *)(a1 + 25192) = v46;
  return _RAX;
}
