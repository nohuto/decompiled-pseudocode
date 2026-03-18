/*
 * XREFs of NtGdiSetFontXform @ 0x1401F7C50
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

_BOOL8 __fastcall NtGdiSetFontXform(HDC a1, unsigned int a2, unsigned int a3)
{
  BOOL v5; // ebx
  __int64 v6; // rax
  int v7; // xmm1_4
  float v9[4]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v10[15]; // [rsp+30h] [rbp-78h] BYREF
  int v11; // [rsp+C8h] [rbp+20h] BYREF

  v9[0] = 0.0;
  v11 = 0;
  v5 = GrepConvertDwordToFloat(a2, v9) && GrepConvertDwordToFloat(a3, (float *)&v11);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, a1);
  if ( v5 )
  {
    v6 = v10[0];
    if ( v10[0] )
    {
      v7 = v11;
      v5 = 1;
      *(float *)(v10[0] + 452LL) = v9[0];
      *(_DWORD *)(v6 + 456) = v7;
      *(_DWORD *)(v10[0] + 252LL) |= 1u;
    }
    else
    {
      v5 = 0;
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return v5;
}
