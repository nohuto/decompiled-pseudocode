/*
 * XREFs of ?AddMoveOptimizationNode@CHwndRenderTarget@@QEAAJPEAVCWindowNode@@@Z @ 0x18011BFD8
 * Callers:
 *     ?AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z @ 0x18011CF40 (-AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::AddMoveOptimizationNode(CHwndRenderTarget *this, struct CWindowNode *a2)
{
  unsigned int v2; // ebx
  struct CWindowNode **v3; // r8
  unsigned int i; // eax
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // eax
  CBitmapOfDeviceBitmaps *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = 0;
  v3 = (struct CWindowNode **)*((_QWORD *)this + 74);
  for ( i = 0; i < *((_DWORD *)this + 154); ++v3 )
  {
    if ( a2 == *v3 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 154) )
  {
    v5 = *((_DWORD *)this + 154);
    v6 = v5 + 1;
    if ( v5 + 1 >= v5 )
    {
      if ( v6 <= *((_DWORD *)this + 153) )
      {
        *(_QWORD *)(*((_QWORD *)this + 74) + 8LL * *((unsigned int *)this + 154)) = v9;
        *((_DWORD *)this + 154) = v6;
LABEL_12:
        CBitmapOfDeviceBitmaps::AddRef(v9);
        return v2;
      }
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 592, 8u, 1, &v9);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    }
    else
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x185u);
      return v2;
    }
    goto LABEL_12;
  }
  return v2;
}
