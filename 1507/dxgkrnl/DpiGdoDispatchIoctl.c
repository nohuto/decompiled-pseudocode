/*
 * XREFs of DpiGdoDispatchIoctl @ 0x1C00C4970
 * Callers:
 *     <none>
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C4A50 (DpiFdoInvalidateChildRelations.c)
 *     DmmSetViewState @ 0x1C00C50C0 (DmmSetViewState.c)
 *     DpiGdoHandleVideoParameters @ 0x1C0170500 (DpiGdoHandleVideoParameters.c)
 */

__int64 __fastcall DpiGdoDispatchIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // r14
  ULONG_PTR Information; // rsi
  int v6; // edi
  __int64 v7; // r15
  DWORD LowPart; // edx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v13; // rax

  v2 = *(_QWORD *)(a1 + 64);
  Information = 0LL;
  v6 = -1073741637;
  v7 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2293792 )
  {
    v6 = DpiGdoHandleVideoParameters(a1, a2);
LABEL_7:
    Information = a2->IoStatus.Information;
    goto LABEL_8;
  }
  if ( LowPart == 2294924 )
  {
    v6 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( v6 >= 0 )
    {
      DmmSetViewState(*(DXGADAPTER **)(v7 + 2504));
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      v9 = DpiFdoInvalidateChildRelations(*(_QWORD *)(v2 + 32), 0LL);
      v11 = v9;
      if ( v9 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v10);
        v13[3] = DpiGdoDispatchGdiPnp;
        v13[4] = DpiFdoInvalidateChildRelations;
        v13[5] = v11;
        WdLogEvent5_WdError(v13);
      }
      v6 = 0;
      goto LABEL_7;
    }
  }
LABEL_8:
  a2->IoStatus.Status = v6;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)v6;
}
