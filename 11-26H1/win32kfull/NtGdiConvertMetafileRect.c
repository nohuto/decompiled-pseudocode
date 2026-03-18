/*
 * XREFs of NtGdiConvertMetafileRect @ 0x14021FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiConvertMetafileRect(HDC a1, void *a2)
{
  unsigned int v4; // ebx
  FIX x; // edx
  FIX v7; // ecx
  FIX y; // r8d
  FIX v9; // r9d
  FIX v10; // r9d
  FIX v11; // eax
  FIX v12; // eax
  HDC v13; // [rsp+30h] [rbp-C8h] BYREF
  int v14; // [rsp+38h] [rbp-C0h]
  _QWORD v15[14]; // [rsp+40h] [rbp-B8h] BYREF
  struct _POINTFIX v16; // [rsp+B0h] [rbp-48h] BYREF
  FIX v17; // [rsp+B8h] [rbp-40h]
  FIX v18; // [rsp+BCh] [rbp-3Ch]
  __int128 v19; // [rsp+C0h] [rbp-38h] BYREF

  v13 = a1;
  v16 = (struct _POINTFIX)a2;
  v19 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v19, 0x10uLL, a2, 0x10uLL, 1uLL);
  v4 = 2;
  v14 = 2;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
  if ( !v15[0] )
    goto LABEL_2;
  DC::QuickInitXform(v15[0], &v13, 516LL);
  if ( !v13 || !EXFORMOBJ::bXform((EXFORMOBJ *)&v13, (const struct _POINTL *)&v19, &v16, 2uLL) )
    goto LABEL_2;
  x = v16.x;
  v7 = v17;
  if ( v16.x > v17 )
  {
    v11 = v16.x;
    x = v17;
    v16.x = v17;
    v7 = v11;
  }
  y = v16.y;
  v9 = v18;
  if ( v16.y > v18 )
  {
    v12 = v16.y;
    y = v18;
    v16.y = v18;
    v9 = v12;
  }
  v17 = v7 - 16;
  v10 = v9 - 16;
  v18 = v10;
  if ( v7 - 16 < x || v10 < y )
    v4 = 1;
  DC::QuickInitXform(v15[0], &v13, 1026LL);
  if ( v13 && EXFORMOBJ::bXform((EXFORMOBJ *)&v13, &v16, (struct _POINTL *)&v19, 2uLL) )
    GreProbeAndWriteToUntrustedVa(a2, 0x10uLL, &v19, 0x10uLL, 1uLL);
  else
LABEL_2:
    v4 = 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
  if ( !v4 )
    EngSetLastError(0x57u);
  return v4;
}
