/*
 * XREFs of HvlpSlowFlushAddressSpaceTbEx @ 0x140221A5C
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x140221430 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401AE6F0 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpSlowFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  unsigned int v7; // edx
  _QWORD *v8; // rbx
  int v9; // eax
  PHYSICAL_ADDRESS v11[4]; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v12[192]; // [rsp+48h] [rbp-D0h] BYREF

  v6 = (_QWORD *)HvlpAcquireHypercallPage(v11, 1, (__int64)v12, 96LL);
  v7 = a3 == 0 ? 4 : 0;
  if ( !a1 )
    v7 |= 2u;
  *v6 = a1;
  v8 = v6 + 2;
  v6[1] = v7;
  v9 = HvlpAffinityToHvProcessorSet(a2, v6 + 2, (v11[0].LowPart & 2) != 0 ? 64 : 4064);
  if ( v9 == -1 )
    v9 = HvlpAffinityToHvProcessorSet(0LL, v8, 0);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
    ((v9 + 7) << 14) & 0x3FE0000 | 0x13u,
    (PHYSICAL_ADDRESS)v11[3].QuadPart,
    0LL);
  return HvlpReleaseHypercallPage((__int64)v11);
}
