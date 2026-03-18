/*
 * XREFs of HvlpInitializePowerStatistics @ 0x1401B2C20
 * Callers:
 *     HvlPhase1Initialize @ 0x1401428B0 (HvlPhase1Initialize.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
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
    xmmword_140332008 = *(_OWORD *)v5;
    xmmword_140332018 = *(_OWORD *)(v5 + 16);
    qword_140332028 = *(_QWORD *)(v5 + 32);
  }
  HvlpReleaseHypercallPage((__int64)v7);
  HvlpReleaseHypercallPage((__int64)v8);
  return v0;
}
