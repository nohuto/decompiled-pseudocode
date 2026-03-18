/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x14046390C
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     PspWow64SetupUserProcessAddressSpace @ 0x14009B4B0 (PspWow64SetupUserProcessAddressSpace.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x140150920 (ZwAllocateVirtualMemory.c)
 *     PspGetStandardHandleList @ 0x1404619A8 (PspGetStandardHandleList.c)
 *     PspPrepareSystemDllInitBlock @ 0x140463B1C (PspPrepareSystemDllInitBlock.c)
 *     MmMapApiSetView @ 0x140463CA4 (MmMapApiSetView.c)
 *     PspWritePebAffinityInfo @ 0x1404645DC (PspWritePebAffinityInfo.c)
 *     PspCopyAndFixupParameters @ 0x140464714 (PspCopyAndFixupParameters.c)
 *     PspLocateInPEManifest @ 0x140464C34 (PspLocateInPEManifest.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(
        __int64 a1,
        _KPROCESS *a2,
        $D4FCF91253F76F57393CBFE908971F67 *a3,
        __int64 a4)
{
  _BYTE *v5; // r15
  unsigned int *v6; // rdi
  int v9; // ecx
  int v11; // ecx
  int v12; // r14d
  NTSTATUS inited; // ebx
  ULONG_PTR v14; // rax
  __int64 result; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-88h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-78h]
  _BYTE v19[24]; // [rsp+48h] [rbp-70h] BYREF

  v5 = 0LL;
  v6 = *(unsigned int **)(a4 + 200);
  v9 = (*(unsigned __int8 *)(a4 + 9) >> 1) & 3;
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
    v5 = v19;
    result = PspGetStandardHandleList(a1, (__int64)v19);
    if ( (int)result < 0 )
      return result;
  }
  v12 = v6[2] & 0x60;
  if ( (PspGlobalFlags & 1) != 0 )
    v6[2] |= 0x8000u;
  if ( !v6[259] )
    v6[259] = PsDefaultLoaderThreads;
  if ( (PspGlobalFlags & 4) != 0 )
    v6[2] |= 0x20000000u;
  KiStackAttachProcess(a2, 0LL, (__int64)a3);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (inited = PspLocateInPEManifest(a2, a4), inited >= 0) )
  {
    v14 = *((_QWORD *)v6 + 126) + *v6;
    RegionSize = v14;
    if ( !v12 )
    {
      if ( v14 < 0x20000 )
        v14 = 0x20000LL;
      RegionSize = v14;
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
              inited = PspPrepareSystemDllInitBlock(1LL, a4);
            if ( inited >= 0 )
            {
              PspWritePebAffinityInfo(CurrentThread, a2);
              inited = MmMapApiSetView(a2);
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(a3, 0LL);
  return (unsigned int)inited;
}
