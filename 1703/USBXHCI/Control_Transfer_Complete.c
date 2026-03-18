/*
 * XREFs of Control_Transfer_Complete @ 0x1C0003AB4
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1C0003794 (Control_Transfer_CompleteCancelable.c)
 *     Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C00267E0 (Control_WdfDpcForCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C000350C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     WPP_RECORDER_SF_DDqdDD @ 0x1C000E544 (WPP_RECORDER_SF_DDqdDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Control_TransferData_Free @ 0x1C00263D4 (Control_TransferData_Free.c)
 */

KIRQL __fastcall Control_Transfer_Complete(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int UsbdStatusFromTrbCompletionCode; // r9d
  unsigned int v6; // edx
  __int64 v7; // r10
  __int64 v8; // rbx
  int v9; // edi
  KIRQL result; // al
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax

  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  v6 = *(_DWORD *)(a2 + 108);
  v7 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, v6, 0xFFFFFFFF);
    *(_DWORD *)(v7 + 4) = UsbdStatusFromTrbCompletionCode;
    if ( UsbdStatusFromTrbCompletionCode > -1073738240 )
    {
      switch ( UsbdStatusFromTrbCompletionCode )
      {
        case -1073737728:
          v13 = -1073741670;
          goto LABEL_35;
        case -1073713152:
          v13 = -1073741810;
          goto LABEL_35;
        case -1073676288:
          v13 = -1073741536;
          goto LABEL_35;
      }
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v13 = 0;
        goto LABEL_35;
      }
    }
    else
    {
      if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
      {
        v13 = -1073741637;
        goto LABEL_35;
      }
      if ( UsbdStatusFromTrbCompletionCode == -2147483136
        || UsbdStatusFromTrbCompletionCode == -2147482880
        || UsbdStatusFromTrbCompletionCode == -2147482112
        || UsbdStatusFromTrbCompletionCode == -1073739264 )
      {
        v13 = -1073741811;
LABEL_35:
        *(_DWORD *)(a2 + 104) = v13;
        goto LABEL_5;
      }
    }
    v13 = -1073741823;
    goto LABEL_35;
  }
  if ( *(_DWORD *)(a2 + 96) == 3 || *(_DWORD *)(a2 + 100) == 3 )
    *(_DWORD *)(a2 + 104) = -1073741536;
  v11 = *(_DWORD *)(a2 + 104);
  switch ( v11 )
  {
    case -1073741810:
      v12 = -1073713152;
      break;
    case -1073741670:
      v12 = -1073737728;
      break;
    case -1073741637:
      v12 = -1073738240;
      break;
    case -1073741536:
      v12 = -1073676288;
      break;
    default:
      v12 = v11 != 0 ? 0x80000300 : 0;
      break;
  }
  *(_DWORD *)(v7 + 4) = v12;
LABEL_5:
  v8 = *(unsigned int *)(a2 + 92);
  v9 = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(v7 + 36) = v8;
  WPP_RECORDER_SF_DDqdDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v4,
    UsbdStatusFromTrbCompletionCode);
  Control_TransferData_Free(a1, a2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 24),
    (unsigned int)v9);
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  ++*(_DWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 240) += v8;
  *(_BYTE *)(a1 + 96) = result;
  if ( v9 < 0 )
    ++*(_DWORD *)(a1 + 236);
  return result;
}
