/*
 * XREFs of ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C006C1E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisPdAwmDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)byte_1C0083724 >= 5u )
    WPP_SF_q(0x21u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, DeferredContext[7]);
  *((_BYTE *)DeferredContext + 70) = 0;
  ndisTriggerPDDrainNotification((ULONG_PTR)DeferredContext);
}
