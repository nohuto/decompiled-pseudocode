/*
 * XREFs of sub_18000B280 @ 0x18000B280
 * Callers:
 *     sub_18000B37C @ 0x18000B37C (sub_18000B37C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000B280(__int64 a1)
{
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = &off_18003A0F8;
  return a1;
}
