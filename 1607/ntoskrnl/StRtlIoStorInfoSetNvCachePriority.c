/*
 * XREFs of StRtlIoStorInfoSetNvCachePriority @ 0x14023CBC8
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14008D604 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IoGetGenericIrpExtension @ 0x1401104D0 (IoGetGenericIrpExtension.c)
 *     IoSetGenericIrpExtension @ 0x1401107F4 (IoSetGenericIrpExtension.c)
 */

__int64 __fastcall StRtlIoStorInfoSetNvCachePriority(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  char v5; // [rsp+38h] [rbp+10h] BYREF
  __int16 v6; // [rsp+39h] [rbp+11h]
  char v7; // [rsp+3Bh] [rbp+13h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a2 > 0xFu )
    return 3221225485LL;
  result = IoGetGenericIrpExtension(a1, &v5, 4u);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741275 )
  {
    v5 = a2 & 0xF | v5 & 0xF0 | 0x10;
    return IoSetGenericIrpExtension(a1, &v5, 4u, 1);
  }
  return result;
}
