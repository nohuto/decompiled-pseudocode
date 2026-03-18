/*
 * XREFs of CmpIsHiveEligibleForLazyReconcile @ 0x1404EB69C
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x14044D690 (HvGetEffectiveLogSizeCapForHive.c)
 */

bool __fastcall CmpIsHiveEligibleForLazyReconcile(__int64 a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // r8d
  int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rdx

  if ( !*(_DWORD *)(a1 + 112) || CmpHoldLazyFlush )
    return 0;
  if ( CmpUserPresent )
  {
    EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
    if ( *(_DWORD *)(v3 + 160) < EffectiveLogSizeCapForHive )
    {
      v5 = *(_DWORD *)(v3 + 148);
      v6 = v4;
      if ( v5 != 1 )
      {
        v7 = v4;
        v8 = v4;
        do
        {
          if ( v7 != v5 && *(_BYTE *)(v8 + v3 + 172) == (_BYTE)v4 )
            ++v6;
          ++v7;
          ++v8;
        }
        while ( v7 < 2 );
        if ( v6 )
          return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= *(_QWORD *)(v3 + 5392)
                                                                          + 10000000
                                                                          * (unsigned __int64)(unsigned int)dword_1403165F0;
      }
    }
  }
  return 1;
}
