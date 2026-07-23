/*
 * XREFs of PopFxTraceDeviceRegistration @ 0x14052C510
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140110D6C (PopDiagTraceFxRundown.c)
 *     PopFxRegisterDevice @ 0x14056711C (PopFxRegisterDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopPepGetComponentVetoMasks @ 0x140205E68 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x140205EFC (PopPepGetDeviceVetoMasks.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopDiagTraceFxComponentRegistration @ 0x140671330 (PopDiagTraceFxComponentRegistration.c)
 *     PopDiagTraceFxDeviceRegistration @ 0x1406713F8 (PopDiagTraceFxDeviceRegistration.c)
 *     PopFxTracePerfRegistration @ 0x1406724D4 (PopFxTracePerfRegistration.c)
 */

void __fastcall PopFxTraceDeviceRegistration(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  __int64 v5; // rcx
  const EVENT_DESCRIPTOR *v6; // rax
  unsigned int v7; // edi
  __int64 *v8; // rdx
  unsigned int v9; // ebx
  __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  char *PoolWithTag; // rax
  _DWORD *v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // ebx
  char *v17; // r13
  __int64 v18; // r15
  __int64 v19; // rbp
  __int64 i; // r9
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  const EVENT_DESCRIPTOR *EventDescriptor; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h] BYREF
  int v27; // [rsp+50h] [rbp-48h]

  v2 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_DEVICE_REGISTRATION_RUNDOWN;
  if ( !a2 )
    v2 = &POP_ETW_EVENT_DEVICE_REGISTRATION;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v2) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v26 = 0LL;
    v27 = 0;
    PopPepGetDeviceVetoMasks(v5, (__int64)&v26);
    PopDiagTraceFxDeviceRegistration(
      v2,
      *(_DWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 48) + 280LL,
      *(_DWORD *)(a1 + 620),
      (__int64)&v26);
    v6 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_COMPONENT_REGISTRATION_RUNDOWN;
    if ( !a2 )
      v6 = &POP_ETW_EVENT_COMPONENT_REGISTRATION;
    EventDescriptor = v6;
    if ( EtwEventEnabled(PopDiagHandle, v6) )
    {
      v7 = *(_DWORD *)(a1 + 620);
      if ( v7 )
      {
        v8 = *(__int64 **)(a1 + 624);
        v9 = *(_DWORD *)(*v8 + 156);
        if ( v7 > 1 )
        {
          v10 = v8 + 1;
          v11 = v7 - 1;
          do
          {
            v12 = *v10++;
            if ( *(_DWORD *)(v12 + 156) > v9 )
              v9 = *(_DWORD *)(v12 + 156);
            --v11;
          }
          while ( v11 );
        }
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 28 * v9, 0x4D584650u);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = v9;
          v16 = 0;
          v17 = &PoolWithTag[24 * v15];
          v18 = 0LL;
          do
          {
            v19 = *(_QWORD *)(v18 + *(_QWORD *)(a1 + 624));
            memset(v17, 0, 4LL * *(unsigned int *)(v19 + 156));
            PopPepGetComponentVetoMasks(*(_QWORD *)(a1 + 56), v16, (__int64)v17);
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v19 + 156); v14[2 * v21 + 5] = v22 )
            {
              v21 = 3 * i;
              *(_QWORD *)&v14[2 * v21] = *(_QWORD *)(*(_QWORD *)(v19 + 160) + 24 * i);
              *(_QWORD *)&v14[2 * v21 + 2] = *(_QWORD *)(*(_QWORD *)(v19 + 160) + 24 * i + 8);
              v14[2 * v21 + 4] = *(_DWORD *)(*(_QWORD *)(v19 + 160) + 24 * i + 16);
              v22 = *(_DWORD *)&v17[4 * i];
              i = (unsigned int)(i + 1);
            }
            PopDiagTraceFxComponentRegistration(
              EventDescriptor,
              *(_DWORD *)(v19 + 152),
              *(_DWORD *)(v19 + 156),
              (__int64)v14);
            v24 = *(_QWORD *)(v19 + 248);
            if ( v24 )
            {
              LOBYTE(v23) = a2;
              PopFxTracePerfRegistration(v24, v23);
            }
            ++v16;
            v18 += 8LL;
          }
          while ( v16 < v7 );
          ExFreePoolWithTag(v14, 0x4D584650u);
        }
      }
    }
  }
}
