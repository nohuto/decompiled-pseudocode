/*
 * XREFs of MiCopySinglePage @ 0x1401E4828
 * Callers:
 *     MmCopyMemory @ 0x1401E5000 (MmCopyMemory.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiIsPageSecured @ 0x1401E4A18 (MiIsPageSecured.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v12; // rbx
  unsigned __int8 v13; // si
  int v14; // ebp
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidKernelPte; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  const void *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx

  if ( !MiIsPfnInline(a2) )
    return 3221225793LL;
  v12 = 48 * v10 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
    v13 = MiLockPageInline(48 * v10 - 0x58000000000LL);
  else
    v13 = 17;
  if ( !MiIsPfnInline(a2) )
  {
    if ( v13 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v12 + 35) < 0 || (unsigned int)MiIsPageSecured(v12) )
  {
    if ( v13 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
    }
    return 3221227273LL;
  }
  else
  {
    v14 = *(unsigned __int8 *)(v12 + 34) >> 6;
    if ( v14 == 3 )
      MiChangePageAttribute(v12, 1u, 1);
    if ( a5 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v12);
      ValidKernelPte = MiMakeValidKernelPte(a2, ProtectionPfnCompatible, a5);
      *(_QWORD *)a5 = ValidKernelPte;
      if ( (unsigned int)MiPteInShadowRange(a5, ValidKernelPte) )
        MiWritePteShadow(v18, v17);
      v19 = (__int64)(a5 << 25) >> 16;
    }
    else
    {
      v19 = MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
    }
    v20 = (const void *)(a3 + v19);
    memmove(a1, v20, a4);
    if ( a5 )
    {
      *(_QWORD *)a5 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(a5, v21) )
        MiWritePteShadow(v22, 0LL);
    }
    else
    {
      LOBYTE(v21) = 17;
      MiUnmapPageInHyperSpaceWorker((__int64)v20, v21);
    }
    if ( v14 == 3 )
      MiChangePageAttribute(v12, 3u, 3);
    if ( v13 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
    }
    return 0LL;
  }
}
