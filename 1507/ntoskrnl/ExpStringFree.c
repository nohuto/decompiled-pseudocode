/*
 * XREFs of ExpStringFree @ 0x1406EF44C
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1406EE204 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpStringFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x50535845u);
}
