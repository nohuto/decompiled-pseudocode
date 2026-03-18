/*
 * XREFs of NtGdiSetVirtualResolution @ 0x14022DE80
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetVirtualResolution(HDC a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  int v9; // edi
  _QWORD v11[14]; // [rsp+20h] [rbp-78h] BYREF

  v5 = 0;
  if ( a2 )
  {
    if ( !a3 )
      return v5;
    if ( !a4 )
      return v5;
    v9 = a5;
    if ( !a5 )
      return v5;
  }
  else
  {
    if ( a3 )
      return v5;
    if ( a4 )
      return v5;
    v9 = a5;
    if ( a5 )
      return v5;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 408LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 412LL) = a3;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 416LL) = a4;
    *(_DWORD *)(*(_QWORD *)(v11[0] + 976LL) + 420LL) = v9;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v5;
}
