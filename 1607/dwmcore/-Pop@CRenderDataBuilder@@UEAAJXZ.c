/*
 * XREFs of ?Pop@CRenderDataBuilder@@UEAAJXZ @ 0x1800AFBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::Pop(CRenderDataBuilder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v2 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 8, 0, 0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x129u);
  }
  else
  {
    v4 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_QWORD *)v4 = 8LL;
    *(_DWORD *)(v4 + 4) = 313;
    *((_DWORD *)this + 10) += 8;
  }
  return v3;
}
