/*
 * XREFs of ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C02A6BAC
 * Callers:
 *     NtGdiCreateDIBitmapInternal @ 0x1C003AB20 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C003AD80 (NtGdiCreateDIBSection.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C00BD8A0 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C0100FA0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C0110CE0 (NtGdiCreateSessionMappedDIBSection.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C02A6A10 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 */

__int64 __fastcall bCaptureBitmapInfo(struct tagBITMAPINFO *Src, int a2, size_t Size, const struct tagBITMAPINFO **a4)
{
  __int64 v4; // rbx
  struct tagBITMAPINFO *v8; // rax
  const struct tagBITMAPINFO *v9; // rdi
  DWORD biSize; // eax

  v4 = (unsigned int)Size;
  if ( (unsigned int)Size >= 4 )
  {
    if ( Src )
    {
      if ( (unsigned int)Size <= 0x2710000 )
      {
        v8 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
        *a4 = v8;
        if ( v8 )
        {
          if ( (struct tagBITMAPINFO *)((char *)Src + v4) < Src || (unsigned __int64)Src + v4 > W32UserProbeAddress )
            *W32UserProbeAddress = 0;
          memmove(v8, Src, (unsigned int)v4);
          v9 = *a4;
          biSize = (*a4)->bmiHeader.biSize;
          if ( biSize >= 0x28
            && (unsigned int)v4 >= biSize
            && (_DWORD)v4 == (unsigned int)GreGetBitmapSizeInternal(*a4, a2, biSize) )
          {
            return 1LL;
          }
          FreeThreadBufferWithTag(v9);
          *a4 = 0LL;
        }
      }
    }
  }
  return 0LL;
}
