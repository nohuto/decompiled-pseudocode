/*
 * XREFs of NtGdiSetMetaRgn @ 0x1C00F9B80
 * Callers:
 *     <none>
 * Callees:
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C0027A68 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = DC::iSetMetaRgn(v3[0]);
  else
    EngSetLastError(0x57u);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  return v1;
}
