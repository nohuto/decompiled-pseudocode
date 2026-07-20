/*
 * XREFs of SmpDereferenceKnownSubSys @ 0x140007B10
 * Callers:
 *     SmpTerminateCSR @ 0x140001008 (SmpTerminateCSR.c)
 *     wmain @ 0x140004718 (wmain.c)
 *     SmpExecPgm @ 0x140004EF0 (SmpExecPgm.c)
 *     SmpSetCoreProcessIds @ 0x14000512C (SmpSetCoreProcessIds.c)
 *     SmpSbCreateSession @ 0x14000524C (SmpSbCreateSession.c)
 *     SmpWaitForSubSysStartup @ 0x140005B9C (SmpWaitForSubSysStartup.c)
 *     SmpStartCsr @ 0x140005CC0 (SmpStartCsr.c)
 *     SmpFinalizeClientContext @ 0x140006540 (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140006620 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x1400123A4 (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x1400132D8 (SmpDeleteSubSys.c)
 * Callees:
 *     SmpTerminate @ 0x140013128 (SmpTerminate.c)
 *     SmpDisposeSubSysSynch @ 0x140013364 (SmpDisposeSubSysSynch.c)
 */

void __fastcall SmpDereferenceKnownSubSys(_BYTE *BaseAddress)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 Parameters[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( BaseAddress && _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress, 0xFFFFFFFF) == 1 )
  {
    if ( (BaseAddress[8] & 4) != 0
      && *((_DWORD *)BaseAddress + 6) == 2
      && *((_DWORD *)BaseAddress + 16) == *(_DWORD *)SmpCoreProcessIds )
    {
      RtlInitUnicodeString(&DestinationString, L"Core Windows subsystem terminated");
      Parameters[1] = -1073741823LL;
      Parameters[0] = (unsigned __int64)&DestinationString;
      SmpTerminate(Parameters, 1u, 2u);
      __debugbreak();
    }
    v2 = (void *)*((_QWORD *)BaseAddress + 2);
    if ( v2 )
      SmpDisposeSubSysSynch(v2);
    v3 = (void *)*((_QWORD *)BaseAddress + 5);
    if ( v3 )
      NtClose(v3);
    if ( (BaseAddress[8] & 8) != 0 )
    {
      v5 = SmpOverflowSubSysList;
      v6 = (__int64 *)(BaseAddress + 72);
      v6[1] = (__int64)&SmpOverflowSubSysList;
      *v6 = v5;
      if ( *(__int64 **)(v5 + 8) != &SmpOverflowSubSysList )
        __fastfail(3u);
      *(_QWORD *)(v5 + 8) = v6;
      SmpOverflowSubSysList = (__int64)v6;
    }
    else
    {
      v4 = (void *)*((_QWORD *)BaseAddress + 4);
      if ( v4 )
        NtClose(v4);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    }
  }
}
