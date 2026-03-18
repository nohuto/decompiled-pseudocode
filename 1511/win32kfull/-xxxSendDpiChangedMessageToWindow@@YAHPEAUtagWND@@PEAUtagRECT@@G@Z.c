/*
 * XREFs of ?xxxSendDpiChangedMessageToWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C0091C20
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0091B34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     GetRect @ 0x1C0077D54 (GetRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToWindow(struct tagWND *a1, struct tagRECT *a2, unsigned __int16 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  INT v8[2]; // [rsp+40h] [rbp-40h]
  INT v9; // [rsp+44h] [rbp-3Ch]
  _QWORD v10[3]; // [rsp+48h] [rbp-38h] BYREF
  INT a[4]; // [rsp+60h] [rbp-20h] BYREF

  if ( !a1 || (*((_DWORD *)a1 + 72) & 0x8000000) == 0 )
    return 0LL;
  v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v10;
  ++*((_DWORD *)a1 + 2);
  v10[1] = a1;
  if ( a2 )
  {
    *(struct tagRECT *)a = *a2;
  }
  else
  {
    GetRect((__int64)a1, (__int64)a, 66);
    if ( a3 )
    {
      v9 = a[1];
      v8[0] = EngMulDiv(a[0], *((unsigned __int16 *)a1 + 180), a3);
      v8[1] = EngMulDiv(v9, *((unsigned __int16 *)a1 + 180), a3);
      ScaleDPIRect(a, a, *((unsigned __int16 *)a1 + 180), a3, *(_QWORD *)v8, *(_QWORD *)a);
    }
  }
  xxxSendMessage(
    a1,
    0x2E0u,
    *((unsigned __int16 *)a1 + 180) | (unsigned __int64)(*((unsigned __int16 *)a1 + 180) << 16),
    (__int64)a);
  xxxSetWindowPos(a1, 0, 0, 0, 0, 0, 55);
  *((_DWORD *)a1 + 72) &= ~0x8000000u;
  ThreadUnlock1(v7, v6);
  return 1LL;
}
