/*
 * XREFs of MiRaisedIrqlFault @ 0x1401EF8EC
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     MiNoFaultFound @ 0x14001F078 (MiNoFaultFound.c)
 *     KeInvalidAccessAllowed @ 0x1400A39A4 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x1400AEE78 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiTransientCombineAddress @ 0x1401FB36C (MiTransientCombineAddress.c)
 */

__int64 __fastcall MiRaisedIrqlFault(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter3,
        _QWORD *a4)
{
  volatile signed __int64 *v8; // r14
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v8 = (volatile signed __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (BugCheckParameter3 & 1) != 0 && *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 3221225477LL;
  if ( (BugCheckParameter3 & 1) == 0 )
  {
    if ( !KeInvalidAccessAllowed(BugCheckParameter3) )
      goto LABEL_8;
    return 3221225477LL;
  }
  if ( *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
    return 3221225477LL;
LABEL_8:
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), BugCheckParameter1) == 1 )
    return 3221225477LL;
  if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    do
    {
      v10 = MI_READ_PTE_LOCK_FREE(*a4);
      if ( (v10 & 1) == 0 )
        return 3489660934LL;
      if ( (v10 & 0x80u) != 0LL )
      {
        if ( (BugCheckParameter2 & 2) != 0 && (v10 & 0x800) == 0 )
          KeBugCheckEx(0xBEu, BugCheckParameter1, v10, BugCheckParameter3, 0xFuLL);
        MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, v10, 3u);
        if ( BugCheckParameter1 >= 0xFFFFF68000000000uLL && BugCheckParameter1 <= 0xFFFFF6FFFFFFFFFFuLL )
          KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 8uLL);
        return 0LL;
      }
      ++a4;
    }
    while ( (unsigned int)(v11 + 1) < 3 );
    v12 = MI_READ_PTE_LOCK_FREE(v8);
    v15 = v12;
    v13 = v12;
    if ( (v12 & 1) == 0 )
      return 3489660934LL;
    if ( (BugCheckParameter2 & 2) != 0 )
    {
      if ( (v12 & 0x200) != 0 )
        return 3489660934LL;
      if ( (v12 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, BugCheckParameter1, v12, BugCheckParameter3, 0xAuLL);
    }
    MiCheckSystemNxFault(BugCheckParameter2, BugCheckParameter1, BugCheckParameter3, v12, 0);
    v14 = MI_READ_PTE_LOCK_FREE(&v15);
    if ( *(_WORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 32) > 1u
      || !*(_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL)
      || (*(_BYTE *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 35) & 8) != 0 )
    {
      MiNoFaultFound(BugCheckParameter2, v8, BugCheckParameter1, 1LL, v13, 0LL);
      return 0LL;
    }
  }
  return 3489660934LL;
}
