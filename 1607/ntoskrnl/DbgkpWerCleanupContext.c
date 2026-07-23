/*
 * XREFs of DbgkpWerCleanupContext @ 0x14061C0D0
 * Callers:
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BBF0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14061C270 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     WerLiveKernelCancelReport_0 @ 0x140001320 (WerLiveKernelCancelReport_0.c)
 *     WerLiveKernelCloseHandle_0 @ 0x140001330 (WerLiveKernelCloseHandle_0.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401CB0C4 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401CB154 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     DbgkpWerFreePool @ 0x14061C368 (DbgkpWerFreePool.c)
 *     IopLiveDumpReleaseResources @ 0x14062739C (IopLiveDumpReleaseResources.c)
 */

int __fastcall DbgkpWerCleanupContext(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // eax

  LODWORD(v2) = DbgPrintEx(5u, 3u, "DBGK: DbgkpWerCleanupContext: Context 0x%p\n", (const void *)a1);
  if ( a1 )
  {
    v3 = *(void **)(a1 + 136);
    if ( v3 )
    {
      IopLiveDumpTraceInterfaceStart();
      IopLiveDumpTraceInterfaceEnd(v4, 2LL, 0);
      IopLiveDumpReleaseResources(v3);
      ExFreePoolWithTag(v3, 0x706D644Cu);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v5 = *(_QWORD *)(a1 + 120);
    if ( v5 )
    {
      DbgkpWerFreePool(v5);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    v2 = *(_QWORD *)(a1 + 128);
    if ( v2 )
    {
      v6 = *(void **)(v2 + 16);
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = 0LL;
      }
      v7 = *(void **)(*(_QWORD *)(a1 + 128) + 8LL);
      if ( v7 )
      {
        ZwClose(v7);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) = 0LL;
      }
      v8 = *(_QWORD *)(a1 + 128);
      v9 = *(_QWORD *)(v8 + 40);
      *(_QWORD *)(v8 + 40) = 0LL;
      if ( v9 )
      {
        do
        {
          v10 = *(_QWORD *)(v9 + 16);
          v11 = *(_QWORD *)(v9 + 32);
          if ( v10 )
            DbgkpWerFreePool(v10);
          DbgkpWerFreePool(v9);
          v9 = v11;
        }
        while ( v11 );
      }
      LODWORD(v2) = DbgkpWerFreePool(*(_QWORD *)(a1 + 128));
      *(_QWORD *)(a1 + 128) = 0LL;
    }
    v12 = *(_QWORD *)(a1 + 144);
    if ( v12 )
    {
      LODWORD(v2) = DbgkpWerFreePool(v12);
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 104) )
    {
      if ( (*(_DWORD *)(a1 + 112) & 1) == 0 )
      {
        v13 = WerLiveKernelCancelReport_0();
        if ( v13 < 0 )
          DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCancelReport failed, 0x%X\n", v13);
      }
      LODWORD(v2) = WerLiveKernelCloseHandle_0();
      if ( (int)v2 < 0 )
        LODWORD(v2) = DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCloseHandle failed, 0x%X\n", v2);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  return v2;
}
