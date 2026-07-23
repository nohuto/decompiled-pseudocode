/*
 * XREFs of EtwGetProcessorBuffer @ 0x140227814
 * Callers:
 *     KiSaveCurrentEtwTraceBuffer @ 0x1401D5598 (KiSaveCurrentEtwTraceBuffer.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 */

__int64 __fastcall EtwGetProcessorBuffer(unsigned int a1, ULONG a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int *v9; // rcx
  unsigned int v10; // eax

  v3 = 0;
  v4 = a1;
  if ( !EtwpInitialized )
    return 3221225473LL;
  if ( a1 >= 0x40 )
  {
    v7 = 1LL;
  }
  else
  {
    _mm_lfence();
    v7 = *(_QWORD *)(EtwpHostSiloState + 8LL * a1 + 912);
  }
  if ( (v7 & 1) != 0 )
  {
    return (unsigned int)-1073741816;
  }
  else if ( *(_DWORD *)(v7 + 300) == 1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (*(_DWORD *)(v7 + 12) & 0x10000000) != 0 )
      v8 = *(_QWORD *)(v7 + 128);
    else
      v8 = *(_QWORD *)(*(_QWORD *)(KeGetPrcb(a2) + 24536) + 8 * v4 + 64);
    v9 = (unsigned int *)(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v9 )
    {
      *(_DWORD *)(a3 + 8) = *v9;
      v10 = v9[2];
      *(_QWORD *)a3 = v9;
      if ( v10 <= *v9 )
        *(_DWORD *)(a3 + 12) = v9[2];
      else
        *(_DWORD *)(a3 + 12) = v9[1];
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v3;
}
