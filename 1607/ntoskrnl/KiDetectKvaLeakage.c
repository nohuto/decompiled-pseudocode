/*
 * XREFs of KiDetectKvaLeakage @ 0x1403DDD24
 * Callers:
 *     KiSetFeatureBits @ 0x1403D57C8 (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiIsFbClearSupported @ 0x1401D8C98 (KiIsFbClearSupported.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1401D9AD8 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1401D9B28 (KiIsKvaShadowNeededForTsa.c)
 */

char __fastcall KiDetectKvaLeakage(__int64 a1)
{
  int v3; // esi
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v12; // r9
  char v17; // dl
  char v18; // dl

  LODWORD(_RAX) = KiIsKvaShadowNeededForBranchConfusion((_BYTE *)a1);
  v3 = KeFeatureBits2;
  if ( (_DWORD)_RAX || (_RAX = KiIsKvaShadowNeededForTsa((_BYTE *)a1), (_DWORD)_RAX) )
  {
    v4 = 1LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 1597) != 2 )
      return _RAX;
    LOBYTE(_RAX) = *(_BYTE *)(a1 + 1523);
    if ( *(_BYTE *)(a1 + 1520) == 6 && (unsigned __int8)_RAX <= 0x36u )
    {
      v7 = 0x6000C010000000LL;
      if ( _bittest64(&v7, _RAX) )
        return _RAX;
    }
    _RAX = 0LL;
    __asm { cpuid }
    v12 = 0;
    v4 = 1LL;
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RDX & 0x20000000) != 0 )
      {
        _RAX = __readmsr(0x10Au);
        v12 = _RAX;
      }
      if ( (v12 & 1) != 0 )
      {
        KiMicrocodeTrackerEnabled = 1;
        v17 = (v3 & 0x28) == 8;
        LOBYTE(_RAX) = 0;
        if ( (*(_QWORD *)&v3 & 0x380000LL) != 0x380000 )
        {
          LOBYTE(_RAX) = KiIsFbClearSupported();
          v17 = _RAX | v18;
        }
        if ( !v17 )
          return _RAX;
      }
    }
    if ( *(_DWORD *)(a1 + 36) && !KiKvaLeakage )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
  }
  KiKvaLeakage = v4;
  if ( *(_BYTE *)(a1 + 1597) != 2 || (v3 & 0x10) != 0 )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KiImplementedPhysicalBits = -1;
  }
  else
  {
    v5 = 46;
    _RAX = 0LL;
    v6 = 0LL;
    while ( KiCpuTable[v6] != 2 || KiCpuTable[v6 + 1] != *(_DWORD *)(a1 + 1644) )
    {
      _RAX += v4;
      v6 = 4 * _RAX;
      if ( KiCpuTable[4 * _RAX + 2] == 18 )
        goto LABEL_30;
    }
    _RAX *= 2LL;
    v5 = KiCpuTable[2 * _RAX + 3];
    if ( !v5 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX < 0x80000008 )
      {
        LOBYTE(_RAX) = 36;
      }
      else
      {
        _RAX = 2147483656LL;
        __asm { cpuid }
      }
      v5 = (unsigned __int8)_RAX;
    }
LABEL_30:
    if ( *(_DWORD *)(a1 + 36) )
    {
      LOBYTE(_RAX) = KiImplementedPhysicalBits;
      if ( v5 != KiImplementedPhysicalBits && !KiKvaLeakageSimulate )
        KeBugCheckEx(0x5Du, 0x4C315446uLL, *(unsigned int *)(a1 + 36), v5, KiImplementedPhysicalBits);
    }
    else
    {
      KiImplementedPhysicalBits = v5;
    }
  }
  return _RAX;
}
