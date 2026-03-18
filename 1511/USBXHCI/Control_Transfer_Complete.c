/*
 * XREFs of Control_Transfer_Complete @ 0x1C0001E8C
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1C0001D4C (Control_Transfer_CompleteCancelable.c)
 *     Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C0029BC0 (Control_WdfDpcForCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDD @ 0x1C000C08C (WPP_RECORDER_SF_DDqdDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Control_TransferData_Free @ 0x1C00297C0 (Control_TransferData_Free.c)
 */

KIRQL __fastcall Control_Transfer_Complete(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  int v24; // edi
  KIRQL result; // al

  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  v6 = *(_DWORD *)(a2 + 108);
  v7 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    if ( v6 > 0x14 )
    {
      v17 = v6 - 23;
      if ( !v17 )
      {
        v16 = -1073545216;
        goto LABEL_40;
      }
      v18 = v17 - 3;
      if ( !v18 )
        goto LABEL_24;
      v19 = v18 - 1;
      if ( !v19 )
      {
        v16 = -1073610752;
        goto LABEL_40;
      }
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_24;
      v21 = v20 - 3;
      if ( v21 )
      {
        if ( v21 == 3 )
        {
          v16 = -1073741802;
          goto LABEL_40;
        }
        goto LABEL_35;
      }
    }
    else
    {
      if ( v6 == 20 )
      {
        v16 = -1073741804;
        goto LABEL_40;
      }
      v10 = v6 - 1;
      if ( !v10 )
        goto LABEL_24;
      v11 = v10 - 1;
      if ( !v11 )
      {
        v16 = -1073741805;
        goto LABEL_40;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 2;
          if ( !v14 )
          {
            v16 = -1073741820;
            goto LABEL_40;
          }
          v15 = v14 - 4;
          if ( !v15 )
          {
            v16 = -1073741803;
            goto LABEL_40;
          }
          if ( v15 == 3 )
          {
LABEL_24:
            v16 = 0;
LABEL_40:
            *(_DWORD *)(v7 + 4) = v16;
            if ( v16 < 2 )
              v22 = 0;
            else
              v22 = -1073741823;
            *(_DWORD *)(a2 + 104) = v22;
            goto LABEL_44;
          }
        }
LABEL_35:
        v16 = -1073741807;
        goto LABEL_40;
      }
    }
    v16 = -1073741806;
    goto LABEL_40;
  }
  if ( *(_DWORD *)(a2 + 96) == 3 || *(_DWORD *)(a2 + 100) == 3 )
    *(_DWORD *)(a2 + 104) = -1073741536;
  v8 = *(_DWORD *)(a2 + 104);
  switch ( v8 )
  {
    case -1073741810:
      v9 = -1073713152;
      break;
    case -1073741670:
      v9 = -1073737728;
      break;
    case -1073741637:
      v9 = -1073738240;
      break;
    case -1073741536:
      v9 = -1073676288;
      break;
    default:
      v9 = v8 != 0 ? 0x80000300 : 0;
      break;
  }
  *(_DWORD *)(v7 + 4) = v9;
LABEL_44:
  v23 = *(unsigned int *)(a2 + 92);
  v24 = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(v7 + 36) = v23;
  WPP_RECORDER_SF_DDqdDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v4,
    v5);
  Control_TransferData_Free(a1, a2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 24),
    (unsigned int)v24);
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  ++*(_DWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 240) += v23;
  *(_BYTE *)(a1 + 96) = result;
  if ( v24 < 0 )
    ++*(_DWORD *)(a1 + 236);
  return result;
}
