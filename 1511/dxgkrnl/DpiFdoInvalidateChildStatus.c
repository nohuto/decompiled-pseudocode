/*
 * XREFs of DpiFdoInvalidateChildStatus @ 0x1C00AA488
 * Callers:
 *     DpiFdoInvalidateChildRelations @ 0x1C00AA5F0 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoPollingWorkItem @ 0x1C0172580 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C00AA280 (DpiPdoIsChildConnected.c)
 *     DmmSetTargetForcableState @ 0x1C00DBE40 (DmmSetTargetForcableState.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C00E2F00 (DpiPdoHandleChildConnectionChange.c)
 */

__int64 __fastcall DpiFdoInvalidateChildStatus(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        PLARGE_INTEGER a6,
        char a7,
        char a8,
        _DWORD *a9)
{
  _DWORD *v9; // r15
  int v10; // ebx
  struct _ERESOURCE *v11; // rsi
  struct _ERESOURCE *v15; // r12
  int IsChildConnected; // eax
  unsigned int v17; // edi
  char v18; // si
  int v20; // eax
  __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-48h]
  union _LARGE_INTEGER *v23; // [rsp+28h] [rbp-40h]

  v9 = a9;
  v10 = 0;
  v11 = *(struct _ERESOURCE **)(a1 + 64);
  *a9 = 0;
  KeEnterCriticalRegion();
  v15 = v11 + 19;
  ExAcquireResourceExclusiveLite(v11 + 19, 1u);
  IsChildConnected = DpiPdoIsChildConnected(a1, a2, a5, a8, &a9);
  v17 = IsChildConnected;
  if ( IsChildConnected >= 0 )
  {
    if ( IsChildConnected == 1075708975 )
    {
      if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) >= 0 )
      {
        LOBYTE(v21) = 1;
        DmmSetTargetForcableState(v11[24].OwnerEntry.OwnerThread, a2, v21);
        DpiReleaseCoreSyncAccessSafe(a1, 0);
      }
      v17 = 1075708975;
    }
    else
    {
      if ( IsChildConnected == 1075708988 )
      {
        if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) >= 0 )
        {
          DmmSetTargetForcableState(v11[24].OwnerEntry.OwnerThread, a2, 0LL);
          DpiReleaseCoreSyncAccessSafe(a1, 0);
        }
        v17 = 0;
      }
      v18 = (char)a9;
      if ( (a3 != 0) != (_BYTE)a9 || (_BYTE)a9 == 1 && (_BYTE)a6 == 1 )
      {
        LOBYTE(v23) = (_BYTE)a6;
        LOBYTE(v22) = a5;
        v20 = DpiPdoHandleChildConnectionChange(a1, v22, v23, a7);
        v17 = v20;
        if ( v20 >= 0 && v20 != 0x40000000 )
        {
          LOBYTE(v10) = v18 != 1;
          *v9 = v10 + 1;
        }
      }
    }
  }
  ExReleaseResourceLite(v15);
  KeLeaveCriticalRegion();
  return v17;
}
