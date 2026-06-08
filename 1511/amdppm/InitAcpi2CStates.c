/*
 * XREFs of InitAcpi2CStates @ 0x1C0015310
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0011540 (AcpiCStateNotifyWorker.c)
 *     InitAcpiCStates @ 0x1C0014FC8 (InitAcpiCStates.c)
 * Callees:
 *     AcpiEval_CST @ 0x1C000F75C (AcpiEval_CST.c)
 *     ValidateAcpiCStates @ 0x1C001C85C (ValidateAcpiCStates.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  void *v5; // rsi
  void *v6; // rcx
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = AcpiEval_CST(a1, &v8);
  if ( v4 >= 0 )
  {
    v5 = v8;
    v4 = ValidateAcpiCStates(v8);
    if ( v4 >= 0 )
    {
      v6 = 0LL;
      *a2 = v5;
      v4 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 8u);
      v6 = v8;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)v4;
}
