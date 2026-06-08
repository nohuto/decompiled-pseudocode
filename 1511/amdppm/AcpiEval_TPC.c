/*
 * XREFs of AcpiEval_TPC @ 0x1C0010674
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001170 (EvtDeviceD0Entry.c)
 *     AcpiTStateNotifyWorker @ 0x1C0011440 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     AcpiEvaluateMethod @ 0x1C000F4D8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_TPC(__int64 a1, unsigned int *a2)
{
  int v4; // ebx
  PVOID v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // r8d
  int v9; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1036), 0x1000u);
  v4 = AcpiEvaluateMethod(a1, 1129337951, 0LL, (unsigned int **)&P, &v9);
  if ( v4 >= 0 )
  {
    v5 = P;
    if ( v9 && *((_DWORD *)P + 2) == 1 && !*((_WORD *)P + 6) )
    {
      v6 = *((_DWORD *)P + 4);
      v7 = **(_DWORD **)(a1 + 440);
      if ( v6 >= v7 )
        v6 = v7 - 1;
      *a2 = v6;
      v4 = 0;
    }
    else
    {
      v4 = -1073741275;
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  if ( v4 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 0x1000u);
  return (unsigned int)v4;
}
