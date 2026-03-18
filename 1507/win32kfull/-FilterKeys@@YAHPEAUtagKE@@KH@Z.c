/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED130
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FilterKeys(struct tagKE *a1, unsigned int a2, int a3)
{
  char v3; // di
  int v4; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // xmm0
  int v12; // edx

  v3 = *((_BYTE *)a1 + 2);
  v4 = *((_WORD *)a1 + 1) & 0x8000;
  if ( v3 == -95 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      if ( gtmridFKActivation )
      {
        FindTimer(0LL, gtmridFKActivation, 4u, 1, 0LL);
        gtmridFKActivation = 0LL;
      }
      gFilterKeysState = 0;
    }
    else if ( gPhysModifierState == 2 && (xmmword_1C0323934 & 4) != 0 && !gtmridFKActivation && gFilterKeysState != 8 )
    {
      gFilterKeysState = 1;
      gtmridFKActivation = SetRITTimer(0, 4000, (int)FKActivationTimer, 1);
    }
  }
  else if ( gtmridFKActivation )
  {
    gFilterKeysState = 0;
    FindTimer(0LL, gtmridFKActivation, 4u, 1, 0LL);
    gtmridFKActivation = 0LL;
  }
  if ( (xmmword_1C0323934 & 1) != 0 )
  {
    if ( v4 )
    {
      if ( v3 == gLastVkDown )
      {
        FindTimer(0LL, gtmridFKResponse, 4u, 1, 0LL);
        gtmridFKResponse = 0LL;
        gLastVkDown = 0;
        if ( gtmridFKAcceptanceDelay )
        {
          FindTimer(0LL, gtmridFKAcceptanceDelay, 4u, 1, 0LL);
          gtmridFKAcceptanceDelay = 0LL;
          if ( (gdwPUDFlags & 0x800) == 0 )
            return 0LL;
          gdwPUDFlags &= ~0x800u;
        }
        if ( dword_1C0323944 )
        {
          gBounceVk = v3;
          gtmridFKResponse = SetRITTimer(0, dword_1C0323944, (int)FKBounceKeyTimer, 1);
          if ( (gdwPUDFlags & 0x400) != 0 )
            return 0LL;
        }
      }
    }
    else
    {
      if ( v3 == gLastVkDown )
        return 0LL;
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
          FindTimer(0LL, gtmridFKResponse, 4u, 1, 0LL);
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
      if ( (xmmword_1C0323934 & 0x40) != 0 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
        PostEventMessageEx(v10, *(_QWORD *)(v10 + 392), 0xEu, 0LL, 4u, 0LL, 0LL, 0LL);
        v9 = gtmridFKResponse;
      }
      if ( gtmridFKAcceptanceDelay )
      {
        FindTimer(0LL, gtmridFKAcceptanceDelay, 4u, 1, 0LL);
        v9 = gtmridFKResponse;
        gtmridFKAcceptanceDelay = 0LL;
      }
      if ( v9 )
      {
        FindTimer(0LL, v9, 4u, 1, 0LL);
        gtmridFKResponse = 0LL;
      }
      v11 = *(_OWORD *)a1;
      gFKExtraInformation = a2;
      gFKNextProcIndex = a3;
      gFKKeyEvent = v11;
      xmmword_1C032D108 = *((_OWORD *)a1 + 1);
      if ( DWORD1(xmmword_1C0323934) )
      {
        gtmridFKAcceptanceDelay = SetRITTimer(0, SDWORD1(xmmword_1C0323934), (int)xxxFKAcceptanceDelayTimer, 1);
        gdwPUDFlags &= ~0x800u;
        return 0LL;
      }
      v12 = HIDWORD(xmmword_1C0323934);
      if ( HIDWORD(xmmword_1C0323934) )
      {
        if ( DWORD2(xmmword_1C0323934) )
          v12 = DWORD2(xmmword_1C0323934);
        gtmridFKResponse = SetRITTimer(0, v12, (int)xxxFKRepeatRateTimer, 1);
      }
    }
  }
  return 1LL;
}
