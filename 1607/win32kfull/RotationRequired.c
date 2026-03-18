/*
 * XREFs of RotationRequired @ 0x1C01CA188
 * Callers:
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C0212ED0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 * Callees:
 *     QueryAutoRotationState @ 0x1C0098B04 (QueryAutoRotationState.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00EC148 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 */

_BOOL8 __fastcall RotationRequired(__int64 a1, unsigned int *a2)
{
  unsigned int AutoRotationState; // edi
  _BOOL8 result; // rax
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  AutoRotationState = QueryAutoRotationState();
  if ( AutoRotationState > 1 )
    return 0LL;
  if ( a1 )
  {
    LODWORD(a1) = *(_DWORD *)(a1 + 864);
  }
  else if ( !grpdeskRitInput )
  {
    return 0LL;
  }
  if ( a2 )
  {
    v6 = *a2;
  }
  else
  {
    if ( (int)GetCurrentOrientation(&v9) < 0 )
      return 0LL;
    v6 = v9;
  }
  v7 = a1 - 0x40000000;
  if ( dword_1C0329478 )
  {
    if ( (v7 & 0xBFFFFFFF) != 0 )
    {
      if ( AutoRotationState == 1 )
      {
        v8 = dword_1C0329464;
        if ( !(_DWORD)a1 || _bittest((const int *)&a1, ((_BYTE)dword_1C0329464 + 1) & 3) )
          goto LABEL_39;
LABEL_16:
        if ( (a1 & 2) == 0 )
        {
          if ( (a1 & 1) != 0 )
            v8 = 3;
          else
            v8 = ((a1 & 8) != 0) + 1;
          goto LABEL_39;
        }
        goto LABEL_34;
      }
      if ( !(_DWORD)a1 )
        goto LABEL_20;
      v8 = gAutoRotationInfo;
      if ( !_bittest((const int *)&a1, ((_BYTE)gAutoRotationInfo + 1) & 3) )
        goto LABEL_16;
      goto LABEL_23;
    }
  }
  else if ( (v7 & 0xBFFFFFFF) != 0 )
  {
    if ( AutoRotationState == 1 )
    {
      v8 = dword_1C0329464;
      if ( !(_DWORD)a1 || _bittest((const int *)&a1, dword_1C0329464) )
        goto LABEL_39;
    }
    else
    {
      if ( !(_DWORD)a1 )
      {
LABEL_20:
        if ( dword_1C0329488 )
        {
          v8 = gAutoRotationInfo;
          goto LABEL_39;
        }
        return 0LL;
      }
      v8 = gAutoRotationInfo;
      if ( _bittest((const int *)&a1, gAutoRotationInfo) )
      {
LABEL_23:
        if ( dword_1C0329488 )
          goto LABEL_39;
        return 0LL;
      }
    }
    if ( (a1 & 1) == 0 )
    {
      if ( (a1 & 2) != 0 )
        v8 = 1;
      else
        v8 = (~(_BYTE)a1 & 4 | 8u) >> 2;
      goto LABEL_39;
    }
LABEL_34:
    v8 = 0;
    goto LABEL_39;
  }
  v8 = v6;
LABEL_39:
  result = v8 != v6;
  if ( a2 )
    *a2 = v8;
  return result;
}
