/*
 * XREFs of RmpResourceLimitsAreLegal @ 0x180015278
 * Callers:
 *     RmSetHostLimit @ 0x18000EB10 (RmSetHostLimit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpResourceLimitsAreLegal(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  return (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFE00uLL) == 0
      && (!a2 || (*(_QWORD *)a1 & *a2) == *(_QWORD *)a1)
      && (!a3 || (*(_QWORD *)a1 & *a3) == *a3)
      && ((*(_BYTE *)a1 & 1) != 0 || !*(_QWORD *)(a1 + 8))
      && ((*(_BYTE *)a1 & 2) != 0 || !*(_QWORD *)(a1 + 16))
      && ((*(_BYTE *)a1 & 4) != 0 || !*(_QWORD *)(a1 + 24))
      && ((*(_BYTE *)a1 & 8) != 0 || !*(_DWORD *)(a1 + 32))
      && ((*(_BYTE *)a1 & 0x10) != 0 || (*(_DWORD *)(a1 + 48) & 3) == 1)
      && ((*(_BYTE *)a1 & 0x20) != 0 || (*(_BYTE *)(a1 + 48) & 4) == 0)
      && ((*(_BYTE *)a1 & 0x40) != 0 || (*(_BYTE *)(a1 + 48) & 8) == 0)
      && (*(char *)a1 < 0 || (*(_BYTE *)(a1 + 48) & 0x10) == 0);
}
