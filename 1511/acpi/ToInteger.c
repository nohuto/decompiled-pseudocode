/*
 * XREFs of ToInteger @ 0x1C0020DA0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTarget @ 0x1C000E694 (ValidateTarget.c)
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     ConvertToInteger @ 0x1C0020E10 (ConvertToInteger.c)
 */

__int64 __fastcall ToInteger(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"E");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(*(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ConvertToInteger(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
      if ( !(_DWORD)result )
        return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
