/*
 * XREFs of HvlpStartVirtualProcessor @ 0x1401BC6CC
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x1401BCCD0 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartVirtualProcessor(int a1, _OWORD *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  PHYSICAL_ADDRESS v6; // rdx
  __int128 v7; // xmm0
  PHYSICAL_ADDRESS v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = HvlpAcquireHypercallPage(v9, 1, 0LL, 240LL);
  v6 = v9[3];
  *(_QWORD *)v5 = -1LL;
  *(_DWORD *)(v5 + 12) = 0;
  *(_DWORD *)(v5 + 8) = a1;
  v5 += 16LL;
  *(_OWORD *)v5 = *a2;
  *(_OWORD *)(v5 + 16) = a2[1];
  *(_OWORD *)(v5 + 32) = a2[2];
  *(_OWORD *)(v5 + 48) = a2[3];
  *(_OWORD *)(v5 + 64) = a2[4];
  *(_OWORD *)(v5 + 80) = a2[5];
  *(_OWORD *)(v5 + 96) = a2[6];
  v5 += 128LL;
  v7 = a2[7];
  a2 += 8;
  *(_OWORD *)(v5 - 16) = v7;
  *(_OWORD *)v5 = *a2;
  *(_OWORD *)(v5 + 16) = a2[1];
  *(_OWORD *)(v5 + 32) = a2[2];
  *(_OWORD *)(v5 + 48) = a2[3];
  *(_OWORD *)(v5 + 64) = a2[4];
  *(_OWORD *)(v5 + 80) = a2[5];
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           153LL,
                           (PHYSICAL_ADDRESS)v6.QuadPart,
                           0LL) )
    v4 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v9);
  return v4;
}
