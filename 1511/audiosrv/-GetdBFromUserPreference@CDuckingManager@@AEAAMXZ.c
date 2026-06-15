/*
 * XREFs of ?GetdBFromUserPreference@CDuckingManager@@AEAAMXZ @ 0x1800646A0
 * Callers:
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A1858 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?GetUserDuckingPreferenceIndB@CDuckingManager@@UEAAMXZ @ 0x1800A20C0 (-GetUserDuckingPreferenceIndB@CDuckingManager@@UEAAMXZ.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A2D5C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CDuckingManager::GetdBFromUserPreference(CDuckingManager *this)
{
  int v1; // edx
  int v2; // edx

  v1 = *((_DWORD *)this + 77);
  if ( !v1 )
    return FLOAT_N96_0;
  v2 = v1 - 1;
  if ( !v2 )
    return FLOAT_N18_0;
  if ( v2 == 1 )
    return FLOAT_N6_0;
  return 0.0;
}
