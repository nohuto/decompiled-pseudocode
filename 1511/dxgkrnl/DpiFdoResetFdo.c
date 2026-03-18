/*
 * XREFs of DpiFdoResetFdo @ 0x1C016CBD0
 * Callers:
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C016C0C0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C00CB040 (DpiRequestIoPowerState.c)
 *     DxgkReleaseAdapterReference @ 0x1C0132318 (DxgkReleaseAdapterReference.c)
 *     DxgkFreeUnicodeString @ 0x1C016B92C (DxgkFreeUnicodeString.c)
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
  ExDeleteResourceLite((PERESOURCE)(v1 + 2440));
  ExDeleteResourceLite((PERESOURCE)(v1 + 1976));
  if ( *(_QWORD *)(v1 + 2568) )
    DpiRequestIoPowerState(a1, 7, 0LL, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3280));
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3296));
  DxgkFreeUnicodeString((_QWORD *)(v1 + 3344));
  v3 = *(void **)(v1 + 1512);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(v1 + 1512) = 0LL;
  }
  v4 = *(void **)(v1 + 1536);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(v1 + 1536) = 0LL;
  }
  v5 = *(DXGADAPTER **)(v1 + 2544);
  if ( v5 )
  {
    DxgkReleaseAdapterReference(v5);
    *(_QWORD *)(v1 + 2544) = 0LL;
  }
  *(_DWORD *)(v1 + 1944) = 0;
  v6 = *(void **)(v1 + 1960);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(v1 + 1960) = 0LL;
  }
  v7 = *(void **)(v1 + 1952);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v1 + 1952) = 0LL;
  }
  v8 = *(void **)(v1 + 3312);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v1 + 3312) = 0LL;
  }
  v9 = *(void **)(v1 + 3320);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v1 + 3320) = 0LL;
  }
  v10 = *(_QWORD *)(v1 + 3360);
  if ( v10 )
  {
    v11 = *(void (__fastcall **)(_QWORD))(v10 + 32);
    if ( v11 )
    {
      v11(*(_QWORD *)(v10 + 16));
      memset((void *)(*(_QWORD *)(v1 + 3360) + 8LL), 0, 0x38uLL);
    }
    v12 = *(void **)(v1 + 3360);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *(_QWORD *)(v1 + 3360) = 0LL;
    }
  }
}
