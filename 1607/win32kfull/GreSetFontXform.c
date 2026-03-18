/*
 * XREFs of GreSetFontXform @ 0x1C015255C
 * Callers:
 *     NtGdiSetFontXform @ 0x1C01524F0 (NtGdiSetFontXform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetFontXform(HDC a1, float a2, float a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[32]; // [rsp+30h] [rbp-48h] BYREF

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
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v6);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v7);
  return v4;
}
