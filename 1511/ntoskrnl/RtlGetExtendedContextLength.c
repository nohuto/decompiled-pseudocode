/*
 * XREFs of RtlGetExtendedContextLength @ 0x14002B348
 * Callers:
 *     KiRaiseException @ 0x140022668 (KiRaiseException.c)
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x14002B108 (KiContinuePreviousModeUser.c)
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x1404A4990 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1404A4C94 (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140643914 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x14002B3BC (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x14002B50C (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  NTSTATUS result; // eax
  unsigned int v3; // r10d
  _DWORD *v4; // r11
  int v5; // ecx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  result = RtlpValidateContextFlags(ContextFlags, v6);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(v3, &v7, &v8);
    v5 = v7 + 24;
    if ( (v6[0] & 2) != 0 )
      v5 = MEMORY[0xFFFFF780000003E8] - 448 + (~(v8 - 1) & (v8 + v7 + 23)) - v8;
    *v4 = v5 + v8 - 1;
    return 0;
  }
  return result;
}
