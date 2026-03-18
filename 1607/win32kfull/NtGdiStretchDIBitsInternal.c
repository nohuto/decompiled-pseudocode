/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x1C00BD8A0
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C02A6BAC (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiStretchDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *Address,
        struct tagBITMAPINFO *Src,
        unsigned int a12,
        int a13,
        size_t a14,
        SIZE_T Size,
        __int64 a16)
{
  HDC v16; // r10
  unsigned int v17; // ebx
  void *v18; // rdi
  __int64 v19; // rsi
  int v20; // r14d
  HANDLE v21; // rax
  __int64 v22; // r15
  __int64 v24; // [rsp+90h] [rbp-48h] BYREF

  v16 = a1;
  v24 = 0LL;
  v17 = 1;
  v18 = 0LL;
  v19 = (__int64)Address;
  if ( !Address || !Src || !(_DWORD)a14 )
  {
    v22 = 0LL;
    v19 = 0LL;
    v20 = Size;
    goto LABEL_20;
  }
  if ( (unsigned int)bCaptureBitmapInfo(Src, a12, (unsigned int)a14, (struct tagBITMAPINFO **)&v24) )
  {
    v20 = Size;
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Address[(unsigned int)Size] > W32UserProbeAddress
        || &Address[(unsigned int)Size] < Address )
      {
        *W32UserProbeAddress = 0;
      }
    }
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      v21 = (HANDLE)GrepSecureVirtualMemory(Address, (unsigned int)Size, 2LL);
    else
      v21 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
    v18 = v21;
    if ( v21 )
      goto LABEL_18;
  }
  else
  {
    v20 = Size;
  }
  v17 = 0;
LABEL_18:
  v22 = v24;
  v16 = a1;
LABEL_20:
  if ( v17 )
  {
    v17 = GreStretchDIBitsInternal(v16, a5, a6, a7, a8, a9, v19, v22, a12, a13, a14, v20, a16);
    if ( v18 )
    {
      if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
        GrepUnsecureVirtualMemory(v18);
      else
        MmUnsecureVirtualMemory(v18);
    }
  }
  if ( v22 )
    FreeThreadBufferWithTag(v22);
  return v17;
}
