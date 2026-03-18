/*
 * XREFs of GreMoveTo @ 0x1C0292A68
 * Callers:
 *     NtGdiMoveTo @ 0x1C02A7640 (NtGdiMoveTo.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v8; // r10
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF

  v5 = 0;
  v10[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v10, a1);
  v8 = v10[0];
  if ( !v10[0] )
    goto LABEL_13;
  if ( (*(_DWORD *)(v10[0] + 36LL) & 0x10000) != 0 )
  {
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
LABEL_13:
    EngSetLastError(6u);
    return v5;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v10[0] + 80LL) + 8LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, 0x402u);
      if ( !v11[0] )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v10);
        return v5;
      }
      EXFORMOBJ::bXform(
        (EXFORMOBJ *)v11,
        (struct _POINTFIX *)(*(_QWORD *)(v10[0] + 80LL) + 84LL),
        (struct _POINTL *)(*(_QWORD *)(v10[0] + 80LL) + 76LL),
        1uLL);
      v8 = v10[0];
    }
    *a4 = *(_QWORD *)(*(_QWORD *)(v8 + 80) + 76LL);
  }
  *(_DWORD *)(*(_QWORD *)(v8 + 80) + 76LL) = a2;
  *(_DWORD *)(*(_QWORD *)(v10[0] + 80LL) + 80LL) = a3;
  *(_DWORD *)(*(_QWORD *)(v10[0] + 80LL) + 8LL) |= 0x200u;
  *(_DWORD *)(*(_QWORD *)(v10[0] + 80LL) + 8LL) &= ~0x100u;
  if ( (*(_DWORD *)(v10[0] + 176LL) & 1) == 0 )
    *(_DWORD *)(v10[0] + 216LL) = 0;
  XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return 1;
}
