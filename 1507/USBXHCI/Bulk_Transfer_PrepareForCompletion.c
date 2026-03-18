/*
 * XREFs of Bulk_Transfer_PrepareForCompletion @ 0x1C002CE00
 * Callers:
 *     Bulk_Transfer_Complete @ 0x1C002CC38 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C002CC70 (Bulk_Transfer_CompleteCancelable.c)
 * Callees:
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C002071C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C0020958 (TR_ReleaseDoubleBuffer.c)
 *     WPP_RECORDER_SF_DDDqdD @ 0x1C002E040 (WPP_RECORDER_SF_DDDqdD.c)
 */

void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  int UsbdStatusFromTrbCompletionCode; // eax
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // eax
  _QWORD *v9; // rdx
  struct _MDL *v10; // rcx

  *(_DWORD *)(*(_QWORD *)(a2 + 32) + 36LL) = *(_DWORD *)(a2 + 92);
  UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(*(_DWORD *)(a2 + 52), a3);
  *(_DWORD *)(v6 + 4) = UsbdStatusFromTrbCompletionCode;
  if ( UsbdStatusFromTrbCompletionCode <= -1073738240 )
  {
    if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
    {
      v8 = -1073741637;
      goto LABEL_18;
    }
    if ( UsbdStatusFromTrbCompletionCode == -2147483136
      || UsbdStatusFromTrbCompletionCode == -2147482880
      || UsbdStatusFromTrbCompletionCode == -2147482112
      || UsbdStatusFromTrbCompletionCode == -1073739264 )
    {
      v8 = -1073741811;
      goto LABEL_18;
    }
LABEL_14:
    v8 = -1073741823;
    goto LABEL_18;
  }
  switch ( UsbdStatusFromTrbCompletionCode )
  {
    case -1073737728:
      v8 = -1073741670;
      break;
    case -1073713152:
      v8 = -1073741810;
      break;
    case -1073676288:
      v8 = -1073741536;
      break;
    default:
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v8 = 0;
        break;
      }
      goto LABEL_14;
  }
LABEL_18:
  *(_DWORD *)(a2 + 56) = v8;
  ++*(_DWORD *)(v7 + 232);
  *(_QWORD *)(v7 + 240) += *(unsigned int *)(a2 + 92);
  if ( *(int *)(a2 + 56) < 0 )
    ++*(_DWORD *)(v7 + 236);
  WPP_RECORDER_SF_DDDqdD(
    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL),
    v5,
    v6);
  v9 = *(_QWORD **)(a2 + 80);
  if ( v9 )
  {
    TR_ReleaseDoubleBuffer(*(_QWORD *)(a2 + 40), v9);
    *(_QWORD *)(a2 + 80) = 0LL;
  }
  v10 = *(struct _MDL **)(a2 + 64);
  if ( v10
    && v10 != *(struct _MDL **)(*(_QWORD *)(a2 + 32) + 48LL)
    && v10 != *(struct _MDL **)(*(_QWORD *)(a2 + 40) + 112LL) )
  {
    IoFreeMdl(v10);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  *(_BYTE *)(a2 + 16) = 0;
}
