/*
 * XREFs of NtGdiStartDoc @ 0x14027D880
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1401D0450 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z @ 0x140310CA8 (-GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiStartDoc(HDC a1, __int64 a2, void *a3, int a4)
{
  unsigned int started; // r15d
  unsigned __int64 v6; // rdi
  int v7; // esi
  unsigned __int64 v8; // rax
  int v9; // eax
  const WCHAR *v10; // rax
  unsigned __int64 v11; // rax
  int v12; // eax
  const WCHAR *v13; // rax
  unsigned __int64 v14; // rax
  int v15; // eax
  const WCHAR *v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // r8
  __int64 SessionState; // rax
  unsigned __int64 v22; // [rsp+38h] [rbp-130h] BYREF
  int v23; // [rsp+40h] [rbp-128h] BYREF
  const void *v24; // [rsp+48h] [rbp-120h] BYREF
  const void *v25; // [rsp+50h] [rbp-118h] BYREF
  const void *v26; // [rsp+58h] [rbp-110h] BYREF
  _DOCINFOW v27; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v28[56]; // [rsp+88h] [rbp-E0h] BYREF
  _QWORD v29[21]; // [rsp+C0h] [rbp-A8h] BYREF
  int v31; // [rsp+178h] [rbp+10h] BYREF
  void *v32; // [rsp+180h] [rbp+18h]
  int v33; // [rsp+188h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  started = 0;
  v23 = 0;
  memset(&v27, 0, sizeof(v27));
  v6 = 0LL;
  v22 = 0LL;
  v7 = 1;
  if ( a2 )
  {
    v25 = 0LL;
    v26 = 0LL;
    v24 = 0LL;
    GreProbeForReadFromUntrustedVa((const void *)a2, 0x28uLL, 4uLL);
    GreProbeAndReadFromUntrustedVa(&v27, 4uLL, (const void *)a2, 4uLL, 1uLL);
    GreProbeAndReadFromUntrustedVa(&v25, 8uLL, (const void *)(a2 + 8), 8uLL, 1uLL);
    GreProbeAndReadFromUntrustedVa(&v26, 8uLL, (const void *)(a2 + 16), 8uLL, 1uLL);
    GreProbeAndReadFromUntrustedVa(&v24, 8uLL, (const void *)(a2 + 24), 8uLL, 1uLL);
    if ( v25 )
    {
      GreProbeForReadFromUntrustedVa(v25, 2uLL, 2uLL);
      v8 = GreWideStringLengthFromUntrustedVa((const unsigned __int16 *)v25);
      if ( v8 + 1 >= v8 )
      {
        v9 = ULongLongMult(v8 + 1, 2uLL, &v22);
        v6 = v22;
        if ( v9 >= 0 && v22 <= 0xFFFFFFFF )
        {
          if ( (_DWORD)v22 )
            v10 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)v22, 1886221383LL, 0LL);
          else
            v10 = 0LL;
          v27.lpszDocName = v10;
        }
      }
      if ( v27.lpszDocName )
      {
        GreProbeAndReadFromUntrustedVa((void *)v27.lpszDocName, v6, v25, v6, 2uLL);
        if ( v6 >= 2 )
          v27.lpszDocName[(v6 >> 1) - 1] = 0;
      }
      else
      {
        v7 = 0;
      }
    }
    if ( v26 )
    {
      GreProbeForReadFromUntrustedVa(v26, 2uLL, 2uLL);
      v11 = GreWideStringLengthFromUntrustedVa((const unsigned __int16 *)v26);
      if ( v11 + 1 >= v11 )
      {
        v12 = ULongLongMult(v11 + 1, 2uLL, &v22);
        v6 = v22;
        if ( v12 >= 0 && v22 <= 0xFFFFFFFF )
        {
          if ( (_DWORD)v22 )
            v13 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)v22, 1886221383LL, 0LL);
          else
            v13 = 0LL;
          v27.lpszOutput = v13;
        }
      }
      if ( v27.lpszOutput )
      {
        GreProbeAndReadFromUntrustedVa((void *)v27.lpszOutput, v6, v26, v6, 2uLL);
        if ( v6 >= 2 )
          v27.lpszOutput[(v6 >> 1) - 1] = 0;
      }
      else
      {
        v7 = 0;
      }
    }
    if ( (unsigned __int64)v27.cbSize >= 0x28 && v24 )
    {
      GreProbeForReadFromUntrustedVa(v24, 2uLL, 2uLL);
      v14 = GreWideStringLengthFromUntrustedVa((const unsigned __int16 *)v24);
      if ( v14 + 1 >= v14 )
      {
        v15 = ULongLongMult(v14 + 1, 2uLL, &v22);
        v6 = v22;
        if ( v15 >= 0 && v22 <= 0xFFFFFFFF )
        {
          GreProbeForReadFromUntrustedVa(v24, v22, 2uLL);
          if ( (_DWORD)v6 )
            v16 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)v6, 1886221383LL, 0LL);
          else
            v16 = 0LL;
          v27.lpszDatatype = v16;
        }
      }
      if ( v27.lpszDatatype )
      {
        GreProbeAndReadFromUntrustedVa((void *)v27.lpszDatatype, v6, v24, v6, 2uLL);
        if ( v6 >= 2 )
          v27.lpszDatatype[(v6 >> 1) - 1] = 0;
      }
      else
      {
        v7 = 0;
      }
    }
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v29, a1);
  if ( v7 && v29[0] )
  {
    SessionState = W32GetSessionState(v18, v17);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v28,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v28) )
    {
      started = GrepStartDoc((struct APIDCOBJ *)v29, &v27, &v23, v33);
      if ( started )
      {
        v31 = v23;
        GreProbeAndWriteToUntrustedVa(v32, 4uLL, &v31, 4uLL, 1uLL);
      }
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v28);
  }
  if ( v27.lpszDocName )
    FreeThreadBufferWithTag(v27.lpszDocName, v17, v19);
  if ( v27.lpszOutput )
    FreeThreadBufferWithTag(v27.lpszOutput, v17, v19);
  if ( v27.lpszDatatype )
    FreeThreadBufferWithTag(v27.lpszDatatype, v17, v19);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v29);
  return started;
}
