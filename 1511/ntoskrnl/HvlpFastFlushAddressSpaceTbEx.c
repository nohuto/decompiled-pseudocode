/*
 * XREFs of HvlpFastFlushAddressSpaceTbEx @ 0x1402215E4
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x140221430 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14015D130 (HvcallpExtendedFastHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401AE6F0 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v4; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v7[12]; // [rsp+40h] [rbp-78h] BYREF

  v3 = a3 == 0 ? 4 : 0;
  if ( !a1 )
    v3 = (unsigned int)v3 | 2;
  v6[0] = a1;
  v6[1] = v3;
  v4 = HvlpAffinityToHvProcessorSet(a2, v7, 0x50u);
  return HvcallpExtendedFastHypercall(((v4 + 7) << 14) & 0x3FE0000 | 0x10013LL, v6, (unsigned int)(v4 + 32));
}
