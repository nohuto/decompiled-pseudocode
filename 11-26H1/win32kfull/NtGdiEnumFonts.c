/*
 * XREFs of NtGdiEnumFonts @ 0x1400FDB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400FDE44 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 */

__int64 __fastcall NtGdiEnumFonts(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        const void *a5,
        unsigned int a6,
        void *a7,
        HDC a8)
{
  HDC v9; // r15
  const unsigned __int16 *v10; // rdi
  unsigned int v11; // esi
  unsigned __int16 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v16; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int16 *v17; // [rsp+48h] [rbp-A0h]
  _QWORD v18[19]; // [rsp+50h] [rbp-98h] BYREF

  v9 = a1;
  v10 = 0LL;
  v17 = 0LL;
  v11 = 1;
  v16 = 0;
  if ( a5 )
  {
    if ( a4 - 1 > 0x1F )
      return 0LL;
    v12 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a4);
    v10 = v12;
    v17 = v12;
    if ( v12 )
    {
      GreProbeAndReadFromUntrustedVa(v12, 2LL * a4, a5, 2LL * a4, 2uLL);
      v10[a4 - 1] = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v11 )
  {
    GreProbeAndReadFromUntrustedVa(&v16, 4uLL, a7, 4uLL, 1uLL);
    a1 = a8;
    if ( a8 )
      GreProbeForWriteToUntrustedVa(a8, v16, 4uLL);
  }
  if ( v11 )
  {
    if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(a1) == 1 && v9 == (HDC)-589410304LL )
      v9 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 56968) + 56LL);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, v9);
    if ( v18[0] )
    {
      v11 = GrepEnumFonts((struct XDCOBJ *)v18, a2, a3, v10, a6, &v16, a8);
    }
    else
    {
      EngSetLastError(6u);
      v11 = 0;
    }
    LODWORD(a5) = v16;
    GreProbeAndWriteToUntrustedVa(a7, 4uLL, &a5, 4uLL, 1uLL);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
  }
  if ( v10 )
    FreeTmpBuffer(v10);
  return v11;
}
