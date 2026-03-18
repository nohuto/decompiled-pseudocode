/*
 * XREFs of DpiFdoInvalidateChildStatus @ 0x1C00C2E54
 * Callers:
 *     DpiFdoInvalidateChildRelations @ 0x1C00C2FD0 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoPollingWorkItem @ 0x1C019C1F0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C00C2C38 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C00EF2B8 (DpiPdoHandleChildConnectionChange.c)
 *     DmmSetTargetForcableState @ 0x1C00F79AC (DmmSetTargetForcableState.c)
 */

__int64 __fastcall DpiFdoInvalidateChildStatus(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        BOOLEAN a7,
        char a8,
        _DWORD *a9,
        __int64 a10)
{
  _DWORD *v10; // r15
  int v11; // ebx
  struct _ERESOURCE *v12; // rsi
  struct _ERESOURCE *v16; // r12
  int IsChildConnected; // eax
  unsigned int v18; // edi
  char v19; // si
  int v21; // eax
  __int64 v22; // r8
  int v23; // [rsp+20h] [rbp-48h]

  v10 = a9;
  v11 = 0;
  v12 = *(struct _ERESOURCE **)(a1 + 64);
  *a9 = 0;
  KeEnterCriticalRegion();
  v16 = v12 + 30;
  ExAcquireResourceExclusiveLite(v12 + 30, 1u);
  IsChildConnected = DpiPdoIsChildConnected(a1, a2, a5, a8, &a9);
  v18 = IsChildConnected;
  if ( IsChildConnected >= 0 )
  {
    if ( IsChildConnected == 1075708975 )
    {
      if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) >= 0 )
      {
        LOBYTE(v22) = 1;
        DmmSetTargetForcableState(v12[35].OwnerEntry.OwnerThread, a2, v22);
        DpiReleaseCoreSyncAccessSafe(a1, 0);
      }
      v18 = 1075708975;
    }
    else
    {
      if ( IsChildConnected == 1075708988 )
      {
        if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) >= 0 )
        {
          DmmSetTargetForcableState(v12[35].OwnerEntry.OwnerThread, a2, 0LL);
          DpiReleaseCoreSyncAccessSafe(a1, 0);
        }
        v18 = 0;
      }
      v19 = (char)a9;
      if ( (a3 != 0) != (_BYTE)a9 || (_BYTE)a9 == 1 && a6 == 1 )
      {
        LOBYTE(v23) = a5;
        v21 = DpiPdoHandleChildConnectionChange(a1, v23, a6, a7, a10);
        v18 = v21;
        if ( v21 >= 0 && v21 != 0x40000000 )
        {
          LOBYTE(v11) = v19 != 1;
          *v10 = v11 + 1;
        }
      }
    }
  }
  ExReleaseResourceLite(v16);
  KeLeaveCriticalRegion();
  return v18;
}
