/*
 * XREFs of bCaptureBitmapInfo @ 0x1C00352D4
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C00344D0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C00346D0 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C004AEE0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00F2500 (NtGdiCreateSessionMappedDIBSection.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     GreGetBitmapSizeInternal @ 0x1C02A580C (GreGetBitmapSizeInternal.c)
 */

__int64 __fastcall bCaptureBitmapInfo(char *Src, unsigned int a2, unsigned int a3, unsigned int **a4)
{
  __int64 v4; // rbx
  unsigned int *v8; // rax
  __int64 v9; // rdx
  unsigned int *v10; // rdi
  unsigned int v11; // eax

  v4 = a3;
  if ( a3 >= 4 )
  {
    if ( Src )
    {
      if ( a3 <= 0x2710000 )
      {
        v8 = (unsigned int *)AllocThreadBufferWithTag(a3, 1886221383LL, 0LL);
        *a4 = v8;
        if ( v8 )
        {
          if ( &Src[v4] < Src || (unsigned __int64)&Src[v4] > W32UserProbeAddress )
            *W32UserProbeAddress = 0;
          memmove(v8, Src, (unsigned int)v4);
          v10 = *a4;
          v11 = **a4;
          if ( v11 >= 0x28
            && (unsigned int)v4 >= v11
            && (_DWORD)v4 == (unsigned int)GreGetBitmapSizeInternal(*a4, a2, v11) )
          {
            return 1LL;
          }
          FreeThreadBufferWithTag(v10, v9);
          *a4 = 0LL;
        }
      }
    }
  }
  return 0LL;
}
