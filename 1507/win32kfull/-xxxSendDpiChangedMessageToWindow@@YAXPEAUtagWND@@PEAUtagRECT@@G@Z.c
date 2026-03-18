/*
 * XREFs of ?xxxSendDpiChangedMessageToWindow@@YAXPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C007DF4C
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C007DE64 (-xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall xxxSendDpiChangedMessageToWindow(struct tagWND *a1, struct tagRECT *a2, unsigned __int16 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  INT v7[2]; // [rsp+40h] [rbp-40h]
  INT v8; // [rsp+44h] [rbp-3Ch]
  _QWORD v9[3]; // [rsp+48h] [rbp-38h] BYREF
  INT a[4]; // [rsp+60h] [rbp-20h] BYREF

  if ( a1 && (*((_DWORD *)a1 + 72) & 0x8000000) != 0 )
  {
    v9[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v9;
    ++*((_DWORD *)a1 + 2);
    v9[1] = a1;
    if ( a2 )
    {
      *(struct tagRECT *)a = *a2;
    }
    else
    {
      GetRect(a1, a, 66LL);
      if ( a3 )
      {
        v8 = a[1];
        v7[0] = EngMulDiv(a[0], *((unsigned __int16 *)a1 + 180), a3);
        v7[1] = EngMulDiv(v8, *((unsigned __int16 *)a1 + 180), a3);
        ScaleDPIRect(a, a, *((unsigned __int16 *)a1 + 180), a3, *(_QWORD *)v7, *(_QWORD *)a);
      }
    }
    xxxSendMessage(
      a1,
      0x2E0u,
      *((unsigned __int16 *)a1 + 180) | (unsigned __int64)(*((unsigned __int16 *)a1 + 180) << 16),
      (__int64)a);
    xxxSetWindowPos((_DWORD)a1, 0, 0, 0, 0, 0, 55);
    *((_DWORD *)a1 + 72) &= ~0x8000000u;
    ThreadUnlock1(v6, v5);
  }
}
