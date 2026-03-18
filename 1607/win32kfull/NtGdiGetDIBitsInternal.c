/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C004C070
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0049A50 (GreGetDIBitsInternal.c)
 *     GreGetBitmapBitsSize @ 0x1C0110F1C (GreGetBitmapBitsSize.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C02A6A10 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        HDC a1,
        HSURF a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *Address,
        unsigned int a7,
        unsigned int a8)
{
  volatile void *v8; // r12
  unsigned int biSize; // r13d
  size_t v10; // rsi
  __int64 v11; // r8
  unsigned int BitmapSizeInternal; // eax
  struct tagBITMAPINFO *v13; // rax
  struct tagBITMAPINFO *v14; // rdi
  int biHeight; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  bool v19; // zf
  int v20; // eax
  unsigned int biWidth_high; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  HANDLE v25; // rax
  HSURF v26; // rdx
  unsigned int DIBitsInternal; // r15d
  unsigned int v29; // [rsp+58h] [rbp-D0h]
  unsigned int Length; // [rsp+60h] [rbp-C8h]
  int v32; // [rsp+70h] [rbp-B8h]
  HANDLE SecureHandle; // [rsp+78h] [rbp-B0h]
  _DWORD v36[10]; // [rsp+C0h] [rbp-68h] BYREF

  v29 = a4;
  Length = a8;
  v32 = 1;
  SecureHandle = 0LL;
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v8 = (volatile void *)(a5 & -(__int64)(a4 != 0));
  biSize = Address->bmiHeader.biSize;
  ProbeForWrite(Address, Address->bmiHeader.biSize, 1u);
  if ( v8 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    LODWORD(v10) = 12;
    if ( biSize == 12 && !HIWORD(Address->bmiHeader.biHeight) )
      goto LABEL_13;
    LODWORD(v10) = 0;
    if ( biSize >= 0x28 && !Address->bmiHeader.biBitCount )
      LODWORD(v10) = 40;
  }
  if ( (_DWORD)v10 )
  {
LABEL_13:
    memmove(v36, Address, (unsigned int)v10);
    v36[0] = v10;
LABEL_47:
    v14 = (struct tagBITMAPINFO *)v36;
    goto LABEL_48;
  }
  if ( Address->bmiHeader.biSize == 40 )
    Address->bmiHeader.biClrUsed = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7, biSize);
  v10 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_47;
  v13 = (struct tagBITMAPINFO *)Win32AllocPool(BitmapSizeInternal, 1886221383LL);
  v14 = v13;
  if ( v13 )
    memset(v13, 0, (unsigned int)v10);
  if ( v14 )
  {
    if ( (struct tagBITMAPINFO *)((char *)Address + v10) < Address
      || (unsigned __int64)Address + v10 > W32UserProbeAddress )
    {
      *W32UserProbeAddress = 0;
    }
    memmove(v14, Address, v10);
    v14->bmiHeader.biSize = biSize;
    if ( GreGetBitmapSizeInternal(v14, a7, biSize) != (_DWORD)v10 )
    {
LABEL_54:
      LODWORD(v10) = 0;
      goto LABEL_62;
    }
    if ( biSize >= 0x28 )
      v14->bmiHeader.biClrUsed = 0;
    if ( v29 )
    {
      if ( v14->bmiHeader.biSize < 0x28 )
      {
        biWidth_high = HIWORD(v14->bmiHeader.biWidth);
        v22 = a3;
        if ( biWidth_high < a3 )
          v22 = HIWORD(v14->bmiHeader.biWidth);
        a3 = v22;
        v23 = biWidth_high - v22;
        v24 = v29;
        if ( v23 < v29 )
          v24 = v23;
        v29 = v24;
        if ( !LOWORD(v14->bmiHeader.biWidth) || !LOWORD(v14->bmiHeader.biHeight) )
          goto LABEL_38;
        v19 = HIWORD(v14->bmiHeader.biHeight) == 0;
      }
      else
      {
        biHeight = v14->bmiHeader.biHeight;
        if ( biHeight < 0 )
          biHeight = -biHeight;
        v16 = a3;
        if ( biHeight < a3 )
          v16 = biHeight;
        a3 = v16;
        v17 = biHeight - v16;
        v18 = v29;
        if ( v17 < v29 )
          v18 = v17;
        v29 = v18;
        if ( !v14->bmiHeader.biWidth || !v14->bmiHeader.biPlanes )
          goto LABEL_38;
        v19 = v14->bmiHeader.biBitCount == 0;
      }
      v20 = 0;
      if ( !v19 )
      {
LABEL_39:
        v32 = v20;
        goto LABEL_48;
      }
LABEL_38:
      v20 = 1;
      goto LABEL_39;
    }
  }
LABEL_48:
  if ( (_DWORD)v10 && v8 && v14 )
  {
    if ( v14->bmiHeader.biSize < 0x28 || v14->bmiHeader.biCompression - 1 > 1 || v14->bmiHeader.biSizeImage )
    {
      if ( a8 || (Length = GreGetBitmapBitsSize(v14)) != 0 )
      {
        ProbeForWrite(v8, Length, 4u);
        if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
          v25 = (HANDLE)GrepSecureVirtualMemory(v8, Length, 4LL);
        else
          v25 = MmSecureVirtualMemory((PVOID)v8, Length, 4u);
        SecureHandle = v25;
      }
      LODWORD(v10) = SecureHandle != 0LL ? v10 : 0;
      goto LABEL_62;
    }
    goto LABEL_54;
  }
LABEL_62:
  v26 = a2;
  if ( v8 && v32 || !(_DWORD)v10 || !v14 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, a2, a3, v29, (unsigned __int8 *)v8, v14, a7, Length, v10);
    if ( DIBitsInternal )
      memmove(Address, v14, (unsigned int)v10);
  }
  if ( SecureHandle )
  {
    if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(SecureHandle);
    else
      MmUnsecureVirtualMemory(SecureHandle);
  }
  if ( v14 )
  {
    if ( v14 != (struct tagBITMAPINFO *)v36 )
      Win32FreePool(v14, v26, v11);
  }
  return DIBitsInternal;
}
