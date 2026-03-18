/*
 * XREFs of RtlpWriteExtendedContext @ 0x14053112C
 * Callers:
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     PspWowGetContextThread @ 0x140530EB8 (PspWowGetContextThread.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x1400205A0 (RtlpCopyExtendedContext.c)
 *     RtlpGetLegacyContextLength @ 0x1400206FC (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x140020858 (RtlpValidateContextFlags.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

__int64 __fastcall RtlpWriteExtendedContext(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp-18h] BYREF
  ULONG Alignment; // [rsp+50h] [rbp+8h] BYREF

  Alignment = 0;
  result = RtlpValidateContextFlags(a4, &v9);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(a4, 0LL, &Alignment);
    if ( (v9 & 1) != 0 )
      ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 8)), *(unsigned int *)(a3 + 12), Alignment);
    if ( (v9 & 2) != 0 )
      ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 16)), *(unsigned int *)(a3 + 20), 0x40u);
    return RtlpCopyExtendedContext(1, a2, a3, a4, a5, 0LL);
  }
  return result;
}
