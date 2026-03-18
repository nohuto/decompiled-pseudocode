/*
 * XREFs of DpiFdoInvalidateChildStatus @ 0x1C00C4CD8
 * Callers:
 *     DpiFdoInvalidateChildRelations @ 0x1C00C4A50 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoPollingWorkItem @ 0x1C016DD50 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C00C4E10 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C00C7510 (DpiPdoHandleChildConnectionChange.c)
 *     DmmSetTargetForcableState @ 0x1C0177308 (DmmSetTargetForcableState.c)
 */

__int64 __fastcall DpiFdoInvalidateChildStatus(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        _DWORD *a9)
{
  _DWORD *v9; // r15
  int v10; // ebx
  __int64 v11; // rsi
  struct _ERESOURCE *v15; // r12
  int v16; // r9d
  int v17; // r8d
  int IsChildConnected; // eax
  unsigned int v19; // edi
  char v20; // si
  int v22; // eax
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-48h]

  v9 = a9;
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 64);
  *a9 = 0;
  KeEnterCriticalRegion();
  v15 = (struct _ERESOURCE *)(v11 + 1936);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 1936), 1u);
  LOBYTE(v16) = a8;
  LOBYTE(v17) = a5;
  IsChildConnected = DpiPdoIsChildConnected(a1, a2, v17, v16, (__int64)&a9);
  v19 = IsChildConnected;
  if ( IsChildConnected >= 0 )
  {
    if ( IsChildConnected == 1075708975 )
    {
      if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) >= 0 )
      {
        LOBYTE(v23) = 1;
        DmmSetTargetForcableState(*(_QWORD *)(v11 + 2504), a2, v23);
        DpiReleaseCoreSyncAccessSafe(a1, 0);
      }
      v19 = 1075708975;
    }
    else
    {
      if ( IsChildConnected == 1075708988 )
      {
        if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) >= 0 )
        {
          DmmSetTargetForcableState(*(_QWORD *)(v11 + 2504), a2, 0LL);
          DpiReleaseCoreSyncAccessSafe(a1, 0);
        }
        v19 = 0;
      }
      v20 = (char)a9;
      if ( (a3 != 0) != (_BYTE)a9 || (_BYTE)a9 == 1 && a6 == 1 )
      {
        LOBYTE(v24) = a5;
        v22 = DpiPdoHandleChildConnectionChange(a1, v24, (PLARGE_INTEGER)a6, a7);
        v19 = v22;
        if ( v22 >= 0 && v22 != 0x40000000 )
        {
          LOBYTE(v10) = v20 != 1;
          *v9 = v10 + 1;
        }
      }
    }
  }
  ExReleaseResourceLite(v15);
  KeLeaveCriticalRegion();
  return v19;
}
