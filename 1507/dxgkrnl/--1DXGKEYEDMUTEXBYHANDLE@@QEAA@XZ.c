/*
 * XREFs of ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C001FC98
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C014BC3C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C014D408 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C014EAD0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C014ECC0 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000106C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(DXGKEYEDMUTEX **this)
{
  DXGKEYEDMUTEX *v1; // rcx

  v1 = *this;
  if ( v1 )
    DXGKEYEDMUTEX::ReleaseReference(v1);
}
