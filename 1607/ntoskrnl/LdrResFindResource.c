/*
 * XREFs of LdrResFindResource @ 0x140544984
 * Callers:
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     LdrResSearchResource @ 0x1404FE548 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResource(
        ULONGLONG a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        void *a7,
        __int64 a8,
        unsigned int a9)
{
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( (a9 & 0xC02) != 0 )
    return 3221225485LL;
  v10[2] = a4;
  v10[0] = a2;
  v10[1] = a3;
  return LdrResSearchResource(a1, v10, 3u, a9, a5, a6, a7, a8);
}
