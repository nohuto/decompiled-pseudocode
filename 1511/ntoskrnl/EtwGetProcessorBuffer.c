/*
 * XREFs of EtwGetProcessorBuffer @ 0x14020FA98
 * Callers:
 *     KiSaveCurrentEtwTraceBuffer @ 0x1401C660C (KiSaveCurrentEtwTraceBuffer.c)
 * Callees:
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 */

__int64 __fastcall EtwGetProcessorBuffer(unsigned int a1, ULONG a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 SiloDriverState; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int *v12; // rcx
  unsigned int v13; // eax

  v3 = 0;
  v4 = a1;
  if ( !EtwpInitialized )
    return 3221225473LL;
  SiloDriverState = EtwpGetSiloDriverState(0LL);
  v9 = SiloDriverState;
  if ( (unsigned int)v4 >= 0x40 )
  {
    v10 = 1LL;
  }
  else
  {
    _mm_lfence();
    v10 = *(_QWORD *)(SiloDriverState + 8 * v4 + 912);
  }
  if ( (v10 & 1) != 0 )
  {
    v3 = -1073741816;
  }
  else if ( *(_DWORD *)(v10 + 316) == 1 )
  {
    v3 = -1073741811;
  }
  else
  {
    if ( (*(_DWORD *)(v10 + 12) & 0x10000000) != 0 )
      v11 = *(_QWORD *)(v10 + 144);
    else
      v11 = *(_QWORD *)(*(_QWORD *)(KeGetPrcb(a2) + 24536) + 8 * v4 + 64);
    v12 = (unsigned int *)(v11 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v12 )
    {
      *(_DWORD *)(a3 + 8) = *v12;
      v13 = v12[2];
      *(_QWORD *)a3 = v12;
      if ( v13 <= *v12 )
        *(_DWORD *)(a3 + 12) = v12[2];
      else
        *(_DWORD *)(a3 + 12) = v12[1];
    }
    else
    {
      v3 = -1073741823;
    }
  }
  PspDereferenceMonitorContextServerSilo(v9 - 128);
  return v3;
}
