/*
 * XREFs of GdiProcessCallout @ 0x1C0059660
 * Callers:
 *     <none>
 * Callees:
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0 @ 0x1C00018A8 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock_0 @ 0x1C00018B0 (UmfdIsCurrentProcessUmfdHostNoLock_0.c)
 *     IsUmfdUninitializeProcessSupported_0 @ 0x1C00018B8 (IsUmfdUninitializeProcessSupported_0.c)
 *     UmfdUninitializeProcess_0 @ 0x1C00018C0 (UmfdUninitializeProcess_0.c)
 *     IsMonitorAPIProcessTerminatingSupported_0 @ 0x1C00018C8 (IsMonitorAPIProcessTerminatingSupported_0.c)
 *     MonitorAPIProcessTerminating_0 @ 0x1C00018D0 (MonitorAPIProcessTerminating_0.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0052EA0 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C005A300 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00BFB48 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepSecureVirtualMemory @ 0x1C00CB050 (GrepSecureVirtualMemory.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00CB060 (GrepUnsecureVirtualMemory.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  __int64 ProcessPeb; // rax
  __int64 v5; // r14
  __int64 v7; // r8
  NTSTATUS v8; // edi
  HANDLE v9; // rax
  unsigned __int64 v10; // rdi
  int v11; // r15d
  HANDLE ProcessId; // rax
  COPM *v13; // rcx
  BOOLEAN i; // dl
  PVOID v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  int v18; // eax
  void *v19; // rcx
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
    *(_DWORD *)(a1 + 284) |= 1u;
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    v5 = ProcessPeb;
    if ( ProcessPeb
      && (*(_DWORD *)(ProcessPeb + 264) = 20,
          memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
          LOBYTE(v7) = a2,
          (int)((__int64 (__fastcall *)(__int64, void *, __int64))qword_1C011B200)(
                 a1 + 248,
                 &gDxgkWin32kEngInterface,
                 v7) >= 0) )
    {
      BaseAddress = 0LL;
      ViewSize[0] = 0LL;
      SectionHandle = 0LL;
      if ( ObOpenObjectByPointer(gpHmgrSharedHandleSection, 0x200u, 0LL, 0xF001Fu, 0LL, 0, &SectionHandle) < 0 )
      {
        v8 = -1073741502;
      }
      else
      {
        v8 = ZwMapViewOfSection(
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
        if ( v8 >= 0
          && (!(unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails)
            ? (v9 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u))
            : (v9 = (HANDLE)GrepSecureVirtualMemory(BaseAddress, 4096LL, 2LL)),
              (*(_QWORD *)(a1 + 240) = v9) != 0LL) )
        {
          *(_QWORD *)(v5 + 248) = BaseAddress;
        }
        else
        {
          v8 = -1073741502;
        }
        ZwClose(SectionHandle);
      }
      if ( v8 < 0 )
        ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C011B200)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
      return (unsigned int)v8;
    }
    else
    {
      return 3221225794LL;
    }
  }
  else
  {
    v10 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    GdiUnmapGDIW32PIDLockedBitmaps(a1);
    if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported_0() >= 0
      && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock_0()
      && (int)IsUmfdUninitializeProcessSupported_0() >= 0 )
    {
      UmfdUninitializeProcess_0();
    }
    v11 = NtGdiCloseProcess((unsigned int)v10, 1LL);
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    COPM::DestroyProtectedOutputsOwnedByProcess(v13, ProcessId);
    if ( (int)IsMonitorAPIProcessTerminatingSupported_0() >= 0 )
    {
      PsGetProcessId(*(PEPROCESS *)a1);
      MonitorAPIProcessTerminating_0();
    }
    ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C011B200)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v15 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
      if ( !v15 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v15);
    }
    v16 = *(_QWORD **)(a1 + 192);
    if ( v16 )
    {
      while ( v16 != (_QWORD *)(a1 + 192) )
      {
        v16 = (_QWORD *)*v16;
        Win32FreePool();
      }
    }
    v17 = *(_QWORD **)(a1 + 208);
    if ( v17 )
    {
      while ( v17 != (_QWORD *)(a1 + 208) )
      {
        v17 = (_QWORD *)*v17;
        Win32FreePool();
      }
    }
    if ( *(_QWORD *)(a1 + 240) )
    {
      v18 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails);
      v19 = *(void **)(a1 + 240);
      if ( v18 )
        GrepUnsecureVirtualMemory(v19);
      else
        MmUnsecureVirtualMemory(v19);
    }
    return v11 == 0 ? 0xC0000121 : 0;
  }
}
