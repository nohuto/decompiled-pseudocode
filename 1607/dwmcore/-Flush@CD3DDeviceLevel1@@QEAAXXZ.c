/*
 * XREFs of ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x18007E7E8
 * Callers:
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x1800351A8 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ @ 0x1801670BC (-FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ.c)
 *     ??1CAnalogDisplayRenderTarget@@MEAA@XZ @ 0x180167904 (--1CAnalogDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::Flush(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 69);
  if ( v2 )
  {
    v3 = 29;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 72) + 888LL))(*((_QWORD *)this + 72));
  }
  *((_BYTE *)this + 1078) = 0;
}
