/*
 * XREFs of DpiGdoDispatchIoctl @ 0x1C00C4D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C2FD0 (DpiFdoInvalidateChildRelations.c)
 *     DmmSetViewState @ 0x1C00C4E68 (DmmSetViewState.c)
 *     DpiGdoHandleVideoParameters @ 0x1C019E6E8 (DpiGdoHandleVideoParameters.c)
 */

__int64 __fastcall DpiGdoDispatchIoctl(__int64 a1, IRP *a2)
{
  ULONG_PTR Information; // rsi
  int v5; // edi
  __int64 v6; // r14
  __int64 v7; // r15
  DWORD LowPart; // ecx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // rax
  _QWORD v14[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v14, 0, sizeof(v14));
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  Information = 0LL;
  v5 = -1073741637;
  v6 = *(_QWORD *)(a1 + 64);
  v14[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v14[3]) = 9;
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 64LL);
  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2293792 )
  {
    v5 = DpiGdoHandleVideoParameters(a1, a2);
LABEL_7:
    Information = a2->IoStatus.Information;
    goto LABEL_8;
  }
  if ( LowPart == 2294924 )
  {
    v5 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( v5 >= 0 )
    {
      DmmSetViewState(*(DXGADAPTER **)(v7 + 3688));
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      v9 = DpiFdoInvalidateChildRelations(*(_QWORD *)(v6 + 32), 0, (__int64)v14);
      v11 = v9;
      if ( v9 < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v13 + 24) = v11;
        WdLogEvent5_WdError(v13);
      }
      v5 = 0;
      goto LABEL_7;
    }
  }
LABEL_8:
  a2->IoStatus.Status = v5;
  a2->IoStatus.Information = Information;
  IofCompleteRequest(a2, 1);
  return (unsigned int)v5;
}
