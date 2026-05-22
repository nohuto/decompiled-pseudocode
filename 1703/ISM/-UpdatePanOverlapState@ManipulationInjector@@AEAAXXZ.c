/*
 * XREFs of ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x180097848
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMM@Z @ 0x18009719C (-InjectPan@ManipulationInjector@@QEAAXMM@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CheckOverlap@ManipulationInjector@@AEAA_NI@Z @ 0x1800978B0 (-CheckOverlap@ManipulationInjector@@AEAA_NI@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z @ 0x1800983BC (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_N@Z.c)
 */

void __fastcall ManipulationInjector::UpdatePanOverlapState(struct tagPOINT *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this->y == 2 && LOBYTE(this[1].y) )
  {
    if ( ManipulationInjector::CheckOverlap((ManipulationInjector *)this, this[6].x - 1) )
    {
      ManipulationInjector::AddContact((ManipulationInjector *)this, this[10], 0);
      this[5].x = 1;
    }
    else
    {
      if ( (this[5].x & 0xFFFFFFFD) != 0 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x39E,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v2);
        JUMPOUT(0x1800978ACLL);
      }
      this[5].x = 0;
    }
  }
}
