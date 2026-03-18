/*
 * XREFs of EngFreeUserMem @ 0x1C00841F0
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0037DD4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005C290 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall EngFreeUserMem(PVOID pv)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rax
  void *v5; // rcx
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  if ( pv )
  {
    BaseAddress = pv;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(pv);
    v2 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v3 = CurrentProcessWin32Process + 80;
      Buffer[0] = BaseAddress;
      if ( CurrentProcessWin32Process != -80 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v3, 0LL);
      }
      v4 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), Buffer);
      if ( v4 )
      {
        v5 = (void *)v4[2];
        RegionSize = v4[1];
        MmUnsecureVirtualMemory(v5);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        Buffer[0] = BaseAddress;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), Buffer);
      }
      if ( v3 )
      {
        ExReleasePushLockExclusiveEx(v3);
        KeLeaveCriticalRegion();
      }
    }
  }
}
