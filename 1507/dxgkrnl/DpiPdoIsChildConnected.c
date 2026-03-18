/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C00C4E10
 * Callers:
 *     DpiFdoInvalidateChildStatus @ 0x1C00C4CD8 (DpiFdoInvalidateChildStatus.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C0028388 (DpiSignalVideoOutputCreateCompletion.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00BBA54 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C00C5018 (DpiDxgkDdiQueryChildStatus.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, _BYTE *a5)
{
  __int64 v5; // rbx
  __int64 ChildStatus; // rbp
  __int64 v9; // r13
  char v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _DWORD v25[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-98h]
  _DWORD v27[16]; // [rsp+60h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildStatus) = 0;
  v9 = a1;
  v10 = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v5 + 1936), 1u);
  v12 = *(_QWORD *)(v5 + 1928);
  if ( v12 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)v12 )
        goto LABEL_24;
      if ( *(_DWORD *)(v12 + 24) == a2 )
        break;
      v12 += 120LL;
      if ( !v12 )
        goto LABEL_24;
    }
    switch ( *(_DWORD *)(v12 + 16) )
    {
      case 1:
        *a5 = 1;
        break;
      case 3:
LABEL_12:
        v13 = *(_QWORD *)(v5 + 2504);
        v14 = *(_QWORD *)(v5 + 40);
        v26 = 0LL;
        v25[1] = a2;
        v25[0] = v10 != 0 ? 3 : 1;
        DxgkAcquireAdapterCoreSync(v13, 1);
        KeWaitForSingleObject(*(PVOID *)(v12 + 104), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v5 + 2504), 1);
        LOBYTE(v15) = a4;
        ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v14, *(_QWORD *)(v5 + 48), v25, v15);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v5 + 2504));
        KeReleaseMutex(*(PRKMUTEX *)(v12 + 104), 0);
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 2504));
        if ( (int)ChildStatus < 0 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdError(v16);
          v22[3] = DpiPdoIsChildConnected;
          v22[4] = *(_QWORD *)(v14 + 208);
          v22[5] = ChildStatus;
          goto LABEL_25;
        }
        v9 = a1;
        *a5 = v26;
        break;
      case 4:
        if ( *(_DWORD *)v12 != 1 || *(_DWORD *)(v12 + 4) != 15 || (v10 = 1, *(_QWORD *)(v5 + 1856)) )
        {
          if ( a3 )
            goto LABEL_12;
        }
        *a5 = *(_BYTE *)(v12 + 48);
        break;
      default:
        v21 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)(v12 + 16) - 3));
        v21[4] = 0LL;
        v21[5] = 0LL;
        v21[3] = DpiPdoIsChildConnected;
        WdLogEvent5_WdError(v21);
        break;
    }
    if ( !*a5 && *(_BYTE *)(v12 + 28) == 1 )
    {
      KeWaitForSingleObject((PVOID)(v5 + 2040), Executive, 0, 0, 0LL);
      *(_BYTE *)(v12 + 28) = 0;
      KeReleaseMutex((PRKMUTEX)(v5 + 2040), 0);
      DpiSignalVideoOutputCreateCompletion(v9);
    }
    goto LABEL_17;
  }
LABEL_24:
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v22[4] = 0LL;
  v22[5] = 0LL;
  v22[3] = DpiPdoIsChildConnected;
LABEL_25:
  WdLogEvent5_WdError(v22);
LABEL_17:
  ExReleaseResourceLite((PERESOURCE)(v5 + 1936));
  KeLeaveCriticalRegion();
  memset(v27, 0, sizeof(v27));
  DxgkDiagInitializeCodePointPacket(v27, 38, a2, ChildStatus, (unsigned __int8)*a5);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v27, v17, v18, v19);
  return (unsigned int)ChildStatus;
}
