/*
 * XREFs of ??1?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C00327B8
 * Callers:
 *     ??_G?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@UEAAPEAXI@Z @ 0x1C0033040 (--_G-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@UEAAPEAXI@Z.c)
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C0033C60 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C019F7F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void **__fastcall DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>::~AutoBuffer<_DMM_VIDPN_SERIALIZATION>(_QWORD *a1)
{
  void *v2; // rcx
  void **result; // rax

  *a1 = &DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v2 = (void *)a1[4];
  if ( v2 )
  {
    operator delete(v2);
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  a1[3] = &NonReferenceCounted::`vftable';
  result = &DoublyLinkedListElement::`vftable';
  *a1 = &DoublyLinkedListElement::`vftable';
  return result;
}
