/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CComposition@@QEAAJXZ @ 0x1800E2A7C
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComposition::HandleDDAArrivalOrDeparture(CComposition *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  int v4; // eax

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 136) )
  {
    while ( 1 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 65) + 8 * v2) + 256LL))(*(_QWORD *)(*((_QWORD *)this + 65) + 8 * v2));
      v1 = v4;
      if ( v4 < 0 )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 136) )
        return v1;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x14Eu);
  }
  return v1;
}
