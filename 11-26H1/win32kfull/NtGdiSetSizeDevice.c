/*
 * XREFs of NtGdiSetSizeDevice @ 0x1402307C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetSizeDevice(HDC a1, int a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD v7[14]; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0;
  if ( a2 && a3 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
    if ( v7[0] )
    {
      v3 = 1;
      *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 424LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 428LL) = a3;
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  }
  return v3;
}
