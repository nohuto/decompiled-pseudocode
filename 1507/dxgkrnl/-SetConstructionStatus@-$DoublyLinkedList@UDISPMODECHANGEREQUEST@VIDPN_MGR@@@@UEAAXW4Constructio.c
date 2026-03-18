/*
 * XREFs of ?SetConstructionStatus@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x1C0011180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST>::SetConstructionStatus(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
}
