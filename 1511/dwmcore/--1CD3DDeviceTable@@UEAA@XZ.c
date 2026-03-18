/*
 * XREFs of ??1CD3DDeviceTable@@UEAA@XZ @ 0x1800BA5B4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_deviceTable__ @ 0x1800BFAD0 (_dynamic_atexit_destructor_for__g_deviceTable__.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x1801387D0 (-DestroyResources@CD3DDeviceTable@@QEAAXXZ.c)
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
