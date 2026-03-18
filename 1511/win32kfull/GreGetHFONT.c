/*
 * XREFs of GreGetHFONT @ 0x1C0292364
 * Callers:
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 *     IsSysFontAndDefaultMode @ 0x1C024B568 (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetHFONT(HDC a1)
{
  __int64 v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  v3[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(v3[0] + 80LL) + 176LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
