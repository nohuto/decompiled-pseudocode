/*
 * XREFs of ??1?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@UEAA@XZ @ 0x1C003280C
 * Callers:
 *     ??_G?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@UEAAPEAXI@Z @ 0x1C0033070 (--_G-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@UEAAPEAXI@Z.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C00F4920 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void **__fastcall DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::~AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>(
        _QWORD *a1)
{
  void *v2; // rcx
  void **result; // rax

  *a1 = &DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::`vftable'{for `NonReferenceCounted'};
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
