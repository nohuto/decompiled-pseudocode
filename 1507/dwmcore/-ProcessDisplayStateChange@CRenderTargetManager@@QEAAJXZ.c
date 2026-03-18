/*
 * XREFs of ?ProcessDisplayStateChange@CRenderTargetManager@@QEAAJXZ @ 0x180049FC0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180012D20 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRenderTargetManager::ProcessDisplayStateChange(CRenderTargetManager *this)
{
  int v1; // esi
  __int64 v2; // rbp
  _QWORD *v4; // rdi
  COverlayContext *v5; // rcx
  int v6; // eax
  bool v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 8 * v2) + 48LL))(
             *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v2),
             36LL) )
      {
        v1 = 0;
        v4 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v2);
        v5 = (COverlayContext *)v4[69];
        if ( v5 )
        {
          v8 = 0;
          v6 = COverlayContext::ProcessDisplayStateChange(v5, 0, &v8);
          v1 = v6;
          if ( v6 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x291u);
          }
          else if ( v8 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v4 + 152LL))(v4);
          }
        }
        if ( v1 < 0 )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 12) )
        return (unsigned int)v1;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x40Cu);
  }
  return (unsigned int)v1;
}
