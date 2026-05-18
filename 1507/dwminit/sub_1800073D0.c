/*
 * XREFs of sub_1800073D0 @ 0x1800073D0
 * Callers:
 *     sub_180006E5C @ 0x180006E5C (sub_180006E5C.c)
 * Callees:
 *     sub_180007380 @ 0x180007380 (sub_180007380.c)
 *     sub_180007430 @ 0x180007430 (sub_180007430.c)
 */

__int64 __fastcall sub_1800073D0(__int64 a1)
{
  __int64 result; // rax

  result = sub_180007430(&_ImageBase);
  if ( (_DWORD)result )
  {
    result = sub_180007380((__int64)&_ImageBase, a1 - (_QWORD)&_ImageBase);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}
