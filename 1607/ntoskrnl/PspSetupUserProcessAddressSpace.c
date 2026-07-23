/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x1404FD9F4
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     PspWow64SetupUserProcessAddressSpace @ 0x1400F5128 (PspWow64SetupUserProcessAddressSpace.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     MmMapApiSetView @ 0x14046AC1C (MmMapApiSetView.c)
 *     PspGetStandardHandleList @ 0x1404CD720 (PspGetStandardHandleList.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404FDC24 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessMachine @ 0x1404FDDF0 (PsWow64GetProcessMachine.c)
 *     PspWritePebAffinityInfo @ 0x1404FE0C0 (PspWritePebAffinityInfo.c)
 *     PspCopyAndFixupParameters @ 0x1404FE1F8 (PspCopyAndFixupParameters.c)
 *     PspLocateInPEManifest @ 0x1404FE46C (PspLocateInPEManifest.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(__int64 a1, _KPROCESS *a2, struct _KTHREAD *a3, __int64 a4)
{
  _BYTE *v5; // r15
  unsigned int *v6; // rdi
  int v9; // ecx
  int v11; // ecx
  int v12; // r14d
  __int64 ProcessServerSilo; // rax
  int inited; // ebx
  ULONG_PTR v15; // rax
  __int64 result; // rax
  __int16 ProcessMachine; // ax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-78h]
  _BYTE v21[24]; // [rsp+48h] [rbp-70h] BYREF

  v5 = 0LL;
  v6 = *(unsigned int **)(a4 + 200);
  v9 = (*(unsigned __int8 *)(a4 + 9) >> 2) & 3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v11 = v9 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      v5 = v6 + 8;
  }
  else if ( *(_DWORD *)(a4 + 80) == *(_DWORD *)(a4 + 280) )
  {
    v5 = v21;
    result = PspGetStandardHandleList(a1, (__int64)v21);
    if ( (int)result < 0 )
      return result;
  }
  v12 = v6[2] & 0x60;
  if ( (PspGlobalFlags & 1) != 0 )
    v6[2] |= 0x8000u;
  if ( !v6[259] )
    v6[259] = PsDefaultLoaderThreads;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  if ( *((_BYTE *)PsGetServerSiloGlobals(ProcessServerSilo) + 960) )
    v6[2] |= 0x20000000u;
  KiStackAttachProcess(a2, 0, (__int64)a3);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (inited = PspLocateInPEManifest(a2, a4), inited >= 0) )
  {
    v15 = *((_QWORD *)v6 + 126) + *v6;
    RegionSize = v15;
    if ( !v12 )
    {
      if ( v15 < 0x20000 )
        v15 = 0x20000LL;
      RegionSize = v15;
    }
    *(_QWORD *)(a4 + 208) = 0LL;
    inited = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a4 + 208), 0LL, &RegionSize, 0x3000u, 4u);
    if ( inited >= 0 )
    {
      inited = PspCopyAndFixupParameters(a1, v5, a4);
      if ( inited >= 0 )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          inited = PspPrepareSystemDllInitBlock(0LL, a4);
        if ( inited >= 0 )
        {
          inited = PspWow64SetupUserProcessAddressSpace((__int64)Process, (__int64)a2, a4);
          if ( inited >= 0 )
          {
            if ( a2[1].ActiveProcessors.Bitmap[7] )
            {
              ProcessMachine = PsWow64GetProcessMachine(a2);
              inited = PspPrepareSystemDllInitBlock((unsigned int)(ProcessMachine == 452) + 1, a4);
            }
            if ( inited >= 0 )
            {
              PspWritePebAffinityInfo(CurrentThread, a2);
              inited = MmMapApiSetView((__int64)a2);
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(a3, 0);
  return (unsigned int)inited;
}
