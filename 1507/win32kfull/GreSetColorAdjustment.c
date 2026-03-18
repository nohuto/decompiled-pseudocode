/*
 * XREFs of GreSetColorAdjustment @ 0x1C0291040
 * Callers:
 *     NtGdiSetColorAdjustment @ 0x1C02A8560 (NtGdiSetColorAdjustment.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetColorAdjustment(HDC a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  v4 = 0;
  if ( v6[0] )
  {
    v4 = 1;
    *(_OWORD *)(v6[0] + 240LL) = *(_OWORD *)a2;
    *(_QWORD *)(v3 + 256) = *(_QWORD *)(a2 + 16);
    *(_WORD *)(v6[0] + 242LL) &= 3u;
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v4;
}
