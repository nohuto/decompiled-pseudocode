/*
 * XREFs of ??0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x180150F74
 * Callers:
 *     ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180151094 (-Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_TEXTURE_ADDRESS_MODE@@1PEBUD2DVector2@@@Z @ 0x180013190 (-SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_T.c)
 */

CHwSolidColorTextureSource *__fastcall CHwSolidColorTextureSource::CHwSolidColorTextureSource(
        CHwSolidColorTextureSource *this,
        struct CD3DDeviceLevel1 *a2)
{
  CHwSolidColorTextureSource *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 1;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CHwSolidColorTextureSource::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  *((_DWORD *)this + 30) = 1065353216;
  *((_DWORD *)this + 31) = 1065353216;
  *((_BYTE *)this + 112) = 0;
  CHwTexturedColorSource::SetFilterAndWrapModes((__int64)this);
  *((_DWORD *)this + 24) = 1;
  result = this;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 44) = 1065353216LL;
  *((_QWORD *)this + 7) = 1065353216LL;
  return result;
}
