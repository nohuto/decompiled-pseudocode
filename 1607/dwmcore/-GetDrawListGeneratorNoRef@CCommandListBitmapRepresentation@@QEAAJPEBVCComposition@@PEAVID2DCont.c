/*
 * XREFs of ?GetDrawListGeneratorNoRef@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18015355C
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180153354 (-CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwne.c)
 */

__int64 __fastcall CCommandListBitmapRepresentation::GetDrawListGeneratorNoRef(
        CCommandListBitmapRepresentation *this,
        const struct CComposition *a2,
        struct ID2DContextOwner *a3,
        struct ID2DContext *a4,
        struct CPrimitiveGroupDrawListGenerator **a5)
{
  unsigned int v5; // ebx
  struct CPrimitiveGroupDrawListGenerator **v6; // rdi
  int NewGenerator; // eax

  v5 = 0;
  v6 = (struct CPrimitiveGroupDrawListGenerator **)((char *)this + 304);
  if ( *((_QWORD *)this + 38)
    || (NewGenerator = CCommandListBitmapRepresentation::CreateNewGenerator(
                         this,
                         a2,
                         a3,
                         a4,
                         (struct CPrimitiveGroupDrawListGenerator **)this + 38),
        v5 = NewGenerator,
        NewGenerator >= 0) )
  {
    *a5 = *v6;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NewGenerator, 0x121u);
  }
  return v5;
}
