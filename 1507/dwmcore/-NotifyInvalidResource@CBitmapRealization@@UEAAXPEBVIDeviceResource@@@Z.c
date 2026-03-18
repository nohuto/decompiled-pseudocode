/*
 * XREFs of ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18008CFD0
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18008CF50 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180152910 (-NotifyInvalidResource@CDxHandleDecodeBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
