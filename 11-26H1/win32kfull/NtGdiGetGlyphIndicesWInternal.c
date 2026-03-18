/*
 * XREFs of NtGdiGetGlyphIndicesWInternal @ 0x14020CC00
 * Callers:
 *     NtGdiGetGlyphIndicesW @ 0x14020CBD0 (NtGdiGetGlyphIndicesW.c)
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z @ 0x1401835D8 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesWInternal(HDC a1, _BYTE *a2, int a3, void *a4, unsigned int a5, int a6)
{
  __int64 v6; // r15
  _BYTE *v8; // rdi
  int v9; // esi
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int *GlyphIndicesW; // rax
  unsigned int v15; // eax
  unsigned __int64 v16; // r12
  __int64 v17; // rdx
  int v18; // ecx
  __int64 SessionState; // rax
  unsigned int v20; // [rsp+40h] [rbp-188h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-184h] BYREF
  int v22; // [rsp+48h] [rbp-180h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-178h]
  int v24; // [rsp+58h] [rbp-170h]
  _BYTE *v25; // [rsp+60h] [rbp-168h]
  HDC v26; // [rsp+68h] [rbp-160h]
  void *v27; // [rsp+70h] [rbp-158h]
  __int64 v28; // [rsp+78h] [rbp-150h]
  HDC v29; // [rsp+80h] [rbp-148h]
  void *v30; // [rsp+88h] [rbp-140h]
  _BYTE v31[64]; // [rsp+90h] [rbp-138h] BYREF
  _QWORD v32[14]; // [rsp+D0h] [rbp-F8h] BYREF
  _BYTE v33[64]; // [rsp+140h] [rbp-88h] BYREF

  v27 = a4;
  v6 = a3;
  v25 = a2;
  v26 = a1;
  v29 = a1;
  v22 = a3;
  v30 = a4;
  v8 = 0LL;
  v23 = 0LL;
  v9 = -1;
  if ( a3 < 0 )
  {
    v10 = -1;
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v20, v10);
  }
  if ( a3 || a2 || a4 || a5 )
  {
    v15 = 0;
    if ( a5 <= 1 )
      v15 = a5;
    v21 = v15;
    v20 = v15;
    if ( a3 > 16 )
    {
      if ( (unsigned __int64)a3 <= 0x9C4000 )
      {
        v8 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)(4 * a3));
        v23 = v8;
        a2 = v25;
      }
    }
    else
    {
      v8 = v33;
      v23 = v33;
    }
    if ( v8 )
    {
      v16 = 2 * v6;
      v28 = 2 * v6;
      v25 = &v8[2 * v6];
      GreProbeAndReadFromUntrustedVa(&v8[v16], v16, a2, v16, 1uLL);
      v9 = v6;
      v24 = v6;
      if ( (_DWORD)v6 != -1 )
      {
        SessionState = W32GetSessionState(v18, v17);
        EUDCCountRegion::EUDCCountRegion(
          (EUDCCountRegion *)v31,
          (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
        if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v31) )
        {
          APIDCOBJ::APIDCOBJ((APIDCOBJ *)v32, v26);
          v9 = v32[0]
             ? *GrepGetGlyphIndicesW(&v20, (struct XDCOBJ *)v32, (WCHAR *)&v8[v16], v6, (__int64)v8, v21, a6)
             : -1;
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v32);
        }
        else
        {
          v9 = -1;
        }
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v31);
        if ( v9 != -1 )
          GreProbeAndWriteToUntrustedVa(v27, v16, v8, v16, 1uLL);
      }
      if ( v8 != v33 )
        FreeTmpBuffer(v8);
    }
    v10 = v9;
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v20, v10);
  }
  v11 = W32GetSessionState((_DWORD)a1, 0LL);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v31,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v11 + 96) + 4864LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v31) )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v32, a1);
    if ( v32[0] )
      GlyphIndicesW = GrepGetGlyphIndicesW(&v21, (struct XDCOBJ *)v32, 0LL, 0, 0LL, 0, a6);
    else
      GlyphIndicesW = ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v22, -1);
    v12 = *GlyphIndicesW;
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v32);
  }
  else
  {
    v12 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v20, -1);
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v31);
  return v12;
}
