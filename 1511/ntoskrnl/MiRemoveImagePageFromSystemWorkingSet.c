/*
 * XREFs of MiRemoveImagePageFromSystemWorkingSet @ 0x14001C40C
 * Callers:
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 * Callees:
 *     MI_UPDATE_WORKING_SET_PRIVATE_SIZE @ 0x14001EDF8 (MI_UPDATE_WORKING_SET_PRIVATE_SIZE.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiRemoveWsle @ 0x1400B79C0 (MiRemoveWsle.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     MiReleaseWsle @ 0x1400BAAFC (MiReleaseWsle.c)
 */

__int64 __fastcall MiRemoveImagePageFromSystemWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR Wsle; // rbp
  ULONG_PTR v7; // rbx

  Wsle = *(_QWORD *)a3;
  *(_BYTE *)(a3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v7 = a2 << 25 >> 16;
  if ( PsNtosImageBase
    && (v7 >= (unsigned __int64)PsNtosImageBase && v7 < PsNtosImageEnd
     || v7 >= (unsigned __int64)PsHalImageBase && v7 < PsHalImageEnd) )
  {
    _InterlockedDecrement((_DWORD *)&xmmword_1402FE598 + 2);
  }
  else
  {
    _InterlockedDecrement((_DWORD *)&xmmword_1402FE598 + 3);
  }
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 )
    Wsle = MiLocateWsle(v7);
  else
    MI_UPDATE_WORKING_SET_PRIVATE_SIZE(a1, a2 << 25 >> 16, -1LL);
  MiRemoveWsle(Wsle);
  MiReleaseWsle(Wsle, a1, v7, 1LL);
  MI_WRITE_VALID_PTE_VOLATILE(a2, 0x80000000LL);
  return MiLockPageAtDpcInline(a3);
}
