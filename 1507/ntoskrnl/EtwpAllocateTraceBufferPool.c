/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x1404ACCCC
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x140075268 (EtwpAllocateFreeBuffers.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1404ACDE0 (EtwpGetSystemMaximumBufferCount.c)
 */

__int64 EtwpAllocateTraceBufferPool()
{
  unsigned int SystemMaximumBufferCount; // eax
  _DWORD *v1; // r10
  int v2; // r11d
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // r9d
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // ecx
  unsigned int v11; // eax

  SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount();
  v3 = 2 * v2;
  v4 = SystemMaximumBufferCount;
  v5 = 2 * v2;
  if ( SystemMaximumBufferCount < 2 * v2 )
    v4 = 2 * v2;
  v6 = v4;
  if ( v1[63] > v3 )
    v5 = v1[63];
  if ( v5 < v4 )
    v6 = v5;
  if ( v1[60] > v3 )
    v3 = v1[60];
  v7 = v1[3];
  if ( v3 < v4 )
    v4 = v3;
  v1[60] = v4;
  if ( v4 > v6 )
    v6 = v4;
  if ( (v7 & 0x400) != 0 )
    v6 = v4;
  v8 = (v1[3] & 0x40000) == 0;
  v1[63] = v6;
  if ( !v8 )
    return 0LL;
  v9 = v1[57];
  if ( v9 )
  {
    v11 = v6 - v2 - 1;
    if ( v9 > v11 )
      v1[57] = v11;
  }
  return (unsigned int)EtwpAllocateFreeBuffers((__int64)v1, v4) < v4 ? 0xC0000017 : 0;
}
