/*
 * XREFs of KiSetFeatureBits @ 0x1403D57C8
 * Callers:
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiApplyProcessorErrata @ 0x1401D7304 (KiApplyProcessorErrata.c)
 *     KiDetectAccessBitErrata @ 0x1403D6140 (KiDetectAccessBitErrata.c)
 *     KiDetectCacheErrata @ 0x1403D61B8 (KiDetectCacheErrata.c)
 *     KiGetCpuVendor @ 0x1403D622C (KiGetCpuVendor.c)
 *     KiDetectKvaLeakage @ 0x1403DDD24 (KiDetectKvaLeakage.c)
 *     KiSetProcessorSignature @ 0x1403DE364 (KiSetProcessorSignature.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 */

void __fastcall KiSetFeatureBits(__int64 a1)
{
  char CpuVendor; // al
  char v3; // r9
  unsigned int v9; // r8d
  unsigned int v10; // edi
  unsigned int v11; // ebx
  char v12; // cl
  char v18; // cl
  ULONG_PTR v30; // r15
  unsigned int v31; // r12d
  ULONG_PTR v41; // r13
  int v42; // r14d
  unsigned int v43; // ecx
  int v44; // r11d
  __int64 v45; // rdi
  char v46; // r9
  unsigned int v47; // r14d
  unsigned __int8 v53; // r8
  int v54; // ecx
  bool v55; // cf
  unsigned int v56; // r13d
  int v67; // r10d
  unsigned int v68; // r8d
  unsigned int v74; // ecx
  unsigned int v80; // ecx
  unsigned int v81; // ebx
  int v82; // eax
  unsigned int v83; // eax
  char IsHyperThreadingEnabled; // al
  bool v85; // zf
  int v86; // eax
  char v87; // r8
  char v93; // cl
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  char v106; // r8
  unsigned __int64 v117; // rax
  char v118; // cl
  unsigned __int64 v129; // rax
  unsigned __int64 v135; // rax
  unsigned int v141; // [rsp+30h] [rbp-40h]
  unsigned int v142; // [rsp+34h] [rbp-3Ch]
  int v143; // [rsp+38h] [rbp-38h]
  bool v144; // [rsp+3Ch] [rbp-34h]

  CpuVendor = KiGetCpuVendor();
  *(_BYTE *)(a1 + 1597) = CpuVendor;
  v3 = CpuVendor;
  if ( !CpuVendor )
    KeBugCheck(0x5Du);
  _RAX = 1LL;
  __asm { cpuid }
  v9 = _RAX;
  v10 = ((unsigned int)_RAX >> 8) & 0xF;
  if ( v10 == 15 )
  {
    v10 = (unsigned __int8)((unsigned int)_RAX >> 20) + 15;
    v11 = (unsigned __int64)(_RAX & 0xF0 | ((unsigned int)_RAX >> 8) & 0xF00) >> 4;
  }
  else
  {
    v11 = (unsigned __int8)_RAX >> 4;
  }
  if ( (v3 == 2 || v3 == 3) && v10 == 6 )
    v11 |= ((unsigned int)_RAX >> 12) & 0xF0;
  *(_BYTE *)(a1 + 1521) = 1;
  *(_BYTE *)(a1 + 1520) = v10;
  *(_WORD *)(a1 + 1522) = ((_WORD)v11 << 8) | _RAX & 0xF;
  if ( v3 == 2 && (v10 >= 0xF || v10 == 6 && v11 > 0xD) )
    __writemsr(0x1A0u, __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL);
  KiSetProcessorSignature(a1, v9);
  v12 = *(_BYTE *)(a1 + 1597);
  v144 = (unsigned __int8)(v12 - 1) <= 1u;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v12 == 2 )
    {
      if ( v10 != 6 )
        goto LABEL_41;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( v11 > 0x27 )
      {
        if ( v11 > 0x3A )
        {
          if ( v11 != 60 )
          {
            if ( v11 <= 0x44 )
              goto LABEL_26;
            if ( v11 > 0x46 )
            {
              if ( v11 != 77 )
                goto LABEL_26;
              goto LABEL_38;
            }
          }
        }
        else if ( ((v11 - 42) & 0xFFFFFFEF) != 0 )
        {
          if ( v11 <= 0x2B )
            goto LABEL_26;
          if ( v11 > 0x2F )
          {
            if ( v11 - 53 > 2 )
              goto LABEL_26;
            goto LABEL_38;
          }
        }
      }
      else
      {
        if ( v11 >= 0x26 || ((v11 - 15) & 0xFFFFFFF7) == 0 )
          goto LABEL_38;
        if ( v11 != 26 )
        {
          if ( v11 != 28 && v11 != 29 )
          {
            if ( v11 - 30 <= 1 || v11 == 37 )
              goto LABEL_25;
LABEL_26:
            if ( !KiLastBranchFromBaseMSR )
              goto LABEL_41;
            goto LABEL_27;
          }
LABEL_38:
          KiLastBranchFromBaseMSR = 64;
          KiLastBranchToBaseMSR = 96;
LABEL_27:
          KiLastBranchTOSMSR = 457;
          goto LABEL_41;
        }
      }
LABEL_25:
      KiLastBranchFromBaseMSR = 1664;
      KiLastBranchToBaseMSR = 1728;
      goto LABEL_26;
    }
    if ( v12 == 1 )
    {
      KiLastBranchFromBaseMSR = 475;
      KiLastBranchToBaseMSR = 476;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
    }
  }
