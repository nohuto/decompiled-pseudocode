/*
 * XREFs of ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x1801387D0
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ??1CD3DDeviceTable@@UEAA@XZ @ 0x1800BA5B4 (--1CD3DDeviceTable@@UEAA@XZ.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800FF7E0 (-Disconnect@CConnection@@QEAAXXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180101248 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??_GCD3DDeviceTable@@UEAAPEAXI@Z @ 0x180138740 (--_GCD3DDeviceTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
