/*
 * XREFs of DrawTextExWorker @ 0x14011FA9C
 * Callers:
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GreExtSelectClipRgn @ 0x140040B5C (GreExtSelectClipRgn.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x14011FD74 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x14011FF84 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     GreGetTextAlign @ 0x1401205E8 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14012742C (GreSetTextAlign.c)
 *     GreGetRandomRgn @ 0x14012C450 (GreGetRandomRgn.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DrawTextExWorker(
        HDC a1,
        unsigned __int16 *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5,
        struct tagDRAWTEXTPARAMS *a6)
{
  __int64 v6; // rdi
  __int64 v10; // rbx
  int top; // r14d
  int v12; // r12d
  struct tagRECT *v13; // r12
  int v14; // eax
  int v15; // r14d
  int v16; // edi
  LONG v17; // ecx
  __int64 result; // rax
  __int64 RectRgn; // rax
  bool v20; // zf
  int v21; // [rsp+30h] [rbp-D8h]
  int v24; // [rsp+60h] [rbp-A8h] BYREF
  char v25[24]; // [rsp+64h] [rbp-A4h] BYREF
  int v26; // [rsp+7Ch] [rbp-8Ch]
  int v27; // [rsp+A0h] [rbp-68h]

  LODWORD(v6) = a3;
  v24 = 0;
  memset_0(v25, 0, 0x44uLL);
  if ( !a2 )
    return 0LL;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == -1 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a2[v6] );
    }
  }
  else if ( *a2 )
  {
    return 1LL;
  }
  if ( a6 && *(_DWORD *)a6 != 20 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( !(unsigned int)DT_InitDrawTextInfo(a1, a4, a5, (struct DRAWTEXTDATA *)&v24, a6) )
    return 0LL;
  v27 = -1;
  if ( (a5 & 0x20000) != 0 )
  {
    GreGetTextAlign(a1);
    GreSetTextAlign(a1);
  }
  if ( (a5 & 0x100) != 0 )
  {
    v10 = 0LL;
  }
  else
  {
    RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v10 = RectRgn;
    if ( RectRgn )
    {
      if ( (unsigned int)GreGetRandomRgn(a1, RectRgn, 1LL) != 1 )
      {
        GreDeleteObject(v10);
        v10 = -1LL;
      }
      GreIntersectClipRect(
        a1,
        *(_QWORD *)&a4->left,
        HIDWORD(*(_QWORD *)&a4->left),
        *(_QWORD *)&a4->right,
        HIDWORD(*(_QWORD *)&a4->right));
    }
  }
  top = a4->top;
  v12 = a5 & 0xC;
  if ( v12 == 4 )
  {
    v13 = a4;
    top += (a4->bottom - top - v26) / 2;
  }
  else
  {
    v20 = v12 == 8;
    v13 = a4;
    if ( v20 )
      top = a4->bottom - v26;
  }
  v14 = AddEllipsisAndDrawLine(a1, top, a2, v6, a5, (struct DRAWTEXTDATA *)&v24, v21);
  v15 = v26 + top;
  v16 = (_DWORD)a2 + 2 * v14;
  if ( v10 )
  {
    if ( v10 == -1 )
    {
      GreExtSelectClipRgn(a1, 0LL);
    }
    else
    {
      GreExtSelectClipRgn(a1, (HRGN)v10);
      GreDeleteObject(v10);
    }
  }
  if ( (a5 & 0x20000) != 0 )
    GreSetTextAlign(a1);
  if ( a6 )
    *((_DWORD *)a6 + 4) = (unsigned int)(v16 - (_DWORD)a2) >> 1;
  v17 = v13->top;
  result = (unsigned int)(v15 - v17);
  if ( v15 == v17 )
    return 1LL;
  return result;
}
