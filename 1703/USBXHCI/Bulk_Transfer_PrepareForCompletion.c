/*
 * XREFs of Bulk_Transfer_PrepareForCompletion @ 0x1C000343C
 * Callers:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0003348 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_RetrieveNextStage @ 0x1C000C460 (Bulk_RetrieveNextStage.c)
 *     Bulk_CompleteTransfers @ 0x1C002A374 (Bulk_CompleteTransfers.c)
 * Callees:
 *     TR_ReleaseDoubleBuffer @ 0x1C0001B5C (TR_ReleaseDoubleBuffer.c)
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C000350C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     WPP_RECORDER_SF_DDDqdD @ 0x1C000CE40 (WPP_RECORDER_SF_DDDqdD.c)
 */

void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2)
{
  int UsbdStatusFromTrbCompletionCode; // eax
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  _QWORD *v7; // rdx
  struct _MDL *v8; // rcx
  int v9; // eax

  *(_DWORD *)(*(_QWORD *)(a2 + 32) + 36LL) = *(_DWORD *)(a2 + 92);
  UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, *(unsigned int *)(a2 + 52));
  *(_DWORD *)(v5 + 4) = UsbdStatusFromTrbCompletionCode;
  if ( UsbdStatusFromTrbCompletionCode <= -1073738240 )
  {
    if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
    {
      v9 = -1073741637;
      goto LABEL_3;
    }
    if ( UsbdStatusFromTrbCompletionCode == -2147483136
      || UsbdStatusFromTrbCompletionCode == -2147482880
      || UsbdStatusFromTrbCompletionCode == -2147482112
      || UsbdStatusFromTrbCompletionCode == -1073739264 )
    {
      v9 = -1073741811;
      goto LABEL_3;
    }
LABEL_21:
    v9 = -1073741823;
    goto LABEL_3;
  }
  switch ( UsbdStatusFromTrbCompletionCode )
  {
    case -1073737728:
      v9 = -1073741670;
      break;
    case -1073713152:
      v9 = -1073741810;
      break;
    case -1073676288:
      v9 = -1073741536;
      break;
    default:
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v9 = 0;
        break;
      }
      goto LABEL_21;
  }
LABEL_3:
  *(_DWORD *)(a2 + 56) = v9;
  ++*(_DWORD *)(v6 + 232);
  *(_QWORD *)(v6 + 240) += *(unsigned int *)(a2 + 92);
  if ( *(int *)(a2 + 56) < 0 )
    ++*(_DWORD *)(v6 + 236);
  WPP_RECORDER_SF_DDDqdD(
    *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL),
    v4,
    v5);
  v7 = *(_QWORD **)(a2 + 80);
  if ( v7 )
  {
    TR_ReleaseDoubleBuffer(*(_QWORD *)(a2 + 40), v7);
    *(_QWORD *)(a2 + 80) = 0LL;
  }
  v8 = *(struct _MDL **)(a2 + 64);
  if ( v8
    && v8 != *(struct _MDL **)(*(_QWORD *)(a2 + 32) + 48LL)
    && v8 != *(struct _MDL **)(*(_QWORD *)(a2 + 40) + 112LL) )
  {
    IoFreeMdl(v8);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  *(_BYTE *)(a2 + 16) = 0;
}
