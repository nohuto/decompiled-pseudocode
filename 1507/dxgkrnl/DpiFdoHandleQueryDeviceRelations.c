/*
 * XREFs of DpiFdoHandleQueryDeviceRelations @ 0x1C00DADF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C4A50 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiFdoHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  int v3; // esi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  int v5; // r15d
  unsigned int v6; // r12d
  char v9; // bp
  unsigned int *Information; // r14
  int v11; // eax
  unsigned int v12; // ebp
  _DWORD *PoolWithTag; // rax
  __int64 v14; // rcx
  _DWORD *v15; // r15
  __int64 *v16; // rbp
  unsigned int i; // r13d
  __int64 **v18; // rax
  _QWORD *v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rdx

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  v6 = 0;
  _m_prefetchw((const void *)(v2 + 2252));
  v9 = _InterlockedOr((volatile signed __int32 *)(v2 + 2252), 1u);
  if ( (v9 & 2) == 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 451) )
      DpiCheckForOutstandingD3Requests(v2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (v9 & 1) == 0 && *(_DWORD *)(v2 + 236) == 2 && *(_DWORD *)(v2 + 2584) != 1 && *(_DWORD *)(v2 + 248) == 1 )
      DpiFdoInvalidateChildRelations(a1, 0x18u);
    if ( *(_BYTE *)(v2 + 451) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v2 + 1936), 1u);
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    v3 = -1073741637;
  }
  else
  {
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( Information && *Information )
    {
      v6 = *Information;
      v5 = *Information - 1;
    }
    v11 = *(_DWORD *)(v2 + 2272);
    if ( v11 )
      v5 = v6 + v11 - 1;
    v12 = 8 * v5 + 16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x74727044u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v12);
      *v15 = v6 + *(_DWORD *)(v2 + 2272);
      if ( v6 )
        memmove(v15 + 2, Information + 2, 8LL * v6);
      v16 = *(__int64 **)(v2 + 2256);
      for ( i = 0; i < *(_DWORD *)(v2 + 2272); v16 = (__int64 *)*v16 )
      {
        if ( *v16 == *(_QWORD *)(v2 + 2256) )
          break;
        *(_QWORD *)&v15[2 * v6 + 2 + 2 * i] = v16[3];
        ObfReferenceObject((PVOID)v16[3]);
        *((_BYTE *)v16 + 477) = 1;
        ++i;
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v15;
      v18 = (__int64 **)(v2 + 2280);
      while ( *v18 != (__int64 *)v18 )
      {
        v21 = *v18;
        v22 = **v18;
        if ( (__int64 **)(*v18)[1] != v18 || *(__int64 **)(v22 + 8) != v21 )
          __fastfail(3u);
        *v18 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v18;
        *((_BYTE *)v21 + 477) = 0;
      }
    }
    else
    {
      v3 = -1073741801;
      v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
      v20[3] = &DpiFdoHandleQueryDeviceRelations;
      v20[4] = ExAllocatePoolWithTag;
      v20[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v20);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)(v2 + 2252), 0xFFFFFFFE);
  ExReleaseResourceLite((PERESOURCE)(v2 + 1936));
  KeLeaveCriticalRegion();
  if ( v3 < 0 )
  {
    if ( v3 != -1073741637 )
    {
      a2->IoStatus.Status = v3;
      IofCompleteRequest(a2, 1);
      return (unsigned int)v3;
    }
  }
  else
  {
    a2->IoStatus.Status = v3;
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
}
