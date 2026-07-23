/*
 * XREFs of MiRemoveImagePageFromSystemWorkingSet @ 0x1400FBC70
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 * Callees:
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiRemoveWsle @ 0x140046A90 (MiRemoveWsle.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400BBC00 (MiUpdateWorkingSetPrivateSize.c)
 *     MiReleaseWsle @ 0x1400E02D0 (MiReleaseWsle.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
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
    && (v7 < PsNtosImageEnd && v7 >= (unsigned __int64)PsNtosImageBase
     || v7 < PsHalImageEnd && v7 >= (unsigned __int64)PsHalImageBase) )
  {
    _InterlockedDecrement((_DWORD *)&xmmword_1403268A8 + 2);
  }
  else
  {
    _InterlockedDecrement((_DWORD *)&xmmword_1403268A8 + 3);
  }
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 )
    Wsle = MiLocateWsle(v7, a1, Wsle);
  else
    MiUpdateWorkingSetPrivateSize(a1, a2 << 25 >> 16, -1LL);
  MiRemoveWsle(Wsle, a1);
  MiReleaseWsle(Wsle, a1, v7, 1);
  MiWriteValidPteVolatile(a2, 0x80000000LL);
  return MiLockPageAtDpcInline(a3);
}
