/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x1C00996E0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C02A5F8C (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
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
        char a12,
        SIZE_T Size,
        size_t a14,
        int a15,
        __int64 a16)
{
  unsigned int v16; // ebx
  HANDLE v17; // rsi
  int v18; // r14d
  char *v19; // rcx
  __int64 v21; // [rsp+88h] [rbp-50h] BYREF
  HANDLE v22; // [rsp+90h] [rbp-48h]

  v16 = 1;
  v17 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v18 = a12 & 3;
  if ( !(unsigned int)bCaptureBitmapInfo(Src, v18, (unsigned int)a14, (struct tagBITMAPINFO **)&v21) )
    goto LABEL_11;
  if ( Address )
  {
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = &Address[(unsigned int)Size];
      if ( (unsigned __int64)v19 > W32UserProbeAddress || v19 < Address )
        *W32UserProbeAddress = 0;
    }
    v17 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
    v22 = v17;
    if ( !v17 )
LABEL_11:
      v16 = 0;
  }
  if ( v16 == 1 )
    v16 = GreSetDIBitsToDeviceInternal(a1, a5, a6, a7, a8, a9, (__int64)Address, v21, v18, Size, a14, a15, a16);
  if ( v17 )
    MmUnsecureVirtualMemory(v17);
  if ( v21 )
    FreeThreadBufferWithTag(v21);
  return v16;
}
