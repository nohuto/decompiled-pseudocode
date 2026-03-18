/*
 * XREFs of ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0001024
 * Callers:
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C005B6FC (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C014BC3C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C014D020 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGKEYEDMUTEX::IsOwner(DXGKEYEDMUTEX *this, int a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_DWORD *)this + 9) && a2 && *((_DWORD *)this + 10) == a2 )
    return *((_QWORD *)this + 6) == (_QWORD)DXGPROCESS::GetCurrent();
  return v2;
}
