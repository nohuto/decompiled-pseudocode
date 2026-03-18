/*
 * XREFs of NtGdiComputeXformCoefficients @ 0x1C00FEA40
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

_BOOL8 __fastcall NtGdiComputeXformCoefficients(HDC a1)
{
  BOOL v1; // ebx
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v3[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v4, (struct XDCOBJ *)v3, 0x204u);
    v1 = (*(_BYTE *)(v4[0] + 32LL) & 1) != 0;
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
