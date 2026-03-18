/*
 * XREFs of ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0001104
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C006FE40 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C0070028 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0070150 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGKEYEDMUTEX::IsOwner(DXGKEYEDMUTEX *this, int a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_DWORD *)this + 9) && a2 && *((_DWORD *)this + 10) == a2 )
    return *((_QWORD *)this + 6) == (_QWORD)DXGPROCESS::GetCurrent();
  return v2;
}
