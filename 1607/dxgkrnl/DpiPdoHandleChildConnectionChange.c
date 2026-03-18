/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1C00EF2B8
 * Callers:
 *     DpiPdoHandleStatusIndication @ 0x1C002F8D0 (DpiPdoHandleStatusIndication.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C00C2E54 (DpiFdoInvalidateChildStatus.c)
 * Callees:
 *     DpiPdoAddPdo @ 0x1C00EF39C (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x1C019C49C (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6,
        BOOLEAN a7,
        __int64 a8)
{
  __int64 v8; // rbx
  struct _ERESOURCE *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  __int64 v21; // rax
  __int64 v22; // rax

  v8 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  v13 = (struct _ERESOURCE *)(v8 + 3120);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v8 + 3120), 1u);
  v17 = *(_QWORD *)(v8 + 3112);
  if ( v17 )
  {
    if ( !*(_DWORD *)v17 )
      goto LABEL_13;
    do
    {
      if ( *(_DWORD *)(v17 + 24) == a2 )
        break;
      v17 += 120LL;
    }
    while ( *(_DWORD *)v17 );
    if ( *(_DWORD *)v17 )
    {
      _InterlockedOr((volatile signed __int32 *)(v8 + 3436), 4u);
      *(_BYTE *)(v17 + 48) = a4;
      if ( a4 == 1 )
      {
        LOBYTE(v16) = a5;
        v18 = DpiPdoAddPdo(a1, v17, a3, v16, a6, a7, a8);
      }
      else
      {
        v18 = DpiPdoRemovePdo(a1, v17, a8);
      }
      v19 = v18;
    }
    else
    {
LABEL_13:
      v19 = -1073741810;
      v22 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v22 + 24) = -1073741810LL;
      WdLogEvent5_WdError(v22);
    }
  }
  else
  {
    v19 = -1073741811;
    v21 = WdLogNewEntry5_WdWarning(v14, 0LL, v15, v16);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
  }
  ExReleaseResourceLite(v13);
  KeLeaveCriticalRegion();
  return v19;
}
