/*
 * XREFs of ?Add@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18004B760
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Add(__int64 a1, __int128 *a2, int a3)
{
  __int128 v3; // xmm0
  __int64 *v4; // r10
  __int64 v5; // rax
  unsigned int v6; // r8d
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  v3 = *a2;
  v4 = (__int64 *)(a1 + 24);
  v13 = a3;
  v5 = *(unsigned int *)(a1 + 48);
  v12 = v3;
  v6 = v5 + 1;
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v7 = 0;
    if ( v6 <= *(_DWORD *)(a1 + 44) )
    {
      v8 = *v4;
      v9 = 5 * v5;
      *(_OWORD *)(v8 + 4 * v9) = v3;
      *(_DWORD *)(v8 + 4 * v9 + 16) = v13;
      *((_DWORD *)v4 + 6) = v6;
      return (unsigned int)v7;
    }
    v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 24, 20LL, 1LL, &v12);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x43u);
  return (unsigned int)v7;
}
