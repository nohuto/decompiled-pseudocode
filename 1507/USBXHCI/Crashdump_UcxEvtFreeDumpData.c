/*
 * XREFs of Crashdump_UcxEvtFreeDumpData @ 0x1C00347D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 *     Crashdump_FreeDeviceContext @ 0x1C0033B50 (Crashdump_FreeDeviceContext.c)
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
  v4 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C00400B8);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_QWORD *)(v4 + 304) == v5 )
    *(_QWORD *)(v4 + 304) = 0LL;
  if ( *(_QWORD *)(v5 + 560) )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 528); ++i )
      Crashdump_FreeDeviceContext(*(_QWORD *)(v5 + 560) + 408LL * i);
    ExFreePoolWithTag(*(PVOID *)(v5 + 560), 0x43434858u);
  }
  v7 = *(void **)(v5 + 168);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v5 + 168) = 0LL;
  }
  v8 = (__int64 **)(v5 + 488);
  while ( *v8 != (__int64 *)v8 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v5 + 480), (__int64)v9);
  }
  ExFreePoolWithTag((PVOID)v5, 0x43434858u);
  return DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: End\n");
}
