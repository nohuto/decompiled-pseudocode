/*
 * XREFs of GreSetWindowOrg @ 0x140207284
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x140121918 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1402075D8 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 GreSetWindowOrg(HDC a1, int a2, int a3, ...)
{
  unsigned int v5; // ebx
  DC *v7; // rcx
  DC *v8; // rcx
  _BYTE v9[16]; // [rsp+28h] [rbp-29h] BYREF
  DC *v10[14]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v11; // [rsp+D0h] [rbp+7Fh] BYREF
  va_list va; // [rsp+D0h] [rbp+7Fh]
  va_list va1; // [rsp+D8h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, a1);
  v5 = 0;
  if ( v10[0] )
  {
    DC::QuickInitXform(v10[0], v9, 2147484164LL);
    v7 = v10[0];
    if ( (*(_DWORD *)(*((_QWORD *)v10[0] + 122) + 152LL) & 0x100) != 0 )
    {
      DC::QuickInitXform(v10[0], (__int64 *)va, 1026LL);
      if ( v11 )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)va,
          (const struct _POINTFIX *)(*((_QWORD *)v10[0] + 122) + 8LL),
          (struct _POINTL *)(*((_QWORD *)v10[0] + 122) + 216LL),
          1uLL);
      *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 152LL) &= ~0x100u;
      v7 = v10[0];
    }
    *(_DWORD *)(*((_QWORD *)v7 + 122) + 152LL) |= 0x200u;
    *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 340LL) |= 0x2010u;
    *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 308LL) = a2;
    *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 312LL) = a3;
    v8 = v10[0];
    *(_DWORD *)(*((_QWORD *)v10[0] + 122) + 304LL) = a2;
    DC::MirrorWindowOrg(v8);
    DC::InitXform(v10[0], 0x402u);
    v5 = 1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return v5;
}
