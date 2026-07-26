/*
 * XREFs of ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0070E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisPdAwmDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)byte_1C00895E4 >= 5u )
    WPP_SF_q(0x21u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, DeferredContext[7]);
  *((_BYTE *)DeferredContext + 70) = 0;
  ndisTriggerPDDrainNotification((ULONG_PTR)DeferredContext);
}
