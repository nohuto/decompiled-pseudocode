/*
 * XREFs of NtGdiColorCorrectPalette @ 0x140330700
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14017EDC0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x14020CB40 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x14028FF38 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall NtGdiColorCorrectPalette(
        HDC a1,
        HPALETTE a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPALETTEENTRY *a5,
        int a6)
{
  __int64 v6; // rdi
  unsigned int Entries; // ebx
  unsigned int v10; // ecx
  __int64 v12; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v13[14]; // [rsp+40h] [rbp-78h] BYREF

  v6 = a4;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v12, a2);
  Entries = 0;
  if ( !v13[0] || !v12 )
    goto LABEL_14;
  if ( !(_DWORD)v6
    || (v10 = *(_DWORD *)(v12 + 28), (unsigned int)v6 > v10)
    || (unsigned int)v6 > 0x3FFFFFFF
    || a3 > v10
    || a3 + (unsigned int)v6 > v10 )
  {
    EngSetLastError(0x57u);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v12);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
    return 0LL;
  }
  if ( (*(_DWORD *)(v13[0] + 120LL) & 1) != 0 )
  {
    if ( a6 )
    {
      if ( a6 == 1 )
      {
        GreProbeForReadFromUntrustedVa(a5, 4 * v6, 4uLL);
        Entries = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v12, a3, v6, a5);
      }
    }
    else
    {
      GreProbeForWriteToUntrustedVa(a5, 4LL * (unsigned int)v6, 4uLL);
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&v12, a3, v6, a5, 0);
    }
  }
  else
  {
LABEL_14:
    EngSetLastError(0x57u);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v12);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
  return Entries;
}
