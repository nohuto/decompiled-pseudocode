/*
 * XREFs of ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x180112A74
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019620 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800A3700 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::EnsureAvailableStackSpace(CExpressionValueStack *this, unsigned int a2)
{
  int v2; // edi
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // eax
  _OWORD *v8; // rsi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD *v13; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v14[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+80h] [rbp-28h]

  v2 = *((_DWORD *)this + 4);
  if ( a2 <= -1 - v2 )
  {
    if ( *((_DWORD *)this + 12) - v2 >= a2 )
      return 0;
    memset_0(v14, 0, sizeof(v14));
    v6 = a2 + v2 - *((_DWORD *)this + 12);
    LODWORD(v15) = 18;
    BYTE4(v15) = 0;
    v7 = DynArrayImpl<1>::AddMultiple((__int64)this + 24, 0x48u, v6, &v13);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xE5u);
    }
    else if ( (_DWORD)v6 )
    {
      v8 = v13;
      v9 = v14[1];
      *v13 = v14[0];
      v10 = v14[2];
      v8[1] = v9;
      v11 = v14[3];
      v8[2] = v10;
      *(_QWORD *)&v10 = v15;
      v8[3] = v11;
      *((_QWORD *)v8 + 8) = v10;
      qmemcpy((char *)v8 + 72, v8, 8 * ((unsigned __int64)(72 * v6 - 72) >> 3));
    }
    if ( v5 >= 0 )
      return 0;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x49u);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
  }
  return (unsigned int)v5;
}
