/*
 * XREFs of ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x18000D118
 * Callers:
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x180005F30 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x18000FCC0 (-SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  char *v2; // r10
  unsigned int v3; // ebx
  struct CCompositionSurfaceInfo **v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v9; // eax
  CBitmapOfDeviceBitmaps *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (char *)this + 664;
  v3 = 0;
  v4 = (struct CCompositionSurfaceInfo **)*((_QWORD *)this + 83);
  v5 = 0;
  if ( !*((_DWORD *)v2 + 6) )
  {
LABEL_2:
    v6 = *((_DWORD *)v2 + 6);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v7 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v2 + 8LL * v6) = v10;
        *((_DWORD *)v2 + 6) = v7;
LABEL_5:
        CBitmapOfDeviceBitmaps::AddRef(v10);
        return v3;
      }
      v9 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, 1LL, &v10);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x43Bu);
      return v3;
    }
    goto LABEL_5;
  }
  while ( a2 != *v4 )
  {
    ++v5;
    ++v4;
    if ( v5 >= *((_DWORD *)v2 + 6) )
      goto LABEL_2;
  }
  return v3;
}
