/*
 * XREFs of EtwKernelMemoryRundown @ 0x1406A0810
 * Callers:
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 */

char EtwKernelMemoryRundown()
{
  char *v0; // rax
  unsigned int v1; // ebx
  unsigned int v3; // ecx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+24h] [rbp-34h]
  __int64 v7; // [rsp+2Ch] [rbp-2Ch]
  __int64 v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  v5 = 0;
  LOBYTE(v0) = 0;
  v1 = EtwpActiveSystemLoggers;
  v6 = 8LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  while ( _BitScanForward(&v3, v1) )
  {
    v1 &= v1 - 1;
    v0 = (char *)&EtwpGroupMasks + 32 * v3;
    if ( v0 )
    {
      LODWORD(v0) = *((_DWORD *)v0 + 5);
      if ( ((unsigned __int8)v0 & 1) != 0 )
        LOBYTE(v0) = EtwpKernelTraceRundown(&v5, (unsigned __int16)EtwpSystemLogger[2 * v3], 0);
    }
  }
  return (char)v0;
}
