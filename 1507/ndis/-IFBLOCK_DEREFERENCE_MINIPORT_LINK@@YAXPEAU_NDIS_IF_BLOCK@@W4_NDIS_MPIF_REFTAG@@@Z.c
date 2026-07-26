/*
 * XREFs of ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00167D8
 * Callers:
 *     ndisMDereferenceIfBlock @ 0x1C000EDF0 (ndisMDereferenceIfBlock.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0014DC8 (ndisIndicateInitialStateToBinding.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 */

void __fastcall IFBLOCK_DEREFERENCE_MINIPORT_LINK(struct _NDIS_IF_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx

  ndisDereferenceWithTag((ULONG_PTR)a1->MpRefCountTracker, a2);
  if ( a1->MiniportLinkReference-- == 1 )
  {
    Miniport = a1->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
}
