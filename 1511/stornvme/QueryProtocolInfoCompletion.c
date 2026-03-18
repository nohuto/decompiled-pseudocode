/*
 * XREFs of QueryProtocolInfoCompletion @ 0x1C00094F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C000EC00 (memmove.c)
 */

__int64 __fastcall QueryProtocolInfoCompletion(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v3; // r9
  __int64 v5; // rbx
  __int64 result; // rax
  _DWORD *v7; // rcx
  const void *v8; // rdx
  __int64 v9; // r8

  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  result = v5 & 0xFFF;
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - result + 4096;
  if ( v3 == 40 )
    v7 = *(_DWORD **)(a2 + 64);
  else
    v7 = *(_DWORD **)(a2 + 24);
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( v7[10] == 3 )
      v7[15] = *a3;
    v7[14] = *(_DWORD *)(v5 + 4200);
    result = *(unsigned int *)(v5 + 4200);
    if ( (_DWORD)result )
    {
      v8 = *(const void **)(v5 + 4192);
      if ( v8 )
        result = (__int64)memmove((char *)v7 + (unsigned int)v7[13] + 36, v8, (unsigned int)result);
    }
  }
  else
  {
    v7[14] = 0;
  }
  v9 = *(_QWORD *)(v5 + 4192);
  if ( v9 )
    result = StorPortExtendedFunction(25LL, a1, v9, *(unsigned int *)(v5 + 4200));
  *(_QWORD *)(v5 + 4192) = 0LL;
  *(_DWORD *)(v5 + 4200) = 0;
  *(_BYTE *)(v5 + 4186) = 1;
  return result;
}
