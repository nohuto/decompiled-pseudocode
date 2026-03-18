/*
 * XREFs of ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180083410
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180032BD0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015FE40 (-NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CBitmapRealization::NotifyInvalidResource(CBitmapRealization *this, const struct IDeviceResource *a2)
{
  int v2; // ebp
  char *v3; // rsi

  v2 = *((_DWORD *)this + 102);
  v3 = (char *)this - 24;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 3) + 8LL))((char *)this - 24);
  while ( v2 > 0 )
  {
    (***(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 48)
                                                                       + 8LL * (unsigned int)(v2 - 1)))(
      *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * (unsigned int)(v2 - 1)),
      a2);
    --v2;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
}
