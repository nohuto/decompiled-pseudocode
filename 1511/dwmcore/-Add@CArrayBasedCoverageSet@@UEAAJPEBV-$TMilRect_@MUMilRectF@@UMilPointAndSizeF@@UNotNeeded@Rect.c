/*
 * XREFs of ?Add@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180036AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Add(__int64 a1, __int128 *a2, int a3)
{
  __int128 v3; // xmm0
  __int64 *v4; // r10
  __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned int v7; // ebx
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
    goto LABEL_8;
  }
  v7 = 0;
  if ( v6 > *(_DWORD *)(a1 + 44) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 24, 20LL, 1LL, &v12);
    v7 = v11;
    if ( v11 >= 0 )
      return v7;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x43u);
    return v7;
  }
  v8 = *v4;
  v9 = 5 * v5;
  *(_OWORD *)(v8 + 4 * v9) = v3;
  *(_DWORD *)(v8 + 4 * v9 + 16) = v13;
  *((_DWORD *)v4 + 6) = v6;
  return v7;
}
