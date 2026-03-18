/*
 * XREFs of ?Copy@CoordMap@@QEAAJAEBV1@@Z @ 0x180135F50
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJPEFBURampEntry@CoordMap@@I@Z @ 0x180135460 (-AddMultipleAndSet@-$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJPEFBURampEntry@CoordMap@@I@Z.c)
 *     ?Clear@CoordMap@@QEAAXXZ @ 0x180135B60 (-Clear@CoordMap@@QEAAXXZ.c)
 */

__int64 __fastcall CoordMap::Copy(CoordMap *this, const struct CoordMap *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax

  CoordMap::Clear(this);
  v4 = DynArray<CoordMap::RampEntry,0>::AddMultipleAndSet((__int64)this, *(const void **)a2, *((_DWORD *)a2 + 6));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x212u);
  }
  else
  {
    v6 = DynArray<CoordMap::RampEntry,0>::AddMultipleAndSet(
           (__int64)this + 192,
           *((const void **)a2 + 24),
           *((_DWORD *)a2 + 54));
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x216u);
    }
    else
    {
      v7 = DynArray<CoordMap::RampEntry,0>::AddMultipleAndSet(
             (__int64)this + 384,
             *((const void **)a2 + 48),
             *((_DWORD *)a2 + 102));
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x21Au);
      else
        return 0;
    }
  }
  return v5;
}
