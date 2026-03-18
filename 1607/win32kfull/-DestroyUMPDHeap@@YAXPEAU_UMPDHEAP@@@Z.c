/*
 * XREFs of ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0284438
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0110F68 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C02844B0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall DestroyUMPDHeap(struct _UMPDHEAP *a1, __int64 a2)
{
  BOOL v3; // eax
  void *v4; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 1) )
    {
      v3 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails);
      v4 = (void *)*((_QWORD *)a1 + 1);
      if ( v3 )
        GrepUnsecureVirtualMemory(v4);
      else
        MmUnsecureVirtualMemory(v4);
    }
    if ( *(_QWORD *)a1 )
    {
      BaseAddress = *(PVOID *)a1;
      RegionSize = 0x400000LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    Win32FreePool(a1, a2);
  }
}
