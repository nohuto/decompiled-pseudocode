/*
 * XREFs of KiExtendProcessAffinity @ 0x1401DAD98
 * Callers:
 *     KeStartThread @ 0x1400F08BC (KeStartThread.c)
 *     KeSetAffinityThread @ 0x140134874 (KeSetAffinityThread.c)
 * Callees:
 *     KiSetIdealNodeProcessByGroup @ 0x14007D1A8 (KiSetIdealNodeProcessByGroup.c)
 */

__int64 __fastcall KiExtendProcessAffinity(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax

  v2 = a2;
  v4 = a2;
  v5 = qword_1403AA618[a2];
  v6 = *(_QWORD *)(a1 + 8 * v2 + 88);
  if ( v6 )
  {
    result = v5 | v6;
    *(_QWORD *)(a1 + 8 * v4 + 88) = result;
  }
  else
  {
    if ( *(_WORD *)(a1 + 80) <= (unsigned __int16)v2 )
      *(_WORD *)(a1 + 80) = v2 + 1;
    *(_QWORD *)(a1 + 8 * v4 + 88) |= v5;
    result = KiSetIdealNodeProcessByGroup(a1, 0LL, v2);
    _InterlockedOr((volatile signed __int32 *)(a1 + 440), 1 << (v2 + 8));
  }
  return result;
}
