/*
 * XREFs of ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C0070EB4
 * Callers:
 *     ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0070E30 (-ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     NdisMTriggerPDDrainNotification @ 0x1C00713C0 (NdisMTriggerPDDrainNotification.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 */

void __fastcall ndisTriggerPDDrainNotification(ULONG_PTR BugCheckParameter3)
{
  if ( _InterlockedExchange((volatile __int32 *)(BugCheckParameter3 + 64), 0) != 1 )
    ndisBugCheckEx(0x23uLL, 3uLL, BugCheckParameter3, *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 40) + 56LL));
  if ( (unsigned __int8)byte_1C00895E4 >= 5u )
    WPP_SF_q(0x1Fu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, *(_QWORD *)(BugCheckParameter3 + 56));
  KeSetEvent(*(PRKEVENT *)(BugCheckParameter3 + 72), 2, 0);
}
