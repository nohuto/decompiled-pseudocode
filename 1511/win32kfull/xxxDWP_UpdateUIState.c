/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C00F579C
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int16 v6; // bp
  int v7; // eax
  int v8; // eax
  int v10; // ebp
  struct tagBWL *v11; // rax
  struct tagBWL *v12; // rdi
  unsigned __int64 *v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // eax
  _QWORD v20[4]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a2;
  v4 = a2 >> 16;
  v6 = a2;
  if ( (a2 & 0xFFF80000) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0LL;
  v7 = *gpsi;
  if ( (_WORD)a2 == 3 )
  {
    if ( (v7 & 0x80u) != 0 )
      return 0LL;
    v19 = *(_DWORD *)(gpsi + 7292LL);
    if ( (v19 & 0x20) != 0 || v19 >= 0 || (GetAppCompatFlags2(0x400u) & 2) != 0 )
      return 0LL;
    if ( (*gpsi & 0x40) != 0 )
      v6 = 2;
    else
      v6 = 1;
    LOBYTE(v4) = 3;
    v3 = v6 | 0x30000LL;
LABEL_10:
    if ( v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1, (_DWORD *)a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1, (_DWORD *)a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
        goto LABEL_16;
      v18 = 1;
    }
    else
    {
      if ( v6 != 2 )
      {
        if ( v6 == 3 )
        {
          if ( (*gpsi & 0x40) != 0 )
          {
            SetOrClrWF(0, (_DWORD *)a1, 0xB80u, 1);
            SetOrClrWF(0, (_DWORD *)a1, 0xB40u, 1);
            v3 = 196610LL;
          }
          else
          {
            SetOrClrWF(1, (_DWORD *)a1, 0xB80u, 1);
            SetOrClrWF(1, (_DWORD *)a1, 0xB40u, 1);
            v3 = 196609LL;
          }
        }
        goto LABEL_16;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF(0, (_DWORD *)a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0, (_DWORD *)a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
      {
LABEL_16:
        if ( *(_QWORD *)(a1 + 96) )
        {
          if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) || (v10 = 0, gptiCurrent == qword_1C0322410) )
            v10 = 1;
          v11 = BuildHwndList(*(_QWORD *)(a1 + 96), 2, 0LL);
          v12 = v11;
          if ( v11 )
          {
            v13 = (unsigned __int64 *)((char *)v11 + 32);
            v14 = *((_QWORD *)v11 + 4);
            if ( v14 != 1 )
            {
              do
              {
                v15 = HMValidateHandleNoSecure(v14, 1);
                if ( v15 )
                {
                  v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = v20;
                  v20[1] = v15;
                  ++*(_DWORD *)(v15 + 8);
                  if ( v10 )
                    xxxSendNotifyMessage((struct tagWND *)v15, 0x128u, v3, 0LL, 1);
                  else
                    xxxSendMessage((struct tagWND *)v15, 0x128u, v3, 0LL);
                  ThreadUnlock1(v17, v16);
                }
                v14 = *++v13;
              }
              while ( *v13 != 1 );
            }
            FreeHwndList(v12);
          }
        }
        return 0LL;
      }
      v18 = 0;
    }
    SetOrClrWF(v18, (_DWORD *)a1, 0xB04u, 1);
    goto LABEL_16;
  }
  if ( (v7 & 0x80u) != 0
    || (v8 = *(_DWORD *)(gpsi + 7292LL), (v8 & 0x20) != 0)
    || v8 >= 0
    || (GetAppCompatFlags2(0x400u) & 2) != 0 )
  {
    LOWORD(v4) = v4 & 0xFFFC;
  }
  if ( (_WORD)v4 )
    goto LABEL_10;
  return 0LL;
}
