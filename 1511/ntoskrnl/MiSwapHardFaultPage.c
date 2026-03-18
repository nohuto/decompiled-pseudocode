/*
 * XREFs of MiSwapHardFaultPage @ 0x1401D54F0
 * Callers:
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x14006A630 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiSwapHardFaultPage(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax

  v6 = ((((a3 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE(a1) & 0xFFFF000000000FFFuLL;
  *a1 = v6;
  if ( (unsigned int)MiPteInShadowRange(a1) )
    MiWritePteShadow(a1, v6);
  MiLockNestedPageAtDpcInline(a3, v7, v8);
  MiCopyPfnEntry(a3, a2);
  if ( ((*(_QWORD *)(a2 + 40) >> 54) & 7) == 3 )
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a3 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(a2 + 16) &= 0xFFFFFFFFFFFFCFFFuLL;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(a2) )
    MiPfnReferenceCountIsZero(a2, (a2 + 0x58000000000LL) / 48);
  else
    *(_WORD *)(a3 + 32) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
