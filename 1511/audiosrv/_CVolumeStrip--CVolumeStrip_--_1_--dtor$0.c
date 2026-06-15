/*
 * XREFs of _CVolumeStrip::CVolumeStrip_::_1_::dtor$0 @ 0x18004CA9E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::CVolumeStrip_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::~CLockedList<CMasterVolumeNotificationProcess,1,0>((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 8LL));
}
