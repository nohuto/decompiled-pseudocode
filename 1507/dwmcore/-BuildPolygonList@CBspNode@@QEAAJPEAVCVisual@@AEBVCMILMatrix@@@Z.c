/*
 * XREFs of ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x180158E2C
 * Callers:
 *     ?EnterBspNode@CBspPolygonListBuilder@@UEAAJXZ @ 0x18014D290 (-EnterBspNode@CBspPolygonListBuilder@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@AEBVCMILMatrix@@@Z @ 0x180103640 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@AEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CBspNode::BuildPolygonList(CBspNode *this, struct CVisual *a2, const struct CMILMatrix *a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  int v5; // edi
  __int64 i; // rsi
  int v10; // eax

  v3 = *((_DWORD *)this + 16);
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      v10 = CVisual::AddToBspPolygonList(a2, *(struct CPolygon **)(i + *((_QWORD *)this + 5)), a3);
      v4 = v10;
      if ( v10 < 0 )
        break;
      if ( ++v5 >= v3 )
        return v4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xE8u);
  }
  return v4;
}
