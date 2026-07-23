/*
 * XREFs of HvlpInitializePowerStatistics @ 0x1401BF490
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  unsigned int v0; // edi
  _QWORD *v2; // rbx
  __int64 v3; // rax
  PHYSICAL_ADDRESS v4; // r8
  __int64 v5; // rsi
  PHYSICAL_ADDRESS v6; // rdx
  PHYSICAL_ADDRESS v7[4]; // [rsp+20h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v8[5]; // [rsp+40h] [rbp-28h] BYREF

  v0 = 0;
  if ( (HvlEnlightenments & 0x408) == 0 )
    return 0LL;
  v2 = (_QWORD *)HvlpAcquireHypercallPage(v7, 1, 0LL, 8LL);
  v3 = HvlpAcquireHypercallPage(v8, 2, 0LL, 392LL);
  v4 = v8[3];
  v5 = v3;
  v6 = v7[3];
  *v2 = 0LL;
  *(_DWORD *)v2 = 4;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           155LL,
                           (PHYSICAL_ADDRESS)v6.QuadPart,
                           (PHYSICAL_ADDRESS)v4.QuadPart) )
  {
    v0 = -1073741823;
  }
  else
  {
    xmmword_140356000 = *(_OWORD *)v5;
    xmmword_140356010 = *(_OWORD *)(v5 + 16);
    qword_140356020 = *(_QWORD *)(v5 + 32);
  }
  HvlpReleaseHypercallPage((__int64)v7);
  HvlpReleaseHypercallPage((__int64)v8);
  return v0;
}
