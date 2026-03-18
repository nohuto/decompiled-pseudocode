/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8A90
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FilterKeys(struct tagKE *a1, unsigned int a2, int a3)
{
  char v3; // di
  int v4; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // xmm0
  unsigned int v12; // edx

  v3 = *((_BYTE *)a1 + 2);
  v4 = *((_WORD *)a1 + 1) & 0x8000;
  if ( v3 == -95 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      if ( gtmridFKActivation )
      {
        FindTimer(0, gtmridFKActivation, 4, 1, 0LL);
        gtmridFKActivation = 0LL;
      }
      gFilterKeysState = 0;
    }
    else if ( gPhysModifierState == 2 && (xmmword_1C0326F34 & 4) != 0 && !gtmridFKActivation && gFilterKeysState != 8 )
    {
      gFilterKeysState = 1;
      gtmridFKActivation = SetRITTimer(0LL, 0xFA0u, (__int64)FKActivationTimer, 1);
    }
  }
  else if ( gtmridFKActivation )
  {
    gFilterKeysState = 0;
    FindTimer(0, gtmridFKActivation, 4, 1, 0LL);
    gtmridFKActivation = 0LL;
  }
  if ( (xmmword_1C0326F34 & 1) == 0 )
    return 1LL;
  if ( v4 )
  {
    if ( v3 != gLastVkDown )
      return 1LL;
    FindTimer(0, gtmridFKResponse, 4, 1, 0LL);
    gtmridFKResponse = 0LL;
    gLastVkDown = 0;
    if ( !gtmridFKAcceptanceDelay )
    {
LABEL_20:
      if ( dword_1C0326F44 )
      {
        gBounceVk = v3;
        gtmridFKResponse = SetRITTimer(0LL, dword_1C0326F44, (__int64)FKBounceKeyTimer, 1);
        if ( (gdwPUDFlags & 0x400) != 0 )
          return 0LL;
      }
      return 1LL;
    }
    FindTimer(0, gtmridFKAcceptanceDelay, 4, 1, 0LL);
    gtmridFKAcceptanceDelay = 0LL;
    if ( (gdwPUDFlags & 0x800) != 0 )
    {
      gdwPUDFlags &= ~0x800u;
      goto LABEL_20;
    }
  }
  else if ( v3 != gLastVkDown )
  {
    gLastVkDown = v3;
    if ( gBounceVk )
    {
      if ( v3 == gBounceVk )
      {
        gdwPUDFlags |= 0x400u;
        return 0LL;
      }
      v9 = gtmridFKResponse;
      if ( gtmridFKResponse )
      {
        FindTimer(0, gtmridFKResponse, 4, 1, 0LL);
        v9 = 0LL;
        gtmridFKResponse = 0LL;
      }
      gBounceVk = 0;
    }
    else
    {
      v9 = gtmridFKResponse;
    }
    gdwPUDFlags &= ~0x400u;
    if ( (xmmword_1C0326F34 & 0x40) != 0 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
      PostEventMessageEx(v10, *(_QWORD *)(v10 + 384), 0xEu, 0LL, 4u, 0LL, 0LL, 0LL);
      v9 = gtmridFKResponse;
    }
    if ( gtmridFKAcceptanceDelay )
    {
      FindTimer(0, gtmridFKAcceptanceDelay, 4, 1, 0LL);
      v9 = gtmridFKResponse;
      gtmridFKAcceptanceDelay = 0LL;
    }
    if ( v9 )
    {
      FindTimer(0, v9, 4, 1, 0LL);
      gtmridFKResponse = 0LL;
    }
    v11 = *(_OWORD *)a1;
    gFKExtraInformation = a2;
    gFKNextProcIndex = a3;
    gFKKeyEvent = v11;
    xmmword_1C0332600 = *((_OWORD *)a1 + 1);
    if ( !DWORD1(xmmword_1C0326F34) )
    {
      v12 = HIDWORD(xmmword_1C0326F34);
      if ( HIDWORD(xmmword_1C0326F34) )
      {
        if ( DWORD2(xmmword_1C0326F34) )
          v12 = DWORD2(xmmword_1C0326F34);
        gtmridFKResponse = SetRITTimer(0LL, v12, (__int64)xxxFKRepeatRateTimer, 1);
      }
      return 1LL;
    }
    gtmridFKAcceptanceDelay = SetRITTimer(0LL, DWORD1(xmmword_1C0326F34), (__int64)xxxFKAcceptanceDelayTimer, 1);
    gdwPUDFlags &= ~0x800u;
  }
  return 0LL;
}
