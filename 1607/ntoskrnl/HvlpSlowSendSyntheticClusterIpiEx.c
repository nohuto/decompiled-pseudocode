/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x1401BEAA8
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401BD9BC (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401BFCC8 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, int a2)
{
  _DWORD *v4; // rbx
  int v5; // eax
  PHYSICAL_ADDRESS v6; // rdx
  __int16 v7; // bx
  PHYSICAL_ADDRESS v9[4]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v10[176]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = (_DWORD *)HvlpAcquireHypercallPage(v9, 1, (__int64)v10, 88LL);
  v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, (v9[0].LowPart & 2) != 0 ? 64 : 4072);
  if ( v5 == -1 )
  {
    HvlpReleaseHypercallPage((__int64)v9);
    v4 = (_DWORD *)HvlpAcquireHypercallPage(v9, 1, 0LL, 0LL);
    v5 = HvlpAffinityToHvProcessorSet(a1, v4 + 2, 4072LL);
  }
  v6 = v9[3];
  v4[1] = 0;
  *v4 = a2;
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
         ((v5 + 7) << 14) & 0x3FE0000 | 0x15LL,
         (PHYSICAL_ADDRESS)v6.QuadPart,
         0LL);
  HvlpReleaseHypercallPage((__int64)v9);
  return v7 != 0 ? 0xC0000001 : 0;
}
