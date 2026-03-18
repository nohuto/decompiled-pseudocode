/*
 * XREFs of EngFreeUserMem @ 0x1C0085980
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00319E8 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005CF10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 * Callees:
 *     GreReleasePushLockExclusive @ 0x1C007D960 (GreReleasePushLockExclusive.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00BFB48 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GreAcquirePushLockExclusive @ 0x1C00CAE40 (GreAcquirePushLockExclusive.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00CB060 (GrepUnsecureVirtualMemory.c)
 */

void __stdcall EngFreeUserMem(PVOID pv)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct _RTL_AVL_TABLE *v4; // rsi
  _QWORD *v5; // rax
  void *v6; // rdi
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
        GreAcquirePushLockExclusive(v3);
      }
      v4 = (struct _RTL_AVL_TABLE *)(v2 + 88);
      v5 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(v2 + 88), Buffer);
      if ( v5 )
      {
        v6 = (void *)v5[2];
        RegionSize = v5[1];
        if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
          GrepUnsecureVirtualMemory(v6);
        else
          MmUnsecureVirtualMemory(v6);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
        Buffer[0] = BaseAddress;
        RtlDeleteElementGenericTableAvl(v4, Buffer);
      }
      if ( v3 )
      {
        GreReleasePushLockExclusive(v3);
        KeLeaveCriticalRegion();
      }
    }
  }
}
