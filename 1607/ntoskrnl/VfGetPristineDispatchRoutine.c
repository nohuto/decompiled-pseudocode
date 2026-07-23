/*
 * XREFs of VfGetPristineDispatchRoutine @ 0x14070B894
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 *     VfBeforeCallDriver @ 0x14070BAD8 (VfBeforeCallDriver.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1400B20B0 (MmIsDriverVerifying.c)
 */

PDRIVER_DISPATCH __fastcall VfGetPristineDispatchRoutine(struct _DRIVER_OBJECT *a1, unsigned int a2)
{
  __int64 v2; // rbx
  PDRIVER_DISPATCH result; // rax
  __int64 v5; // rcx

  v2 = a2;
  if ( a2 > 0x1B )
    return 0LL;
  if ( !MmIsDriverVerifying(a1) )
    return a1->MajorFunction[v2];
  v5 = *(_QWORD *)&a1->DriverExtension[1].ServiceKeyName.Length;
  if ( !v5 )
    return a1->MajorFunction[v2];
  result = *(PDRIVER_DISPATCH *)(v5 + 8 * v2 + 32);
  if ( !result )
    return a1->MajorFunction[v2];
  return result;
}
