/*
 * XREFs of ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01ED3F0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 */

void __fastcall FKActivationTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  int v5; // edx
  __int64 v6; // r9
  char v7; // al
  __int64 v8; // rcx

  v3 = grpdeskRitInput;
  v5 = gFilterKeysState;
  v6 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL);
  if ( gFilterKeysState == 1 )
    goto LABEL_20;
  if ( gFilterKeysState != 2 )
  {
    if ( gFilterKeysState != 3 )
    {
      if ( gFilterKeysState == 4 )
      {
        *(_QWORD *)((char *)&xmmword_1C03222CC + 12) = 0LL;
        DWORD1(xmmword_1C03222CC) = 2000;
        if ( (xmmword_1C03222CC & 0x10) != 0 )
          PostEventMessageEx(
            *(_QWORD *)(v6 + 16),
            *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL),
            0xEu,
            0LL,
            5u,
            0LL,
            3LL,
            0LL);
      }
      return;
    }
    if ( (xmmword_1C03222CC & 0x10) != 0 )
    {
      PostEventMessageEx(*(_QWORD *)(v6 + 16), *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL), 0xEu, 0LL, 5u, 0LL, 2LL, 0LL);
      v5 = gFilterKeysState;
    }
    HIDWORD(xmmword_1C03222CC) = 0;
    DWORD1(xmmword_1C03222CC) = 0;
    dword_1C03222DC = 1000;
LABEL_20:
    gFilterKeysState = v5 + 1;
    gtmridFKActivation = SetRITTimer(a3, 0xFA0u, (__int64)FKActivationTimer, 1);
    return;
  }
  v7 = xmmword_1C03222CC;
  if ( (xmmword_1C03222CC & 1) == 0 )
  {
    if ( (xmmword_1C03222CC & 0x10) != 0 )
      PostEventMessageEx(*(_QWORD *)(v6 + 16), *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL), 0xEu, 0LL, 0, 0LL, 0LL, 0LL);
    PostWinlogonMessage(1026LL, 2LL);
    v5 = gFilterKeysState;
    goto LABEL_20;
  }
  LODWORD(xmmword_1C03222CC) = xmmword_1C03222CC & 0xFFFFFFFE;
  if ( (v7 & 0x10) != 0 )
  {
    PostEventMessageEx(*(_QWORD *)(v6 + 16), *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL), 0xEu, 0LL, 1u, 0LL, 0LL, 0LL);
    v3 = grpdeskRitInput;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 24LL) + 24LL) + 16LL);
  PostEventMessageEx(v8, *(_QWORD *)(v8 + 384), 0xDu, 0LL, 0, 11LL, 2LL, 0LL);
  if ( gtmridFKResponse )
  {
    FindTimer(0LL, gtmridFKResponse, 4u, 1, 0LL);
    gtmridFKResponse = 0LL;
  }
  if ( gtmridFKAcceptanceDelay )
  {
    FindTimer(0LL, gtmridFKAcceptanceDelay, 4u, 1, 0LL);
    gtmridFKAcceptanceDelay = 0LL;
  }
}
