/*
 * XREFs of Control_Transfer_Complete @ 0x1C00038C0
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1C00035B4 (Control_Transfer_CompleteCancelable.c)
 *     Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C002A1E0 (Control_WdfDpcForCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDD @ 0x1C000D7E0 (WPP_RECORDER_SF_DDqdDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Control_TransferData_Free @ 0x1C0029DE0 (Control_TransferData_Free.c)
 */

KIRQL __fastcall Control_Transfer_Complete(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // edi
  KIRQL result; // al
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // eax

  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  v6 = *(_DWORD *)(a2 + 108);
  v7 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    if ( v6 > 0x14 )
    {
      v20 = v6 - 23;
      if ( !v20 )
      {
        v19 = -1073545216;
        goto LABEL_43;
      }
      v21 = v20 - 3;
      if ( !v21 )
        goto LABEL_27;
      v22 = v21 - 1;
      if ( !v22 )
      {
        v19 = -1073610752;
        goto LABEL_43;
      }
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_27;
      v24 = v23 - 3;
      if ( v24 )
      {
        if ( v24 == 3 )
        {
          v19 = -1073741802;
          goto LABEL_43;
        }
        goto LABEL_39;
      }
    }
    else
    {
      if ( v6 == 20 )
      {
        v19 = -1073741804;
        goto LABEL_43;
      }
      v13 = v6 - 1;
      if ( !v13 )
        goto LABEL_27;
      v14 = v13 - 1;
      if ( !v14 )
      {
        v19 = -1073741805;
        goto LABEL_43;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( !v17 )
          {
            v19 = -1073741820;
            goto LABEL_43;
          }
          v18 = v17 - 4;
          if ( !v18 )
          {
            v19 = -1073741803;
            goto LABEL_43;
          }
          if ( v18 == 3 )
          {
LABEL_27:
            v19 = 0;
LABEL_43:
            *(_DWORD *)(v7 + 4) = v19;
            if ( v19 < 2 )
              v25 = 0;
            else
              v25 = -1073741823;
            *(_DWORD *)(a2 + 104) = v25;
            goto LABEL_5;
          }
        }
LABEL_39:
        v19 = -1073741807;
        goto LABEL_43;
      }
    }
    v19 = -1073741806;
    goto LABEL_43;
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
    v5);
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
