/*
 * XREFs of ExpStringFree @ 0x1406AC790
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1406AB380 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ExpStringFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x50535845u);
}
