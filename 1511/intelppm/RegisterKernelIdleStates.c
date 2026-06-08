/*
 * XREFs of RegisterKernelIdleStates @ 0x1C0001B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     RegisterKernelIdleDomains @ 0x1C00159B0 (RegisterKernelIdleDomains.c)
 *     RegisterIdleComplete @ 0x1C0015AE4 (RegisterIdleComplete.c)
 *     RegisterKernelCStates @ 0x1C0015B6C (RegisterKernelCStates.c)
 *     DeregisterKernelIdleDomains @ 0x1C0015E04 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelPepIdleStates @ 0x1C001F988 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C001FC9C (RegisterKernelPepIdleStatesV2.c)
 */

__int64 __fastcall RegisterKernelIdleStates(__int64 a1)
{
  struct _PROCESSOR_NUMBER *v2; // r14
  _DWORD *v3; // rsi
  _QWORD *v4; // rbp
  char v5; // r12
  __int64 v6; // rax
  int v7; // r15d
  _DWORD *PoolWithTag; // rax
  struct _PROCESSOR_NUMBER *v9; // rax
  NTSTATUS ProcessorNumberFromIndex; // ebx
  __int64 v11; // rax
  int *v13; // rax
  __int64 v14; // r9
  unsigned int i; // r11d
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r10
  unsigned int v19; // eax
  void *v20; // rcx
  void *v21; // rcx

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000DD08,
    0LL);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 648) )
  {
    if ( qword_1C000DE40 )
      qword_1C000DE40(a1);
    *(_BYTE *)(a1 + 648) = 1;
    v5 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000DD08);
  v6 = *(_QWORD *)(a1 + 248);
  if ( (v6 & 0x200000200LL) != 0 )
  {
    v13 = *(int **)(a1 + 1080);
LABEL_32:
    if ( !v13 || (v7 = *v13) == 0 )
      return (unsigned int)-1073741823;
    goto LABEL_9;
  }
  if ( (v6 & 0x100000100LL) != 0 )
  {
    v13 = *(int **)(a1 + 1072);
    goto LABEL_32;
  }
  if ( (v6 & 0x7F077) == 0 )
  {
    ProcessorNumberFromIndex = -1073741637;
LABEL_25:
    if ( v2 )
      ExFreePoolWithTag(v2, 0x72637250u);
    goto LABEL_27;
  }
  v7 = 3;
LABEL_9:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(72 * v7 + 64), 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)(72 * v7 + 64));
  v9 = (struct _PROCESSOR_NUMBER *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * v7 + 112), 0x72637250u);
  v2 = v9;
  if ( v9 )
  {
    memset(v9, 0, (unsigned int)(32 * v7 + 112));
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), v2 + 1);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      *v2 = (struct _PROCESSOR_NUMBER)42;
      *(_QWORD *)&v2[2].Group = v3;
      v2[27] = (struct _PROCESSOR_NUMBER)v7;
      v3[14] = v7;
      *(_QWORD *)v3 = *(_QWORD *)(a1 + 1048);
      v11 = *(_QWORD *)(a1 + 248);
      if ( (v11 & 0x200000200LL) != 0 )
      {
        RegisterKernelPepIdleStatesV2(a1, v2, v3);
      }
      else if ( (v11 & 0x100000100LL) != 0 )
      {
        RegisterKernelPepIdleStates(a1, v2, v3);
      }
      else if ( (v11 & 0x7F077) != 0 )
      {
        RegisterKernelCStates(a1, v2, v3);
      }
      if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 )
      {
        v14 = 0LL;
        for ( i = 1; i <= 3; ++i )
        {
          v16 = 0LL;
          v17 = 0LL;
          if ( v2[27] )
          {
            do
            {
              v18 = *(_QWORD *)&v3[18 * v17 + 16];
              if ( v18 )
              {
                v19 = *(unsigned __int8 *)(v18 + 12);
                if ( v19 > 3 )
                  v19 = 3;
                if ( v19 == i && (!v16 || *(_DWORD *)(v18 + 16) < *(_DWORD *)(v16 + 16)) )
                {
                  v16 = *(_QWORD *)&v3[18 * v17 + 16];
                  *((_BYTE *)v3 + v14 + 21) = v17;
                }
              }
              v17 = (unsigned int)(v17 + 1);
            }
            while ( (unsigned int)v17 < *(_DWORD *)&v2[27] );
            if ( v16 )
              v14 = (unsigned int)(v14 + 1);
          }
        }
        *((_BYTE *)v3 + 20) = v14;
      }
      if ( *((_BYTE *)v3 + 20) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C000DD08,
          0LL);
        if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 && *(_QWORD *)(a1 + 640) )
          HIBYTE(v2[4].Group) = 1;
        ProcessorNumberFromIndex = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C000DF00)(v2);
        if ( ProcessorNumberFromIndex < 0 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C000DD08);
        }
        else
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
            qword_1C000DD08);
          ProcessorNumberFromIndex = 0;
        }
      }
      else
      {
        ProcessorNumberFromIndex = -1073741823;
      }
    }
    goto LABEL_25;
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_27:
  if ( v3 )
  {
    v20 = (void *)*((_QWORD *)v3 + 6);
    if ( v20 )
      ExFreePoolWithTag(v20, 0x72637250u);
    ExFreePoolWithTag(v3, 0x72637250u);
  }
  if ( v4 )
  {
    v21 = (void *)v4[6];
    if ( v21 )
      ExFreePoolWithTag(v21, 0x72637250u);
    ExFreePoolWithTag(v4, 0x72637250u);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
