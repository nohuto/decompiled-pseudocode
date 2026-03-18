/*
 * XREFs of CmpIsHiveEligibleForLazyReconcile @ 0x1403D3FF0
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1403D4388 (HvGetEffectiveLogSizeCapForHive.c)
 */

bool __fastcall CmpIsHiveEligibleForLazyReconcile(__int64 a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  unsigned int v2; // r10d
  __int64 v3; // r11
  int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v9; // r11

  if ( !*(_DWORD *)(a1 + 112) || CmpHoldLazyFlush )
    return 0;
  if ( !CmpUserPresent )
    return 1;
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_DWORD *)(v3 + 160) >= EffectiveLogSizeCapForHive )
    return 1;
  v4 = *(_DWORD *)(v3 + 148);
  v5 = v2;
  if ( v4 == 1 )
    return 1;
  v6 = v2;
  v7 = v2;
  do
  {
    if ( v6 != v4 && *(_BYTE *)(v7 + v3 + 172) == (_BYTE)v2 )
      ++v5;
    ++v6;
    ++v7;
  }
  while ( v6 < 2 );
  if ( !v5 )
    return 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  return UnbiasedInterruptTime >= *(_QWORD *)(v9 + 5392) + 10000000 * (unsigned __int64)(unsigned int)dword_1402C7510;
}
