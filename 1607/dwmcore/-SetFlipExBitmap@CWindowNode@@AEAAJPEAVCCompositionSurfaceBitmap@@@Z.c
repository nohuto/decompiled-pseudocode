/*
 * XREFs of ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180140BF0
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x180026224 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x18010908C (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ @ 0x18013FF88 (-DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::SetFlipExBitmap(CWindowNode *this, struct CCompositionSurfaceBitmap *a2)
{
  unsigned int v2; // ebx
  char *v4; // rsi
  unsigned int v5; // eax
  struct CCompositionSurfaceBitmap **i; // rcx
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  struct CResource *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = 0;
  if ( a2 && a2 != *((struct CCompositionSurfaceBitmap **)this + 120) )
  {
    v4 = (char *)this + 968;
    v5 = 0;
    for ( i = (struct CCompositionSurfaceBitmap **)*((_QWORD *)this + 121); v5 < *((_DWORD *)v4 + 6); ++i )
    {
      if ( a2 == *i )
        break;
      ++v5;
    }
    if ( v5 >= *((_DWORD *)this + 248) )
    {
      CWindowNode::DiscardOutdatedFlipExImages((struct CResource ***)this);
      v7 = CResource::RegisterNotifier(this, v12);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA5Eu);
        return v2;
      }
      v8 = *((_DWORD *)v4 + 6);
      v9 = v8 + 1;
      if ( v8 + 1 >= v8 )
      {
        v2 = 0;
        if ( v9 <= *((_DWORD *)v4 + 5) )
        {
          *(_QWORD *)(*(_QWORD *)v4 + 8LL * *((unsigned int *)v4 + 6)) = v12;
          *((_DWORD *)v4 + 6) = v9;
          return v2;
        }
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v12);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
      }
      else
      {
        v2 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( (v2 & 0x80000000) != 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xA5Fu);
    }
  }
  return v2;
}
