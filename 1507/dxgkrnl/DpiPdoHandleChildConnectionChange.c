/*
 * XREFs of DpiPdoHandleChildConnectionChange @ 0x1C00C7510
 * Callers:
 *     DpiPdoHandleStatusIndication @ 0x1C00288B0 (DpiPdoHandleStatusIndication.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C00C4CD8 (DpiFdoInvalidateChildStatus.c)
 * Callees:
 *     DpiPdoAddPdo @ 0x1C00C75F0 (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x1C016DFB0 (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoHandleChildConnectionChange(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        char a5,
        PLARGE_INTEGER a6,
        char a7)
{
  __int64 v7; // rbx
  struct _ERESOURCE *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v20; // rax
  _QWORD *v21; // rax
  union _LARGE_INTEGER *Timeout; // [rsp+20h] [rbp-28h]

  v7 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  v12 = (struct _ERESOURCE *)(v7 + 1936);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 1936), 1u);
  v16 = *(_QWORD *)(v7 + 1928);
  if ( v16 )
  {
    if ( !*(_DWORD *)v16 )
      goto LABEL_13;
    do
    {
      if ( *(_DWORD *)(v16 + 24) == a2 )
        break;
      v16 += 120LL;
    }
    while ( *(_DWORD *)v16 );
    if ( *(_DWORD *)v16 )
    {
      _InterlockedOr((volatile signed __int32 *)(v7 + 2252), 4u);
      *(_BYTE *)(v16 + 48) = a4;
      if ( a4 == 1 )
      {
        LOBYTE(v15) = a5;
        LOBYTE(Timeout) = (_BYTE)a6;
        v17 = DpiPdoAddPdo(a1, v16, a3, v15, Timeout, a7);
      }
      else
      {
        v17 = DpiPdoRemovePdo(a1);
      }
      v18 = v17;
    }
    else
    {
LABEL_13:
      v18 = -1073741810;
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v21[4] = 0LL;
      v21[3] = DpiPdoHandleChildConnectionChange;
      v21[5] = -1073741810LL;
      WdLogEvent5_WdError(v21);
    }
  }
  else
  {
    v18 = -1073741811;
    v20 = WdLogNewEntry5_WdWarning(v13, 0LL, v14, v15);
    *(_QWORD *)(v20 + 24) = DpiPdoHandleChildConnectionChange;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
  }
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegion();
  return v18;
}
