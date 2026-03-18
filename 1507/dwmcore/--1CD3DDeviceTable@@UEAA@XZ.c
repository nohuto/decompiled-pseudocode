/*
 * XREFs of ??1CD3DDeviceTable@@UEAA@XZ @ 0x1800979E4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_deviceTable__ @ 0x18009C6D0 (_dynamic_atexit_destructor_for__g_deviceTable__.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x180123260 (-DestroyResources@CD3DDeviceTable@@QEAAXXZ.c)
 */

void __fastcall CD3DDeviceTable::~CD3DDeviceTable(void **this)
{
  *this = &CD3DDeviceTable::`vftable';
  CD3DDeviceTable::DestroyResources((CD3DDeviceTable *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 14);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 10);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 6);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  *this = &CMILRefCountBase::`vftable';
}
