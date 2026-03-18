/*
 * XREFs of GreSetColorAdjustment @ 0x1C0290E38
 * Callers:
 *     NtGdiSetColorAdjustment @ 0x1C02A7CB0 (NtGdiSetColorAdjustment.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetColorAdjustment(HDC a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  v4 = 0;
  if ( v6[0] )
  {
    v4 = 1;
    *(_OWORD *)(v6[0] + 240LL) = *(_OWORD *)a2;
    *(_QWORD *)(v3 + 256) = *(_QWORD *)(a2 + 16);
    *(_WORD *)(v3 + 242) &= 3u;
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v6);
  return v4;
}
