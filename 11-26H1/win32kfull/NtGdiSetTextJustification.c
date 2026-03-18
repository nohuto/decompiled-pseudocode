/*
 * XREFs of NtGdiSetTextJustification @ 0x140334200
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetTextJustification(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[14]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  v5 = 0;
  if ( v7[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 284LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 288LL) = a3;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v5;
}
