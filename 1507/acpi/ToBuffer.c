/*
 * XREFs of ToBuffer @ 0x1C0049010
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     ConvertToBuffer @ 0x1C00499AC (ConvertToBuffer.c)
 */

__int64 __fastcall ToBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"D");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(*(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ConvertToBuffer(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
      if ( !(_DWORD)result )
        return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
