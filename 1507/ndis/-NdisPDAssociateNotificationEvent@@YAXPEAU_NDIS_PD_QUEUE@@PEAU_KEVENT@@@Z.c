/*
 * XREFs of ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x1C00DE750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 */

void __fastcall NdisPDAssociateNotificationEvent(struct _NDIS_PD_QUEUE *a1, struct _KEVENT *a2)
{
  ULONG_PTR v2; // rbx

  v2 = *((_QWORD *)a1 + 3);
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_qq(0x3Fu, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, a1, a2);
  if ( !*(_BYTE *)(v2 + 68) || *(_BYTE *)(v2 + 69) || *(_QWORD *)(v2 + 72) )
    ndisBugCheckEx(0x23uLL, 2uLL, v2, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 64LL) + 88LL));
  *(_QWORD *)(v2 + 72) = a2;
}
