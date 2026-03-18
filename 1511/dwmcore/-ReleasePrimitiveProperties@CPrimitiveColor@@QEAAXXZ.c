/*
 * XREFs of ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x18000FA94
 * Callers:
 *     ??1CPrimitiveColor@@MEAA@XZ @ 0x18000F910 (--1CPrimitiveColor@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z @ 0x180124EF0 (-NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027790 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CPrimitiveColor::ReleasePrimitiveProperties(CPrimitiveColor *this)
{
  __int64 i; // rbp
  __int64 v3; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i);
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v3 + 16), this);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 18) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 48, 8LL);
}
