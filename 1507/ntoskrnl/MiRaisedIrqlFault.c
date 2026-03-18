/*
 * XREFs of MiRaisedIrqlFault @ 0x140223EF8
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     MiNoFaultFound @ 0x14007EB84 (MiNoFaultFound.c)
 *     MI_CHECK_KERNEL_NOEXECUTE_FAULT @ 0x14007ECA0 (MI_CHECK_KERNEL_NOEXECUTE_FAULT.c)
 *     KeInvalidAccessAllowed @ 0x140111530 (KeInvalidAccessAllowed.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiTransientCombineAddress @ 0x14022C8AC (MiTransientCombineAddress.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiRaisedIrqlFault(char a1, ULONG_PTR a2, ULONG_PTR a3, __int64 **a4)
{
  volatile signed __int64 *v5; // r14
  unsigned int i; // r9d
  __int64 PteShadow; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v5 = (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 3221225477LL;
  if ( (a3 & 1) == 0 )
  {
    if ( KeInvalidAccessAllowed(a3) != 1 )
      goto LABEL_8;
    return 3221225477LL;
  }
  if ( *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
    return 3221225477LL;
LABEL_8:
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), a2) == 1 )
    return 3221225477LL;
  if ( a2 < 0xFFFF800000000000uLL )
    return 3489660934LL;
  for ( i = 0; i < 3; ++i )
  {
    PteShadow = **a4;
    if ( (unsigned __int64)(*a4 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(*a4, **a4);
    if ( (PteShadow & 1) == 0 )
      return 3489660934LL;
    ++a4;
  }
  if ( (PteShadow & 0x80u) != 0LL )
  {
    if ( (a1 & 2) != 0 && (PteShadow & 0x800) == 0 )
      KeBugCheckEx(0xBEu, a2, PteShadow, a3, 0xFuLL);
    MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, PteShadow, 3u);
    return 0LL;
  }
  v12 = *v5;
  if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
    v12 = MiReadPteShadow(v5, *v5);
  v15 = v12;
  if ( (v12 & 1) == 0 )
    return 3489660934LL;
  if ( (a1 & 2) == 0 )
    goto LABEL_26;
  if ( (v12 & 0x200) == 0 )
  {
    if ( (v12 & 0x800) == 0 )
      KeBugCheckEx(0xBEu, a2, v12, a3, 0xAuLL);
LABEL_26:
    MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, v12, 0);
    v13 = v12;
    if ( (unsigned __int64)&STACK[0x90482413068] <= 0x7F8 )
      v13 = MiReadPteShadow(&v15, v12);
    v14 = 48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( *(_WORD *)(v14 + 32) > 1u || !*(_QWORD *)v14 || (*(_BYTE *)(v14 + 35) & 8) != 0 )
    {
      MiNoFaultFound(a1, v5, a2, 0LL, 1, v12);
      return 0LL;
    }
  }
  return 3489660934LL;
}
