/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x1C0100FA0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C02A6BAC (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        LONG a2,
        int a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        char *Address,
        struct tagBITMAPINFO *Src,
        char a12,
        SIZE_T Size,
        size_t a14,
        int a15,
        __int64 a16)
{
  unsigned int v19; // edi
  void *v20; // rbx
  unsigned int v21; // r14d
  char *v22; // rcx
  HANDLE v23; // rax
  __int64 v25; // [rsp+90h] [rbp-48h] BYREF

  v19 = 1;
  v20 = 0LL;
  v25 = 0LL;
  v21 = a12 & 3;
  if ( !(unsigned int)bCaptureBitmapInfo(Src, v21, (unsigned int)a14, (struct tagBITMAPINFO **)&v25) )
    goto LABEL_13;
  if ( Address )
  {
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = &Address[(unsigned int)Size];
      if ( (unsigned __int64)v22 > W32UserProbeAddress || v22 < Address )
        *W32UserProbeAddress = 0;
    }
    v23 = (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails)
        ? (HANDLE)GrepSecureVirtualMemory(Address, (unsigned int)Size, 2LL)
        : MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
    v20 = v23;
    if ( !v23 )
LABEL_13:
      v19 = 0;
  }
  if ( v19 == 1 )
    v19 = GreSetDIBitsToDeviceInternal(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            (__int64)Address,
            (struct tagRGBQUAD *)v25,
            v21,
            Size,
            a14,
            a15,
            a16);
  if ( v20 )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v20);
    else
      MmUnsecureVirtualMemory(v20);
  }
  if ( v25 )
    FreeThreadBufferWithTag(v25);
  return v19;
}
