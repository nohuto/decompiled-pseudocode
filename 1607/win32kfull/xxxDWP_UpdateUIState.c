/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C01148BC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int16 v7; // bp
  int v8; // eax
  int v9; // eax
  int v11; // ebp
  struct tagBWL *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagBWL *v16; // rdi
  unsigned __int64 *v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // eax
  _QWORD v24[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  v5 = a2 >> 16;
  v7 = a2;
  if ( (a2 & 0xFFF80000) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0LL;
  v8 = *gpsi;
  if ( (_WORD)a2 == 3 )
  {
    if ( (v8 & 0x80u) != 0 )
      return 0LL;
    v23 = *(_DWORD *)(gpsi + 8684LL);
    if ( (v23 & 0x20) != 0 || v23 >= 0 || (GetAppCompatFlags2(0x400u, a2, 0LL, a4) & 2) != 0 )
      return 0LL;
    if ( (*gpsi & 0x40) != 0 )
      v7 = 2;
    else
      v7 = 1;
    LOBYTE(v5) = 3;
    v4 = v7 | 0x30000LL;
LABEL_10:
    if ( v7 == 1 )
    {
      if ( (v5 & 2) != 0 )
        SetOrClrWF(1, (_DWORD *)a1, 0xB40u, 1);
      if ( (v5 & 1) != 0 )
        SetOrClrWF(1, (_DWORD *)a1, 0xB80u, 1);
      if ( (v5 & 4) == 0 )
        goto LABEL_16;
      v22 = 1;
    }
    else
    {
      if ( v7 != 2 )
      {
        if ( v7 == 3 )
        {
          if ( (*gpsi & 0x40) != 0 )
          {
            SetOrClrWF(0, (_DWORD *)a1, 0xB80u, 1);
            SetOrClrWF(0, (_DWORD *)a1, 0xB40u, 1);
            v4 = 196610LL;
          }
          else
          {
            SetOrClrWF(1, (_DWORD *)a1, 0xB80u, 1);
            SetOrClrWF(1, (_DWORD *)a1, 0xB40u, 1);
            v4 = 196609LL;
          }
        }
        goto LABEL_16;
      }
      if ( (v5 & 2) != 0 )
        SetOrClrWF(0, (_DWORD *)a1, 0xB40u, 1);
      if ( (v5 & 1) != 0 )
        SetOrClrWF(0, (_DWORD *)a1, 0xB80u, 1);
      if ( (v5 & 4) == 0 )
      {
LABEL_16:
        if ( *(_QWORD *)(a1 + 96) )
        {
          if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) || (v11 = 0, gptiCurrent == qword_1C0327080) )
            v11 = 1;
          v12 = BuildHwndList(*(_QWORD *)(a1 + 96), (struct tagWND *)2, 0LL);
          v16 = v12;
          if ( v12 )
          {
            v17 = (unsigned __int64 *)((char *)v12 + 32);
            v18 = *((_QWORD *)v12 + 4);
            if ( v18 != 1 )
            {
              do
              {
                LOBYTE(v13) = 1;
                v19 = HMValidateHandleNoSecure(v18, v13, v14, v15);
                if ( v19 )
                {
                  v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = v24;
                  v24[1] = v19;
                  ++*(_DWORD *)(v19 + 8);
                  if ( v11 )
                    xxxSendNotifyMessage((struct tagWND *)v19, 0x128u, v4, 0LL, 1);
                  else
                    xxxSendMessage((struct tagWND *)v19, 0x128u, v4, 0LL);
                  ThreadUnlock1(v21, v20);
                }
                v18 = *++v17;
              }
              while ( *v17 != 1 );
            }
            FreeHwndList(v16);
          }
        }
        return 0LL;
      }
      v22 = 0;
    }
    SetOrClrWF(v22, (_DWORD *)a1, 0xB04u, 1);
    goto LABEL_16;
  }
  if ( (v8 & 0x80u) != 0
    || (v9 = *(_DWORD *)(gpsi + 8684LL), (v9 & 0x20) != 0)
    || v9 >= 0
    || (GetAppCompatFlags2(0x400u, a2, 0LL, a4) & 2) != 0 )
  {
    LOWORD(v5) = v5 & 0xFFFC;
  }
  if ( (_WORD)v5 )
    goto LABEL_10;
  return 0LL;
}
