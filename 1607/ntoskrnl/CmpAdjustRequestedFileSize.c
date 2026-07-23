/*
 * XREFs of CmpAdjustRequestedFileSize @ 0x14047D770
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x14047FADC (HvGetEffectiveLogSizeCapForHive.c)
 */

unsigned __int64 __fastcall CmpAdjustRequestedFileSize(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  int v5; // r11d
  unsigned __int64 EffectiveLogSizeCapForHive; // r8
  char v7; // si
  int v9; // edi

  v4 = a3;
  v5 = 0;
  EffectiveLogSizeCapForHive = 0LL;
  v7 = 0;
  v9 = a2;
  if ( v4 == a4 )
    return a4;
  if ( (_DWORD)a2 )
  {
    if ( (unsigned int)(a2 - 4) <= 1 || (_DWORD)a2 == 1 )
      EffectiveLogSizeCapForHive = (unsigned int)HvGetEffectiveLogSizeCapForHive(a1, a2, 0LL);
LABEL_5:
    if ( !v4 )
      goto LABEL_14;
    goto LABEL_6;
  }
  v5 = 0x40000;
  EffectiveLogSizeCapForHive = 0x40000LL;
  if ( (*(_DWORD *)(a1 + 5360) & 0x80u) != 0 )
  {
LABEL_24:
    v7 = 1;
    v5 = 4096;
    goto LABEL_5;
  }
  if ( !v4 )
  {
    if ( a4 > 0x40000 )
      goto LABEL_5;
    goto LABEL_24;
  }
LABEL_6:
  if ( a4 <= EffectiveLogSizeCapForHive && v4 < a4 && !v7 )
  {
    if ( !v9 )
      v5 = 4096;
    while ( 1 )
    {
      v4 *= 2LL;
      if ( v4 > EffectiveLogSizeCapForHive )
        break;
      if ( v4 >= a4 )
        goto LABEL_15;
    }
    v4 = EffectiveLogSizeCapForHive;
    goto LABEL_15;
  }
LABEL_14:
  v4 = a4;
LABEL_15:
  if ( v5 )
    return ~(v5 - 1) & (unsigned int)(v5 + v4 - 1);
  return v4;
}