LABEL_41:
  _RAX = 0LL;
  __asm { cpuid }
  v18 = *(_BYTE *)(a1 + 1597);
  v141 = _RAX;
  if ( v18 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
  }
  else if ( v18 != 1 )
  {
    goto LABEL_45;
  }
  *(_QWORD *)(a1 + 25336) = __readmsr(0x8Bu);
LABEL_45:
  _RAX = 1LL;
  __asm { cpuid }
  v143 = _RCX;
  _RAX = 0x80000000LL;
  v30 = (unsigned int)_RDX;
  v31 = _RBX;
  __asm { cpuid }
  v142 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v41 = (unsigned int)_RCX;
  v42 = _RDX;
  KiDetectCacheErrata(a1);
  KiDetectAccessBitErrata();
  KiDetectKvaLeakage();
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 1597) == 1 )
    v42 |= 0x100000u;
  v43 = KiOpPrefetchPatchSkip;
  *(_DWORD *)(a1 + 1620) = HIBYTE(v31);
  *(_DWORD *)(a1 + 1640) = (v31 >> 5) & 0x7F8;
  if ( (v30 & 0x789F3FD) != 0x789F3FD
    || (v42 & 0x800) == 0
    || (v42 & 0x100000) == 0
    || (v44 = v143, (v143 & 0x2000) == 0)
    || (v41 & 1) == 0
    || v43 )
  {
    if ( !*(_DWORD *)(a1 + 36) )
    {
      KdInitSystem(0LL, KeLoaderBlock_0);
      v43 = KiOpPrefetchPatchSkip;
    }
    KeBugCheckEx(0x5Du, v30, (unsigned int)v42, v41, v43);
  }
  v45 = 538000894LL;
  if ( (v30 & 0x200000) != 0 )
    v45 = 538001406LL;
  if ( (v143 & 1) != 0 )
    v45 |= 0x80000uLL;
  if ( (v143 & 0x40000000) != 0 )
    v45 |= 0x100000000uLL;
  if ( (v42 & 0x8000000) != 0 )
  {
    v45 |= 0x400000000uLL;
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 1617) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 1616) << 8));
  }
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( v42 < 0 )
    v45 |= 0x4000uLL;
  if ( (v42 & 0x4000000) != 0 )
    v45 |= 0x2000000000uLL;
  if ( (v42 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  v46 = *(_BYTE *)(a1 + 1597);
  *(_WORD *)(a1 + 1598) = 257;
  if ( (unsigned __int8)(v46 - 2) <= 1u )
  {
    v56 = v141;
    if ( v141 < 0xB )
      goto LABEL_84;
    _RAX = 11LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      *(_DWORD *)(a1 + 1620) = _RDX;
      v67 = 0;
      v68 = 1;
      do
      {
        _RAX = 11LL;
        __asm { cpuid }
        ++v67;
        v74 = ((unsigned int)_RCX >> 8) - 1;
        if ( v74 )
        {
          if ( v74 == 1 )
            v68 = 1 << (_RAX & 0x1F);
        }
        else
        {
          *(_BYTE *)(a1 + 1599) = 1 << (_RAX & 0x1F);
        }
      }
      while ( (_WORD)_RBX );
      v47 = v142;
      *(_BYTE *)(a1 + 1598) = v68 / *(unsigned __int8 *)(a1 + 1599);
    }
    else
    {
LABEL_84:
      if ( v141 >= 4 )
      {
        _RAX = 4LL;
        __asm { cpuid }
        _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
        *(_BYTE *)(a1 + 1598) = 1 << _RCX;
      }
      v47 = v142;
      if ( (v30 & 0x10000000) != 0 )
      {
        _BitScanReverse(&v80, 2 * BYTE2(v31) - 1);
        *(_BYTE *)(a1 + 1599) = (1 << v80) / (unsigned int)*(unsigned __int8 *)(a1 + 1598);
      }
    }
  }
  else
  {
    v47 = v142;
    if ( v46 != 1 || v142 < 0x80000008 )
      goto LABEL_88;
    _RAX = 2147483656LL;
    __asm { cpuid }
    v53 = _RCX;
    v54 = (unsigned __int16)_RCX >> 12;
    if ( !v54 )
      _BitScanReverse((unsigned int *)&v54, 2 * v53 + 1);
    *(_BYTE *)(a1 + 1598) = 1 << v54;
    if ( v142 >= 0x8000001E )
    {
      v55 = (v41 & 0x400000) != 0;
      v56 = v141;
      if ( v55 )
      {
        _RAX = 2147483678LL;
        __asm { cpuid }
        LOWORD(_RAX) = *(unsigned __int8 *)(a1 + 1598) / (__int16)(unsigned __int8)(BYTE1(_RBX) + 1);
        *(_BYTE *)(a1 + 1599) = BYTE1(_RBX) + 1;
        *(_BYTE *)(a1 + 1598) = _RAX;
      }
    }
    else
    {
LABEL_88:
      v56 = v141;
    }
  }
  if ( v46 == 1 )
  {
    v45 |= 0x200000uLL;
  }
  else if ( v46 == 2 )
  {
    v45 |= 0x1000000uLL;
  }
  v81 = *(unsigned __int8 *)(a1 + 1599);
  v82 = (unsigned __int8)KiMaximumGroupSize;
  if ( (int)(v81 * *(unsigned __int8 *)(a1 + 1598)) > (unsigned __int8)KiMaximumGroupSize )
  {
    if ( v81 > KiMaximumGroupSize )
      *(_BYTE *)(a1 + 1599) = KiMaximumGroupSize;
    v81 = *(unsigned __int8 *)(a1 + 1599);
    *(_BYTE *)(a1 + 1598) = v82 / (int)v81;
  }
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v83 = v81 - 1;
LABEL_101:
    *(_DWORD *)(a1 + 1628) = ~v83;
    goto LABEL_103;
  }
  IsHyperThreadingEnabled = HalIsHyperThreadingEnabled();
  v44 = v143;
  v85 = IsHyperThreadingEnabled == 0;
  v86 = *(unsigned __int8 *)(a1 + 1599);
  if ( !v85 )
  {
    v83 = v86 - 1;
    goto LABEL_101;
  }
  *(_DWORD *)(a1 + 1628) = ~(v86 * *(unsigned __int8 *)(a1 + 1598) - 1);
