/*
 * XREFs of NtGdiGetDeviceWidth @ 0x140207FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDeviceWidth(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 1040LL) - *(_DWORD *)(v3[0] + 1032LL);
  else
    v1 = -1;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
