/*
 * XREFs of sub_14000338C @ 0x14000338C
 * Callers:
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 * Callees:
 *     sub_1400033F0 @ 0x1400033F0 (sub_1400033F0.c)
 *     sub_14000436C @ 0x14000436C (sub_14000436C.c)
 *     sub_140004390 @ 0x140004390 (sub_140004390.c)
 */

__int64 __fastcall sub_14000338C(__int64 a1, _OWORD *a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_140004390(*(unsigned int *)(a1 + 64), 0LL, v5);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    *(_OWORD *)(a1 + 48) = *a2;
  else
    *(_DWORD *)(a1 + 24) = *(_DWORD *)a2;
  sub_14000436C(v5);
  sub_1400033F0(a1);
  return RtlWakeAllConditionVariable(&unk_14001FC10);
}
