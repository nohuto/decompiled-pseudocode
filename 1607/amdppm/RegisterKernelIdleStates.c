/*
 * XREFs of RegisterKernelIdleStates @ 0x1C0003830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     RegisterKernelCStates @ 0x1C0017154 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00173E4 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C00176F8 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterIdleComplete @ 0x1C00179D4 (RegisterIdleComplete.c)
 *     RegisterKernelIdleDomains @ 0x1C0017DF4 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0018124 (DeregisterKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleStates(__int64 a1)
{
  struct _PROCESSOR_NUMBER *v1; // r14
  _DWORD *v2; // rsi
  _QWORD *v3; // rbp
  NTSTATUS ProcessorNumberFromIndex; // ebx
  char v6; // r12
  __int64 v7; // rax
  int *v8; // rax
  int v9; // r15d
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

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 66) )
    return (unsigned int)((__int64 (*)(void))qword_1C0009778)();
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 664) )
  {
    if ( qword_1C00094E0 )
      qword_1C00094E0(a1);
    *(_BYTE *)(a1 + 664) = 1;
    v6 = 1;
  }
  DeregisterKernelIdleDomains(a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  v7 = *(_QWORD *)(a1 + 248);
  if ( (v7 & 0x200000200LL) != 0 )
  {
    v8 = *(int **)(a1 + 1096);
LABEL_9:
    if ( !v8 || (v9 = *v8) == 0 )
      return (unsigned int)-1073741823;
    goto LABEL_16;
  }
  if ( (v7 & 0x100000100LL) != 0 )
  {
    v8 = *(int **)(a1 + 1088);
    goto LABEL_9;
  }
  if ( (v7 & 0x7F077) == 0 )
  {
    ProcessorNumberFromIndex = -1073741637;
LABEL_55:
    if ( v1 )
      ExFreePoolWithTag(v1, 0x72637250u);
    goto LABEL_57;
  }
  v9 = 3;
LABEL_16:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(72 * v9 + 64), 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)(72 * v9 + 64));
  v11 = (struct _PROCESSOR_NUMBER *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * v9 + 112), 0x72637250u);
  v1 = v11;
  if ( v11 )
  {
    memset(v11, 0, (unsigned int)(32 * v9 + 112));
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), v1 + 1);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      *v1 = (struct _PROCESSOR_NUMBER)44;
      *(_QWORD *)&v1[2].Group = v2;
      v1[27] = (struct _PROCESSOR_NUMBER)v9;
      v2[14] = v9;
      *(_QWORD *)v2 = *(_QWORD *)(a1 + 1064);
      v12 = *(_QWORD *)(a1 + 248);
      if ( (v12 & 0x200000200LL) != 0 )
      {
        RegisterKernelPepIdleStatesV2(a1, v1, v2);
      }
      else if ( (v12 & 0x100000100LL) != 0 )
      {
        RegisterKernelPepIdleStates(a1, v1, v2);
      }
      else if ( (v12 & 0x7F077) != 0 )
      {
        RegisterKernelCStates(a1, v1, v2);
      }
      if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 )
      {
        v13 = 0LL;
        for ( i = 1; i <= 3; ++i )
        {
          v15 = 0LL;
          v16 = 0LL;
          if ( v1[27] )
          {
            do
            {
              v17 = *(_QWORD *)&v2[18 * v16 + 16];
              if ( v17 )
              {
                v18 = *(unsigned __int8 *)(v17 + 12);
                if ( v18 > 3 )
                  v18 = 3;
                if ( v18 == i && (!v15 || *(_DWORD *)(v17 + 16) < *(_DWORD *)(v15 + 16)) )
                {
                  v15 = *(_QWORD *)&v2[18 * v16 + 16];
                  *((_BYTE *)v2 + v13 + 21) = v16;
                }
              }
              v16 = (unsigned int)(v16 + 1);
            }
            while ( (unsigned int)v16 < *(_DWORD *)&v1[27] );
            if ( v15 )
              v13 = (unsigned int)(v13 + 1);
          }
        }
        *((_BYTE *)v2 + 20) = v13;
      }
      if ( *((_BYTE *)v2 + 20) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00093A8,
          0LL);
        if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 && *(_QWORD *)(a1 + 656) )
          HIBYTE(v1[4].Group) = 1;
        ProcessorNumberFromIndex = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_1C00095C0)(v1);
        if ( ProcessorNumberFromIndex >= 0 )
        {
          v3 = *(_QWORD **)(a1 + 656);
          *(_QWORD *)(a1 + 656) = v2;
          if ( v6 )
            RegisterIdleComplete(a1);
          v2 = 0LL;
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
    goto LABEL_55;
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_57:
  if ( v2 )
  {
    v19 = (void *)*((_QWORD *)v2 + 6);
    if ( v19 )
      ExFreePoolWithTag(v19, 0x72637250u);
    ExFreePoolWithTag(v2, 0x72637250u);
  }
  if ( v3 )
  {
    v20 = (void *)v3[6];
    if ( v20 )
      ExFreePoolWithTag(v20, 0x72637250u);
    ExFreePoolWithTag(v3, 0x72637250u);
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
