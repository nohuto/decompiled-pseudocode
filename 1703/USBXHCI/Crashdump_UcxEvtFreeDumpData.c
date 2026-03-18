/*
 * XREFs of Crashdump_UcxEvtFreeDumpData @ 0x1C0032CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 *     Crashdump_FreeDeviceContext @ 0x1C0031F6C (Crashdump_FreeDeviceContext.c)
 */

ULONG __fastcall Crashdump_UcxEvtFreeDumpData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int i; // edi
  void *v7; // rcx
  __int64 **v8; // rdi
  __int64 *v9; // rdx
  __int64 v10; // rax

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: Begin\n");
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0045340);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_QWORD *)(v4 + 312) == v5 )
    *(_QWORD *)(v4 + 312) = 0LL;
  if ( *(_QWORD *)(v5 + 568) )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 536); ++i )
      Crashdump_FreeDeviceContext(*(_QWORD *)(v5 + 568) + 408LL * i);
    ExFreePoolWithTag(*(PVOID *)(v5 + 568), 0x43434858u);
  }
  v7 = *(void **)(v5 + 176);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v5 + 176) = 0LL;
  }
  v8 = (__int64 **)(v5 + 496);
  while ( *v8 != (__int64 *)v8 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v5 + 488), (__int64)v9);
  }
  ExFreePoolWithTag((PVOID)v5, 0x43434858u);
  return DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: End\n");
}
