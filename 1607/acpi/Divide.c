/*
 * XREFs of Divide @ 0x1C005EF40
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTarget @ 0x1C001476C (ValidateTarget.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     PushPost @ 0x1C00204A0 (PushPost.c)
 */

__int64 __fastcall Divide(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // [rsp+48h] [rbp+10h] BYREF

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"II");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 0x87u, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 120LL, 0x87u, (__int64)&v5);
      if ( !(_DWORD)result )
        return PushPost(a1, (int)ProcessDivide, a2, 0LL, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
