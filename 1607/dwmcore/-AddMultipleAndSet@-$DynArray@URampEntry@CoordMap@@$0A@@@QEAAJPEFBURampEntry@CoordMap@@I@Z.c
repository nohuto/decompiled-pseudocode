/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJPEFBURampEntry@CoordMap@@I@Z @ 0x180135460
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@AEBUD2D_SIZE_F@@1H@Z @ 0x1801354F4 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@AEBUD2D_SIZE_F@@1H@Z.c)
 *     ?Copy@CoordMap@@QEAAJAEBV1@@Z @ 0x180135F50 (-Copy@CoordMap@@QEAAJAEBV1@@Z.c)
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180136008 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 */

__int64 __fastcall DynArray<CoordMap::RampEntry,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + a3;
  if ( (unsigned int)v3 + a3 >= (unsigned int)v3 )
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x10u, a3, a2);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 16 * v3), a2, 16LL * a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  return v6;
}
