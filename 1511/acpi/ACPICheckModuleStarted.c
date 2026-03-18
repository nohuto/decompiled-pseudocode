/*
 * XREFs of ACPICheckModuleStarted @ 0x1C003D948
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C001AC80 (ACPIProcessorStartDevice.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x1C00229E0 (ACPIBusIrpStartDeviceCompletion.c)
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C003CBDC (ACPIInternalEvaluateOST.c)
 */

void __fastcall ACPICheckModuleStarted(__int64 a1, int a2)
{
  KIRQL v4; // al
  KIRQL v5; // r8
  char v6; // di
  _QWORD *i; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r8d

  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = v4;
    if ( *(_BYTE *)(a1 + 177) )
      break;
    v6 = 1;
    if ( a2 >= 0 )
    {
      for ( i = *(_QWORD **)(a1 + 744); i != (_QWORD *)(a1 + 744); i = (_QWORD *)*i )
      {
        v8 = *(i - 95);
        if ( (v8 & 0x2000000000LL) != 0 && !*((_BYTE *)i - 583)
          || (v8 & 0x100) == 0 && (unsigned int)(*((_DWORD *)i - 112) - 2) > 1 )
        {
          v6 = 0;
          goto LABEL_11;
        }
      }
    }
    *(_BYTE *)(a1 + 177) = 1;
LABEL_11:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v6 )
    {
      v10 = 163;
      if ( a2 >= 0 )
        v10 = 0;
      ACPIInternalEvaluateOST(a1, v9, v10);
      a1 = *(_QWORD *)(a1 + 736);
      if ( (*(_QWORD *)a1 & 0x2000000000LL) != 0 )
        continue;
    }
    return;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
}
