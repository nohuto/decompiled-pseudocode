/*
 * XREFs of ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180030240
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180024864 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002D570 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180029AE8 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

void __fastcall CWindowList::UpdateAccentBlurBehind(CWindowList *this, struct CWindowData *a2)
{
  __int64 v2; // rbp
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  struct _LIST_ENTRY *v9; // rdx
  struct _LIST_ENTRY *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned int v13; // r8d
  __int64 v14; // r9
  _DWORD *v15; // r9
  LONG v16; // edx
  LONG v17; // r8d
  LONG v18; // eax
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // r12
  int v22; // r11d
  int v23; // r10d
  int v24; // ecx
  int v25; // r11d
  int v26; // r10d
  unsigned __int8 v27; // cl
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *Blink; // r8
  __int64 v31; // [rsp+20h] [rbp-58h]
  struct tagRECT rcDst; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0LL;
  if ( *((_DWORD *)this + 142) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 68) + 8 * v2);
      v6 = *(_QWORD *)(v5 + 368);
      if ( !v6 )
        goto LABEL_23;
      if ( *(_QWORD *)(v5 + 120) != *((_QWORD *)a2 + 15) )
        goto LABEL_23;
      v7 = *(_QWORD *)(v6 + 288);
      if ( !v7 )
        goto LABEL_23;
      v8 = *(_QWORD *)(v7 + 320);
      if ( !v8 )
        goto LABEL_23;
      v9 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 5);
      v10 = *(struct _LIST_ENTRY **)(v7 + 352);
      if ( v9 == v10 )
        goto LABEL_32;
      v11 = *((_QWORD *)a2 + 46);
      v12 = *(_QWORD *)(v7 + 360);
      v31 = v12;
      if ( v11 )
        break;
LABEL_23:
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 142) )
        return;
    }
    v13 = *(_DWORD *)(v8 + 296);
    v14 = 0LL;
    if ( v13 )
    {
      while ( v9 != *(struct _LIST_ENTRY **)(*(_QWORD *)(v8 + 272) + 8 * v14) )
      {
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      rcDst = *(struct tagRECT *)(*(_QWORD *)(v11 + 744) + 48LL);
      if ( (*(_BYTE *)(v11 + 264) & 4) != 0 )
        v15 = (_DWORD *)(v11 + 660);
      else
        v15 = (_DWORD *)(v11 + 644);
      v16 = *v15 + rcDst.left;
      rcDst.left = v16;
      v17 = rcDst.right - v15[1];
      rcDst.right = v17;
      rcDst.top += v15[2];
      v18 = rcDst.bottom - v15[3];
      rcDst.bottom = v18;
      v19 = *(_QWORD *)(v11 + 344);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v11 + 352);
        if ( v20 )
        {
          v21 = *(_QWORD *)(v11 + 368);
          if ( v21 )
          {
            v22 = *(_DWORD *)(v11 + 632) - v15[1];
            v23 = *(_DWORD *)(v11 + 640) - v15[3];
            v24 = *(_DWORD *)(v11 + 628) - *v15 - *(_DWORD *)(v19 + 24);
            if ( v24 < 0 )
              v24 = 0;
            v25 = v22 - *(_DWORD *)(v20 + 24);
            if ( v25 < 0 )
              v25 = 0;
            v26 = v23 - *(_DWORD *)(v21 + 28);
            if ( v26 < 0 )
              v26 = 0;
            rcDst.left = v24 + v16;
            rcDst.bottom = v18 - v26;
            rcDst.right = v17 - v25;
          }
        }
        v12 = v31;
      }
      v27 = *((_BYTE *)a2 + 552);
      if ( (v27 & 1) == 0
        || ((unsigned __int8)~*((_BYTE *)a2 + 556) & (unsigned __int8)~(v27 >> 2) & 1) == 0
        || (*((_DWORD *)a2 + 25) & 0x20000000) != 0
        || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v7 + 568)) )
      {
        goto LABEL_23;
      }
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                               v12);
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        Blink = i[2].Blink;
        if ( Blink == v10 )
          break;
        if ( Blink == *((struct _LIST_ENTRY **)a2 + 5) )
          goto LABEL_23;
      }
    }
LABEL_32:
    CVisual::SetDirtyFlags((CVisual *)v7, 0x10000);
    goto LABEL_23;
  }
}
