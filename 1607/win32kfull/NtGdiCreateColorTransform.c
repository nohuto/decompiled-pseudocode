/*
 * XREFs of NtGdiCreateColorTransform @ 0x1C02B2A70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02B1E8C (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorTransform(
        HDC a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        char *Address,
        unsigned int a6,
        char *a7,
        unsigned int a8)
{
  SIZE_T v8; // r13
  unsigned int v10; // r8d
  unsigned int v11; // r14d
  tagLOGCOLORSPACEW *v12; // rcx
  __int64 v13; // rax
  HANDLE v14; // rax
  SIZE_T v15; // rsi
  char *v16; // rcx
  HANDLE v17; // rax
  char *v18; // rcx
  HANDLE v19; // rax
  struct HOBJ__ *v20; // rdi
  int v22; // [rsp+40h] [rbp-308h]
  void *Size_4; // [rsp+48h] [rbp-300h]
  HANDLE SecureHandle; // [rsp+50h] [rbp-2F8h]
  HANDLE v25; // [rsp+58h] [rbp-2F0h]
  void *v26; // [rsp+80h] [rbp-2C8h]
  void *v27; // [rsp+88h] [rbp-2C0h]
  char *v28; // [rsp+90h] [rbp-2B8h]
  tagLOGCOLORSPACEW v30; // [rsp+B0h] [rbp-298h] BYREF

  v8 = a4;
  v10 = a6;
  v11 = a8;
  Size_4 = 0LL;
  SecureHandle = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v22 = 0;
  if ( !a2 )
    return 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = &v30;
  v13 = 4LL;
  do
  {
    *(_OWORD *)&v12->lcsSignature = *(_OWORD *)a2;
    *(_OWORD *)&v12->lcsIntent = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v12->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v12->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v12->lcsGammaBlue = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v12->lcsFilename[6] = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v12->lcsFilename[14] = *(_OWORD *)(a2 + 96);
    v12 = (tagLOGCOLORSPACEW *)((char *)v12 + 128);
    *(_OWORD *)&v12[-1].lcsFilename[252] = *(_OWORD *)(a2 + 112);
    a2 += 128LL;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)&v12->lcsSignature = *(_OWORD *)a2;
  *(_OWORD *)&v12->lcsIntent = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v12->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&v12->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
  *(_QWORD *)&v12->lcsGammaBlue = *(_QWORD *)(a2 + 64);
  *(_DWORD *)&v12->lcsFilename[2] = *(_DWORD *)(a2 + 72);
  if ( a3 && a4 )
  {
    if ( (unsigned __int64)&a3[a4] > W32UserProbeAddress || &a3[a4] < a3 )
      *W32UserProbeAddress = 0;
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      v14 = (HANDLE)GrepSecureVirtualMemory(a3, v8, 2LL);
    else
      v14 = MmSecureVirtualMemory(a3, v8, 2u);
    Size_4 = v14;
    v11 = a8;
    v10 = a6;
    if ( v14 )
      v28 = a3;
    else
      v22 = 1;
  }
  if ( Address && v10 )
  {
    v15 = v10;
    v16 = &Address[v10];
    if ( (unsigned __int64)v16 > W32UserProbeAddress || v16 < Address )
      *W32UserProbeAddress = 0;
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      v17 = (HANDLE)GrepSecureVirtualMemory(Address, v15, 2LL);
    else
      v17 = MmSecureVirtualMemory(Address, v15, 2u);
    SecureHandle = v17;
    if ( v17 )
      v27 = Address;
    else
      v22 = 1;
  }
  if ( a7 && v11 )
  {
    v18 = &a7[v11];
    if ( (unsigned __int64)v18 > W32UserProbeAddress || v18 < a7 )
      *W32UserProbeAddress = 0;
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      v19 = (HANDLE)GrepSecureVirtualMemory(a7, v11, 2LL);
    else
      v19 = MmSecureVirtualMemory(a7, v11, 2u);
    v25 = v19;
    if ( v19 )
      v26 = a7;
    else
      v22 = 1;
  }
  v20 = 0LL;
  if ( !v22 )
    v20 = GreCreateColorTransform(a1, &v30, v28, v8, v27, a6, v26, v11);
  if ( Size_4 )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(Size_4);
    else
      MmUnsecureVirtualMemory(Size_4);
  }
  if ( SecureHandle )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(SecureHandle);
    else
      MmUnsecureVirtualMemory(SecureHandle);
  }
  if ( v25 )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v25);
    else
      MmUnsecureVirtualMemory(v25);
  }
  return v20;
}
