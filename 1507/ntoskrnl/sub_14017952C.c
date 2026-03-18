/*
 * XREFs of sub_14017952C @ 0x14017952C
 * Callers:
 *     _woutput_s @ 0x140178C0C (_woutput_s.c)
 *     sub_140179584 @ 0x140179584 (sub_140179584.c)
 *     sub_1401795D0 @ 0x1401795D0 (sub_1401795D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14017952C(__int16 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  __int16 v4; // r10
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 24);
  v4 = a1;
  if ( ((v3 & 0x40) == 0 || *(_QWORD *)(a2 + 16))
    && ((result = *(int *)(a2 + 8) - 2LL, *(_DWORD *)(a2 + 8) = result, (int)result < 0)
      ? (v4 = -1, *(_DWORD *)(a2 + 24) = v3 | 0x20)
      : (result = *(_QWORD *)a2, **(_WORD **)a2 = a1, *(_QWORD *)a2 += 2LL),
        v4 == -1 && (result = *(unsigned int *)(a2 + 24), (result & 0x20) != 0)) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}
