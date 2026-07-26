/*
 * XREFs of NdisMTriggerPDDrainNotification @ 0x1C00713C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C0070EB4 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     WPP_SF_qS @ 0x1C0071540 (WPP_SF_qS_ea_1C0071540.c)
 */

void __fastcall NdisMTriggerPDDrainNotification(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  char v3; // di
  const wchar_t *v4; // r9

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2;
  if ( (unsigned __int8)byte_1C00895E4 >= 5u )
  {
    v4 = L"ISR";
    if ( !(_BYTE)a2 )
      v4 = L" ";
    WPP_SF_qS(a1, a2, *(_QWORD *)(v2 + 56), v4);
  }
  if ( v3 )
  {
    if ( *(_BYTE *)(v2 + 70) )
      ndisBugCheckEx(0x23uLL, 4uLL, v2, *(_QWORD *)(*(_QWORD *)(v2 + 40) + 56LL));
    *(_BYTE *)(v2 + 70) = 1;
    KeInsertQueueDpc((PRKDPC)(v2 + 96), 0LL, 0LL);
  }
  else
  {
    ndisTriggerPDDrainNotification(v2);
  }
}
