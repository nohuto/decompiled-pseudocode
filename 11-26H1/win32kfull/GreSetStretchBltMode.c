/*
 * XREFs of GreSetStretchBltMode @ 0x140027CD0
 * Callers:
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     BltIcon @ 0x140027954 (BltIcon.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v5; // r8
  _QWORD v7[15]; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 976LL);
    v5 = 2;
    v3 = *(_DWORD *)(v4 + 232);
    *(_DWORD *)(v4 + 232) = a2;
    if ( a2 <= 4 )
      v5 = a2;
    *(_BYTE *)(*(_QWORD *)(v7[0] + 976LL) + 215LL) = v5;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v3;
}
