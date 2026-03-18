/*
 * XREFs of ?EnterBspNode@CBspPolygonListBuilder@@UEAAJXZ @ 0x18018DF90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x180137F30 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CBspPolygonListBuilder::EnterBspNode(CBspPolygonListBuilder *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  CVisual *v3; // rbp
  int v4; // edi
  int v5; // eax

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v3 = (CVisual *)*((_QWORD *)this + 9);
  v4 = *(_DWORD *)(v1 + 56);
  while ( v4 )
  {
    v5 = CVisual::AddToBspPolygonList(v3, *(struct CPolygon **)(*(_QWORD *)(v1 + 32) + 8LL * (unsigned int)--v4));
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD7u);
      return v2;
    }
  }
  return v2;
}
