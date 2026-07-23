/*
 * XREFs of MiQueryPfn @ 0x1400B69B8
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 */

unsigned __int64 __fastcall MiQueryPfn(__int64 a1, __int64 a2)
{
  int PfnPriority; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 result; // rax
  __int64 v6; // r9

  if ( (*(_BYTE *)(48 * a1 - 0x58000000000LL + 35) & 0x40) != 0 )
    *(_QWORD *)(a2 + 8) |= 0x80000000uLL;
  PfnPriority = MiGetPfnPriority(48 * a1 - 0x58000000000LL);
  *(_QWORD *)(v3 + 8) ^= (*(_DWORD *)(v3 + 8) ^ (PfnPriority << 24)) & 0x7000000;
  result = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFF77FFFFFuLL | ((unsigned __int64)((*(_BYTE *)(v4 + 34) & 7) == 3) << 27) | 0x400000;
  *(_QWORD *)(v6 + 8) = result;
  return result;
}
