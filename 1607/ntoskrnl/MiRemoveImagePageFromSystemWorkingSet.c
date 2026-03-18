/*
 * XREFs of MiRemoveImagePageFromSystemWorkingSet @ 0x1400FDEF0
 * Callers:
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140086098 (MiMakeDriverPagesPrivate.c)
 * Callees:
 *     MiLocateWsle @ 0x140046B50 (MiLocateWsle.c)
 *     MiRemoveWsle @ 0x140046F10 (MiRemoveWsle.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400BDD70 (MiUpdateWorkingSetPrivateSize.c)
 *     MiReleaseWsle @ 0x1400E2430 (MiReleaseWsle.c)
 *     MiWriteValidPteVolatile @ 0x1400FF0F4 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiRemoveImagePageFromSystemWorkingSet(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR Wsle; // rbp
  ULONG_PTR v7; // rbx

  Wsle = *(_QWORD *)a3;
  *(_BYTE *)(a3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v7 = a2 << 25 >> 16;
  if ( PsNtosImageBase && (v7 < PsNtosImageEnd && v7 >= PsNtosImageBase || v7 < PsHalImageEnd && v7 >= PsHalImageBase) )
    _InterlockedDecrement((_DWORD *)&xmmword_140326868 + 2);
  else
    _InterlockedDecrement((_DWORD *)&xmmword_140326868 + 3);
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 )
    Wsle = MiLocateWsle(v7, a1, Wsle);
  else
    MiUpdateWorkingSetPrivateSize(a1, a2 << 25 >> 16, -1LL);
  MiRemoveWsle(Wsle, a1);
  MiReleaseWsle(Wsle, a1, v7, 1);
  MiWriteValidPteVolatile(a2, 0x80000000LL);
  return MiLockPageAtDpcInline(a3);
}
