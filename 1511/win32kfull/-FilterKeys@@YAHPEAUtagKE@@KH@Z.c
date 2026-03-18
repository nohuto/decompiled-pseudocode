/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED650
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
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
        FindTimer(0LL, gtmridFKActivation, 4u, 1, 0LL);
        gtmridFKActivation = 0LL;
      }
      gFilterKeysState = 0;
    }
    else if ( gPhysModifierState == 2 && (xmmword_1C03222CC & 4) != 0 && !gtmridFKActivation && gFilterKeysState != 8 )
    {
      gFilterKeysState = 1;
      gtmridFKActivation = SetRITTimer(0LL, 0xFA0u, (__int64)FKActivationTimer, 1);
    }
  }
  else if ( gtmridFKActivation )
  {
    gFilterKeysState = 0;
    FindTimer(0LL, gtmridFKActivation, 4u, 1, 0LL);
    gtmridFKActivation = 0LL;
  }
  if ( (xmmword_1C03222CC & 1) != 0 )
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
        if ( dword_1C03222DC )
        {
          gBounceVk = v3;
          gtmridFKResponse = SetRITTimer(0LL, dword_1C03222DC, (__int64)FKBounceKeyTimer, 1);
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
      if ( (xmmword_1C03222CC & 0x40) != 0 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
        PostEventMessageEx(v10, *(_QWORD *)(v10 + 384), 0xEu, 0LL, 4u, 0LL, 0LL, 0LL);
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
      xmmword_1C032C540 = *((_OWORD *)a1 + 1);
      if ( DWORD1(xmmword_1C03222CC) )
      {
        gtmridFKAcceptanceDelay = SetRITTimer(0LL, DWORD1(xmmword_1C03222CC), (__int64)xxxFKAcceptanceDelayTimer, 1);
        gdwPUDFlags &= ~0x800u;
        return 0LL;
      }
      v12 = HIDWORD(xmmword_1C03222CC);
      if ( HIDWORD(xmmword_1C03222CC) )
      {
        if ( DWORD2(xmmword_1C03222CC) )
          v12 = DWORD2(xmmword_1C03222CC);
        gtmridFKResponse = SetRITTimer(0LL, v12, (__int64)xxxFKRepeatRateTimer, 1);
      }
    }
  }
  return 1LL;
}
