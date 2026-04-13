/*
 * XREFs of sub_180013CE8 @ 0x180013CE8
 * Callers:
 *     sub_18000DDA8 @ 0x18000DDA8 (sub_18000DDA8.c)
 *     sub_18000DF28 @ 0x18000DF28 (sub_18000DF28.c)
 *     sub_1800145A0 @ 0x1800145A0 (sub_1800145A0.c)
 * Callees:
 *     sub_180013D6C @ 0x180013D6C (sub_180013D6C.c)
 */

__int64 __fastcall sub_180013CE8(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = off_18002CEC8;
  v2 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v2 + a1 - 148) = v2 - 144;
  sub_180013D6C(a1 - 128);
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = off_18002DBB0;
  result = *(_QWORD *)(a1 - 144);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 148) = *(_DWORD *)(result + 4) - 24;
  return result;
}
