/*
 * XREFs of ProcLibCapChange @ 0x1C00154EC
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001910 (EvtDeviceD0Entry.c)
 *     PccCapWorker @ 0x1C0007BB0 (PccCapWorker.c)
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C001C23C (CpcGuaranteedNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C001EEA0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C001F010 (AcpiTStateNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0023940 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibCapChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  BOOLEAN result; // al
  __int64 v9; // rcx
  bool v10; // zf

  result = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 688);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      result = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 696) += MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 688) = 0LL;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 868) == 0;
    *(_QWORD *)(a1 + 688) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 720), (LARGE_INTEGER)-3000000000LL, 300000, (PKDPC)(a1 + 784));
      *(_BYTE *)(a1 + 868) = 1;
    }
    if ( !*(_BYTE *)(a1 + 1020) )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 872), (LARGE_INTEGER)-711573504LL, 86400000, (PKDPC)(a1 + 936));
      *(_BYTE *)(a1 + 1020) = 1;
    }
  }
  if ( a2 != *(_DWORD *)(a1 + 416) )
  {
    ++*(_DWORD *)(a1 + 704);
    *(_DWORD *)(a1 + 416) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 464) )
  {
    ++*(_DWORD *)(a1 + 708);
    *(_DWORD *)(a1 + 464) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 684) )
  {
    ++*(_DWORD *)(a1 + 712);
    *(_DWORD *)(a1 + 684) = a4;
  }
  return result;
}
