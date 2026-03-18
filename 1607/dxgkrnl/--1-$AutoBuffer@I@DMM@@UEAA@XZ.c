/*
 * XREFs of ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C000FAF8
 * Callers:
 *     ??_E?$AutoBuffer@I@DMM@@UEAAPEAXI@Z @ 0x1C0032E20 (--_E-$AutoBuffer@I@DMM@@UEAAPEAXI@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00F49B8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void **__fastcall DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(_QWORD *a1)
{
  void *v2; // rcx
  void **result; // rax

  *a1 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
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