LABEL_103:
  v87 = *(_BYTE *)(a1 + 1597);
  if ( v87 == 2 && v47 >= 0x80000008 )
    goto LABEL_107;
  if ( v87 != 1 )
  {
    v93 = KiMtrrMaxRangeShift;
    goto LABEL_111;
  }
  if ( v47 >= 0x80000008 )
  {
LABEL_107:
    _RAX = 2147483656LL;
    __asm { cpuid }
    v93 = _RAX;
  }
  else
  {
    v93 = 40;
  }
  KiMtrrMaxRangeShift = v93;
LABEL_111:
  KiMtrrMaskBase = ((1LL << v93) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << v93) - 1) & 0xFFFFFFFFFFFFF000uLL;
  if ( v87 == 2 && v56 >= 6 )
  {
    _RAX = 6LL;
    __asm { cpuid }
    if ( (_RCX & 2) != 0 )
      v45 |= 0x400000uLL;
    if ( (_RAX & 0x2000) != 0 )
      v45 |= 0x8000000000uLL;
  }
  if ( (unsigned __int8)(v87 - 1) <= 1u && v56 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x80u) != 0LL )
      v45 |= 1uLL;
    if ( (_RBX & 1) != 0 )
      v45 |= 0x10000000uLL;
    if ( (_RBX & 0x400) != 0 && (v44 & 0x20000) != 0 )
      v45 |= 0x40000000000uLL;
    if ( (v45 & 0x10000001) != 0 )
    {
      v104 = __readcr4();
      if ( (v45 & 1) != 0 )
        v104 |= 0x100000uLL;
      if ( (v45 & 0x10000000) != 0 )
        v104 |= 0x10000uLL;
      if ( *(_DWORD *)(a1 + 36) && (v45 & 0x40000000000LL) != 0 && KiFlushPcid )
        v104 |= 0x20000uLL;
      __writecr4(v104);
      if ( (v104 & 0x20000) != 0 )
      {
        v105 = __readcr3();
        __writecr3(v105 | 2);
      }
    }
  }
  v106 = *(_BYTE *)(a1 + 1597);
  if ( v106 == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x800000) != 0 )
      v45 |= 0x800000000uLL;
    if ( (_RBX & 0x1000000) != 0 )
      v45 |= 0x1000000000uLL;
  }
  if ( v144 )
    v45 |= 0x20000uLL;
  if ( v106 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL && (__readmsr(0x48Bu) & 0x200000000LL) != 0 )
        v45 |= 0x4000000uLL;
      v117 = __readmsr(0x3Au);
      if ( (v117 & 5) == 5 )
        v45 |= 0x8000000uLL;
      v118 = KiVirtFlags;
      if ( (v117 & 4) != 0 )
      {
        v118 = KiVirtFlags | 1;
        KiVirtFlags |= 1u;
      }
      if ( (v117 & 1) != 0 )
        KiVirtFlags = v118 | 2;
    }
  }
  else if ( v106 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v45 |= 0x4000000uLL;
    }
    v129 = __readmsr(0xC0010114);
    if ( (v129 & 0x10) == 0 )
    {
      v45 |= 0x8000000uLL;
      KiVirtFlags |= 1u;
    }
  }
  if ( v106 == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v135 = __readmsr(0x3Au);
      if ( (v135 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        if ( (_RAX & 1) != 0 )
        {
          v45 |= 0x10000000000uLL;
          MEMORY[0xFFFFF7800000036C] |= 2u;
        }
      }
    }
  }
  KiApplyProcessorErrata((_BYTE *)a1);
  *(_QWORD *)(a1 + 25320) = v45;
}
