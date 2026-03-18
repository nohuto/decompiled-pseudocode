/*
 * XREFs of GdiProcessCallout @ 0x1C0044F00
 * Callers:
 *     <none>
 * Callees:
 *     IsMonitorAPIProcessTerminatingSupported_0 @ 0x1C00018A8 (IsMonitorAPIProcessTerminatingSupported_0.c)
 *     MonitorAPIProcessTerminating_0 @ 0x1C00018B0 (MonitorAPIProcessTerminating_0.c)
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0 @ 0x1C00018B8 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock_0 @ 0x1C00018C0 (UmfdIsCurrentProcessUmfdHostNoLock_0.c)
 *     IsUmfdUninitializeProcessSupported_0 @ 0x1C00018C8 (IsUmfdUninitializeProcessSupported_0.c)
 *     UmfdUninitializeProcess_0 @ 0x1C00018D0 (UmfdUninitializeProcess_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0045860 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0067AB4 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  unsigned int CurrentProcessId; // ebx
  int v5; // r15d
  HANDLE ProcessId; // rax
  COPM *v7; // rcx
  BOOLEAN i; // dl
  PVOID v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rbx
  void *v12; // rcx
  __int64 ProcessPeb; // rax
  __int64 v15; // r14
  __int64 v16; // r8
  NTSTATUS v17; // ebx
  HANDLE v18; // rax
  ULONG_PTR ViewSize[5]; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+18h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 )
  {
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(a1 + 88),
      GDIEngUserMemAllocNodeCompare,
      GDIEngUserMemAllocNodeAlloc,
      rimUserMemAllocNodeFree,
      0LL);
    *(_QWORD *)(a1 + 200) = a1 + 192;
    *(_QWORD *)(a1 + 192) = a1 + 192;
    *(_QWORD *)(a1 + 216) = a1 + 208;
    *(_QWORD *)(a1 + 208) = a1 + 208;
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    v15 = ProcessPeb;
    if ( ProcessPeb
      && (*(_DWORD *)(ProcessPeb + 264) = 20,
          memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
          LOBYTE(v16) = a2,
          (int)((__int64 (__fastcall *)(__int64, void *, __int64))qword_1C0103EC0)(
                 a1 + 248,
                 &gDxgkWin32kEngInterface,
                 v16) >= 0) )
    {
      BaseAddress = 0LL;
      ViewSize[0] = 0LL;
      SectionHandle = 0LL;
      if ( ObOpenObjectByPointer(gpHmgrSharedHandleSection, 0x200u, 0LL, 0xF001Fu, 0LL, 0, &SectionHandle) < 0 )
      {
        v17 = -1073741502;
      }
      else
      {
        v17 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0LL,
                0LL,
                ViewSize,
                ViewUnmap,
                0,
                2u);
        if ( v17 >= 0 && (v18 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u), (*(_QWORD *)(a1 + 240) = v18) != 0LL) )
          *(_QWORD *)(v15 + 248) = BaseAddress;
        else
          v17 = -1073741502;
        ZwClose(SectionHandle);
      }
      if ( v17 < 0 )
        ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C0103EC0)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
      return (unsigned int)v17;
    }
    else
    {
      return 3221225794LL;
    }
  }
  else
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    GdiUnmapGDIW32PIDLockedBitmaps(a1);
    v5 = NtGdiCloseProcess(CurrentProcessId & 0xFFFFFFFC, 1LL);
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    COPM::DestroyProtectedOutputsOwnedByProcess(v7, ProcessId);
    if ( (int)IsMonitorAPIProcessTerminatingSupported_0() >= 0 )
    {
      PsGetProcessId(*(PEPROCESS *)a1);
      MonitorAPIProcessTerminating_0();
    }
    ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C0103EC0)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v9 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
      if ( !v9 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v9);
    }
    v10 = *(_QWORD **)(a1 + 192);
    if ( v10 )
    {
      while ( v10 != (_QWORD *)(a1 + 192) )
      {
        v10 = (_QWORD *)*v10;
        Win32FreePool();
      }
    }
    v11 = *(_QWORD **)(a1 + 208);
    if ( v11 )
    {
      while ( v11 != (_QWORD *)(a1 + 208) )
      {
        v11 = (_QWORD *)*v11;
        Win32FreePool();
      }
    }
    v12 = *(void **)(a1 + 240);
    if ( v12 )
      MmUnsecureVirtualMemory(v12);
    if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0() >= 0
      && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock_0()
      && (int)IsUmfdUninitializeProcessSupported_0() >= 0 )
    {
      UmfdUninitializeProcess_0();
    }
    return v5 == 0 ? 0xC0000121 : 0;
  }
}
