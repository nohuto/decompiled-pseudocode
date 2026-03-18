/*
 * XREFs of MiRaisedIrqlFault @ 0x140116C70
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     MI_CHECK_KERNEL_NOEXECUTE_FAULT @ 0x140008168 (MI_CHECK_KERNEL_NOEXECUTE_FAULT.c)
 *     MiNoFaultFound @ 0x14000A164 (MiNoFaultFound.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     KeInvalidAccessAllowed @ 0x1400E5FF0 (KeInvalidAccessAllowed.c)
 *     MiTransientCombineAddress @ 0x140116E50 (MiTransientCombineAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRaisedIrqlFault(char a1, unsigned __int64 a2, ULONG_PTR a3, _QWORD *a4)
{
  volatile signed __int64 *PteAddress; // r15
  unsigned int i; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  PteAddress = (volatile signed __int64 *)MiGetPteAddress(a2);
  if ( (a3 & 1) != 0 && *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 3221225477LL;
  if ( (a3 & 1) == 0 )
  {
    if ( !KeInvalidAccessAllowed(a3) )
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
    v11 = MI_READ_PTE_LOCK_FREE(*a4);
    if ( (v11 & 1) == 0 )
      return 3489660934LL;
    ++a4;
  }
  if ( (v11 & 0x80u) != 0LL )
  {
    if ( (a1 & 2) != 0 && (v11 & 0x800) == 0 )
      KeBugCheckEx(0xBEu, a2, v11, a3, 0xFuLL);
    MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, v11, 3u);
    return 0LL;
  }
  v12 = MI_READ_PTE_LOCK_FREE(PteAddress);
  v15 = v12;
  v13 = v12;
  if ( (v12 & 1) == 0 )
    return 3489660934LL;
  if ( (a1 & 2) == 0 )
    goto LABEL_22;
  if ( (v12 & 0x200) == 0 )
  {
    if ( (v12 & 0x800) == 0 )
      KeBugCheckEx(0xBEu, a2, v12, a3, 0xAuLL);
LABEL_22:
    MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, v12, 0);
    v14 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v15) - 0x58000000000LL;
    if ( *(_WORD *)(v14 + 32) > 1u || !*(_QWORD *)v14 || (*(_BYTE *)(v14 + 35) & 8) != 0 )
    {
      MiNoFaultFound(a1, PteAddress, a2, 0LL, 1u, v13);
      return 0LL;
    }
  }
  return 3489660934LL;
}
