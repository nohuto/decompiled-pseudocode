/*
 * XREFs of ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C006CDB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisPdAwmDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)byte_1C0085324 >= 5u )
    WPP_SF_q(0x21u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, DeferredContext[7]);
  *((_BYTE *)DeferredContext + 70) = 0;
  ndisTriggerPDDrainNotification((ULONG_PTR)DeferredContext);
}
