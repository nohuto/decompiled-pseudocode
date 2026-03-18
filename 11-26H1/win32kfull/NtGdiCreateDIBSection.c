/*
 * XREFs of NtGdiCreateDIBSection @ 0x14007BFA0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDIBitmap @ 0x140015974 (GreCreateDIBitmap.c)
 *     GreGetBitmapBitsSize @ 0x14007BED4 (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x14007DFBC (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreGetDCDpiScaleValue @ 0x1401C0220 (GreGetDCDpiScaleValue.c)
 */

HSURF __fastcall NtGdiCreateDIBSection(
        Gre::Base *a1,
        __int64 a2,
        int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        void *a9)
{
  HSURF DIBitmap; // rdi
  int DCDpiScaleValue; // r8d
  struct tagBITMAPINFO *v14; // rcx
  int v15; // r10d
  LONG biHeight; // eax
  LONG biWidth; // edx
  LONG v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  NTSTATUS v22; // esi
  void *v23; // rax
  void *v24; // rsi
  Gre::Base *v25; // rcx
  void *v27; // rax
  int v28; // ecx
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-98h] BYREF
  struct tagBITMAPINFO *v31; // [rsp+78h] [rbp-90h] BYREF
  PVOID v32; // [rsp+80h] [rbp-88h] BYREF
  int v33; // [rsp+88h] [rbp-80h]
  PVOID BaseAddress; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35; // [rsp+98h] [rbp-70h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-58h]
  void *v39; // [rsp+B8h] [rbp-50h]
  ULONG_PTR v40; // [rsp+C0h] [rbp-48h]
  int v41; // [rsp+C8h] [rbp-40h]
  unsigned int BitmapBitsSize; // [rsp+128h] [rbp+20h]

  DIBitmap = 0LL;
  v33 = 0;
  if ( a4 )
  {
    v31 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4, a5, a6, &v31);
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue((HDC)a1);
      if ( DCDpiScaleValue > 1 )
      {
        v14 = v31;
        v15 = 0x7FFFFFFF / DCDpiScaleValue;
        biHeight = -v31->bmiHeader.biHeight;
        if ( v31->bmiHeader.biHeight > 0 )
          biHeight = v31->bmiHeader.biHeight;
        if ( v15 < biHeight )
          goto LABEL_11;
        biWidth = v31->bmiHeader.biWidth;
        v18 = -biWidth;
        if ( biWidth > 0 )
          v18 = v31->bmiHeader.biWidth;
        if ( v15 < v18 )
LABEL_11:
          RtlRaiseStatus(-1073741675);
        v31->bmiHeader.biHeight *= DCDpiScaleValue;
        v14->bmiHeader.biWidth = DCDpiScaleValue * biWidth;
      }
    }
    if ( v31 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize((__int64)v31);
      v21 = BitmapBitsSize;
      RegionSize = BitmapBitsSize;
      if ( BitmapBitsSize )
      {
        if ( a2 )
        {
          v32 = (PVOID)(a3 & 0xFFFF0000);
          RegionSize = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
          v35 = a2;
          LOBYTE(v20) = 1;
          Gre::SectionObj::SectionObj(&v36, &v35, 1LL, v20);
          if ( v36 )
          {
            v37 = 0LL;
            v38 = 0LL;
            v39 = 0LL;
            v40 = 0LL;
            v41 = 6;
            if ( (unsigned __int8)Gre::MapViewOfSectionObj::Map(&v37, v36, 1LL, RegionSize, &v32) )
            {
              RegionSize = v40;
              v27 = v39;
              v39 = 0LL;
              v37 = 0LL;
              v38 = 0LL;
              v40 = 0LL;
              v28 = 6;
              v41 = 6;
              BaseAddress = v27;
              v22 = 0;
            }
            else
            {
              EngSetLastError(0x57u);
              v22 = -1073741811;
              v28 = v41;
            }
            if ( v28 != 6 )
              Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v37);
          }
          else
          {
            EngSetLastError(0x57u);
            v22 = -1073741811;
          }
          Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v36);
        }
        else
        {
          v22 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
          a3 = 0;
          if ( v22 < 0 )
            EngSetLastError(8u);
        }
        if ( v22 >= 0 )
        {
          v32 = (char *)BaseAddress + (unsigned __int16)a3;
          v23 = GrepSecureVirtualMemory(BaseAddress, RegionSize, 4u);
          v24 = v23;
          v35 = (__int64)v23;
          if ( v23
            && (DIBitmap = (HSURF)GreCreateDIBitmap(
                                    a1,
                                    2u,
                                    (__int64)v32,
                                    (__int64)v31,
                                    a5,
                                    a6,
                                    BitmapBitsSize,
                                    a2,
                                    a3,
                                    (__int64)v23,
                                    a7 & 0x14 | 2u,
                                    a8)) != 0LL )
          {
            GreProbeAndWriteToUntrustedVa(a9, 8uLL, &v32, 8uLL, 1uLL);
            v33 = 1;
          }
          else
          {
            EngSetLastError(0x57u);
          }
          if ( !v33 )
          {
            if ( DIBitmap )
            {
              v29 = Gre::Base::Globals(v25);
              bDeleteSurface(v29, DIBitmap);
              DIBitmap = 0LL;
            }
            else
            {
              if ( v24 )
                GrepUnsecureVirtualMemory(v24);
              if ( a2 )
              {
                ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
              }
              else
              {
                RegionSize = 0LL;
                ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v32, &RegionSize, 0x8000u);
              }
            }
          }
        }
      }
      FreeThreadBufferWithTag(v31, v21, v19);
    }
  }
  return DIBitmap;
}
