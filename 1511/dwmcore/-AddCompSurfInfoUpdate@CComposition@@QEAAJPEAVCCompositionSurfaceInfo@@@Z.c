/*
 * XREFs of ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180006778
 * Callers:
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x18000BA80 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x18000C140 (-SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  char *v2; // r10
  unsigned int v3; // edi
  struct CCompositionSurfaceInfo **v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v9; // ebx
  int v10; // eax
  CBitmapOfDeviceBitmaps *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (char *)this + 656;
  v3 = 0;
  v4 = (struct CCompositionSurfaceInfo **)*((_QWORD *)this + 82);
  v5 = 0;
  if ( !*((_DWORD *)v2 + 6) )
  {
LABEL_2:
    v6 = *((_DWORD *)v2 + 6);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
    }
    else
    {
      if ( v7 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v2 + 8LL * v6) = v11;
        *((_DWORD *)v2 + 6) = v7;
LABEL_5:
        CBitmapOfDeviceBitmaps::AddRef(v11);
        return v3;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, 1LL, &v11);
      v9 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
      v3 = v9;
      if ( v9 >= 0 )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x551u);
    return v3;
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
