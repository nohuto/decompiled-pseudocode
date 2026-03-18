/*
 * XREFs of NtGdiCreateColorTransform @ 0x1403308B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1?$unique_ptr@EP6AXPEAX@Z@utl@@QEAA@XZ @ 0x14032FE6C (--1-$unique_ptr@EP6AXPEAX@Z@utl@@QEAA@XZ.c)
 *     ?GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14032FFF0 (-GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorTransform(
        HDC a1,
        const void *a2,
        const void *a3,
        unsigned int a4,
        const void *a5,
        unsigned int a6,
        const void *a7,
        unsigned int a8)
{
  void *v9; // r14
  void *v10; // rsi
  void *v11; // rdi
  int v12; // ebx
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  struct HOBJ__ *v18; // [rsp+60h] [rbp-378h]
  void (*v20)(void *); // [rsp+80h] [rbp-358h] BYREF
  void *v21; // [rsp+88h] [rbp-350h]
  void (*v22)(void *); // [rsp+90h] [rbp-348h] BYREF
  void *v23; // [rsp+98h] [rbp-340h]
  void (*v24)(void *); // [rsp+A0h] [rbp-338h] BYREF
  void *v25; // [rsp+A8h] [rbp-330h]
  const void *v26; // [rsp+B0h] [rbp-328h]
  HDC v27; // [rsp+B8h] [rbp-320h]
  __int64 v28; // [rsp+C0h] [rbp-318h]
  HDC v29; // [rsp+C8h] [rbp-310h]
  struct Gre::Base::SESSION_GLOBALS *v30[14]; // [rsp+D0h] [rbp-308h] BYREF
  tagLOGCOLORSPACEW v31; // [rsp+140h] [rbp-298h] BYREF

  v26 = a2;
  v27 = a1;
  v29 = a1;
  v18 = 0LL;
  v28 = 0LL;
  memset_0(&v31, 0, sizeof(v31));
  v24 = Win32FreePool;
  v9 = 0LL;
  v25 = 0LL;
  v22 = Win32FreePool;
  v10 = 0LL;
  v23 = 0LL;
  v20 = Win32FreePool;
  v11 = 0LL;
  v21 = 0LL;
  v12 = 0;
  if ( v26 )
  {
    GreProbeAndReadFromUntrustedVa(&v31, 0x24CuLL, v26, 0x24CuLL, 1uLL);
    if ( a3 && a4 )
    {
      v13 = (void *)Win32AllocPoolZInit(a4, 1835231559LL);
      v9 = v13;
      v25 = v13;
      if ( v13 )
        GreProbeAndReadFromUntrustedVa(v13, a4, a3, a4, 1uLL);
      else
        v12 = 1;
    }
    if ( a5 && a6 )
    {
      v14 = (void *)Win32AllocPoolZInit(a6, 1835231559LL);
      v10 = v14;
      v23 = v14;
      if ( v14 )
        GreProbeAndReadFromUntrustedVa(v14, a6, a5, a6, 1uLL);
      else
        v12 = 1;
    }
    if ( a7 && a8 )
    {
      v15 = (void *)Win32AllocPoolZInit(a8, 1835231559LL);
      v11 = v15;
      v21 = v15;
      if ( v15 )
        GreProbeAndReadFromUntrustedVa(v15, a8, a7, a8, 1uLL);
      else
        v12 = 1;
    }
    if ( !v12 )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v30, v27);
      if ( v30[0] )
        v18 = GrepCreateColorTransform(v30, &v31, v9, a4, v10, a6, v11, a8);
      else
        EngSetLastError(0x57u);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v30);
    }
    utl::unique_ptr<unsigned char,void (*)(void *)>::~unique_ptr<unsigned char,void (*)(void *)>((__int64)&v20);
    utl::unique_ptr<unsigned char,void (*)(void *)>::~unique_ptr<unsigned char,void (*)(void *)>((__int64)&v22);
    utl::unique_ptr<unsigned char,void (*)(void *)>::~unique_ptr<unsigned char,void (*)(void *)>((__int64)&v24);
    return v18;
  }
  else
  {
    utl::unique_ptr<unsigned char,void (*)(void *)>::~unique_ptr<unsigned char,void (*)(void *)>((__int64)&v20);
    utl::unique_ptr<unsigned char,void (*)(void *)>::~unique_ptr<unsigned char,void (*)(void *)>((__int64)&v22);
    utl::unique_ptr<unsigned char,void (*)(void *)>::~unique_ptr<unsigned char,void (*)(void *)>((__int64)&v24);
    return 0LL;
  }
}
