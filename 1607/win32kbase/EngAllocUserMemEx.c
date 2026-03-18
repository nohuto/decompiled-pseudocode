/*
 * XREFs of EngAllocUserMemEx @ 0x1C00857B0
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0033590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngAllocUserMem @ 0x1C0085790 (EngAllocUserMem.c)
 * Callees:
 *     GreReleasePushLockExclusive @ 0x1C007D960 (GreReleasePushLockExclusive.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00BFB48 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GreAcquirePushLockExclusive @ 0x1C00CAE40 (GreAcquirePushLockExclusive.c)
 *     GrepSecureVirtualMemory @ 0x1C00CB050 (GrepSecureVirtualMemory.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00CB060 (GrepUnsecureVirtualMemory.c)
 */

__int64 __fastcall EngAllocUserMemEx(ULONG_PTR a1, int a2, PVOID *a3)
{
  NTSTATUS v5; // r14d
  int v6; // eax
  PVOID v7; // rcx
  HANDLE v8; // rax
  __int64 v9; // rcx
  void *v10; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // r15
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+30h] BYREF
  int NewElement; // [rsp+88h] [rbp+38h] BYREF

  NewElement = a2;
  RegionSize = a1;
  *a3 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v5 >= 0 )
  {
    v6 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails);
    v7 = *a3;
    if ( v6 )
      v8 = (HANDLE)GrepSecureVirtualMemory(v7, RegionSize, 4LL);
    else
      v8 = MmSecureVirtualMemory(v7, RegionSize, 4u);
    v10 = v8;
    if ( v8 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      v12 = CurrentProcessWin32Process;
      if ( !CurrentProcessWin32Process )
      {
        if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
          GrepUnsecureVirtualMemory(v10);
        else
          MmUnsecureVirtualMemory(v10);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
        *a3 = 0LL;
        return 3221225473LL;
      }
      Buffer[0] = *a3;
      Buffer[1] = RegionSize;
      LOBYTE(NewElement) = 0;
      Buffer[2] = v10;
      if ( CurrentProcessWin32Process != -80 )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockExclusive(v12 + 80);
      }
      if ( !RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v12 + 88), Buffer, 0x18u, (PBOOLEAN)&NewElement)
        || !(_BYTE)NewElement )
      {
        if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
          GrepUnsecureVirtualMemory(v10);
        else
          MmUnsecureVirtualMemory(v10);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
        *a3 = 0LL;
        v5 = -1073741801;
      }
      if ( v12 != -80 )
      {
        GreReleasePushLockExclusive(v12 + 80);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      *a3 = 0LL;
      return (unsigned int)-2143354876;
    }
  }
  return (unsigned int)v5;
}
