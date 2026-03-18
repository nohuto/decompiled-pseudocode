/*
 * XREFs of Interrupter_Initialize @ 0x1C0026750
 * Callers:
 *     Interrupter_ControllerResetPostReset @ 0x1C00266E0 (Interrupter_ControllerResetPostReset.c)
 * Callees:
 *     memset @ 0x1C0010200 (memset.c)
 */

_UNKNOWN **__fastcall Interrupter_Initialize(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 i; // rsi
  __int64 v4; // rbx
  __int64 *v5; // r14
  __int64 *j; // rdi
  __int64 v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); *(_DWORD *)(v4 + 128) = 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    v5 = (__int64 *)(v4 + 168);
    for ( j = *(__int64 **)(v4 + 168); j != v5; j = (__int64 *)*j )
      memset((void *)j[2], 0, *((unsigned int *)j + 10));
    v7 = *v5;
    i = (unsigned int)(i + 1);
    *(_QWORD *)(v4 + 152) = *v5;
    result = *(_UNKNOWN ***)(v7 + 16);
    *(_DWORD *)(v4 + 132) = 0;
    *(_DWORD *)(v4 + 136) = 0;
    *(_QWORD *)(v4 + 144) = result;
  }
  return result;
}
