/*
 * XREFs of Divide @ 0x1C0047650
 * Callers:
 *     <none>
 * Callees:
 *     PushPost @ 0x1C0009F80 (PushPost.c)
 *     ValidateTarget @ 0x1C000E694 (ValidateTarget.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 */

__int64 __fastcall Divide(int a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // [rsp+48h] [rbp+10h] BYREF

  result = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"II");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(*(_QWORD *)(a2 + 80) + 80LL, 0x87u, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ValidateTarget(*(_QWORD *)(a2 + 80) + 120LL, 0x87u, (__int64)&v5);
      if ( !(_DWORD)result )
        return PushPost(a1, (int)ProcessDivide, a2, 0LL, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
