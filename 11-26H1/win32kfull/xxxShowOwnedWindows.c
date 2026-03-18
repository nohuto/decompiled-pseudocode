/*
 * XREFs of xxxShowOwnedWindows @ 0x1401C0368
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserShowOwnedPopups @ 0x1401C02C0 (NtUserShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x140292240 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 */

void __fastcall xxxShowOwnedWindows(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 DesktopWindow; // rax
  struct tagBWL *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  int v9; // r12d
  _QWORD *v10; // r13
  __int64 v11; // rdi
  struct tagWND *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  struct tagWND **v19; // r15
  __int64 i; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 RectRgnIndirect; // rbx
  ULONG_PTR BugCheckParameter3[9]; // [rsp+20h] [rbp-48h] BYREF
  struct tagBWL *v25; // [rsp+70h] [rbp+8h]

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v6 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112), 2LL, 0LL, 1);
    v25 = v6;
    if ( v6 )
    {
      v9 = 4;
      v10 = (_QWORD *)((char *)v6 + 32);
      v11 = *((_QWORD *)v6 + 4);
      if ( a2 != 2 )
        v9 = 0;
      if ( a2 == 4 )
        v9 = 3;
      if ( v11 != 1 )
      {
        while ( 1 )
        {
          v12 = 0LL;
          PsGetCurrentThreadWin32Thread(v8);
          v8 = *(_QWORD **)(W32GetUserSessionState(v14, v13) + 19904);
          if ( (unsigned __int64)(unsigned __int16)v11 < v8[1] )
          {
            UserSessionState = W32GetUserSessionState(v8, v7);
            v18 = *(_DWORD *)(W32GetUserSessionState(v17, v16) + 19928) * (unsigned int)(unsigned __int16)v11
                + *(_QWORD *)(UserSessionState + 19920);
            v19 = (struct tagWND **)HMPkheFromPhe(v18);
            LOWORD(v11) = WORD1(v11) & 0x7FFF;
            if ( ((WORD1(v11) & 0x7FFF) == *(_WORD *)(v18 + 26)
               || (_WORD)v11 == 0x7FFF
               || !(_WORD)v11 && PsGetCurrentProcessWow64Process(v8, v7))
              && (*(_BYTE *)(v18 + 25) & 1) == 0 )
            {
              if ( *(_BYTE *)(v18 + 24) != 1 )
                goto LABEL_19;
              v12 = *v19;
            }
          }
          if ( !v12 )
            goto LABEL_19;
          v8 = *(_QWORD **)(*((_QWORD *)v12 + 17) + 8LL);
          if ( (v8[1] & 4) != 0 || v12 == (struct tagWND *)a1 )
            goto LABEL_19;
          v8 = (_QWORD *)*((_QWORD *)v12 + 15);
          if ( v8 )
          {
            for ( i = v8[5]; ; i = *(_QWORD *)(v21 + 40) )
            {
              LOBYTE(v7) = *(_BYTE *)(i + 31) & 0xC0;
              if ( !(_BYTE)v7 )
                break;
              if ( (_BYTE)v7 == 0xC0 )
                break;
              if ( v8 == (_QWORD *)a1 )
                break;
              v21 = v8[15];
              if ( !v21 )
                break;
              v8 = (_QWORD *)v8[15];
            }
          }
          if ( v9 )
          {
            if ( !v8 )
              goto LABEL_19;
            if ( v8 == (_QWORD *)a1 )
              goto LABEL_19;
            if ( a2 == 4 )
            {
              LOBYTE(v8) = *(_BYTE *)(v8[5] + 31LL);
              if ( ((unsigned __int8)v8 & 0x20) != 0 && ((unsigned __int8)v8 & 8) == 0 )
                goto LABEL_19;
            }
          }
          else if ( v8 != (_QWORD *)a1 )
          {
            goto LABEL_19;
          }
          v22 = *((_QWORD *)v12 + 5);
          v8 = (_QWORD *)v22;
          if ( a2 < 3 )
          {
            if ( (*(_BYTE *)(v22 + 31) & 0x10) != 0 )
            {
LABEL_41:
              if ( a3 )
              {
                RectRgnIndirect = GreCreateRectRgnIndirect(v22 + 88);
                GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
                GreDeleteObject(RectRgnIndirect);
                SetOrClrWF(1, v12, 0x140u, 1);
                SetVisible((__int64)v12, 0);
              }
              else
              {
                Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v12);
                xxxSendMessage(v12, 0x18u);
                Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
              }
            }
          }
          else if ( (*(_BYTE *)(v22 + 17) & 0x40) != 0 )
          {
            goto LABEL_41;
          }
LABEL_19:
          v11 = *++v10;
          if ( *v10 == 1LL )
          {
            v6 = v25;
            break;
          }
        }
      }
      FreeHwndList(v6, v7);
    }
  }
}
