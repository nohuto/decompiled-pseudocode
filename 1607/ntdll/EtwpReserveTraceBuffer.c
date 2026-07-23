/*
 * XREFs of EtwpReserveTraceBuffer @ 0x18005BD00
 * Callers:
 *     EtwpTraceUmMessage @ 0x18005ABA4 (EtwpTraceUmMessage.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005B244 (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x18005B8C8 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18005BC10 (EtwpRelogEvent.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18005BED0 (RtlQueryPerformanceCounter.c)
 *     EtwpSwitchBuffer @ 0x18005CE88 (EtwpSwitchBuffer.c)
 */

__int64 __fastcall EtwpReserveTraceBuffer(__int64 a1, unsigned int a2, unsigned int a3, LARGE_INTEGER *a4, _QWORD *a5)
{
  unsigned int v6; // esi
  unsigned int v8; // r14d
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  __int64 v11; // rcx
  unsigned __int32 v12; // edx
  __int64 v13; // rsi

  v6 = a3;
  if ( a2 <= *(_DWORD *)(a1 + 212) )
  {
    v8 = *(_DWORD *)(a1 + 208);
    v9 = *(_DWORD *)(a1 + 204);
    v10 = (a2 + 7) & 0xFFFFFFF8;
    if ( a3 >= v9 )
      v6 = a3 % v9;
    do
    {
      v11 = *(_QWORD *)(a1 + 8LL * v6 + 528);
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
        if ( *(_DWORD *)(v11 + 44) == 1 && *(_DWORD *)(v11 + 8) <= v8 )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), v10);
          if ( v12 + v10 <= v8 )
          {
            v13 = v11 + v12;
            *a5 = v11;
            if ( a4 )
            {
              if ( *(_DWORD *)(a1 + 16) == 2 )
              {
                a4->QuadPart = MEMORY[0x7FFE0014];
              }
              else if ( *(_DWORD *)(a1 + 16) == 3 )
              {
                a4->QuadPart = __rdtsc();
              }
              else
              {
                RtlQueryPerformanceCounter(a4);
              }
            }
            return v13;
          }
          if ( v12 <= v8 )
            *(_DWORD *)(v11 + 4) = v12;
        }
      }
    }
    while ( (unsigned __int8)EtwpSwitchBuffer(a1, v11, v6) == 1 );
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 384));
  if ( (*(_DWORD *)(a1 + 324) & 0x10000) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 512)
                                                    + 12LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 520) + 4LL * v6)
                                                    + 4));
  return 0LL;
}
