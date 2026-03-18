/*
 * XREFs of CreateWordField @ 0x1C0021410
 * Callers:
 *     <none>
 * Callees:
 *     CreateXField @ 0x1C000DF7C (CreateXField.c)
 */

__int64 __fastcall CreateWordField(_QWORD *a1, __int64 a2)
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
    v4[5] = 16;
    v4[6] = 2;
  }
  return result;
}
