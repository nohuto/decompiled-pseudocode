/*
 * XREFs of DpiEnterSystemDisplay @ 0x1C000D830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0007A0C (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiEnterSystemDisplay(char a1, __int64 a2, _QWORD *a3)
{
  _DWORD *v3; // rbp
  __int64 v6; // rdi
  int v7; // eax
  int v8; // ecx
  unsigned int i; // r13d
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  ADAPTER_DISPLAY *v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rcx
  int (__fastcall *v18)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *); // rax
  int v19; // edx
  _BYTE v20[32]; // [rsp+A0h] [rbp+A0h] BYREF
  _QWORD *v21; // [rsp+100h] [rbp+100h]

  v21 = a3;
  v3 = (_DWORD *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL);
  v3[1] = -1;
  *v3 = 3;
  v3[3] = 0;
  v6 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  if ( byte_1C0046FD0 )
  {
    v7 = 640;
    *(_DWORD *)(a2 + 16) = 5;
    v8 = 480;
LABEL_4:
    *(_WORD *)a2 = 0;
    *(_QWORD *)(a2 + 32) = DpiSystemDisplayWrite;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_DWORD *)(a2 + 8) = v7;
    *(_DWORD *)(a2 + 4) = v8;
    *(_DWORD *)(a2 + 12) = v7;
    if ( a3 )
      *a3 = DpiLeaveSystemDisplay;
    return 0LL;
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  for ( i = 0; i < 4; ++i )
  {
    v11 = qword_1C0046CF8;
    if ( *(_QWORD *)v11 == v11 )
      continue;
    while ( *(_DWORD *)(v11 + 28) < 0x3004u || !*(_QWORD *)(v11 + 744) )
    {
LABEL_63:
      v11 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 == qword_1C0046CF8 )
        goto LABEL_47;
    }
    if ( !a1 )
      KeWaitForSingleObject((PVOID)(v11 + 72), Executive, 0, 0, 0LL);
    v12 = *(_QWORD *)(v11 + 56);
    if ( *(_QWORD *)v12 == v12 )
      goto LABEL_61;
    do
    {
      if ( *(_DWORD *)(v12 + 16) != 1953656900
        || *(_DWORD *)(v12 + 20) != 2
        || i == 3 && *(_BYTE *)(v12 + 1091) && *(_BYTE *)(v12 + 480) )
      {
        goto LABEL_39;
      }
      v6 = v12;
      if ( !a1 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v12 + 483) )
          DpiCheckForOutstandingD3Requests(v12);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 168), 1u);
      }
      if ( (*(_BYTE *)(v12 + 2552) & 4) == 0 )
        goto LABEL_34;
      if ( !a1 )
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v12 + 2544), 2LL);
      v13 = *(_QWORD *)(v12 + 2544);
      if ( v13 )
      {
        v14 = *(ADAPTER_DISPLAY **)(v13 + 1984);
        if ( v14 )
        {
          ADAPTER_DISPLAY::GetPrimaryPath(
            v14,
            v3 + 6,
            v3 + 1,
            (enum _DXGK_PRIMARY_TARGET_TYPE *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL));
          if ( *v3 == i )
            break;
        }
      }
      if ( !a1 )
      {
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v12 + 2544), 2LL);
LABEL_34:
        if ( !a1 )
        {
          if ( *(_BYTE *)(v12 + 483) )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 64LL) + 2720LL));
          ExReleaseResourceLite(*(PERESOURCE *)(v12 + 168));
          KeLeaveCriticalRegion();
        }
      }
      v6 = 0LL;
LABEL_39:
      v12 = *(_QWORD *)v12;
    }
    while ( *(_QWORD *)v12 != *(_QWORD *)(v11 + 56) );
    if ( !v6 )
    {
LABEL_61:
      if ( !a1 )
        KeReleaseMutex((PRKMUTEX)(v11 + 72), 0);
      goto LABEL_63;
    }
    v15 = *(_DWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v11 + 744))(
           *(_QWORD *)(v6 + 48),
           v15,
           v3 + 3,
           v3 + 4,
           v3 + 5,
           v3 + 2) >= 0 )
    {
      v19 = *(_DWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( !v19 && qword_1C0046F08 && v6 == *(_QWORD *)(qword_1C0046F08 + 64) )
        *(_DWORD *)(a2 + 16) = 1;
      else
        *(_DWORD *)(a2 + 16) = 5;
LABEL_60:
      v8 = *(_DWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      a3 = v21;
      dword_1C0046FE8 = *v3;
      v7 = *(_DWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      dword_1C0046FF0 = v7;
      byte_1C0046FD1 = a1;
      qword_1C0046FD8 = v11;
      qword_1C0046FE0 = v6;
      dword_1C0046FEC = v15;
      dword_1C0046FF4 = v8;
      dword_1C0046FF8 = v19;
      goto LABEL_4;
    }
    if ( !a1 )
    {
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v6 + 2544), 2LL);
      if ( *(_BYTE *)(v6 + 483) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 2720LL));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
      KeReleaseMutex((PRKMUTEX)(v11 + 72), 0);
      _InterlockedExchange64(&qword_1C0046D08, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
    v6 = 0LL;
LABEL_47:
    ;
  }
  if ( qword_1C0046F00 )
  {
    v16 = *(_QWORD *)(qword_1C0046F00 + 64);
    if ( *(_DWORD *)(v16 + 236) == 2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v16 + 40) + 240LL))(*(_QWORD *)(v16 + 48));
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  if ( qword_1C0046F08 )
  {
    v6 = *(_QWORD *)(qword_1C0046F08 + 64);
    v11 = *(_QWORD *)(v6 + 40);
    if ( !a1 )
    {
      KeWaitForSingleObject((PVOID)(v11 + 72), Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v6 + 483) )
        DpiCheckForOutstandingD3Requests(v6);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v6 + 168), 1u);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v6 + 2544), 2LL);
    }
    v17 = *(_QWORD *)(v6 + 48);
    v18 = *(int (__fastcall **)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v11 + 744);
    *v3 = 3;
    v15 = -1;
    *(_DWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = -1;
    if ( v18(v17, 0xFFFFFFFFLL, v3 + 3, v3 + 4, v3 + 5, v3 + 2) >= 0 )
    {
      v19 = *(_DWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      *(_DWORD *)(a2 + 16) = v19 != 0 ? 5 : 1;
      goto LABEL_60;
    }
    if ( !a1 )
    {
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v6 + 2544), 2LL);
      if ( *(_BYTE *)(v6 + 483) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 2720LL));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
      KeReleaseMutex((PRKMUTEX)(v11 + 72), 0);
      _InterlockedExchange64(&qword_1C0046D08, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
  }
  return 3221225473LL;
}
