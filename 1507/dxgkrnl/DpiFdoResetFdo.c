/*
 * XREFs of DpiFdoResetFdo @ 0x1C01684A0
 * Callers:
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0167A10 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkFreeUnicodeString @ 0x1C00B4374 (DxgkFreeUnicodeString.c)
 *     DpiRequestIoPowerState @ 0x1C00BC9E0 (DpiRequestIoPowerState.c)
 *     DxgkReleaseAdapterReference @ 0x1C012BDD4 (DxgkReleaseAdapterReference.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rcx
  void *v4; // rcx
  DXGADAPTER *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  void (__fastcall *v11)(_QWORD); // rax
  void *v12; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  ExDeleteResourceLite((PERESOURCE)(v1 + 2400));
  ExDeleteResourceLite((PERESOURCE)(v1 + 1936));
  if ( *(_QWORD *)(v1 + 2528) )
    DpiRequestIoPowerState(a1, 6, 0LL, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3216));
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3232));
  DxgkFreeUnicodeString((_QWORD *)(v1 + 3280));
  v3 = *(void **)(v1 + 1472);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(v1 + 1472) = 0LL;
  }
  v4 = *(void **)(v1 + 1496);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(v1 + 1496) = 0LL;
  }
  v5 = *(DXGADAPTER **)(v1 + 2504);
  if ( v5 )
  {
    DxgkReleaseAdapterReference(v5);
    *(_QWORD *)(v1 + 2504) = 0LL;
  }
  *(_DWORD *)(v1 + 1904) = 0;
  v6 = *(void **)(v1 + 1920);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(v1 + 1920) = 0LL;
  }
  v7 = *(void **)(v1 + 1912);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v1 + 1912) = 0LL;
  }
  v8 = *(void **)(v1 + 3248);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v1 + 3248) = 0LL;
  }
  v9 = *(void **)(v1 + 3256);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v1 + 3256) = 0LL;
  }
  v10 = *(_QWORD *)(v1 + 3296);
  if ( v10 )
  {
    v11 = *(void (__fastcall **)(_QWORD))(v10 + 32);
    if ( v11 )
    {
      v11(*(_QWORD *)(v10 + 16));
      memset((void *)(*(_QWORD *)(v1 + 3296) + 8LL), 0, 0x38uLL);
    }
    v12 = *(void **)(v1 + 3296);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *(_QWORD *)(v1 + 3296) = 0LL;
    }
  }
}
