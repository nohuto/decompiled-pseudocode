/*
 * XREFs of ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800700FC
 * Callers:
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x18004D2CC (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?GenerateMesh@CTextTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800889B8 (-GenerateMesh@CTextTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x18008A398 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18004B6DC (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall DynArray<unsigned long,0>::AddAndSet(__int64 a1, unsigned int a2, int *a3)
{
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // ebp
  int *v8; // rdx
  unsigned int v9; // ecx
  int v10; // eax
  int *v11; // rdi
  unsigned __int64 i; // rcx
  int *v13; // rcx
  __int64 v14; // rdx
  int *v16; // [rsp+58h] [rbp+20h] BYREF

  v5 = DynArrayImpl<0>::AddMultiple(a1, 4u, a2, &v16);
  v6 = 0LL;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v8 = v16;
      if ( a2 >= 4 && (v16 > a3 || &v16[a2 - 1] < a3) )
      {
        v9 = a2 - (a2 & 3);
        do
          v6 = (unsigned int)(v6 + 4);
        while ( (unsigned int)v6 < v9 );
        v10 = *a3;
        v11 = v16;
        for ( i = (16 * ((unsigned __int64)(v9 + 3) >> 2)) >> 2; i; --i )
          *v11++ = v10;
      }
      if ( (unsigned int)v6 < a2 )
      {
        v13 = &v8[v6];
        v14 = a2 - (unsigned int)v6;
        do
        {
          *v13++ = *a3;
          --v14;
        }
        while ( v14 );
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xE5u);
  }
  return v7;
}
