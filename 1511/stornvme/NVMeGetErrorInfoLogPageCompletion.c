/*
 * XREFs of NVMeGetErrorInfoLogPageCompletion @ 0x1C000A6D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C000EC00 (memmove.c)
 */

__int64 __fastcall NVMeGetErrorInfoLogPageCompletion(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // r8

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  result = v4 & 0xFFF;
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - result + 4096;
  if ( v2 == 40 )
    v6 = *(_QWORD *)(a2 + 64);
  else
    v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_DWORD *)(v4 + 4200);
  if ( *(_DWORD *)(v6 + 28) < v7 )
    v7 = *(_DWORD *)(v6 + 28);
  if ( *(_BYTE *)(a2 + 3) == 1 )
    result = (__int64)memmove((void *)(v6 + *(unsigned int *)(v6 + 44)), *(const void **)(v4 + 4192), v7);
  else
    *(_BYTE *)(a2 + 3) = 1;
  v8 = *(_QWORD *)(v4 + 4192);
  if ( v8 )
    result = StorPortExtendedFunction(25LL, a1, v8, *(unsigned int *)(v4 + 4200));
  *(_QWORD *)(v4 + 4192) = 0LL;
  *(_DWORD *)(v4 + 4200) = 0;
  *(_QWORD *)(v4 + 4224) = 0LL;
  *(_BYTE *)(v4 + 4186) = 1;
  return result;
}
