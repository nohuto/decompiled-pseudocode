/*
 * XREFs of MiInitializeSharedUserData @ 0x1407D0468
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiSwizzleInvalidPte @ 0x1401F2784 (MiSwizzleInvalidPte.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvlGetSharedPageVa @ 0x140581DFC (HvlGetSharedPageVa.c)
 */

__int64 MiInitializeSharedUserData()
{
  unsigned __int64 v0; // rdi
  unsigned __int64 SharedPageVa; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r15
  unsigned __int64 i; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r9
  unsigned __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  _QWORD v14[7]; // [rsp+20h] [rbp-38h]
  unsigned __int64 ValidKernelPte; // [rsp+60h] [rbp+8h] BYREF

  v14[0] = 0xFFFFF78000000000uLL;
  v0 = 1LL;
  SharedPageVa = HvlGetSharedPageVa();
  v14[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    ValidKernelPte = MI_READ_PTE_LOCK_FREE(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (ValidKernelPte & 1) != 0 )
    {
      v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidKernelPte);
      if ( MiIsPfnInline((v2 >> 12) & 0xFFFFFFFFFLL) )
      {
        v0 = 2LL;
        v3 = ExGenRandom(1) & 0xF;
        if ( !v3 )
          LODWORD(v3) = 15;
        qword_1403269D8 = (unsigned int)((_DWORD)v3 << 12) + 2147352576LL;
      }
    }
  }
  result = (__int64)ExAllocatePoolWithTag(PagedPool, 8 * v0, 0x20206D4Du);
  v5 = result;
  if ( result )
  {
    for ( i = 0LL; i < v0; ++i )
    {
      v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v14[i] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
      v9 = (unsigned __int64 *)(v5 + 8 * i);
      ValidKernelPte = MiMakeValidKernelPte(v7, 1, v8);
      *v9 = ValidKernelPte;
      if ( MiPteInShadowRange((unsigned __int64)v9) )
        MiWritePteShadow(v11, v10);
      *(&qword_1403269C8 + i) = (ULONG_PTR)v9;
      v12 = 48 * v7 - 0x58000000000LL;
      MiLockPageInline(v12);
      *(_QWORD *)(v12 + 16) = MiSwizzleInvalidPte(128LL);
      *(_QWORD *)(v12 + 40) |= 0x200000000000000uLL;
      *(_QWORD *)(v12 + 8) = v9;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
    }
    return 1LL;
  }
  return result;
}
