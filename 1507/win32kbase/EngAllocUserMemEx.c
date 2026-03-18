/*
 * XREFs of EngAllocUserMemEx @ 0x1C0069740
 * Callers:
 *     EngAllocUserMem @ 0x1C0069720 (EngAllocUserMem.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EngAllocUserMemEx(ULONG_PTR a1, int a2, PVOID *a3)
{
  NTSTATUS v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  HANDLE v9; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r14
  __int64 v13; // [rsp+20h] [rbp-30h]
  __int64 v14; // [rsp+28h] [rbp-28h]
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+30h] BYREF
  int NewElement; // [rsp+88h] [rbp+38h] BYREF

  NewElement = a2;
  RegionSize = a1;
  *a3 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v4 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v9 = MmSecureVirtualMemory(*a3, RegionSize, 4u);
  if ( !v9 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
    *a3 = 0LL;
    return (unsigned int)-2143354876;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7, v8, v13, v14);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    Buffer[0] = *a3;
    Buffer[1] = RegionSize;
    LOBYTE(NewElement) = 0;
    Buffer[2] = v9;
    if ( CurrentProcessWin32Process != -80 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v11 + 80, 0LL);
    }
    if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v11 + 88), Buffer, 0x18u, (PBOOLEAN)&NewElement)
      || !(_BYTE)NewElement )
    {
      MmUnsecureVirtualMemory(v9);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      *a3 = 0LL;
      v4 = -1073741801;
    }
    if ( v11 != -80 )
    {
      ExReleasePushLockExclusiveEx(v11 + 80, 0LL);
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v4;
  }
  MmUnsecureVirtualMemory(v9);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
  *a3 = 0LL;
  return 3221225473LL;
}
