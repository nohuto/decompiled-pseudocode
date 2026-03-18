/*
 * XREFs of GreSetDIBits @ 0x140336C78
 * Callers:
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402CE7E8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x1400B5808 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x14016AE30 (-GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@.c)
 *     ?pbmiConvertInfo@@YAPEAUtagBITMAPINFO@@PEBU1@K@Z @ 0x14032A0E0 (-pbmiConvertInfo@@YAPEAUtagBITMAPINFO@@PEBU1@K@Z.c)
 */

__int64 __fastcall GreSetDIBits(HDC a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, struct tagBITMAPINFO *a6)
{
  struct tagBITMAPINFO *v9; // rdi
  DWORD biCompression; // eax
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 v14[3]; // [rsp+50h] [rbp-A8h] BYREF
  __int16 v15; // [rsp+68h] [rbp-90h]
  _BYTE v16[112]; // [rsp+70h] [rbp-88h] BYREF

  v9 = a6;
  if ( !a6 )
    goto LABEL_8;
  if ( a6->bmiHeader.biSize == 12 )
    v9 = pbmiConvertInfo(a6, a2, a3);
  if ( a6->bmiHeader.biSize >= 0x28
    && ((biCompression = a6->bmiHeader.biCompression, biCompression == 4) || biCompression == 5) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
LABEL_8:
    v14[0] = a5;
    v14[1] = -1LL;
    v14[2] = 0LL;
    v15 = 0;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v16, a1);
    v13 = GrepSetDIBits((OPTAPIDCOBJ *)v16, a2, v12, a4, v14, &v9->bmiHeader.biSize, 0, -1, 0LL);
    if ( v9 )
    {
      if ( v9 != a6 )
        Win32FreePool(v9);
    }
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v16);
    return v13;
  }
}
