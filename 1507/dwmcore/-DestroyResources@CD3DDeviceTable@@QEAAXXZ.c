/*
 * XREFs of ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x180123260
 * Callers:
 *     ?SynchronizeValidAdapters@CD3DDeviceTable@@QEAAXPEAVCDXGIEnumeration@@@Z @ 0x180091B48 (-SynchronizeValidAdapters@CD3DDeviceTable@@QEAAXPEAVCDXGIEnumeration@@@Z.c)
 *     ??1CD3DDeviceTable@@UEAA@XZ @ 0x1800979E4 (--1CD3DDeviceTable@@UEAA@XZ.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800E10C0 (-Disconnect@CConnection@@QEAAXXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800E3158 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??_GCD3DDeviceTable@@UEAAPEAXI@Z @ 0x1801231D0 (--_GCD3DDeviceTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DDeviceTable::DestroyResources(CD3DDeviceTable *this)
{
  __int64 i; // rsi
  __int64 v3; // r14
  __int64 j; // rsi
  __int64 v5; // r14

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 18); j = (unsigned int)(j + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * j);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 34) = 0;
}
