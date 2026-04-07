/*
 * XREFs of ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180045B04
 * Callers:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180041D9C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800830F8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800280C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArrayImpl<0>::AddMultiple(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  int v8; // eax
  unsigned int v9; // edi

  v8 = DynArrayImpl<0>::Grow(a1, a2, a3, 0, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1A7u);
  }
  else
  {
    if ( a4 )
      *a4 = *(_QWORD *)a1 + a2 * *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) += a3;
  }
  return v9;
}
