/*
 * XREFs of ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x18017CC90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x18007A1C8 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x18017CB44 (-ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetHardwareProtection(CDWMSwapChain *this, char a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v6; // eax
  int v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = *((_QWORD *)this + 37);
  if ( !v4 )
  {
    v3 = -2003292404;
    v9 = 1217;
    v7 = -2003292404;
    goto LABEL_9;
  }
  if ( a2 != *((_BYTE *)this + 408) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v4 + 208LL))(v4, a2 != 0);
    v3 = v6;
    if ( v6 < 0 )
    {
      v9 = 1194;
      goto LABEL_6;
    }
    *((_BYTE *)this + 408) = a2;
    CSwapChainBase::ReleaseD2DBitmaps(this);
    v6 = CSwapChainBase::SetupDepthBuffer(this);
    v3 = v6;
    if ( v6 < 0 )
    {
      v9 = 1208;
LABEL_6:
      v7 = v6;
LABEL_9:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v9);
    }
  }
  return v3;
}
