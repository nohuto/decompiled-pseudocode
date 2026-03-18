/*
 * XREFs of GreGetMiterLimit @ 0x1C02A5370
 * Callers:
 *     NtGdiGetMiterLimit @ 0x1C02A7400 (NtGdiGetMiterLimit.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetMiterLimit(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
  {
    v3 = 1;
    *a2 = *(_DWORD *)(v5[0] + 200LL);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v5);
  return v3;
}
