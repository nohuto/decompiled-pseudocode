/*
 * XREFs of sub_140669904 @ 0x140669904
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     sub_14048A234 @ 0x14048A234 (sub_14048A234.c)
 *     sub_1407621B8 @ 0x1407621B8 (sub_1407621B8.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_140669904(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
