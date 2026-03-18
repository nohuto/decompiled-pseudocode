/*
 * XREFs of ?xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x14026B2E4
 * Callers:
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x140178774 (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptMoveSizeSetWindowPos(
        WindowActions *this,
        struct MOVESIZEDATA *a2,
        struct tagRECT *a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-19h] BYREF
  int v11; // [rsp+24h] [rbp-15h]
  int v12; // [rsp+2Ch] [rbp-Dh]
  int v13; // [rsp+30h] [rbp-9h]
  int v14; // [rsp+34h] [rbp-5h]
  int v15; // [rsp+38h] [rbp-1h]
  int v16; // [rsp+48h] [rbp+Fh]
  int v17; // [rsp+70h] [rbp+37h]
  int v18; // [rsp+74h] [rbp+3Bh]

  memset_0(&v10, 0, 0x60uLL);
  v11 |= 0x400u;
  v5 = *(_DWORD *)a2;
  v6 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  v13 = *((_DWORD *)a2 + 1);
  v14 = v6;
  v7 = *((_DWORD *)a2 + 3) - v13;
  v10 = 6;
  v8 = *((_QWORD *)this + 27);
  v15 = v7;
  v12 = v5;
  v17 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 44LL);
  v9 = *((_DWORD *)this + 50);
  v18 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 48LL);
  if ( (v9 & 0x40000000) != 0 )
  {
    v10 = 38;
    *((_DWORD *)this + 50) = v9 & 0xBFFFFFFF;
    v16 = 0;
  }
  xxxSendMessage(*((struct tagWND **)this + 2), 0x346u);
}
