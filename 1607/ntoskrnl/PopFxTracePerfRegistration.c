/*
 * XREFs of PopFxTracePerfRegistration @ 0x1406724D4
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x14052C510 (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterComponentPerfStates @ 0x14066D1E8 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopDiagTraceFxPerfRegistration @ 0x140671570 (PopDiagTraceFxPerfRegistration.c)
 *     PopDiagTraceFxPerfSetRegistration @ 0x1406715F8 (PopDiagTraceFxPerfSetRegistration.c)
 */

void __fastcall PopFxTracePerfRegistration(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  const EVENT_DESCRIPTOR *v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebp
  PVOID PoolWithTag; // rbx
  unsigned int i; // r15d
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 j; // r8
  int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // r9

  v2 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_PERFORMANCE_STATE_REGISTRATION_RUNDOWN;
  if ( !a2 )
    v2 = &POP_ETW_EVENT_PERFORMANCE_STATE_REGISTRATION;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v2) )
  {
    PopDiagTraceFxPerfRegistration(
      v2,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL),
      *(_DWORD *)(*(_QWORD *)a1 + 16LL),
      *(_DWORD *)(a1 + 144));
    v5 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_PERFORMANCE_STATE_SET_REGISTRATION_RUNDOWN;
    if ( !a2 )
      v5 = &POP_ETW_EVENT_PERFORMANCE_STATE_SET_REGISTRATION;
    if ( EtwEventEnabled(PopDiagHandle, v5) )
    {
      v6 = *(_DWORD *)(a1 + 144);
      v7 = 0;
      if ( v6 )
      {
        v8 = *(_QWORD *)(a1 + 152);
        v9 = v6;
        do
        {
          if ( !*(_DWORD *)(*(_QWORD *)v8 + 28LL) && *(_DWORD *)(*(_QWORD *)v8 + 32LL) > v7 )
            v7 = *(_DWORD *)(*(_QWORD *)v8 + 32LL);
          v8 += 32LL;
          --v9;
        }
        while ( v9 );
      }
      v10 = 0;
      if ( v7 )
      {
        if ( 8 * (unsigned __int64)v7 > 0xFFFFFFFF )
          return;
        v10 = 8 * v7;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x4D584650u);
        if ( !PoolWithTag )
          return;
      }
      else
      {
        PoolWithTag = 0LL;
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 144); ++i )
      {
        v13 = 32LL * i;
        v14 = *(_QWORD *)(v13 + *(_QWORD *)(a1 + 152));
        if ( *(_DWORD *)(v14 + 28) )
        {
          v17 = *(_QWORD *)(v14 + 32);
          v16 = 0;
          v18 = *(_QWORD *)(v14 + 40);
          v19 = 0LL;
        }
        else
        {
          memset(PoolWithTag, 0, v10);
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v14 + 32); j = (unsigned int)(j + 1) )
            *((_QWORD *)PoolWithTag + j) = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 16LL * (unsigned int)j);
          v16 = *(_DWORD *)(v14 + 32);
          LOBYTE(v17) = 0;
          LOBYTE(v18) = 0;
          v19 = (__int64)PoolWithTag;
        }
        PopDiagTraceFxPerfSetRegistration(
          v5,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL),
          *(_DWORD *)(*(_QWORD *)a1 + 16LL),
          i,
          *(_DWORD *)(v14 + 28),
          *(_DWORD *)(v14 + 24),
          v17,
          v18,
          (unsigned __int16 *)v14,
          v16,
          v19,
          *(_QWORD *)(*(_QWORD *)(a1 + 152) + v13 + 8));
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x4D584650u);
    }
  }
}
