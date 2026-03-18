/*
 * XREFs of ?FlushD3DDevice@CAnalogCompositorTarget@@QEAAXXZ @ 0x1801670BC
 * Callers:
 *     ??1CAnalogCompositorClient@@QEAA@XZ @ 0x1800BD2C0 (--1CAnalogCompositorClient@@QEAA@XZ.c)
 *     ?UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z @ 0x1801677B4 (-UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z.c)
 * Callees:
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x18007E7E8 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 */

void __fastcall CAnalogCompositorTarget::FlushD3DDevice(CAnalogCompositorTarget *this)
{
  CD3DDeviceLevel1 *v1; // rcx

  v1 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 21);
  if ( v1 )
    CD3DDeviceLevel1::Flush(v1);
}
