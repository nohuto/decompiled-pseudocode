/*
 * XREFs of NtGdiSetMetaRgn @ 0x1C011CC90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1C004B044 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
  {
    v1 = DC::iSetMetaRgn(v3[0]);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v4);
  }
  else
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
  }
  return v1;
}
