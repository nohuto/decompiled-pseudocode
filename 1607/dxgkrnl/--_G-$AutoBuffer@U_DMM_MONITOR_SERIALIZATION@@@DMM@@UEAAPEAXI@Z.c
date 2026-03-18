/*
 * XREFs of ??_G?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@UEAAPEAXI@Z @ 0x1C0034D10
 * Callers:
 *     ??_E?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@WBI@EAAPEAXI@Z @ 0x1C0012DC0 (--_E-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  void *v4; // rcx

  *a1 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v4 = (void *)a1[4];
  if ( v4 )
  {
    operator delete(v4);
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  a1[3] = &NonReferenceCounted::`vftable';
  *a1 = &DoublyLinkedListElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
