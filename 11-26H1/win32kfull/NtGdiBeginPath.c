/*
 * XREFs of NtGdiBeginPath @ 0x1401F65B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vDestroy@DC@@QEAAXXZ @ 0x1401142AC (-vDestroy@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiBeginPath(HDC a1)
{
  DC *v1; // rcx
  unsigned int v2; // ebx
  int v4; // eax
  DC *v5[14]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v6[8]; // [rsp+90h] [rbp-88h] BYREF
  struct HPATH__ **v7; // [rsp+98h] [rbp-80h]

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v1 = v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *((_QWORD *)v5[0] + 25) )
    {
      v4 = *((_DWORD *)v5[0] + 62);
      if ( (v4 & 2) != 0 )
      {
        *((_DWORD *)v5[0] + 62) = v4 & 0xFFFFFFFD;
        v1 = v5[0];
      }
      DC::vDestroy(v1);
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
    if ( v7 )
    {
      DC::hpath(v5[0], *v7);
      v2 = 1;
      *((_DWORD *)v5[0] + 62) |= 1u;
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return v2;
  }
  else
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return 0LL;
  }
}
