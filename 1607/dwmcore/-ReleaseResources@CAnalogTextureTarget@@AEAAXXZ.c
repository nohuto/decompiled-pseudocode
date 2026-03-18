/*
 * XREFs of ?ReleaseResources@CAnalogTextureTarget@@AEAAXXZ @ 0x180166560
 * Callers:
 *     ??1CAnalogTextureTarget@@EEAA@XZ @ 0x180165F38 (--1CAnalogTextureTarget@@EEAA@XZ.c)
 *     ?CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ @ 0x180166060 (-CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CAnalogTextureTarget@@UEAAXXZ @ 0x1801665F0 (-ReleaseResourcesForDisplayChange@CAnalogTextureTarget@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogTextureTarget::ReleaseResources(CAnalogTextureTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_BYTE *)this + 276) = 1;
  v2 = *((_QWORD *)this + 35);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 35) = 0LL;
  }
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 176) + 240LL))(v3 + 176);
  v4 = *((_QWORD *)this + 33);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 33) = 0LL;
  }
}
