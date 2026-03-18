/*
 * XREFs of ??1?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAA@XZ @ 0x1C00023DC
 * Callers:
 *     ??1DMMVIDPNSOURCE@@UEAA@XZ @ 0x1C0002600 (--1DMMVIDPNSOURCE@@UEAA@XZ.c)
 *     ??_G?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z @ 0x1C0034410 (--_G-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void **__fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::~AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>(_QWORD *a1)
{
  void *v2; // rcx
  void **result; // rax

  *a1 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `NonReferenceCounted'};
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
