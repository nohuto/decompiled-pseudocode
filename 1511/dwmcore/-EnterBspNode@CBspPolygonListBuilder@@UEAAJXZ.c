/*
 * XREFs of ?EnterBspNode@CBspPolygonListBuilder@@UEAAJXZ @ 0x18015B9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x18011FF88 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CBspPolygonListBuilder::EnterBspNode(CBspPolygonListBuilder *this)
{
  __int64 v1; // r14
  unsigned int v2; // ebx
  CVisual *v3; // r15
  int v4; // edi
  unsigned int v5; // ebp
  __int64 i; // rsi
  int v7; // eax

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v3 = (CVisual *)*((_QWORD *)this + 9);
  v4 = 0;
  v5 = *(_DWORD *)(v1 + 56);
  if ( v5 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      v7 = CVisual::AddToBspPolygonList(v3, *(struct CPolygon **)(i + *(_QWORD *)(v1 + 32)));
      v2 = v7;
      if ( v7 < 0 )
        break;
      if ( ++v4 >= v5 )
        return v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xD5u);
  }
  return v2;
}
