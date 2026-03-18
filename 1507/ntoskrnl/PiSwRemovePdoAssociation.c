/*
 * XREFs of PiSwRemovePdoAssociation @ 0x140539F50
 * Callers:
 *     PiSwUnassociateDeviceObject @ 0x140539D20 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwPdoAssociationFree @ 0x140539F9C (PiSwPdoAssociationFree.c)
 *     PiSwFindPdoAssociation @ 0x14053A0F8 (PiSwFindPdoAssociation.c)
 */

__int64 __fastcall PiSwRemovePdoAssociation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *PdoAssociation; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  v2 = 0;
  PdoAssociation = (_QWORD *)PiSwFindPdoAssociation(a1, a2, 0LL);
  if ( PdoAssociation )
  {
    v4 = *PdoAssociation;
    v5 = (_QWORD *)PdoAssociation[1];
    if ( *(_QWORD **)(*PdoAssociation + 8LL) != PdoAssociation || (_QWORD *)*v5 != PdoAssociation )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    PiSwPdoAssociationFree(PdoAssociation);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
