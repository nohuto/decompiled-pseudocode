/*
 * XREFs of ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x180027A88
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180007700 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027138 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800376B8 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18007E67C (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180080E90 (-GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CTopLevelWindow::GetActualWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3,
        char a4,
        bool a5)
{
  _DWORD *v8; // r8
  __int64 v9; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // edx
  int v14; // ecx
  int v15; // eax

  *retstr = *(struct tagRECT *)(*((_QWORD *)this + 93) + 48LL);
  if ( a3 )
    OffsetRect(retstr, -retstr->left, -retstr->top);
  if ( (*((_BYTE *)this + 264) & 4) == 0 || (v8 = (_DWORD *)((char *)this + 660), !a4) )
    v8 = (_DWORD *)((char *)this + 644);
  retstr->left += *v8;
  retstr->right -= v8[1];
  retstr->top += v8[2];
  retstr->bottom -= v8[3];
  if ( a5 )
  {
    v9 = *((_QWORD *)this + 43);
    if ( v9 )
    {
      v11 = *((_QWORD *)this + 44);
      if ( v11 )
      {
        v12 = *((_QWORD *)this + 46);
        if ( v12 )
        {
          v13 = *((_DWORD *)this + 157) - *v8 - *(_DWORD *)(v9 + 24);
          if ( v13 < 0 )
            v13 = 0;
          v14 = *((_DWORD *)this + 158) - v8[1] - *(_DWORD *)(v11 + 24);
          if ( v14 < 0 )
            v14 = 0;
          v15 = *((_DWORD *)this + 160) - v8[3] - *(_DWORD *)(v12 + 28);
          if ( v15 < 0 )
            v15 = 0;
          retstr->left += v13;
          retstr->right -= v14;
          retstr->bottom -= v15;
        }
      }
    }
  }
  return retstr;
}
