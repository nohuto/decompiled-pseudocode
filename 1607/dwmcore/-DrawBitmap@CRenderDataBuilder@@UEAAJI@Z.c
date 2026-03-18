/*
 * XREFs of ?DrawBitmap@CRenderDataBuilder@@UEAAJI@Z @ 0x1800AFEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawBitmap(CRenderDataBuilder *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v4 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 16, 0, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x7Cu);
  }
  else
  {
    v6 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v6 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 4) = 301;
    *(_DWORD *)(v6 + 8) = a2;
    *((_DWORD *)this + 10) += 16;
  }
  return v5;
}
