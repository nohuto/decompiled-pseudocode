/*
 * XREFs of ndisQueuePowerIrp @ 0x1C005FB14
 * Callers:
 *     ndisPowerDispatch @ 0x1C001F570 (ndisPowerDispatch.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qs @ 0x1C005F7E0 (WPP_SF_qs.c)
 */

void __fastcall ndisQueuePowerIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  const char *v5; // r9
  bool v6; // zf
  struct _WORK_QUEUE_ITEM *v7; // rdi

  v2 = *(_QWORD *)(a2 + 184);
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
  {
    v5 = "SET";
    if ( *(_BYTE *)(v2 + 1) != 2 )
      v5 = "QUERY";
    WPP_SF_qs(0x8Du, a2, a1, v5);
  }
  v6 = *(_DWORD *)(v2 + 16) == 1;
  v7 = (struct _WORK_QUEUE_ITEM *)(a1 + 4368);
  if ( !v6 )
    v7 = (struct _WORK_QUEUE_ITEM *)(a1 + 4400);
  v7->Parameter = (void *)a2;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  ndisReferenceMiniportNoCheck(a1, 0xDu);
  ExQueueWorkItem(v7, CriticalWorkQueue);
}
