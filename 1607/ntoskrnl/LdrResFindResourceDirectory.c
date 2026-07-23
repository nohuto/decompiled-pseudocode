/*
 * XREFs of LdrResFindResourceDirectory @ 0x140687C18
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x1404FE548 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResourceDirectory(
        ULONGLONG a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        int a7)
{
  unsigned int v8; // r8d
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0;
  if ( (a7 & 0xC00) != 0 )
    return 3221225485LL;
  if ( a2 )
  {
    v10[0] = a2;
    v8 = 1;
  }
  if ( a3 )
  {
    v10[1] = a3;
    v8 = 2;
  }
  return LdrResSearchResource(a1, v10, v8, a7 | 2u, a4, 0LL, a5, a6);
}
