/*
 * XREFs of sub_180005A7C @ 0x180005A7C
 * Callers:
 *     sub_1800057F0 @ 0x1800057F0 (sub_1800057F0.c)
 * Callees:
 *     sub_180005B98 @ 0x180005B98 (sub_180005B98.c)
 */

__int64 __fastcall sub_180005A7C(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 16) = 17;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 28) = a5;
  *(float *)(a1 + 20) = a3;
  *(float *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 10;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_180005B98();
  return v5;
}
