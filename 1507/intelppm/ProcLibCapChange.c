/*
 * XREFs of ProcLibCapChange @ 0x1C0012DA4
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001420 (EvtDeviceD0Entry.c)
 *     PccCapWorker @ 0x1C0006BC0 (PccCapWorker.c)
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 *     CpcNotifyWorker @ 0x1C001AF7C (CpcNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C001D9A0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C001DB10 (AcpiTStateNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C001E5AC (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraint @ 0x1C0021830 (PepUpdatePerformanceConstraint.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibCapChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  BOOLEAN result; // al
  __int64 v9; // rcx
  bool v10; // zf

  result = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 680);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      result = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 688) += MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 680) = 0LL;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 860) == 0;
    *(_QWORD *)(a1 + 680) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 712), (LARGE_INTEGER)-3000000000LL, 300000, (PKDPC)(a1 + 776));
      *(_BYTE *)(a1 + 860) = 1;
    }
    if ( !*(_BYTE *)(a1 + 1012) )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 864), (LARGE_INTEGER)-711573504LL, 86400000, (PKDPC)(a1 + 928));
      *(_BYTE *)(a1 + 1012) = 1;
    }
  }
  if ( a2 != *(_DWORD *)(a1 + 408) )
  {
    ++*(_DWORD *)(a1 + 696);
    *(_DWORD *)(a1 + 408) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 456) )
  {
    ++*(_DWORD *)(a1 + 700);
    *(_DWORD *)(a1 + 456) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 676) )
  {
    ++*(_DWORD *)(a1 + 704);
    *(_DWORD *)(a1 + 676) = a4;
  }
  return result;
}
