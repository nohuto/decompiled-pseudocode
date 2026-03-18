/*
 * XREFs of RtlGetExtendedContextLength @ 0x1400F4858
 * Callers:
 *     KiDispatchException @ 0x1400F3D60 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1400F6624 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1401100A0 (KiRaiseException.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     PspSetContextThreadInternal @ 0x140517374 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140517A04 (PspGetContextThreadInternal.c)
 *     PspGetSetContextInternal @ 0x140518130 (PspGetSetContextInternal.c)
 *     PspWow64GetContextThread @ 0x140518BB8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140518F20 (PspWow64SetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682394 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x140682DE4 (PspSetContextState.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1400F48CC (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x1400F4A20 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r10d
  _DWORD *v3; // r11
  int v4; // ecx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v6 = 0;
  result = RtlpValidateContextFlags(a1, v5);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(v2, &v6, &v7);
    v4 = v6 + 24;
    if ( (v5[0] & 2) != 0 )
      v4 = MEMORY[0xFFFFF780000003E8] - 448 + (~(v7 - 1) & (v7 + v6 + 23)) - v7;
    *v3 = v4 + v7 - 1;
    return 0LL;
  }
  return result;
}
