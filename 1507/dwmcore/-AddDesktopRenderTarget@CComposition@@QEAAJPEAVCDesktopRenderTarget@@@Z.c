/*
 * XREFs of ?AddDesktopRenderTarget@CComposition@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x18009333C
 * Callers:
 *     ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x180092AA4 (-ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CRE.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::AddDesktopRenderTarget(CComposition *this, struct CDesktopRenderTarget *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ebx
  int v7; // eax
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
    v8 = (char *)a2 + 80;
  else
    v8 = 0LL;
  v3 = *((_DWORD *)this + 136);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_12;
  }
  v5 = 0;
  if ( v4 > *((_DWORD *)this + 135) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 520, 8u, 1, &v8);
    v5 = v7;
    if ( v7 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x10Cu);
    return v5;
  }
  *(_QWORD *)(*((_QWORD *)this + 65) + 8LL * v3) = v8;
  *((_DWORD *)this + 136) = v4;
LABEL_6:
  CBitmapOfDeviceBitmaps::AddRef(a2);
  return v5;
}
