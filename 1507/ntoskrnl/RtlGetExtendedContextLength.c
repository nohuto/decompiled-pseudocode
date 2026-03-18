/*
 * XREFs of RtlGetExtendedContextLength @ 0x140020688
 * Callers:
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x140020448 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140124BE0 (KiRaiseException.c)
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     PspWowGetContextThread @ 0x140530EB8 (PspWowGetContextThread.c)
 *     PspWowSetContextThread @ 0x14056AA80 (PspWowSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1400206FC (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x140020858 (RtlpValidateContextFlags.c)
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
