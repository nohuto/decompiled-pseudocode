/*
 * XREFs of GreSetMiterLimit @ 0x1C01026D4
 * Callers:
 *     NtGdiSetMiterLimit @ 0x1C0102680 (NtGdiSetMiterLimit.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??MEFLOAT@@QEAAHV0@@Z @ 0x1C02923A8 (--MEFLOAT@@QEAAHV0@@Z.c)
 */

__int64 __fastcall GreSetMiterLimit(HDC a1, float a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  float v8; // [rsp+68h] [rbp+20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v4 = 0;
  if ( !v7[0] || (v8 = a2, (unsigned int)EFLOAT::operator<(&v8, LODWORD(FLOAT_1_0))) )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    if ( a3 )
      *a3 = *(_DWORD *)(v5 + 200);
    *(float *)(v5 + 200) = a2;
    v4 = 1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v4;
}
