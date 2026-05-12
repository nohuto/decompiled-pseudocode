/*
 * XREFs of RaidAdapterConnectMSIInterrupt @ 0x1C0053B38
 * Callers:
 *     RaidAdapterConnectInterrupt @ 0x1C0012B84 (RaidAdapterConnectInterrupt.c)
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall RaidAdapterConnectMSIInterrupt(__int64 a1, unsigned __int8 a2)
{
  bool v4; // zf
  NTSTATUS v5; // eax
  unsigned int v6; // r14d
  ULONG Version; // ecx
  PKINTERRUPT *InterruptObject; // rcx
  PKINTERRUPT v9; // rax
  PVOID PoolWithTag; // rax
  __int64 i; // rbx
  __int64 v12; // rsi
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF

  memset(&Parameters, 0, sizeof(Parameters));
  v4 = *(_DWORD *)(a1 + 4416) == 2;
  Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(a1 + 32);
  Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)&v15;
  Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)RaidpAdapterMSIInterruptRoutine;
  Parameters.Version = 3;
  Parameters.FullySpecified.ServiceContext = (PVOID)a1;
  if ( v4 )
  {
    Parameters.FullySpecified.SpinLock = 0LL;
  }
  else
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 4424));
    Parameters.FullySpecified.SpinLock = (PKSPIN_LOCK)(a1 + 4424);
  }
  *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = a2;
  Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)RaidpAdapterInterruptRoutine;
  v5 = IoConnectInterruptEx(&Parameters);
  *(_BYTE *)(a1 + 4449) = 0;
  v6 = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
  }
  else
  {
    Version = Parameters.Version;
    *(_DWORD *)(a1 + 676) = Parameters.Version;
    if ( Version == 3 )
    {
      InterruptObject = Parameters.FullySpecified.InterruptObject;
      *(_BYTE *)(a1 + 4449) = 1;
      v9 = *InterruptObject;
      *(_QWORD *)(a1 + 4432) = *InterruptObject;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * *((unsigned int *)v9 + 1), 0x72446152u);
      *(_QWORD *)(a1 + 4440) = PoolWithTag;
      if ( PoolWithTag )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(a1 + 4432) + 4LL); i = (unsigned int)(i + 1) )
        {
          v12 = 16LL * (unsigned int)i;
          if ( IoGetAffinityInterrupt(
                 *(PKINTERRUPT *)(*(_QWORD *)(a1 + 4432) + 48 * i + 24),
                 (PGROUP_AFFINITY)(v12 + *(_QWORD *)(a1 + 4440))) < 0 )
          {
            *(_WORD *)(v12 + *(_QWORD *)(a1 + 4440) + 8) = -1;
            *(_QWORD *)(v12 + *(_QWORD *)(a1 + 4440)) = 0LL;
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 664) = v15;
    }
  }
  return v6;
}
