/*
 * XREFs of NtGdiCreateDIBitmapInternal @ 0x14007DD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x140079040 (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x14007DFBC (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepCreateCompatibleBitmapWithDIBits@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x14016959C (-GrepCreateCompatibleBitmapWithDIBits@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEA.c)
 */

__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile void *a5,
        struct tagBITMAPINFO *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  int v12; // r15d
  int v13; // r12d
  __int64 CompatibleBitmapWithDIBits; // rdi
  __int64 inited; // rax
  struct tagBITMAPINFO *v18; // [rsp+70h] [rbp-108h] BYREF
  __int64 v19; // [rsp+78h] [rbp-100h] BYREF
  __int64 v20; // [rsp+80h] [rbp-F8h]
  __int64 v21; // [rsp+88h] [rbp-F0h]
  __int16 v22; // [rsp+90h] [rbp-E8h]
  __int64 v23; // [rsp+98h] [rbp-E0h]
  _BYTE v24[32]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 *v25; // [rsp+C0h] [rbp-B8h]
  _BYTE v26[168]; // [rsp+D0h] [rbp-A8h] BYREF

  v12 = a3;
  v13 = a2;
  v18 = 0LL;
  CompatibleBitmapWithDIBits = 1LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  if ( a6 )
  {
    a3 = a8;
    if ( a8 )
    {
      CompatibleBitmapWithDIBits = -(__int64)((unsigned int)bCaptureBitmapInfo(a6, a7, a8, &v18) != 0) & 1;
      v23 = CompatibleBitmapWithDIBits;
      if ( CompatibleBitmapWithDIBits )
      {
        a2 = (__int64)a5;
        if ( a5 )
        {
          inited = umptr_r<unsigned char>::init_probe((__int64)v24, a5, a9, 4u);
          v19 = *(_QWORD *)inited;
          v20 = *(_QWORD *)(inited + 8);
          v21 = *(_QWORD *)(inited + 16);
          v22 = *(_WORD *)(inited + 24);
          a2 = -v19;
          CompatibleBitmapWithDIBits &= -(__int64)(v19 != 0);
        }
      }
    }
  }
  if ( CompatibleBitmapWithDIBits == 1 )
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v26, a1);
    if ( (a4 & 2) != 0 )
    {
      GrepCreateDIBitmap(
        (__int64)v24,
        (OPTAPIDCOBJ *)v26,
        a4,
        &v19,
        &v18->bmiHeader.biSize,
        a7,
        a8,
        0LL,
        0,
        0LL,
        0,
        0LL,
        0LL);
      if ( v25 )
        CompatibleBitmapWithDIBits = *v25;
      else
        CompatibleBitmapWithDIBits = 0LL;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v24);
    }
    else
    {
      CompatibleBitmapWithDIBits = GrepCreateCompatibleBitmapWithDIBits(
                                     (struct OPTAPIDCOBJ *)v26,
                                     v13,
                                     v12,
                                     (__int64)&v19,
                                     (__int64)v18,
                                     a7,
                                     a8,
                                     a11);
    }
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v26);
  }
  if ( v18 )
    FreeThreadBufferWithTag(v18, a2, a3);
  return CompatibleBitmapWithDIBits;
}
