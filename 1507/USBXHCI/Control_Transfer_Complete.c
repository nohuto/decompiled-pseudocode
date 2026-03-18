/*
 * XREFs of Control_Transfer_Complete @ 0x1C0021F9C
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1C0022180 (Control_Transfer_CompleteCancelable.c)
 *     Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C0022FA0 (Control_WdfDpcForCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C002071C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     Control_TransferData_Free @ 0x1C0021ECC (Control_TransferData_Free.c)
 *     WPP_RECORDER_SF_DDqdDD @ 0x1C0023DF0 (WPP_RECORDER_SF_DDqdDD.c)
 */

KIRQL __fastcall Control_Transfer_Complete(__int64 a1, __int64 a2)
{
  int UsbdStatusFromTrbCompletionCode; // r8d
  unsigned int v5; // ecx
  __int64 v6; // r9
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // edi
  KIRQL result; // al

  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  v5 = *(_DWORD *)(a2 + 108);
  v6 = *(_QWORD *)(a2 + 32);
  if ( v5 )
  {
    UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(v5, 0xFFFFFFFF);
    *(_DWORD *)(v6 + 4) = UsbdStatusFromTrbCompletionCode;
    if ( UsbdStatusFromTrbCompletionCode > -1073738240 )
    {
      switch ( UsbdStatusFromTrbCompletionCode )
      {
        case -1073737728:
          v9 = -1073741670;
          goto LABEL_32;
        case -1073713152:
          v9 = -1073741810;
          goto LABEL_32;
        case -1073676288:
          v9 = -1073741536;
          goto LABEL_32;
      }
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v9 = 0;
        goto LABEL_32;
      }
    }
    else
    {
      if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
      {
        v9 = -1073741637;
        goto LABEL_32;
      }
      if ( UsbdStatusFromTrbCompletionCode == -2147483136
        || UsbdStatusFromTrbCompletionCode == -2147482880
        || UsbdStatusFromTrbCompletionCode == -2147482112
        || UsbdStatusFromTrbCompletionCode == -1073739264 )
      {
        v9 = -1073741811;
LABEL_32:
        *(_DWORD *)(a2 + 104) = v9;
        goto LABEL_33;
      }
    }
    v9 = -1073741823;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(a2 + 96) == 3 || *(_DWORD *)(a2 + 100) == 3 )
    *(_DWORD *)(a2 + 104) = -1073741536;
  v7 = *(_DWORD *)(a2 + 104);
  switch ( v7 )
  {
    case -1073741810:
      v8 = -1073713152;
      break;
    case -1073741670:
      v8 = -1073737728;
      break;
    case -1073741637:
      v8 = -1073738240;
      break;
    case -1073741536:
      v8 = -1073676288;
      break;
    default:
      v8 = v7 != 0 ? 0x80000300 : 0;
      break;
  }
  *(_DWORD *)(v6 + 4) = v8;
LABEL_33:
  v10 = *(unsigned int *)(a2 + 92);
  v11 = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(v6 + 36) = v10;
  WPP_RECORDER_SF_DDqdDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    UsbdStatusFromTrbCompletionCode,
    v6);
  Control_TransferData_Free(a1, a2);
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *(_QWORD *)(a2 + 24),
    (unsigned int)v11);
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  ++*(_DWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 240) += v10;
  *(_BYTE *)(a1 + 96) = result;
  if ( v11 < 0 )
    ++*(_DWORD *)(a1 + 236);
  return result;
}
