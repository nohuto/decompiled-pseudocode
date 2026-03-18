/*
 * XREFs of EngFreeUserMem @ 0x1C0069890
 * Callers:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0017C10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00343C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall EngFreeUserMem(PVOID pv)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  void *v8; // rcx
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  if ( pv )
  {
    BaseAddress = pv;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(pv, v1, v2, v3, Buffer[0], Buffer[1]);
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v6 = CurrentProcessWin32Process + 80;
      Buffer[0] = BaseAddress;
      if ( CurrentProcessWin32Process != -80 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v6, 0LL);
      }
      v7 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 88), Buffer);
      if ( v7 )
      {
        v8 = (void *)v7[2];
        RegionSize = v7[1];
        MmUnsecureVirtualMemory(v8);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        Buffer[0] = BaseAddress;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v5 + 88), Buffer);
      }
      if ( v6 )
      {
        ExReleasePushLockExclusiveEx(v6, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
}
