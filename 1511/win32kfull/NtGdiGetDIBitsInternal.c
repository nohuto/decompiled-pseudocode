/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C00423A0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0042840 (GreGetDIBitsInternal.c)
 *     GreGetBitmapBitsSize @ 0x1C004B524 (GreGetBitmapBitsSize.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     GreGetBitmapSizeInternal @ 0x1C02A580C (GreGetBitmapSizeInternal.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char *Address,
        unsigned int a7,
        unsigned int a8)
{
  volatile void *v8; // r12
  unsigned int v9; // r13d
  size_t v10; // r14
  unsigned int BitmapSizeInternal; // eax
  struct tagBITMAPINFO *v12; // rax
  struct tagBITMAPINFO *v13; // rsi
  int biHeight; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  bool v18; // zf
  int v19; // eax
  unsigned int biWidth_high; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int DIBitsInternal; // ebx
  unsigned int v26; // [rsp+58h] [rbp-D0h]
  unsigned int Length; // [rsp+68h] [rbp-C0h]
  int v29; // [rsp+70h] [rbp-B8h]
  HANDLE SecureHandle; // [rsp+80h] [rbp-A8h]
  int v31; // [rsp+98h] [rbp-90h]
  _DWORD v33[10]; // [rsp+C0h] [rbp-68h] BYREF

  v31 = a2;
  v26 = a4;
  Length = a8;
  v29 = 1;
  SecureHandle = 0LL;
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v8 = (volatile void *)(a5 & -(__int64)(a4 != 0));
  v9 = *(_DWORD *)Address;
  ProbeForWrite(Address, *(unsigned int *)Address, 1u);
  if ( v8 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    LODWORD(v10) = 12;
    if ( v9 == 12 && !*((_WORD *)Address + 5) )
      goto LABEL_37;
    LODWORD(v10) = 0;
    if ( v9 >= 0x28 && !*((_WORD *)Address + 7) )
      LODWORD(v10) = 40;
  }
  if ( (_DWORD)v10 )
  {
LABEL_37:
    memmove(v33, Address, (unsigned int)v10);
    v33[0] = v10;
LABEL_38:
    v13 = (struct tagBITMAPINFO *)v33;
    goto LABEL_34;
  }
  if ( *(_DWORD *)Address == 40 )
    *((_DWORD *)Address + 8) = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7, v9);
  v10 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_38;
  v12 = (struct tagBITMAPINFO *)Win32AllocPool(BitmapSizeInternal);
  v13 = v12;
  if ( v12 )
    memset(v12, 0, (unsigned int)v10);
  if ( v13 )
  {
    if ( &Address[v10] < Address || (unsigned __int64)&Address[v10] > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    memmove(v13, Address, v10);
    v13->bmiHeader.biSize = v9;
    if ( (unsigned int)GreGetBitmapSizeInternal(v13, a7, v9) != (_DWORD)v10 )
    {
LABEL_58:
      LODWORD(v10) = 0;
      goto LABEL_61;
    }
    if ( v9 >= 0x28 )
      v13->bmiHeader.biClrUsed = 0;
    if ( v26 )
    {
      if ( v13->bmiHeader.biSize < 0x28 )
      {
        biWidth_high = HIWORD(v13->bmiHeader.biWidth);
        v21 = a3;
        if ( biWidth_high < a3 )
          v21 = HIWORD(v13->bmiHeader.biWidth);
        a3 = v21;
        v22 = biWidth_high - v21;
        v23 = v26;
        if ( v22 < v26 )
          v23 = v22;
        v26 = v23;
        if ( !LOWORD(v13->bmiHeader.biWidth) || !LOWORD(v13->bmiHeader.biHeight) )
          goto LABEL_49;
        v18 = HIWORD(v13->bmiHeader.biHeight) == 0;
      }
      else
      {
        biHeight = v13->bmiHeader.biHeight;
        if ( biHeight < 0 )
          biHeight = -biHeight;
        v15 = a3;
        if ( biHeight < a3 )
          v15 = biHeight;
        a3 = v15;
        v16 = biHeight - v15;
        v17 = v26;
        if ( v16 < v26 )
          v17 = v16;
        v26 = v17;
        if ( !v13->bmiHeader.biWidth || !v13->bmiHeader.biPlanes )
          goto LABEL_49;
        v18 = v13->bmiHeader.biBitCount == 0;
      }
      v19 = 0;
      if ( !v18 )
      {
LABEL_33:
        v29 = v19;
        goto LABEL_34;
      }
LABEL_49:
      v19 = 1;
      goto LABEL_33;
    }
  }
LABEL_34:
  if ( (_DWORD)v10 && v8 && v13 )
  {
    if ( v13->bmiHeader.biSize < 0x28 || v13->bmiHeader.biCompression - 1 > 1 || v13->bmiHeader.biSizeImage )
    {
      if ( a8 || (Length = GreGetBitmapBitsSize(v13)) != 0 )
      {
        ProbeForWrite(v8, Length, 4u);
        SecureHandle = MmSecureVirtualMemory((PVOID)v8, Length, 4u);
      }
      LODWORD(v10) = SecureHandle != 0LL ? v10 : 0;
      goto LABEL_61;
    }
    goto LABEL_58;
  }
LABEL_61:
  if ( v8 && v29 || !(_DWORD)v10 || !v13 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, v31, a3, v26, (__int64)v8, v13, a7, Length, v10);
    if ( DIBitsInternal )
      memmove(Address, v13, (unsigned int)v10);
  }
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v13 )
  {
    if ( v13 != (struct tagBITMAPINFO *)v33 )
      Win32FreePool(v13);
  }
  return DIBitsInternal;
}
