/*
 * XREFs of ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C00B03A4
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00B0260 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToTopLevelWindow(struct tagWND *a1, struct tagRECT *a2, unsigned __int16 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  INT v9[2]; // [rsp+40h] [rbp-40h]
  INT v10; // [rsp+44h] [rbp-3Ch]
  _QWORD v11[3]; // [rsp+48h] [rbp-38h] BYREF
  INT a[4]; // [rsp+60h] [rbp-20h] BYREF

  *((_DWORD *)a1 + 72) &= ~0x20000000u;
  if ( a2 )
  {
    *(struct tagRECT *)a = *a2;
  }
  else
  {
    GetRect((__int64)a1, (__int64)a, 66);
    if ( a3 )
    {
      v10 = a[1];
      v9[0] = EngMulDiv(a[0], *((unsigned __int16 *)a1 + 178), a3);
      v9[1] = EngMulDiv(v10, *((unsigned __int16 *)a1 + 178), a3);
      ScaleDPIRect(a, a, *((unsigned __int16 *)a1 + 178), a3, *(_QWORD *)v9, *(_QWORD *)a);
    }
  }
  v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v11;
  v5 = *((unsigned __int16 *)a1 + 178);
  ++*((_DWORD *)a1 + 2);
  v11[1] = a1;
  xxxSendMessage(a1, 0x2E0u, v5 | (int)((_DWORD)v5 << 16), (__int64)a);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  ThreadUnlock1(v7, v6);
  return 1LL;
}
