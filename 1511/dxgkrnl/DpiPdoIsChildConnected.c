/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C00AA280
 * Callers:
 *     DpiFdoInvalidateChildStatus @ 0x1C00AA488 (DpiFdoInvalidateChildStatus.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C0027F48 (DpiSignalVideoOutputCreateCompletion.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00E25D8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00E2694 (DxgkAcquireAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C00E64DC (DpiDxgkDdiQueryChildStatus.c)
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
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _DWORD v22[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-98h]
  _DWORD v24[16]; // [rsp+60h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildStatus) = 0;
  v9 = a1;
  v10 = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v5 + 1976), 1u);
  v12 = *(_QWORD *)(v5 + 1968);
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
        v13 = *(_QWORD *)(v5 + 2544);
        v14 = *(_QWORD *)(v5 + 40);
        v23 = 0LL;
        v22[1] = a2;
        v22[0] = v10 != 0 ? 3 : 1;
        DxgkAcquireAdapterCoreSync(v13, 1);
        KeWaitForSingleObject(*(PVOID *)(v12 + 104), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v5 + 2544), 1LL);
        LOBYTE(v15) = a4;
        ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v14, *(_QWORD *)(v5 + 48), v22, v15);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v5 + 2544));
        KeReleaseMutex(*(PRKMUTEX *)(v12 + 104), 0);
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 2544), 1);
        if ( (int)ChildStatus < 0 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v16);
          v19[3] = DpiPdoIsChildConnected;
          v19[4] = *(_QWORD *)(v14 + 208);
          v19[5] = ChildStatus;
          goto LABEL_25;
        }
        v9 = a1;
        *a5 = v23;
        break;
      case 4:
        if ( *(_DWORD *)v12 != 1 || *(_DWORD *)(v12 + 4) != 15 || (v10 = 1, *(_QWORD *)(v5 + 1896)) )
        {
          if ( a3 )
            goto LABEL_12;
        }
        *a5 = *(_BYTE *)(v12 + 48);
        break;
      default:
        v18 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)(v12 + 16) - 3));
        v18[4] = 0LL;
        v18[5] = 0LL;
        v18[3] = DpiPdoIsChildConnected;
        WdLogEvent5_WdError(v18);
        break;
    }
    if ( !*a5 && *(_BYTE *)(v12 + 28) == 1 )
    {
      KeWaitForSingleObject((PVOID)(v5 + 2080), Executive, 0, 0, 0LL);
      *(_BYTE *)(v12 + 28) = 0;
      KeReleaseMutex((PRKMUTEX)(v5 + 2080), 0);
      DpiSignalVideoOutputCreateCompletion(v9);
    }
    goto LABEL_17;
  }
LABEL_24:
  v19 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v19[4] = 0LL;
  v19[5] = 0LL;
  v19[3] = DpiPdoIsChildConnected;
LABEL_25:
  WdLogEvent5_WdError(v19);
LABEL_17:
  ExReleaseResourceLite((PERESOURCE)(v5 + 1976));
  KeLeaveCriticalRegion();
  memset(v24, 0, sizeof(v24));
  DxgkDiagInitializeCodePointPacket(v24, 38, a2, ChildStatus, (unsigned __int8)*a5);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
  return (unsigned int)ChildStatus;
}
