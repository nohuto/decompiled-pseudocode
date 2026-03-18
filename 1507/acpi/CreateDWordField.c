/*
 * XREFs of CreateDWordField @ 0x1C0016AA0
 * Callers:
 *     <none>
 * Callees:
 *     CreateXField @ 0x1C0015538 (CreateXField.c)
 */

__int64 __fastcall CreateDWordField(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  result = CreateXField(a1, a2, *(_QWORD *)(a2 + 80) + 80LL, &v5);
  if ( !(_DWORD)result )
  {
    v4 = v5;
    v5[3] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
    v4[4] = 0;
    v4[5] = 32;
    v4[6] = 3;
  }
  return result;
}
