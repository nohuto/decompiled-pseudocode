/*
 * XREFs of MiQueryPfn @ 0x140224C30
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiQueryPfn(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  char v3; // al
  int v4; // eax
  unsigned __int64 result; // rax

  v2 = 48 * a1 - 0x58000000000LL;
  if ( (*(_BYTE *)(v2 + 35) & 0x40) != 0 )
    *(_QWORD *)(a2 + 8) |= 0x80000000uLL;
  v3 = *(_BYTE *)(v2 + 35);
  if ( (v3 & 8) != 0 )
    v4 = 5;
  else
    v4 = v3 & 7;
  *(_QWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (v4 << 24)) & 0x7000000;
  result = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFF77FFFFFuLL | ((unsigned __int64)((*(_BYTE *)(v2 + 34) & 7) == 3) << 27) | 0x400000;
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
