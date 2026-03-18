/*
 * XREFs of NtGdiCheckBitmapBits @ 0x1403304B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1?$unique_ptr@EP6AXPEAX@Z@utl@@QEAA@XZ @ 0x14032FE6C (--1-$unique_ptr@EP6AXPEAX@Z@utl@@QEAA@XZ.c)
 *     ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14032FE90 (-GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(
        HDC a1,
        void *a2,
        const void *a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        void *a8)
{
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  void *v13; // r12
  unsigned __int8 *v14; // r14
  ULONG v16; // ecx
  _DWORD v17[3]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v18; // [rsp+5Ch] [rbp-CCh]
  __int64 v19; // [rsp+60h] [rbp-C8h]
  int v20; // [rsp+68h] [rbp-C0h]
  int v21; // [rsp+6Ch] [rbp-BCh]
  _QWORD v22[2]; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v24[19]; // [rsp+90h] [rbp-98h] BYREF

  v21 = 0;
  v10 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_18;
  v11 = 3LL * a5;
  if ( v11 > 0xFFFFFFFF || (int)v11 + 3 < (unsigned int)v11 )
  {
    v16 = 534;
LABEL_19:
    EngSetLastError(v16);
    return 0LL;
  }
  v12 = (v11 + 3) & 0xFFFFFFFC;
  if ( a7 != v12 )
  {
LABEL_18:
    v16 = 87;
    goto LABEL_19;
  }
  v17[0] = 5;
  v17[1] = a5;
  v17[2] = 1;
  v18 = (v11 + 3) & 0xFFFFFFFC;
  v19 = 0LL;
  v20 = 0;
  v13 = (void *)Win32AllocPoolZInit(v12, 1835231559LL);
  v23[0] = Win32FreePool;
  v23[1] = v13;
  v14 = (unsigned __int8 *)Win32AllocPoolZInit(a5, 1835231559LL);
  v22[0] = Win32FreePool;
  v22[1] = v14;
  if ( v13 && v14 )
  {
    GreProbeAndReadFromUntrustedVa(v13, v18, a3, v18, 1uLL);
    GreProbeForWriteToUntrustedVa(a8, a5);
  }
  else
  {
    v10 = 0;
  }
  if ( v10 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v24, a1);
    if ( v24[0] )
      v10 = GrepCheckBitmapBits((struct XDCOBJ *)v24, a2, (struct _DEVBITMAPINFO *)v17, v13, v14);
    if ( v10 )
      GreProbeAndWriteToUntrustedVa(a8, a5, v14, a5, 1uLL);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
  }
  utl::unique_ptr<unsigned char,void (*)(void *)>::~unique_ptr<unsigned char,void (*)(void *)>((__int64)v22);
  utl::unique_ptr<unsigned char,void (*)(void *)>::~unique_ptr<unsigned char,void (*)(void *)>((__int64)v23);
  return v10;
}
