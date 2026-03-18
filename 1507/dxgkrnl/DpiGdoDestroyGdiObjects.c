/*
 * XREFs of DpiGdoDestroyGdiObjects @ 0x1C01702F0
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C00C4630 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0167428 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C00D6C90 (DpiAppendNumberToString.c)
 */

__int64 __fastcall DpiGdoDestroyGdiObjects(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  struct _IO_REMOVE_LOCK *v3; // rsi
  struct _IO_REMOVE_LOCK *v4; // rbx
  struct _IO_REMOVE_LOCK *v5; // rdx
  struct _IO_REMOVE_LOCK *v6; // rcx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  struct _IO_REMOVE_LOCK **v12; // rax
  _QWORD *v13; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+40h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v2) = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  KeWaitForSingleObject((PVOID)(v1 + 2192), Executive, 0, 0, 0LL);
  v3 = *(struct _IO_REMOVE_LOCK **)(v1 + 2176);
  if ( *(struct _IO_REMOVE_LOCK **)&v3->Common.Removed != v3 )
  {
    while ( 1 )
    {
      UnicodeString.Length = 0;
      v4 = v3;
      *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
      *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
      HIWORD(UnicodeString.Buffer) = 0;
      v5 = v3;
      SymbolicLinkName.Length = 0;
      *(_QWORD *)&SymbolicLinkName.MaximumLength = 0LL;
      v6 = v3 + 2;
      *(_DWORD *)((char *)&SymbolicLinkName.Buffer + 2) = 0;
      HIWORD(SymbolicLinkName.Buffer) = 0;
      v3 = *(struct _IO_REMOVE_LOCK **)&v3->Common.Removed;
      v7 = IoAcquireRemoveLockEx(v6, v5, &byte_1C00E2920, 1u, 0x20u);
      v2 = v7;
      if ( v7 < 0 )
        break;
      IoSetDeviceInterfaceState((PUNICODE_STRING)&v4[5].Common.RemoveEvent, 0);
      v11 = *(_QWORD *)&v4->Common.Removed;
      v12 = *(struct _IO_REMOVE_LOCK ***)&v4->Common.RemoveEvent.Header.Lock;
      if ( *(struct _IO_REMOVE_LOCK **)(*(_QWORD *)&v4->Common.Removed + 8LL) != v4 || *v12 != v4 )
        __fastfail(3u);
      *v12 = (struct _IO_REMOVE_LOCK *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      --*(_DWORD *)(v1 + 2248);
      IoReleaseRemoveLockAndWaitEx(v4 + 2, v4, 0x20u);
      if ( (int)DpiAppendNumberToString(
                  L"\\Device\\Video",
                  (ULONG)v4[4].Common.RemoveEvent.Header.WaitListHead.Blink,
                  &UnicodeString) >= 0 )
      {
        RtlDeleteRegistryValue(4u, L"VIDEO", UnicodeString.Buffer);
        RtlFreeUnicodeString(&UnicodeString);
      }
      if ( (int)DpiAppendNumberToString(
                  L"\\DosDevices\\DISPLAY",
                  LODWORD(v4[4].Common.RemoveEvent.Header.WaitListHead.Blink) + 1,
                  &SymbolicLinkName) >= 0 )
      {
        IoDeleteSymbolicLink(&SymbolicLinkName);
        RtlFreeUnicodeString(&SymbolicLinkName);
      }
      DMgrReleaseGdiViewId(LODWORD(v4[4].Common.RemoveEvent.Header.WaitListHead.Blink), 0LL);
      RtlFreeUnicodeString((PUNICODE_STRING)&v4[5].Common.RemoveEvent);
      IoDeleteDevice((PDEVICE_OBJECT)v4->Common.RemoveEvent.Header.WaitListHead.Blink);
      LODWORD(v2) = 0;
      if ( *(_QWORD *)&v3->Common.Removed == *(_QWORD *)(v1 + 2176) )
        goto LABEL_13;
    }
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
    v13[5] = DpiGdoDestroyGdiObjects;
    v13[3] = 275LL;
    v13[4] = 21LL;
    v13[6] = 0LL;
    v13[7] = v2;
    WdLogEvent5_WdCriticalError(v13);
  }
LABEL_13:
  KeReleaseMutex((PRKMUTEX)(v1 + 2192), 0);
  return (unsigned int)v2;
}
