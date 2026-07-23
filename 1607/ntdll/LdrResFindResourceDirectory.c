/*
 * XREFs of LdrResFindResourceDirectory @ 0x180039A50
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 */

NTSTATUS __fastcall LdrResFindResourceDirectory(
        WCHAR *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        int a7)
{
  unsigned int v8; // r8d
  _QWORD Src[3]; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0;
  if ( (a7 & 0xC00) != 0 )
    return -1073741811;
  if ( a2 )
  {
    Src[0] = a2;
    v8 = 1;
  }
  if ( a3 )
  {
    Src[1] = a3;
    v8 = 2;
  }
  return LdrResSearchResource(a1, Src, v8, a7 | 2, a4, 0LL, a5, a6);
}
