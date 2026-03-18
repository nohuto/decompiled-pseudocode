/*
 * XREFs of ?AddDesktopRenderTarget@CComposition@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x180043750
 * Callers:
 *     ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x180077F78 (-ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CRE.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::AddDesktopRenderTarget(CComposition *this, struct CDesktopRenderTarget *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // ebx
  int v7; // eax
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    v8 = (char *)a2 + 152;
  else
    v8 = 0LL;
  v3 = *((_DWORD *)this + 138);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v5 = 0;
    if ( v4 <= *((_DWORD *)this + 137) )
    {
      *(_QWORD *)(*((_QWORD *)this + 66) + 8LL * v3) = v8;
      *((_DWORD *)this + 138) = v4;
      goto LABEL_6;
    }
    v7 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 528, 8LL, 1LL, &v8);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x112u);
    return (unsigned int)v5;
  }
LABEL_6:
  CBitmapOfDeviceBitmaps::AddRef(a2);
  return (unsigned int)v5;
}
