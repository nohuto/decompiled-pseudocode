/*
 * XREFs of NtGdiForceUFIMapping @ 0x140232F30
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiForceUFIMapping(HDC a1, const void *a2)
{
  __int64 v4; // rdx
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v6; // [rsp+B8h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( !v5[0] )
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return 0LL;
  }
  v6 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v6, 8uLL, a2, 8uLL, 1uLL);
  v4 = v5[0];
  *(_QWORD *)(v5[0] + 256LL) = v6;
  *(_DWORD *)(v4 + 252) |= 4u;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return 1LL;
}
