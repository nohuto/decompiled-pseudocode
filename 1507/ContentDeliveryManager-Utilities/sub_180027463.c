/*
 * XREFs of sub_180027463 @ 0x180027463
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011BA8 @ 0x180011BA8 (sub_180011BA8.c)
 */

__int64 __fastcall sub_180027463(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 136) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 136) &= ~1u;
    return sub_180011BA8((_QWORD *)(*(_QWORD *)(a2 + 112) + 144LL));
  }
  return result;
}
