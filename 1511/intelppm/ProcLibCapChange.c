/*
 * XREFs of ProcLibCapChange @ 0x1C0012DA4
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00017D0 (EvtDeviceD0Entry.c)
 *     PccCapWorker @ 0x1C0006F80 (PccCapWorker.c)
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 *     CpcNotifyWorker @ 0x1C001B308 (CpcNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C001DAA0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C001DC10 (AcpiTStateNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C001E6AC (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0021C20 (PepUpdatePerformanceConstraintWorker.c)
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
