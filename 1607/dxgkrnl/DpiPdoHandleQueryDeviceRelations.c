/*
 * XREFs of DpiPdoHandleQueryDeviceRelations @ 0x1C00D85F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceRelations(_QWORD *Object, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // ecx
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  unsigned int v9; // edi
  __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD *v14; // r14
  unsigned int i; // ebp
  __int64 v16; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(Object[8] + 32LL) + 64LL);
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v5 == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = Object;
      ObfReferenceObject(Object);
      v9 = 0;
      *(_QWORD *)(a2 + 56) = v8;
      return v9;
    }
LABEL_7:
    v9 = -1073741801;
    v11 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v11 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v11);
    return v9;
  }
  if ( v5 != 2 )
    return *(unsigned int *)(a2 + 48);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 483) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  v12 = *(_DWORD *)(v4 + 236);
  if ( v12 != 2 && (*(_DWORD *)(v4 + 240) != 2 || ((v12 - 3) & 0xFFFFFFFC) != 0 || v12 == 4)
    || (v13 = *(_DWORD *)(v4 + 2600), v13 < 2) )
  {
    v9 = *(_DWORD *)(a2 + 48);
  }
  else
  {
    v14 = ExAllocatePoolWithTag(PagedPool, 8LL * (v13 - 2) + 16, 0x74727044u);
    if ( !v14 )
      goto LABEL_7;
    for ( i = 1; i < *(_DWORD *)(v4 + 2600); ++i )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2592) + 8LL * i) + 64LL);
      *(_QWORD *)&v14[2 * i] = *(_QWORD *)(v16 + 152);
      ObfReferenceObject(*(PVOID *)(v16 + 152));
    }
    v9 = 0;
    *v14 = i - 1;
    *(_QWORD *)(a2 + 56) = v14;
  }
  if ( *(_BYTE *)(v4 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return v9;
}
