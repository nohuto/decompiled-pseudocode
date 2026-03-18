/*
 * XREFs of NtGdiIcmBrushInfo @ 0x140330CF0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x14007BED4 (GreGetBitmapBitsSize.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x140330114 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x140330354 (-GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 */

struct tagBITMAPINFO *__fastcall NtGdiIcmBrushInfo(
        HDC a1,
        HBRUSH a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        int a8)
{
  struct tagBITMAPINFO *result; // rax
  struct tagBITMAPINFO *v11; // rsi
  unsigned int v12; // ebx
  unsigned int BitmapBitsSize; // eax
  unsigned int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-C0h] BYREF
  struct tagBITMAPINFO *v17; // [rsp+50h] [rbp-B8h]
  _QWORD v18[21]; // [rsp+60h] [rbp-A8h] BYREF

  v14 = 0;
  result = (struct tagBITMAPINFO *)PALLOCNOZ(0x428u, 1835231559LL, (__int64)a3);
  v11 = result;
  v17 = result;
  if ( result )
  {
    if ( a8 )
    {
      if ( a8 != 1 )
      {
        EngSetLastError(0x57u);
LABEL_5:
        v12 = 0;
LABEL_19:
        Win32FreePool(v11);
        return (struct tagBITMAPINFO *)v12;
      }
      GreProbeAndReadFromUntrustedVa(result, 0x428uLL, a3, 0x428uLL, 1uLL);
      GreProbeAndReadFromUntrustedVa(&v14, 4uLL, a5, 4uLL, 1uLL);
      BitmapBitsSize = GreGetBitmapBitsSize((__int64)v11);
      if ( !BitmapBitsSize || BitmapBitsSize > v14 )
        goto LABEL_5;
      GreProbeForReadFromUntrustedVa(a4, BitmapBitsSize, 4uLL);
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, a1);
      v12 = v18[0] != 0LL;
      if ( v18[0] )
        v12 = GrepIcmSetBrushBitmap((struct XDCOBJ *)v18, a2, v11, a4);
    }
    else
    {
      v15 = 0;
      v16 = 0;
      if ( a4 )
      {
        GreProbeAndReadFromUntrustedVa(&v14, 4uLL, a5, 4uLL, 1uLL);
        GreProbeForWriteToUntrustedVa(a4, v14, 4uLL);
      }
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, a1);
      v12 = v18[0] != 0LL;
      if ( v18[0] )
      {
        v12 = GrepIcmQueryBrushBitmap((struct XDCOBJ *)v18, a2, v11, (__int64)a4, &v14, &v16, &v15);
        if ( v12 )
        {
          GreProbeAndWriteToUntrustedVa(a3, 0x428uLL, v11, 0x428uLL, 1uLL);
          GreProbeAndWriteToUntrustedVa(a5, 4uLL, &v14, 4uLL, 1uLL);
          if ( a7 )
            GreProbeAndWriteToUntrustedVa(a7, 4uLL, &v15, 4uLL, 1uLL);
          if ( a6 )
            GreProbeAndWriteToUntrustedVa(a6, 4uLL, &v16, 4uLL, 1uLL);
        }
      }
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
    goto LABEL_19;
  }
  return result;
}
