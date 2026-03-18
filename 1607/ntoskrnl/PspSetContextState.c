/*
 * XREFs of PspSetContextState @ 0x140682DE4
 * Callers:
 *     PspGetSetContextInternal @ 0x140518130 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1400F4858 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F490C (RtlInitializeExtendedContext.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlCopyContext @ 0x14068C174 (RtlCopyContext.c)
 */

__int64 __fastcall PspSetContextState(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned int Size; // [rsp+40h] [rbp+8h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_DWORD **)(a1 + 2000);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = 0x100000;
    if ( MEMORY[0xFFFFF780000003D8] )
      v5 = 1048640;
    RtlGetExtendedContextLength(v5);
    memset(v3, 0, Size);
    RtlInitializeExtendedContext((__int64)v3, v5, &v8);
    v3[12] = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x100040) == 0x100040 )
    v3[12] |= 0x100040u;
  RtlCopyContext(v3, *(unsigned int *)(a2 + 48), a2);
  result = *(_DWORD *)(a2 + 48) & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    *(_DWORD *)(a2 + 280) = _mm_getcsr();
    result = 7999LL;
    *(_WORD *)(a2 + 256) &= 0x1F3Fu;
  }
  return result;
}
