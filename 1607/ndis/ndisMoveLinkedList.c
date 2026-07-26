/*
 * XREFs of ndisMoveLinkedList @ 0x1C006B980
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006A990 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisRequestPowerResume @ 0x1C006BDD8 (ndisRequestPowerResume.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006C3CC (ndisSelectiveSuspendResumeOperations.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C006D120 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisMoveLinkedList(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  if ( *(_QWORD *)a2 == a2 )
  {
    a1[1] = a1;
    *a1 = a1;
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    *(_QWORD *)(*a1 + 8LL) = a1;
    result = (_QWORD *)a1[1];
    *result = a1;
  }
  return result;
}
