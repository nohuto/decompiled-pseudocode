/*
 * XREFs of GreGetTextColor @ 0x1C011A120
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01194CC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     xxxPSMTextOut @ 0x1C0244864 (xxxPSMTextOut.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextColor(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 80LL) + 44LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
