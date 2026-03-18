/*
 * XREFs of VidSchiCheckNodeTimeout @ 0x1C003A870
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 *     VidSchiCheckGPUTimeout @ 0x1C008A43C (VidSchiCheckGPUTimeout.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00132E0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0017468 (VidSchiSchedulerNodeToDriverNode.c)
 *     ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x1C001C474 (-DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C0021BC8 (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 */

__int64 __fastcall VidSchiCheckNodeTimeout(__int64 a1, _QWORD *a2)
{
  __int32 v5; // ecx
  signed __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // r8
  _DXGKARG_QUERYENGINESTATUS v22; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(a1 + 400) & 2) != 0 || *(_DWORD *)(a1 + 1900) || *(_DWORD *)(a1 + 1904) )
  {
    if ( a2 )
      *a2 = *(_QWORD *)(a1 + 408);
    return 1LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 2720) )
    {
      v5 = _InterlockedExchange((volatile __int32 *)(a1 + 440), 0);
      if ( (*(_DWORD *)(a1 + 400) & 1) == 0 || v5 )
      {
        *(_QWORD *)(a1 + 432) = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL);
        v11 = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(a1 + 400) |= 1u;
        *(_QWORD *)(a1 + 416) = v11;
        *(_QWORD *)(a1 + 408) = v11;
      }
      else
      {
        *(_QWORD *)(a1 + 416) = MEMORY[0xFFFFF78000000320];
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL);
        if ( v6 != *(_QWORD *)(a1 + 432) )
        {
          *(_QWORD *)(a1 + 408) = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 432) = v6;
        }
        else
        {
          v7 = *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408);
          v8 = 10000000LL * g_TdrConfig[1];
          if ( v7 * (unsigned __int64)KeQueryTimeIncrement() > v8 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 284LL) & 0x200) != 0 )
            {
              v12 = __rdtsc();
              v13 = __readmsr(0x400000F6u);
              v14 = *((unsigned int *)KeGetCurrentPrcb() + 381);
              v15 = 10 * (v12 - v13) / v14;
              v16 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v14, 10 * (v12 - v13) % v14, v9, v10);
              v16[3] = v13;
              v16[4] = v12;
              v16[5] = v15;
              WdLogEvent5_WdPresentTokenEvent(v16);
              if ( v15 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
                return 0LL;
            }
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 44LL) )
            {
              if ( VidSchiRunningDeviceAllowsLongRunningPackets(a1) )
              {
                v17 = *(unsigned __int16 *)(a1 + 4);
                v18 = *(_QWORD *)(a1 + 24);
                v22.EngineStatus.Value = 0;
                v22.EngineOrdinal = VidSchiSchedulerNodeToDriverEngine(v18, v17);
                v22.NodeOrdinal = VidSchiSchedulerNodeToDriverNode(v20, v19);
                if ( !(unsigned int)ADAPTER_RENDER::DdiQueryEngineStatus(*(ADAPTER_RENDER **)(v21 + 8), &v22)
                  && (*(_BYTE *)&v22.EngineStatus.0 & 1) != 0 )
                {
                  return 0LL;
                }
              }
            }
            *(_DWORD *)(a1 + 400) |= 2u;
            *(_QWORD *)(a1 + 424) = v7;
            if ( a2 )
              *a2 = *(_QWORD *)(a1 + 408);
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 400) &= ~1u;
    }
    return (*(_DWORD *)(a1 + 400) >> 1) & 1;
  }
}
