/*
 * XREFs of MiCopySinglePage @ 0x1401D3E08
 * Callers:
 *     MmCopyMemory @ 0x1401D45A8 (MmCopyMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MiIsPageSecured @ 0x1401D3FF0 (MiIsPageSecured.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v11; // rdi
  unsigned __int8 v12; // si
  int v13; // ebp
  int ProtectionPfnCompatible; // eax
  __int64 v15; // r9
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  const void *v19; // rbx

  if ( !MI_IS_PFN(a2) )
    return 3221225793LL;
  v11 = 48 * a2 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
    v12 = MiLockPageInline(48 * a2 - 0x58000000000LL);
  else
    v12 = 17;
  if ( !MI_IS_PFN(a2) )
  {
    if ( v12 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v11 + 35) < 0 || (unsigned int)MiIsPageSecured(48 * a2 - 0x58000000000LL) )
  {
    if ( v12 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
    }
    return 3221227273LL;
  }
  else
  {
    v13 = *(unsigned __int8 *)(v11 + 34) >> 6;
    if ( v13 == 3 )
      MiChangePageAttribute(48 * a2 - 0x58000000000LL, 1, 1u);
    if ( a5 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, 48 * a2 - 0x58000000000LL);
      ValidKernelPte = MiMakeValidKernelPte(a2, ProtectionPfnCompatible, a5, v15);
      *(_QWORD *)a5 = ValidKernelPte;
      v17 = ValidKernelPte;
      if ( (unsigned int)MiPteInShadowRange(a5) )
        MiWritePteShadow(a5, v17);
      v18 = (__int64)(a5 << 25) >> 16;
    }
    else
    {
      v18 = MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
    }
    v19 = (const void *)(a3 + v18);
    memmove(a1, v19, a4);
    if ( a5 )
    {
      *(_QWORD *)a5 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(a5) )
        MiWritePteShadow(a5, 0LL);
    }
    else
    {
      MiUnmapPageInHyperSpaceWorker((__int64)v19, 0x11u);
    }
    if ( v13 == 3 )
      MiChangePageAttribute(v11, 3, 3u);
    if ( v12 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
    }
    return 0LL;
  }
}
