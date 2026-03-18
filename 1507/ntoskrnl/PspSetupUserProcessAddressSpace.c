/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x14046567C
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     PspWow64SetupUserProcessAddressSpace @ 0x14002B378 (PspWow64SetupUserProcessAddressSpace.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14017F2F0 (ZwAllocateVirtualMemory.c)
 *     PspLocateInPEManifest @ 0x140463840 (PspLocateInPEManifest.c)
 *     PspPrepareSystemDllInitBlock @ 0x1404658B4 (PspPrepareSystemDllInitBlock.c)
 *     MmMapApiSetView @ 0x140465A3C (MmMapApiSetView.c)
 *     PspWritePebAffinityInfo @ 0x1404668C8 (PspWritePebAffinityInfo.c)
 *     PspCopyAndFixupParameters @ 0x1404669F0 (PspCopyAndFixupParameters.c)
 *     PspGetStandardHandleList @ 0x1405578DC (PspGetStandardHandleList.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(__int64 a1, _KPROCESS *a2, struct _KTHREAD *a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned int *v5; // rsi
  _BYTE *v6; // r13
  int v9; // ecx
  __int64 Process; // rax
  int v11; // ecx
  int v12; // ebp
  int VirtualMemory; // ebx
  unsigned __int64 v14; // r15
  ULONG_PTR v15; // rax
  __int64 result; // rax
  __int64 v17; // r12
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-98h] BYREF
  struct _KTHREAD *v19; // [rsp+38h] [rbp-90h]
  __int64 v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-78h]
  PVOID BaseAddress; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v24[24]; // [rsp+60h] [rbp-68h] BYREF

  v4 = a1;
  v5 = *(unsigned int **)(a4 + 200);
  v6 = 0LL;
  v20 = a1;
  v9 = (*(unsigned __int8 *)(a4 + 9) >> 1) & 3;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v19 = a3;
  v21 = Process;
  v11 = v9 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      v6 = v5 + 8;
  }
  else if ( *(_DWORD *)(a4 + 80) == *(_DWORD *)(a4 + 280) )
  {
    v6 = v24;
    result = PspGetStandardHandleList(v4, v24);
    if ( (int)result < 0 )
      return result;
    a3 = v19;
  }
  v12 = v5[2] & 0x60;
  if ( (PspGlobalFlags & 1) != 0 )
    v5[2] |= 0x8000u;
  if ( !v5[259] )
    v5[259] = PsDefaultLoaderThreads;
  if ( (PspGlobalFlags & 4) != 0 )
    v5[2] |= 0x20000000u;
  KiStackAttachProcess(a2, 0, (__int64)a3);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (VirtualMemory = PspLocateInPEManifest((__int64)a2, a4), VirtualMemory >= 0) )
  {
    if ( !v12 )
      goto LABEL_13;
    BaseAddress = (PVOID)4;
    if ( v12 == 32 )
    {
      RegionSize = 1048320LL;
    }
    else if ( v12 == 64 )
    {
      RegionSize = 16776960LL;
    }
    VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
    if ( VirtualMemory >= 0 )
    {
LABEL_13:
      v14 = 0LL;
      if ( *(_QWORD *)(a4 + 248) )
      {
        v17 = 0LL;
        while ( 1 )
        {
          VirtualMemory = ZwAllocateVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            (PVOID *)(v17 + *(_QWORD *)(a4 + 272)),
                            0LL,
                            (PSIZE_T)(v17 + *(_QWORD *)(a4 + 272) + 8),
                            0x2000u,
                            4u);
          if ( VirtualMemory < 0 )
            break;
          ++v14;
          v17 += 16LL;
          if ( v14 >= *(_QWORD *)(a4 + 248) )
          {
            v4 = v20;
            goto LABEL_14;
          }
        }
      }
      else
      {
LABEL_14:
        v15 = *((_QWORD *)v5 + 126) + *v5;
        RegionSize = v15;
        if ( !v12 )
        {
          if ( v15 < 0x20000 )
            v15 = 0x20000LL;
          RegionSize = v15;
        }
        *(_QWORD *)(a4 + 208) = 0LL;
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)(a4 + 208),
                          0LL,
                          &RegionSize,
                          0x3000u,
                          4u);
        if ( VirtualMemory >= 0 )
        {
          VirtualMemory = PspCopyAndFixupParameters(v4, v6, a4);
          if ( VirtualMemory >= 0 )
          {
            if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
              VirtualMemory = PspPrepareSystemDllInitBlock(0LL, a4);
            if ( VirtualMemory >= 0 )
            {
              VirtualMemory = PspWow64SetupUserProcessAddressSpace(v21, (__int64)a2, a4);
              if ( VirtualMemory >= 0 )
              {
                if ( a2[1].ActiveProcessors.Bitmap[7] )
                  VirtualMemory = PspPrepareSystemDllInitBlock(1LL, a4);
                if ( VirtualMemory >= 0 )
                {
                  PspWritePebAffinityInfo(CurrentThread, a2);
                  VirtualMemory = MmMapApiSetView(a2);
                }
              }
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(v19, 0);
  return (unsigned int)VirtualMemory;
}
