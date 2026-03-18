/*
 * XREFs of GreSetFontXform @ 0x1C00F67DC
 * Callers:
 *     NtGdiSetFontXform @ 0x1C00F6770 (NtGdiSetFontXform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetFontXform(HDC a1, float a2, float a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[6]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  v4 = 0;
  if ( v6[0] )
  {
    *(float *)(v6[0] + 468LL) = a2;
    v4 = 1;
    *(float *)(v3 + 472) = a3;
    *(_DWORD *)(v6[0] + 264LL) |= 1u;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v4;
}
