/*
 * XREFs of sub_180004DC8 @ 0x180004DC8
 * Callers:
 *     sub_1800044E0 @ 0x1800044E0 (sub_1800044E0.c)
 *     sub_180004D90 @ 0x180004D90 (sub_180004D90.c)
 * Callees:
 *     sub_180004E78 @ 0x180004E78 (sub_180004E78.c)
 */

int __fastcall sub_180004DC8(__int64 a1)
{
  int result; // eax
  void *v3; // r8

  *(_QWORD *)a1 = &off_180008E88;
  result = sub_180004E78();
  v3 = *(void **)(a1 + 72);
  if ( v3 )
  {
    result = HeapFree(*(HANDLE *)(a1 + 80), 0, v3);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  return result;
}
