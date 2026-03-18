/*
 * XREFs of NtGdiRemoveMergeFont @ 0x140312550
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x140329BC8 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 */

__int64 __fastcall NtGdiRemoveMergeFont(HDC a1, const void *a2)
{
  unsigned int v4; // ebx
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v6; // [rsp+C0h] [rbp+18h] BYREF

  v6 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    if ( (*(_DWORD *)(v5[0] + 36LL) & 1) != 0 )
    {
      v4 = 0;
    }
    else
    {
      GreProbeAndReadFromUntrustedVa(&v6, 8uLL, a2, 8uLL, 4uLL);
      v4 = XDCOBJ::bRemoveMergeFont(v5, v6);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return v4;
  }
  else
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return 0LL;
  }
}
