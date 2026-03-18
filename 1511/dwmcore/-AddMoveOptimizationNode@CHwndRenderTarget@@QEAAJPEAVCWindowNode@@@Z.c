/*
 * XREFs of ?AddMoveOptimizationNode@CHwndRenderTarget@@QEAAJPEAVCWindowNode@@@Z @ 0x180105AD8
 * Callers:
 *     ?AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z @ 0x180106A90 (-AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::AddMoveOptimizationNode(CHwndRenderTarget *this, struct CWindowNode *a2)
{
  unsigned int v2; // edi
  struct CWindowNode **v3; // r8
  unsigned int i; // eax
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  int v9; // eax
  CBitmapOfDeviceBitmaps *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0;
  v3 = (struct CWindowNode **)*((_QWORD *)this + 50);
  for ( i = 0; i < *((_DWORD *)this + 106); ++v3 )
  {
    if ( a2 == *v3 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 106) )
  {
    v5 = *((_DWORD *)this + 106);
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v2 = -2147024362;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x193u);
      return v2;
    }
    if ( v6 > *((_DWORD *)this + 105) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 400, 8, 1, &v10);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
      v2 = v7;
      if ( v7 < 0 )
        goto LABEL_14;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 50) + 8LL * *((unsigned int *)this + 106)) = v10;
      *((_DWORD *)this + 106) = v6;
    }
    CBitmapOfDeviceBitmaps::AddRef(v10);
  }
  return v2;
}
