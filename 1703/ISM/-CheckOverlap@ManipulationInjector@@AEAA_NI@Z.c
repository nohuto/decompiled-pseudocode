/*
 * XREFs of ?CheckOverlap@ManipulationInjector@@AEAA_NI@Z @ 0x1800978B0
 * Callers:
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x180097150 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x180097848 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

char __fastcall ManipulationInjector::CheckOverlap(
        ManipulationInjector *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  int v4; // r8d
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  __int64 v11; // rbp
  char v12; // bl
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // eax
  bool v16; // sf
  bool v17; // of
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ecx
  bool v21; // zf
  bool v22; // sf
  bool v23; // of
  int v24; // r8d
  RECT rc; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *((_DWORD *)this + 5);
  v7 = *((_DWORD *)this + 18) - v4;
  rc.left = v4 + *((_DWORD *)this + 16) + 1;
  v8 = *((_DWORD *)this + 17);
  rc.right = v7 - 1;
  v9 = *((_DWORD *)this + 19) - v4;
  rc.top = v4 + v8 + 1;
  v21 = *((_DWORD *)this + 22) == 1;
  rc.bottom = v9 - 1;
  if ( v21 )
    return !PtInRect(&rc, *(POINT *)((char *)this + 152 * a2 + 144));
  if ( *((_DWORD *)this + 22) == 16 )
  {
    v11 = 152LL * a2;
    v12 = 0;
    if ( !PtInRect(&rc, *(POINT *)((char *)this + v11 + 144)) )
      return 1;
    v13 = 152LL * (a2 + 1);
    if ( !PtInRect(&rc, *(POINT *)((char *)this + v13 + 144)) )
      return 1;
    v14 = 0;
    if ( *(_DWORD *)this == 3 )
    {
      v15 = *(_DWORD *)((char *)this + v13 + 152) - *(_DWORD *)((char *)this + v11 + 152);
      v17 = __OFSUB__(v15, *((_DWORD *)this + 183));
      v16 = v15 - *((_DWORD *)this + 183) < 0;
    }
    else
    {
      v18 = *(_DWORD *)((char *)this + v13 + 144) - *(_DWORD *)((char *)this + v11 + 144);
      v17 = __OFSUB__(v18, *((_DWORD *)this + 7));
      v16 = v18 - *((_DWORD *)this + 7) < 0;
    }
    LOBYTE(v14) = v16 == v17;
    if ( v14 )
      return 1;
  }
  else
  {
    if ( *((_DWORD *)this + 22) != 32 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3BD,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      JUMPOUT(0x180097A3ELL);
    }
    v19 = a2 + 1;
    if ( *(_DWORD *)this == 3 )
    {
      v20 = *((_DWORD *)this + 38 * v19 + 38) - *((_DWORD *)this + 38 * a2 + 38);
      v23 = __OFSUB__(v20, *((_DWORD *)this + 184));
      v21 = v20 == *((_DWORD *)this + 184);
      v22 = v20 - *((_DWORD *)this + 184) < 0;
    }
    else
    {
      v24 = *((_DWORD *)this + 38 * v19 + 36) - *((_DWORD *)this + 38 * a2 + 36);
      v23 = __OFSUB__(v24, *((_DWORD *)this + 9));
      v21 = v24 == *((_DWORD *)this + 9);
      v22 = v24 - *((_DWORD *)this + 9) < 0;
    }
    return v22 ^ v23 | v21;
  }
  return v12;
}
