/*
 * XREFs of DpiFdoHandleQueryDeviceRelations @ 0x1C00F8690
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C2FD0 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiFdoHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  int v4; // esi
  int v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
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
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rdx
  _QWORD v23[8]; // [rsp+20h] [rbp-88h] BYREF

  memset(v23, 0, sizeof(v23));
  EtwActivityIdControl(3u, (LPGUID)&v23[1]);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v23[7] = MEMORY[0xFFFFF78000000014];
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LODWORD(v23[3]) = 6;
  if ( !CurrentStackLocation->Parameters.Read.Length )
  {
    _m_prefetchw((const void *)(v7 + 3436));
    v9 = _InterlockedOr((volatile signed __int32 *)(v7 + 3436), 1u);
    if ( (v9 & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 483) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( (v9 & 1) == 0 && *(_DWORD *)(v7 + 236) == 2 && *(_DWORD *)(v7 + 3768) != 1 && *(_DWORD *)(v7 + 284) == 1 )
        DpiFdoInvalidateChildRelations(a1, 0x18u, (__int64)v23);
      if ( *(_BYTE *)(v7 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
      KeLeaveCriticalRegion();
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3120), 1u);
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( Information && *Information )
    {
      v6 = *Information;
      v5 = *Information - 1;
    }
    v11 = *(_DWORD *)(v7 + 3456);
    if ( v11 )
      v5 = v6 + v11 - 1;
    v12 = 8 * v5 + 16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x74727044u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v12);
      *v15 = v6 + *(_DWORD *)(v7 + 3456);
      if ( v6 )
        memmove(v15 + 2, Information + 2, 8LL * v6);
      v16 = *(__int64 **)(v7 + 3440);
      for ( i = 0; i < *(_DWORD *)(v7 + 3456); v16 = (__int64 *)*v16 )
      {
        if ( *v16 == *(_QWORD *)(v7 + 3440) )
          break;
        *(_QWORD *)&v15[2 * v6 + 2 + 2 * i] = v16[3];
        ObfReferenceObject((PVOID)v16[3]);
        *((_BYTE *)v16 + 509) = 1;
        ++i;
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v15;
      v18 = (__int64 **)(v7 + 3464);
      while ( *v18 != (__int64 *)v18 )
      {
        v21 = *v18;
        v22 = **v18;
        if ( (__int64 **)(*v18)[1] != v18 || *(__int64 **)(v22 + 8) != v21 )
          __fastfail(3u);
        *v18 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v18;
        *((_BYTE *)v21 + 509) = 0;
      }
    }
    else
    {
      v4 = -1073741801;
      v20 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v20 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v20);
    }
    _InterlockedAnd((volatile signed __int32 *)(v7 + 3436), 0xFFFFFFFE);
    ExReleaseResourceLite((PERESOURCE)(v7 + 3120));
    KeLeaveCriticalRegion();
    if ( v4 < 0 )
    {
      a2->IoStatus.Status = v4;
      IofCompleteRequest(a2, 1);
      return (unsigned int)v4;
    }
    a2->IoStatus.Status = v4;
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 160), a2);
}
