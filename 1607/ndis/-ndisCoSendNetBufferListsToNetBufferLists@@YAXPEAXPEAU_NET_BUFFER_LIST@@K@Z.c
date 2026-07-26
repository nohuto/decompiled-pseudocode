/*
 * XREFs of ?ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0025B00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0025B7C (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 */

void __fastcall ndisCoSendNetBufferListsToNetBufferLists(_QWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  unsigned int v7; // ecx
  struct _NET_BUFFER_LIST *Alignment; // rax

  v5 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
  if ( v5->PmodeOpens )
  {
    v7 = 0;
    Alignment = a2;
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      ++v7;
    }
    while ( Alignment );
    ndisCoIndicatePromiscNetBuffer(a1, v5, v5->OpenQueue, a2, v7, a3, 0);
  }
  ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))a1[30])(a1[25], a2, a3);
}
