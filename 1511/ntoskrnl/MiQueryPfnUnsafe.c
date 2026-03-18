/*
 * XREFs of MiQueryPfnUnsafe @ 0x1400EA268
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiQueryPfnUnsafe(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  unsigned int v7; // esi
  __int64 v8; // rbx
  unsigned __int8 v9; // r14

  v7 = 0;
  if ( MI_IS_PFN(a1) )
  {
    v8 = 48 * v6 - 0x58000000000LL;
    if ( a2 == (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) )
    {
      v9 = MiLockPageInline(48 * v6 - 0x58000000000LL);
      if ( (*(_BYTE *)(v8 + 35) & 0x40) != 0 )
      {
        if ( MI_READ_PTE_LOCK_FREE(a2) != a3 )
          goto LABEL_5;
        *(_QWORD *)(a4 + 8) |= 0x80000000uLL;
      }
      *(_QWORD *)(a4 + 8) ^= (*(_DWORD *)(a4 + 8) ^ ((unsigned int)MI_GET_PFN_PRIORITY(v8) << 24)) & 0x7000000;
      v7 = 1;
      *(_QWORD *)(a4 + 8) = *(_QWORD *)(a4 + 8) & 0xFFFFFFFFF77FFFFFuLL | ((unsigned __int64)((*(_BYTE *)(v8 + 34) & 7) == 3) << 27) | 0x400000;
LABEL_5:
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v9);
      return v7;
    }
  }
  return 0LL;
}
