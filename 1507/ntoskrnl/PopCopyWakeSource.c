/*
 * XREFs of PopCopyWakeSource @ 0x1406B5628
 * Callers:
 *     PopGetWakeSource @ 0x1405677BC (PopGetWakeSource.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     PopWakeSourceSize @ 0x1406B5AD8 (PopWakeSourceSize.c)
 */

__int64 __fastcall PopCopyWakeSource(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  int v7; // ecx
  size_t *v8; // rdx
  size_t v9; // r8
  void *v10; // rcx

  result = PopWakeSourceSize(a3);
  *(_DWORD *)(v4 + 4) = result;
  v7 = *(_DWORD *)(v6 + 16);
  if ( !v7 )
  {
    *(_DWORD *)v4 = 0;
    v10 = (void *)(v4 + 10);
    *(_WORD *)(v4 + 8) = *(_WORD *)(v5 + 24);
    v9 = *(unsigned __int16 *)(v5 + 24);
    v8 = *(size_t **)(v5 + 32);
    return (__int64)memmove(v10, v8, v9);
  }
  if ( v7 != 1 )
  {
    result = (unsigned int)(v7 - 2);
    if ( (unsigned int)result > 1 )
      return result;
    result = (unsigned int)(v7 != 2) + 2;
    *(_DWORD *)v4 = result;
    v8 = *(size_t **)(v5 + 24);
    if ( !v8 )
    {
      *(_QWORD *)(v4 + 8) = 0LL;
      return result;
    }
    v9 = *v8;
    v10 = (void *)(v4 + 8);
    return (__int64)memmove(v10, v8, v9);
  }
  *(_DWORD *)v4 = 1;
  switch ( *(_DWORD *)(v5 + 24) )
  {
    case 1:
      *(_DWORD *)(v4 + 8) = 0;
      break;
    case 2:
      *(_DWORD *)(v4 + 8) = 1;
      break;
    case 4:
      *(_DWORD *)(v4 + 8) = 3;
      break;
  }
  return result;
}
