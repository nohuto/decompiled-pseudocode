/*
 * XREFs of RtlGetExtendedContextLength @ 0x1400F26A8
 * Callers:
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1400F4474 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140110604 (KiRaiseException.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 *     PspGetSetContextInternal @ 0x1404FB520 (PspGetSetContextInternal.c)
 *     PspWow64GetContextThread @ 0x1404FBFA8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1404FC310 (PspWow64SetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x140682EC8 (PspSetContextState.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1400F271C (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x1400F2870 (RtlpValidateContextFlags.c)
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
