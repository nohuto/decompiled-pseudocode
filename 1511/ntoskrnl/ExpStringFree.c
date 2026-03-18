/*
 * XREFs of ExpStringFree @ 0x14066BDB8
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x14066ABBC (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpStringFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x50535845u);
}
