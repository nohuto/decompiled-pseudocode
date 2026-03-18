/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1C0093FF8
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     UpdateAsyncKeyState @ 0x1C0083C5C (UpdateAsyncKeyState.c)
 *     NtUserGetKeyState @ 0x1C00934A0 (NtUserGetKeyState.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0094168 (ProcessUpdateKeyStateEvent.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall PostUpdateKeyStateEvent(__int64 a1)
{
  __int64 result; // rax
  int v3; // edi
  void *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbp
  _OWORD *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx

  result = *(unsigned int *)(a1 + 332);
  if ( (result & 1) != 0 )
  {
    result = gptiRit;
    if ( *(_QWORD *)(a1 + 56) != gptiRit )
    {
      v3 = 0;
      if ( !*(_DWORD *)(a1 + 16) )
      {
        v4 = (void *)(a1 + 152);
        ProcessUpdateKeyStateEvent(a1, *(_QWORD *)&gafAsyncKeyState[0], a1 + 152);
LABEL_5:
        result = (__int64)memset(v4, 0, 0x20uLL);
        *(_DWORD *)(a1 + 332) &= ~1u;
        return result;
      }
      v5 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v5 + 88) == 4 )
      {
        v4 = (void *)(a1 + 152);
        v7 = *(_OWORD **)(v5 + 32);
        v8 = v7 + 4;
        *v7 = gafAsyncKeyState[0];
        v7[1] = gafAsyncKeyState[1];
        v7[2] = gafAsyncKeyState[2];
        v7[3] = gafAsyncKeyState[3];
        v9 = (_DWORD *)(a1 + 152);
        do
        {
          ++v3;
          *v8++ |= *v9++;
        }
        while ( (unsigned __int64)v3 < 8 );
        SetWakeBit(*(_QWORD *)(a1 + 56), 0x2040u);
        goto LABEL_5;
      }
      result = Win32AllocPool(96LL);
      v6 = result;
      if ( result )
      {
        v4 = (void *)(a1 + 152);
        *(_OWORD *)result = gafAsyncKeyState[0];
        *(_OWORD *)(result + 16) = gafAsyncKeyState[1];
        *(_OWORD *)(result + 32) = gafAsyncKeyState[2];
        *(_OWORD *)(result + 48) = gafAsyncKeyState[3];
        *(_OWORD *)(result + 64) = *(_OWORD *)(a1 + 152);
        *(_OWORD *)(result + 80) = *(_OWORD *)(a1 + 168);
        if ( !(unsigned int)PostEventMessageEx(*(_QWORD *)(a1 + 56), a1, 4u, 0LL, 0, result, 0LL, 0LL) )
          return Win32FreePool(v6);
        goto LABEL_5;
      }
    }
  }
  return result;
}
