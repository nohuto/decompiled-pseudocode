/*
 * XREFs of ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C00010EC
 * Callers:
 *     DxgkReleaseKeyedMutex2 @ 0x1C006F680 (DxgkReleaseKeyedMutex2.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C006FE40 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0070374 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C0177410 (DxgkReleaseKeyedMutex.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000115C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(DXGKEYEDMUTEX **this)
{
  DXGKEYEDMUTEX *v1; // rcx

  v1 = *this;
  if ( v1 )
    DXGKEYEDMUTEX::ReleaseReference(v1);
}
