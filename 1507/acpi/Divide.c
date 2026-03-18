/*
 * XREFs of Divide @ 0x1C0047D40
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     PushPost @ 0x1C00188D0 (PushPost.c)
 */

__int64 __fastcall Divide(__int64 a1, __int64 a2)
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
        return PushPost(a1, (__int64)ProcessDivide, a2, 0LL, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
