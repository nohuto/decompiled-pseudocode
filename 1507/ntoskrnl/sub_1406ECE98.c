/*
 * XREFs of sub_1406ECE98 @ 0x1406ECE98
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     sub_14051DAF8 @ 0x14051DAF8 (sub_14051DAF8.c)
 *     sub_1407DA410 @ 0x1407DA410 (sub_1407DA410.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_1406ECE98(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
