/*
 * XREFs of ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180124324
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18005E6D0 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x1800F6E6C (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ @ 0x180123620 (-DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::SetFlipExBitmap(CWindowNode *this, struct CCompositionSurfaceBitmap *a2)
{
  unsigned int v2; // edi
  char *v4; // rsi
  unsigned int v5; // eax
  struct CCompositionSurfaceBitmap **i; // rcx
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // eax
  struct CResource *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = 0;
  if ( a2 && a2 != *((struct CCompositionSurfaceBitmap **)this + 144) )
  {
    v4 = (char *)this + 1160;
    v5 = 0;
    for ( i = (struct CCompositionSurfaceBitmap **)*((_QWORD *)this + 145); v5 < *((_DWORD *)v4 + 6); ++i )
    {
      if ( a2 == *i )
        break;
      ++v5;
    }
    if ( v5 >= *((_DWORD *)this + 296) )
    {
      CWindowNode::DiscardOutdatedFlipExImages((struct CResource ***)this);
      v7 = CResource::RegisterNotifier(this, v13);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA5Eu);
        return v2;
      }
      v8 = *((_DWORD *)v4 + 6);
      v9 = v8 + 1;
      if ( v8 + 1 < v8 )
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v2 = -2147024362;
        goto LABEL_16;
      }
      v2 = 0;
      if ( v9 <= *((_DWORD *)v4 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v4 + 8LL * *((unsigned int *)v4 + 6)) = v13;
        *((_DWORD *)v4 + 6) = v9;
        return v2;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8, 1, &v13);
      v10 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      v2 = v10;
      if ( v10 < 0 )
LABEL_16:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA5Fu);
    }
  }
  return v2;
}
