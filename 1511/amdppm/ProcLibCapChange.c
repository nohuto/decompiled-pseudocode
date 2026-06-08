/*
 * XREFs of ProcLibCapChange @ 0x1C00126B0
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001170 (EvtDeviceD0Entry.c)
 *     PccCapWorker @ 0x1C0005690 (PccCapWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0011340 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C0011440 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 *     CpcNotifyWorker @ 0x1C0015858 (CpcNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C00178CC (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C001C360 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibCapChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  BOOLEAN result; // al
  __int64 v9; // rcx
  bool v10; // zf

  result = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 672);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      result = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 680) += MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 672) = 0LL;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 852) == 0;
    *(_QWORD *)(a1 + 672) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 704), (LARGE_INTEGER)-3000000000LL, 300000, (PKDPC)(a1 + 768));
      *(_BYTE *)(a1 + 852) = 1;
    }
    if ( !*(_BYTE *)(a1 + 1004) )
    {
      result = KeSetTimerEx((PKTIMER)(a1 + 856), (LARGE_INTEGER)-711573504LL, 86400000, (PKDPC)(a1 + 920));
      *(_BYTE *)(a1 + 1004) = 1;
    }
  }
  if ( a2 != *(_DWORD *)(a1 + 400) )
  {
    ++*(_DWORD *)(a1 + 688);
    *(_DWORD *)(a1 + 400) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 448) )
  {
    ++*(_DWORD *)(a1 + 692);
    *(_DWORD *)(a1 + 448) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 668) )
  {
    ++*(_DWORD *)(a1 + 696);
    *(_DWORD *)(a1 + 668) = a4;
  }
  return result;
}
