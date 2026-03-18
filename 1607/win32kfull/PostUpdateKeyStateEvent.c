/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1C0096168
 * Callers:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     NtUserGetKeyState @ 0x1C0095670 (NtUserGetKeyState.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     UpdateAsyncKeyState @ 0x1C00A3520 (UpdateAsyncKeyState.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C00962D8 (ProcessUpdateKeyStateEvent.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall PostUpdateKeyStateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edi
  void *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  _OWORD *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx

  result = *(unsigned int *)(a1 + 340);
  if ( (result & 1) != 0 )
  {
    result = gptiRit;
    if ( *(_QWORD *)(a1 + 64) != gptiRit )
    {
      v5 = 0;
      if ( !*(_QWORD *)a1 )
      {
        v6 = (void *)(a1 + 160);
        ProcessUpdateKeyStateEvent(a1, *(_QWORD *)&gafAsyncKeyState[0], a1 + 160);
LABEL_5:
        result = (__int64)memset(v6, 0, 0x20uLL);
        *(_DWORD *)(a1 + 340) &= ~1u;
        return result;
      }
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v7 + 96) == 4 )
      {
        v6 = (void *)(a1 + 160);
        v11 = *(_OWORD **)(v7 + 32);
        v12 = v11 + 4;
        *v11 = gafAsyncKeyState[0];
        v11[1] = gafAsyncKeyState[1];
        v11[2] = gafAsyncKeyState[2];
        v11[3] = gafAsyncKeyState[3];
        v13 = (_DWORD *)(a1 + 160);
        do
        {
          ++v5;
          *v12++ |= *v13++;
        }
        while ( (unsigned __int64)v5 < 8 );
        SetWakeBit(*(_QWORD *)(a1 + 64), 8256LL, a3);
        goto LABEL_5;
      }
      result = Win32AllocPool(96LL, 1936421717LL);
      v8 = result;
      if ( result )
      {
        v6 = (void *)(a1 + 160);
        *(_OWORD *)result = gafAsyncKeyState[0];
        *(_OWORD *)(result + 16) = gafAsyncKeyState[1];
        *(_OWORD *)(result + 32) = gafAsyncKeyState[2];
        *(_OWORD *)(result + 48) = gafAsyncKeyState[3];
        *(_OWORD *)(result + 64) = *(_OWORD *)(a1 + 160);
        *(_OWORD *)(result + 80) = *(_OWORD *)(a1 + 176);
        if ( !(unsigned int)PostEventMessageEx(*(_QWORD *)(a1 + 64), a1, 4u, 0LL, 0, result, 0LL, 0LL) )
          return Win32FreePool(v8, v9, v10);
        goto LABEL_5;
      }
    }
  }
  return result;
}
