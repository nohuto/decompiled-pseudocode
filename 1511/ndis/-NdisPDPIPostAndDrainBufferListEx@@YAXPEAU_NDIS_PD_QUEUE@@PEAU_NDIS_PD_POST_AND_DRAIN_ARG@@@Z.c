/*
 * XREFs of ?NdisPDPIPostAndDrainBufferListEx@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_NDIS_PD_POST_AND_DRAIN_ARG@@@Z @ 0x1C006B620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisPDPIPostAndDrainBufferListEx(struct _NDIS_PD_QUEUE *a1, struct _NDIS_PD_POST_AND_DRAIN_ARG *a2)
{
  (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *, struct _NDIS_PD_POST_AND_DRAIN_ARG *))(*((_QWORD *)a1 + 2) + 32LL))(
    a1,
    a2);
}
