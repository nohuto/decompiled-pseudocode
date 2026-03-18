/*
 * XREFs of ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C001FA68
 * Callers:
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C005C524 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C015098C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGKEYEDMUTEX::IsSameWaiter(int a1, struct DXGPROCESS **a2)
{
  char v2; // bl

  v2 = 0;
  if ( a2 && a1 == *((_DWORD *)a2 + 2) )
    return DXGPROCESS::GetCurrent() == a2[2];
  return v2;
}
