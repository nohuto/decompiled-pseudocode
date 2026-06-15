/*
 * XREFs of ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x18004190C
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x1800416E8 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CPlaybackManager::CreateInstance(struct CPlaybackManager **a1)
{
  _DWORD *v2; // rax
  unsigned int v3; // ebx

  v2 = operator new(0x20uLL);
  v3 = 0;
  if ( v2 )
  {
    v2[2] = 1;
    *(_QWORD *)v2 = &CPlaybackManager::`vftable'{for `CUnknown'};
    *((_QWORD *)v2 + 2) = &CPlaybackManager::`vftable'{for `ISessionInternalEvents'};
    v2[6] = 0;
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
  {
    *a1 = (struct CPlaybackManager *)v2;
  }
  else
  {
    v3 = -2147024882;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xAu,
        (__int64)&WPP_6fe1b6e008144161c17a6b56291d1e1c_Traceguids,
        -2147024882);
    }
  }
  return v3;
}
