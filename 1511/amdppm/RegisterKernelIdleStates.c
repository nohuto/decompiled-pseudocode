/*
 * XREFs of RegisterKernelIdleStates @ 0x1C0002AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     RegisterKernelCStates @ 0x1C00159B0 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0015C40 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0015F54 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterIdleComplete @ 0x1C0016230 (RegisterIdleComplete.c)
 *     RegisterKernelIdleDomains @ 0x1C0016630 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0016960 (DeregisterKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleStates(__int64 a1)
{
  struct _PROCESSOR_NUMBER *v2; // r14
  _DWORD *v3; // rsi
  _QWORD *v4; // rbp
  char v5; // r12
  __int64 v6; // rax
  int *v7; // rax
  int v8; // r15d
  NTSTATUS ProcessorNumberFromIndex; // ebx
  _DWORD *PoolWithTag; // rax
  struct _PROCESSOR_NUMBER *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int i; // r11d
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r10
  unsigned int v18; // eax
  void *v19; // rcx
  void *v20; // rcx

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 648) )
  {
    if ( qword_1C00094E0 )
      qword_1C00094E0(a1);
    *(_BYTE *)(a1 + 648) = 1;
    v5 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  v6 = *(_QWORD *)(a1 + 248);
  if ( (v6 & 0x200000200LL) != 0 )
  {
    v7 = *(int **)(a1 + 1080);
LABEL_7:
    if ( !v7 || (v8 = *v7) == 0 )
      return (unsigned int)-1073741823;
    goto LABEL_14;
  }
  if ( (v6 & 0x100000100LL) != 0 )
  {
    v7 = *(int **)(a1 + 1072);
    goto LABEL_7;
  }
  if ( (v6 & 0x7F077) == 0 )
  {
    ProcessorNumberFromIndex = -1073741637;
LABEL_53:
    if ( v2 )
      ExFreePoolWithTag(v2, 0x72637250u);
    goto LABEL_55;
  }
  v8 = 3;
LABEL_14:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(72 * v8 + 64), 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)(72 * v8 + 64));
  v11 = (struct _PROCESSOR_NUMBER *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * v8 + 112), 0x72637250u);
  v2 = v11;
  if ( v11 )
  {
    memset(v11, 0, (unsigned int)(32 * v8 + 112));
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), v2 + 1);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      *v2 = (struct _PROCESSOR_NUMBER)42;
      *(_QWORD *)&v2[2].Group = v3;
      v2[27] = (struct _PROCESSOR_NUMBER)v8;
      v3[14] = v8;
      *(_QWORD *)v3 = *(_QWORD *)(a1 + 1048);
      v12 = *(_QWORD *)(a1 + 248);
      if ( (v12 & 0x200000200LL) != 0 )
      {
        RegisterKernelPepIdleStatesV2(a1, v2, v3);
      }
      else if ( (v12 & 0x100000100LL) != 0 )
      {
        RegisterKernelPepIdleStates(a1, v2, v3);
      }
      else if ( (v12 & 0x7F077) != 0 )
      {
        RegisterKernelCStates(a1, v2, v3);
      }
      if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 )
      {
        v13 = 0LL;
        for ( i = 1; i <= 3; ++i )
        {
          v15 = 0LL;
          v16 = 0LL;
          if ( v2[27] )
          {
            do
            {
              v17 = *(_QWORD *)&v3[18 * v16 + 16];
              if ( v17 )
              {
                v18 = *(unsigned __int8 *)(v17 + 12);
                if ( v18 > 3 )
                  v18 = 3;
                if ( v18 == i && (!v15 || *(_DWORD *)(v17 + 16) < *(_DWORD *)(v15 + 16)) )
                {
                  v15 = *(_QWORD *)&v3[18 * v16 + 16];
                  *((_BYTE *)v3 + v13 + 21) = v16;
                }
              }
              v16 = (unsigned int)(v16 + 1);
            }
            while ( (unsigned int)v16 < *(_DWORD *)&v2[27] );
            if ( v15 )
              v13 = (unsigned int)(v13 + 1);
          }
        }
        *((_BYTE *)v3 + 20) = v13;
      }
      if ( *((_BYTE *)v3 + 20) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00093A8,
          0LL);
        if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 && *(_QWORD *)(a1 + 640) )
          HIBYTE(v2[4].Group) = 1;
        ProcessorNumberFromIndex = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C00095A0)(v2);
        if ( ProcessorNumberFromIndex >= 0 )
        {
          v4 = *(_QWORD **)(a1 + 640);
          *(_QWORD *)(a1 + 640) = v3;
          if ( v5 )
            RegisterIdleComplete(a1);
          v3 = 0LL;
          if ( (*(_DWORD *)(a1 + 248) & 0x7F070LL) != 0 )
            RegisterKernelIdleDomains(a1);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C00093A8);
          ProcessorNumberFromIndex = 0;
        }
        else
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C00093A8);
        }
      }
      else
      {
        ProcessorNumberFromIndex = -1073741823;
      }
    }
    goto LABEL_53;
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_55:
  if ( v3 )
  {
    v19 = (void *)*((_QWORD *)v3 + 6);
    if ( v19 )
      ExFreePoolWithTag(v19, 0x72637250u);
    ExFreePoolWithTag(v3, 0x72637250u);
  }
  if ( v4 )
  {
    v20 = (void *)v4[6];
    if ( v20 )
      ExFreePoolWithTag(v20, 0x72637250u);
    ExFreePoolWithTag(v4, 0x72637250u);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
