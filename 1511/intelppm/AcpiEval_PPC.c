/*
 * XREFs of AcpiEval_PPC @ 0x1C001457C
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00017D0 (EvtDeviceD0Entry.c)
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x1C001DAA0 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     AcpiEvaluateMethod @ 0x1C00147C8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PPC(__int64 a1, unsigned int *a2)
{
  int v4; // eax
  PVOID v5; // rcx
  int v6; // ebx
  unsigned int v7; // edx
  unsigned int *v8; // rax
  int v10; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1036), 0x100u);
  v4 = AcpiEvaluateMethod(a1, 1129336927, 0, (unsigned int)&P, (__int64)&v10);
  v5 = P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( v10 && *((_DWORD *)P + 2) == 1 && !*((_WORD *)P + 6) )
    {
      v7 = *((_DWORD *)P + 4);
      if ( (*(_DWORD *)(a1 + 248) & 0x40000000) != 0 )
        v8 = *(unsigned int **)(a1 + 392);
      else
        v8 = *(unsigned int **)(a1 + 384);
      if ( v7 >= *v8 )
        v7 = *v8 - 1;
      *a2 = v7;
      v6 = 0;
    }
    else
    {
      v6 = -1073741275;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 0x100u);
  return (unsigned int)v6;
}
