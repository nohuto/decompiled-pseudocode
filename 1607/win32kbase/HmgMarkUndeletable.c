/*
 * XREFs of HmgMarkUndeletable @ 0x1C005B650
 * Callers:
 *     GreMarkUndeletableBrush @ 0x1C005B600 (GreMarkUndeletableBrush.c)
 *     GreMarkUndeletableBitmap @ 0x1C005B620 (GreMarkUndeletableBitmap.c)
 *     GreMarkUndeletableRgn @ 0x1C005B628 (GreMarkUndeletableRgn.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005B918 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 *     bInitICM @ 0x1C0156614 (bInitICM.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgMarkUndeletable(unsigned int a1, char a2)
{
  unsigned int v3; // edi
  __int16 v4; // ebx^2
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]

  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v4 = HIWORD(a1);
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v6) )
  {
    if ( *(_BYTE *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == v4 )
    {
      *(_BYTE *)(v6 + 15) |= 1u;
      v3 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  if ( v7 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  return v3;
}
