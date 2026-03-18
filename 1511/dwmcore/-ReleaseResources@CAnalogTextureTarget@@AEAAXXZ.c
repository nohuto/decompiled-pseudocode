/*
 * XREFs of ?ReleaseResources@CAnalogTextureTarget@@AEAAXXZ @ 0x18013C4E4
 * Callers:
 *     ??1CAnalogTextureTarget@@EEAA@XZ @ 0x18013BDA0 (--1CAnalogTextureTarget@@EEAA@XZ.c)
 *     ?CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ @ 0x18013BF00 (-CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CAnalogTextureTarget@@UEAAXXZ @ 0x18013C5A0 (-ReleaseResourcesForDisplayChange@CAnalogTextureTarget@@UEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CAnalogTextureTarget::ReleaseResources(CAnalogTextureTarget *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  v1 = *((_QWORD *)this + 25);
  *((_BYTE *)this + 196) = 1;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    *((_QWORD *)this + 25) = 0LL;
  }
  v3 = *((_QWORD *)this + 23);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 176) + 232LL))(v3 + 176);
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 23));
    *((_QWORD *)this + 23) = 0LL;
  }
}
