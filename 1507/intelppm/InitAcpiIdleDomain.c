/*
 * XREFs of InitAcpiIdleDomain @ 0x1C0012FD0
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C0012E40 (InitAcpiProcessorDomains.c)
 *     AcpiCStateNotifyWorker @ 0x1C001D1E0 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     AcpiEval_CSD @ 0x1C0013FE8 (AcpiEval_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x1C001B204 (ValidateAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  void *v9; // rsi
  void *v10; // rcx
  void *v11; // [rsp+48h] [rbp+20h] BYREF

  v6 = AcpiEval_CSD(a1, &v11);
  if ( v6 >= 0 )
  {
    v8 = a3;
    v9 = v11;
    v6 = ValidateAcpiIdleDomain(v11, v8);
    if ( v6 >= 0 )
    {
      v6 = 0;
      *a2 = v9;
      v10 = 0LL;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x10u);
      v10 = v11;
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)v6;
}
