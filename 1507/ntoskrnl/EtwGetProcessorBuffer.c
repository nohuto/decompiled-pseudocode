/*
 * XREFs of EtwGetProcessorBuffer @ 0x14025EDC0
 * Callers:
 *     KiSaveCurrentEtwTraceBuffer @ 0x140203154 (KiSaveCurrentEtwTraceBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwGetProcessorBuffer(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int *v8; // rcx
  unsigned int v9; // eax

  v3 = 0;
  v4 = a1;
  if ( !EtwpInitialized )
    return (unsigned int)-1073741823;
  if ( a1 >= 0x40 )
  {
    v5 = 1LL;
  }
  else
  {
    _mm_lfence();
    v5 = WmipLoggerContext[a1];
  }
  if ( (v5 & 1) != 0 )
    return (unsigned int)-1073741816;
  if ( *(_DWORD *)(v5 + 316) == 1 )
    return (unsigned int)-1073741811;
  if ( (*(_DWORD *)(v5 + 12) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(v5 + 144);
  }
  else
  {
    if ( a2 >= (unsigned int)KeNumberProcessors_0 )
    {
      v7 = 0LL;
    }
    else
    {
      _mm_lfence();
      v7 = KiProcessorBlock[a2];
    }
    v6 = *(_QWORD *)(*(_QWORD *)(v7 + 24536) + 8 * v4 + 64);
  }
  v8 = (unsigned int *)(v6 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v8 )
  {
    *(_DWORD *)(a3 + 8) = *v8;
    v9 = v8[2];
    *(_QWORD *)a3 = v8;
    if ( v9 <= *v8 )
      *(_DWORD *)(a3 + 12) = v8[2];
    else
      *(_DWORD *)(a3 + 12) = v8[1];
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
