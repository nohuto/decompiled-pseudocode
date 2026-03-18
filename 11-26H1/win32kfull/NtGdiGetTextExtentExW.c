/*
 * XREFs of NtGdiGetTextExtentExW @ 0x140280E20
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x14006FBA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z @ 0x1401A60AC (-GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14033A28C (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetTextExtentExW(
        HDC a1,
        const void *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        void *a6,
        void *a7,
        char a8)
{
  unsigned __int64 v8; // r14
  const void *v9; // r8
  int v10; // ecx
  unsigned int v11; // r13d
  _BYTE *v12; // r12
  __int64 v13; // rsi
  int v14; // r15d
  unsigned int TextExtent; // edi
  __int64 SessionState; // rax
  unsigned int v17; // r9d
  unsigned int v19; // [rsp+44h] [rbp-1B4h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-1B0h] BYREF
  _BYTE *v21; // [rsp+50h] [rbp-1A8h]
  int v22; // [rsp+58h] [rbp-1A0h]
  _BYTE *v23; // [rsp+60h] [rbp-198h]
  void *v24; // [rsp+68h] [rbp-190h]
  HDC v25; // [rsp+70h] [rbp-188h]
  struct tagSIZE v26; // [rsp+78h] [rbp-180h] BYREF
  void *v27; // [rsp+80h] [rbp-178h]
  void *v28; // [rsp+88h] [rbp-170h]
  const void *v29; // [rsp+90h] [rbp-168h]
  HDC v30; // [rsp+98h] [rbp-160h]
  void *v31; // [rsp+A0h] [rbp-158h]
  _BYTE v32[56]; // [rsp+A8h] [rbp-150h] BYREF
  _QWORD v33[14]; // [rsp+E0h] [rbp-118h] BYREF
  _BYTE v34[64]; // [rsp+150h] [rbp-A8h] BYREF
  _BYTE v35[32]; // [rsp+190h] [rbp-68h] BYREF

  v8 = a3;
  v9 = a2;
  v29 = a2;
  v25 = a1;
  v30 = a1;
  v20 = v8;
  v10 = (int)a5;
  v28 = a5;
  v31 = a5;
  v24 = a6;
  v27 = a7;
  v26 = 0LL;
  v11 = 0;
  v19 = 0;
  v12 = 0LL;
  v23 = 0LL;
  v13 = 0LL;
  v21 = 0LL;
  v14 = 0;
  TextExtent = 0;
  if ( !a7 )
    return TextExtent;
  if ( (_DWORD)v8 )
  {
    LOBYTE(v14) = (unsigned int)v8 <= 0x10;
    if ( a2 )
    {
      if ( (unsigned int)v8 > 0x10 )
      {
        if ( (unsigned int)v8 <= 0x682AAA )
        {
          v13 = AllocFreeTmpBuffer((unsigned int)(6 * v8));
          v21 = (_BYTE *)v13;
          v9 = v29;
        }
        v12 = (_BYTE *)(v13 + 4 * v8);
        v23 = v12;
      }
      else
      {
        v12 = v35;
        v23 = v35;
        v13 = (__int64)v34;
        v21 = v34;
      }
      a2 = (const void *)v8;
      if ( v13 )
      {
        GreProbeAndReadFromUntrustedVa(v12, 2 * v8, v9, 2 * v8, 1uLL);
        TextExtent = 1;
        v22 = 1;
      }
    }
    if ( TextExtent )
    {
      SessionState = W32GetSessionState(v10, a2);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v32,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4864LL));
      if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v32) )
      {
        APIDCOBJ::APIDCOBJ((APIDCOBJ *)v33, v25);
        if ( v33[0] )
        {
          v17 = a4;
          if ( !v31 )
            v17 = -1;
          TextExtent = GrepGetTextExtentExW(
                         (struct DCOBJ *)v33,
                         (unsigned __int16 *)v12,
                         v8,
                         v17,
                         &v19,
                         (unsigned int *)(v13 & -(__int64)(v24 != 0LL)),
                         &v26,
                         a8);
          v11 = v19;
        }
        else
        {
          EngSetLastError(6u);
          TextExtent = 0;
        }
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v33);
      }
      else
      {
        EngSetLastError(0x15u);
        TextExtent = 0;
      }
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v32);
    }
    if ( !TextExtent )
      goto LABEL_32;
  }
  else
  {
    TextExtent = 1;
  }
  if ( v11 > (unsigned int)v8 )
    TextExtent = 0;
  if ( TextExtent )
  {
    GreProbeAndWriteToUntrustedVa(v27, 8uLL, &v26, 8uLL, 1uLL);
    if ( v28 )
    {
      v20 = v11;
      GreProbeAndWriteToUntrustedVa(v28, 4uLL, &v20, 4uLL, 1uLL);
    }
    if ( v11 && v24 && v13 )
      GreProbeAndWriteToUntrustedVa(v24, 4LL * v11, (const void *)v13, 4LL * v11, 4uLL);
  }
LABEL_32:
  if ( !v14 && v13 )
    FreeTmpBuffer(v13);
  return TextExtent;
}
