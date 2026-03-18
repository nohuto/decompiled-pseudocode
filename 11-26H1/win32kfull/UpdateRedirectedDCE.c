/*
 * XREFs of UpdateRedirectedDCE @ 0x14012EAA0
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x14012DB84 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x14012E3C8 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x14014D444 (RedirectDCEs.c)
 * Callees:
 *     RevalidateDCE @ 0x1400137B0 (RevalidateDCE.c)
 *     GreSelectRedirectionBitmap @ 0x1400151B0 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1400D1780 (GreHintDCWnd.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x1401D9104 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x1401DADFC (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 */

void __fastcall UpdateRedirectedDCE(tagDCE *this, __int64 a2)
{
  struct tagWND *v2; // rbx
  int v3; // ebp
  HSURF RedirectionBitmap; // r8
  __int64 v6; // rax
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // eax
  bool v14; // zf
  struct tagWND *v15; // rdx

  v2 = (struct tagWND *)*((_QWORD *)this + 10);
  v3 = a2;
  RedirectionBitmap = 0LL;
  while ( v2 )
  {
    v6 = *((_QWORD *)v2 + 5);
    if ( (*(_BYTE *)(v6 + 27) & 0x20) != 0 )
    {
      if ( v2 == *((struct tagWND **)this + 10) || (*(_WORD *)(v6 + 42) & 0x2FFF) != 0x29D )
        RedirectionBitmap = (HSURF)GetRedirectionBitmap((__int64)v2, a2);
      else
        v2 = 0LL;
      break;
    }
    v2 = (struct tagWND *)*((_QWORD *)v2 + 13);
  }
  v7 = 1;
  if ( !(unsigned int)GreSelectRedirectionBitmap(*((Gre::Base **)this + 2), RedirectionBitmap) )
    GreSelectVisRgn(*((_QWORD *)this + 2), 0LL, 1LL);
  v8 = *((_DWORD *)this + 12);
  v9 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v10 = v8 | 0x4000;
    v11 = 5LL;
  }
  else
  {
    v10 = v8 & 0xFFFFBFFF;
    v11 = 6LL;
  }
  *((_DWORD *)this + 12) = v10;
  GreGetBounds(v9, 0LL, v11);
  if ( *((struct tagWND **)this + 12) == v2 )
  {
    v7 = v3;
    if ( !v2 )
      goto LABEL_16;
    goto LABEL_14;
  }
  tagDCE::SetPwndRedirect(this, v2);
  GreHintDCWnd(*((Gre::Base **)this + 2), **((_QWORD **)this + 10), 0LL, 0LL, 0, 0);
  if ( v2 )
  {
    v12 = *((_QWORD *)v2 + 5);
    if ( (*(_BYTE *)(v12 + 26) & 8) != 0 )
    {
      v13 = *(_WORD *)(v12 + 42) & 0x2FFF;
      v14 = v13 == 669;
      LOBYTE(v13) = ~*(_BYTE *)(v12 + 27);
      GreHintDCWnd(
        *((Gre::Base **)this + 2),
        **((_QWORD **)this + 10),
        *(_QWORD *)v2,
        *(_QWORD *)(*((_QWORD *)v2 + 2) + 456LL),
        (v13 >> 1) & 1,
        v14);
    }
LABEL_14:
    v15 = (struct tagWND *)*((_QWORD *)this + 10);
    if ( v15 == v2 )
      tagDCE::SetPwndClip(this, v15);
LABEL_16:
    if ( !v7 )
      return;
  }
  RevalidateDCE((__int64)this);
}
