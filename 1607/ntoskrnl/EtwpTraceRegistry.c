/*
 * XREFs of EtwpTraceRegistry @ 0x1406A2EE8
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogRegistryEvent @ 0x1406A25E8 (EtwpLogRegistryEvent.c)
 */

void __fastcall EtwpTraceRegistry(unsigned __int8 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  bool i; // zf
  __int64 v9; // r10
  _DWORD *v13; // rax

  v6 = EtwpActiveSystemLoggers;
  for ( i = !_BitScanForward((unsigned int *)&v9, EtwpActiveSystemLoggers);
        !i;
        i = !_BitScanForward((unsigned int *)&v9, v6) )
  {
    v6 &= v6 - 1;
    v13 = (_DWORD *)((char *)&EtwpGroupMasks + 32 * (unsigned int)v9);
    if ( v13 )
    {
      if ( (*v13 & 0x20000) != 0 )
        EtwpLogRegistryEvent(
          (unsigned __int16)EtwpSystemLogger[2 * v9],
          a1,
          a3,
          a4,
          a5,
          (__int64 *)(a2 + 8LL * (unsigned __int16)EtwpSystemLogger[2 * v9 + 1]),
          a6);
    }
  }
}
