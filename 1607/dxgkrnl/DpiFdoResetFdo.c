/*
 * XREFs of DpiFdoResetFdo @ 0x1C01958D0
 * Callers:
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0194D60 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C00E0898 (DpiRequestIoPowerState.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0149F44 (DxgkReleaseAdapterFdoReference.c)
 *     DxgkFreeUnicodeString @ 0x1C01936B8 (DxgkFreeUnicodeString.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  DXGADAPTER *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rcx
  void (__fastcall *v19)(_QWORD); // rax
  void *v20; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v3 + 1232) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v5[3] = 275LL;
    v5[4] = 21LL;
    v5[5] = -1073741823LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  ExDeleteResourceLite((PERESOURCE)(v3 + 3584));
  ExDeleteResourceLite((PERESOURCE)(v3 + 3120));
  if ( *(_QWORD *)(v3 + 3712) )
    DpiRequestIoPowerState(a1, 7, v6, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 4432));
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 4448));
  DxgkFreeUnicodeString((_QWORD *)(v3 + 4496));
  v7 = *(void **)(v3 + 2592);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v3 + 2592) = 0LL;
  }
  v8 = *(void **)(v3 + 2616);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v3 + 2616) = 0LL;
  }
  v9 = *(void **)(v3 + 2632);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v3 + 2632) = 0LL;
  }
  v10 = *(void **)(v3 + 2648);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v3 + 2648) = 0LL;
  }
  v11 = *(void **)(v3 + 2664);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v3 + 2664) = 0LL;
  }
  v12 = *(void **)(v3 + 2680);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(v3 + 2680) = 0LL;
  }
  v13 = *(DXGADAPTER **)(v3 + 3688);
  if ( v13 )
  {
    DxgkReleaseAdapterFdoReference(v13);
    *(_QWORD *)(v3 + 3688) = 0LL;
  }
  v14 = *(void **)(v3 + 3104);
  *(_DWORD *)(v3 + 3088) = 0;
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(v3 + 3104) = 0LL;
  }
  v15 = *(void **)(v3 + 3096);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(v3 + 3096) = 0LL;
  }
  v16 = *(void **)(v3 + 4464);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(v3 + 4464) = 0LL;
  }
  v17 = *(void **)(v3 + 4472);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(v3 + 4472) = 0LL;
  }
  v18 = *(_QWORD *)(v3 + 4512);
  if ( v18 )
  {
    v19 = *(void (__fastcall **)(_QWORD))(v18 + 32);
    if ( v19 )
    {
      v19(*(_QWORD *)(v18 + 16));
      memset((void *)(*(_QWORD *)(v3 + 4512) + 8LL), 0, 0x38uLL);
    }
    v20 = *(void **)(v3 + 4512);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *(_QWORD *)(v3 + 4512) = 0LL;
    }
  }
}
