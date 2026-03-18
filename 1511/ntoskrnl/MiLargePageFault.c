/*
 * XREFs of MiLargePageFault @ 0x1401DED84
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MI_CHECK_KERNEL_NOEXECUTE_FAULT @ 0x140008168 (MI_CHECK_KERNEL_NOEXECUTE_FAULT.c)
 *     MiNoFaultFound @ 0x14000A164 (MiNoFaultFound.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiCanGrantExecute @ 0x1401DEC6C (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x1401DEFD0 (MiValidVirtualizationFault.c)
 */

__int64 __fastcall MiLargePageFault(char a1, ULONG_PTR a2, ULONG_PTR a3, char a4, __int64 a5)
{
  __int64 *v6; // r14
  signed __int64 v10; // rbx
  __int64 v11; // r8
  _KPROCESS *v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+44h] [rbp-BCh]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]

  v6 = (__int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v10 = MI_READ_PTE_LOCK_FREE(v6);
  v17 = v10;
  v18 = a3 & 1;
  if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    if ( (a1 & 2) != 0 )
    {
      if ( (v10 & 0x800) == 0 )
        return 3221225477LL;
      if ( (unsigned int)MiNoFaultFound(a1, v6, a2, a5, 0, ZeroPte) )
      {
        v21 = 20LL;
        v19 = 1;
        v20 = 0;
        v22 = 0LL;
        v23 = 0LL;
        MiInsertTbFlushEntry((__int64)&v19, a2 & 0xFFFFFFFFFFE00000uLL, 1LL, 1);
        MiFlushTbList((__int64)&v19, v13);
      }
    }
    if ( (a1 & 0x10) != 0 )
    {
      if ( v10 >= 0 )
      {
        if ( !a4 )
          MI_CHECK_KERNEL_NOEXECUTE_FAULT(a1, a2, a3, v10, 7u);
      }
      else
      {
        if ( !(unsigned int)MiCanGrantExecute((__int64)KeGetCurrentThread()->ApcState.Process, a2) )
          return 3221225477LL;
        v14 = MI_READ_PTE_LOCK_FREE(&v17);
        if ( !MI_IS_PFN((v14 >> 12) & 0xFFFFFFFFFLL) )
          return 3221225477LL;
        v15 = qword_140381310 | v17 & 0x7FFFFFFFFFFFFFFFLL;
        v17 = v15;
        *v6 = v15;
        if ( MiPteInShadowRange((__int64)v6) )
          MiWritePteShadow((__int64)v6, v15);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(a2, 1u, 0);
      }
    }
    if ( v18 )
    {
      v16 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v16 == 5 )
      {
        LOBYTE(v11) = 17;
        MiValidVirtualizationFault(v16, v6, v11);
        *(_QWORD *)(v16 + 40) += (a2 - (a2 & 0xFFFFFFFFFFE00000uLL)) >> 12;
      }
    }
  }
  return 0LL;
}
