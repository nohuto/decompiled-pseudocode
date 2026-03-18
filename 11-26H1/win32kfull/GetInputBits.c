/*
 * XREFs of GetInputBits @ 0x140022F60
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400226D0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxGetInputEvent @ 0x140022BD0 (xxxGetInputEvent.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall GetInputBits(__int64 a1, __int16 a2, int a3)
{
  int v3; // r9d

  v3 = *(_DWORD *)(a1 + 4);
  if ( a3 )
    return a2 & (v3 | *(_DWORD *)(a1 + 8));
  else
    return a2 & v3;
}
