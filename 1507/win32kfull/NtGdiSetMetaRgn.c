/*
 * XREFs of NtGdiSetMetaRgn @ 0x1C00EF9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C001D210 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = DC::iSetMetaRgn(v3[0]);
  else
    EngSetLastError(0x57u);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
