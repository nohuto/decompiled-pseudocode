/*
 * XREFs of DpiFdoHandleQueryDeviceRelations @ 0x1C00D02D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00AA5F0 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiFdoHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  int v2; // esi
  __int64 v3; // rbx
  int v4; // r15d
  unsigned int v5; // r12d
  char v8; // bp
  unsigned int *Information; // r14
  int v10; // eax
  unsigned int v11; // ebp
  _DWORD *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // r15
  __int64 *v18; // rbp
  unsigned int i; // r13d
  __int64 **v20; // rax
  _QWORD *v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rdx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = 0;
  if ( !a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
  {
    _m_prefetchw((const void *)(v3 + 2292));
    v8 = _InterlockedOr((volatile signed __int32 *)(v3 + 2292), 1u);
    if ( (v8 & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v3 + 483) )
        DpiCheckForOutstandingD3Requests(v3);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
      if ( (v8 & 1) == 0 && *(_DWORD *)(v3 + 236) == 2 && *(_DWORD *)(v3 + 2624) != 1 && *(_DWORD *)(v3 + 284) == 1 )
        DpiFdoInvalidateChildRelations(a1, 0x18u);
      if ( *(_BYTE *)(v3 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
      KeLeaveCriticalRegion();
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v3 + 1976), 1u);
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( Information && *Information )
    {
      v5 = *Information;
      v4 = *Information - 1;
    }
    v10 = *(_DWORD *)(v3 + 2312);
    if ( v10 )
      v4 = v5 + v10 - 1;
    v11 = 8 * v4 + 16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      *v17 = v5 + *(_DWORD *)(v3 + 2312);
      if ( v5 )
        memmove(v17 + 2, Information + 2, 8LL * v5);
      v18 = *(__int64 **)(v3 + 2296);
      for ( i = 0; i < *(_DWORD *)(v3 + 2312); v18 = (__int64 *)*v18 )
      {
        if ( *v18 == *(_QWORD *)(v3 + 2296) )
          break;
        *(_QWORD *)&v17[2 * v5 + 2 + 2 * i] = v18[3];
        ObfReferenceObject((PVOID)v18[3]);
        *((_BYTE *)v18 + 509) = 1;
        ++i;
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v17;
      v20 = (__int64 **)(v3 + 2320);
      while ( *v20 != (__int64 *)v20 )
      {
        v23 = *v20;
        v24 = **v20;
        if ( (__int64 **)(*v20)[1] != v20 || *(__int64 **)(v24 + 8) != v23 )
          __fastfail(3u);
        *v20 = (__int64 *)v24;
        *(_QWORD *)(v24 + 8) = v20;
        *((_BYTE *)v23 + 509) = 0;
      }
    }
    else
    {
      v2 = -1073741801;
      v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
      v22[3] = &DpiFdoHandleQueryDeviceRelations;
      v22[4] = ExAllocatePoolWithTag;
      v22[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v22);
    }
    _InterlockedAnd((volatile signed __int32 *)(v3 + 2292), 0xFFFFFFFE);
    ExReleaseResourceLite((PERESOURCE)(v3 + 1976));
    KeLeaveCriticalRegion();
    if ( v2 < 0 )
    {
      a2->IoStatus.Status = v2;
      IofCompleteRequest(a2, 1);
      return (unsigned int)v2;
    }
    a2->IoStatus.Status = v2;
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v3 + 160), a2);
}
